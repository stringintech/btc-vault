---
Transcript: https://btctranscripts.com/greg-maxwell/2017-11-27-gmaxwell-advances-in-block-propagation
YouTube: https://youtu.be/EHIuuKCm53o?si=QAhbVBQYvntJaiD-
---
# Advances in Block Propagation with Greg Maxwell

1. How do block relay latencies make confirmations less useful?

2. If some miners form a malicious alliance to cause the blocks they mine to reach the rest of the network slower, would there be a way for us to detect it? And if we have a better P2P protocol, to what extent do they have the power not to enforce it and maintain their advantage?

3. Why could trusting miners for data hurt SPV clients?

4. Between the three sources mentioned for block relay latency, which one causes the most latency? How has it changed over time?

5. How does mining become more centralized if it's more like a race than a lottery?

6. How can block relay latency hurt a miner? How can it benefit a miner?

7. Is compacting the size of a block to make the relay faster enough? What challenges should we be aware of here?

8. In Bitcoin's original protocol design, which caused greater network latency: the multiple roundtrip INV/getdata message exchanges or the redundant transmission of the same transactions twice (once through mempool propagation and again in blocks)?

9. How did the Segwit upgrade make the solving block relay latency issue more important?

10. What's the relationship between bandwidth reduction and latency in Bitcoin block propagation? Does optimizing for lower bandwidth usage necessarily lead to faster block relay times?

11. What was the primary goal of BIP152 compact blocks?

12. In the compact block protocol, where else can I look for a TX (using incoming ID) other than mempool? Are there other sources?

13. When did Bitcoin miners and validators first begin functioning as separate roles, and what technological or economic factors drove this separation from Satoshi's original design?

14. How do we store transactions in mempool? Do we store the hash or is it computed on demand?

15. What is hub-and-spoke topology? Why was it necessary for fast block relay but not for the compact block protocol?

16. Why are transaction IDs (TXIDs) (double-)salted in the compact block protocol?

17. Low vs high bandwidth mode in compact block protocol? Which one causes a node to receive more redundant data? Which one is faster?

18. Why the compact block protocol has a more decentralized nature compared to the fast block relay?

19. In compact block protocol how hash conflicts might cause confusion for the receiving node in terms of missing transactions?

20. Why relaying new blocks is asked from 3 peers? And why 3 most recent?​​​​​​​​​​​​​​​​

21. In compact block protocol, how using an additional salt prevents a network-wide slow down?

22. What is the worst-case latency for BIP152 and why is it worse than the original P2P relay network?

23. What is the challenge of using compact block protocol on long-haul international connections?

24. What is the basic idea behind network coding? What is its potential weakness regarding block relay network?

25. Why a FIBRE powered network cannot be opened to the public?

26. How differently are missing transactions handled in compact block protocol and FIBRE?

27. What would be the benefit of alternative transaction serialization approach to lowering the size of a serialized transaction?

28. What makes set reconciliation not feasible for block relay?

29. How does “arbitrary block permutation” impact different block relay protocols?

30. What might explain low orphan rates today?

31. Is orphan rate a good measure for block relay latency?​​​​​​​​​​​​​​​​