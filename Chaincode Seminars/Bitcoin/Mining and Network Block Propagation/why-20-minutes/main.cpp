#include <iostream>
#include <vector>
#include <random>
#include <cmath>

int main()
{
    const int INTERVAL_COUNT = 100000;
    const int SAMPLE_COUNT = 100000;
    const double AVG_BLOCK_TIME = 10.0;

    // Setup random number generation
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> uniform_dist(0.0, 1.0);

    // Generate exponentially distributed block intervals
    auto random_interval = [&]()
    {
        return -AVG_BLOCK_TIME * log(1.0 - uniform_dist(gen));
    };

    // Create a timeline of block boundaries
    std::vector<double> block_times{0};
    for (int i = 0; i < INTERVAL_COUNT; i++)
    {
        block_times.push_back(block_times.back() + random_interval());
    }

    // Calculate the actual average interval
    double timeline_end = block_times.back();
    double achieved_mean = timeline_end / INTERVAL_COUNT;
    std::cout << "Average block interval: " << achieved_mean << std::endl;

    // Sample random points on the timeline
    std::uniform_real_distribution<> timeline_dist(0.0, timeline_end);
    double time_to_next = 0.0;
    double time_since_last = 0.0;
    double total_interval = 0.0;

    for (int i = 0; i < SAMPLE_COUNT; i++)
    {
        // Pick a random point in time
        double point = timeline_dist(gen);

        // Find which interval contains this point
        auto it = std::upper_bound(block_times.begin(), block_times.end(), point) - 1;
        int idx = it - block_times.begin();

        // Calculate times to adjacent blocks
        double next_time = block_times[idx + 1] - point;
        double prev_time = point - block_times[idx];
        double interval_length = block_times[idx + 1] - block_times[idx];

        time_to_next += next_time;
        time_since_last += prev_time;
        total_interval += interval_length;
    }

    std::cout << "Avg time to next block: " << time_to_next / SAMPLE_COUNT << std::endl;
    std::cout << "Avg time since last block: " << time_since_last / SAMPLE_COUNT << std::endl;
    std::cout << "Avg total interval length: " << total_interval / SAMPLE_COUNT << std::endl;

    return 0;
}