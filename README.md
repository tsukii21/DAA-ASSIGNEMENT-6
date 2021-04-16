# Assignment-6

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIT2019195  |   DEEPTARSHI BISWAS | deepuno0201 |
|    IIT2019197  |   Jaidev Das | tsukii21  | 

**Group No-4**

**Faculty Name-** Rahul Kala

**Mentor Name-** Md. Meraz

---
## Problem Statement
### Single Shortest Distance Problem
Given a graph and a source vertex in the graph, find shortest paths from source to all vertices in the given graph.

---
## How to use code
After cloning, go to ass6 folder and compile and then run the cpp file.
```
#Download project
git clone https://github.com/tsukii21/DAA-ASSIGNMENT-5.git
```
---

**Test case**

Find max
```
Test Case-1
Input:
8 23
2 4 8 0 2 1 66 78
Out:
0
#--------------------------#
Test Case-2
Input:
6 7
2 4 8 0 2 1
Out:
4
#--------------------------#
6 0
0 0 0 0 0 0
Out:
8
```
---

### Theory
Here we are using the principle of inclusion and exclusion to to generate the number of subsets  with xor k. We can derieve a linear recurrence as
f(n,k)=f(n-1,k^a[n])(inclusion)+f(n-1,k)(exclusion).
Thus our dp relation is dp[i][j]=dp[i-1][j^a[i]]+dp[i-1][j].

---

### Analysis

**Time Complexity**

**Djikstra Method (Using adjacency matrix)** : O(V^2)

**Djikstra Method (Using adjacency list)** : O(ElogV)

**Bellman Ford Algorithm** : O(VE)

**Floyd Warshall Algorithm** : O(V^3)

---

**Space Complexity**

**Djikstra Method (Using adjacency matrix)** : O(V+E)

**Djikstra Method (Using adjacency list)** : O(V)

**Bellman Ford Algorithm** : O(V)

**Floyd Warshall Algorithm** : O(V^2)


---

### References

- https://livebook.manning.com/book/grokking-algorithms/chapter-7/1 
- https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm 
- https://cpalgorithms.com/graph/dijkstra.html#toctgt-2 
- https://cpalgorithms.com/graph/bellman_ford.html
- https://cp-algorithms.com/graph/all-pairshortest-path-floyd-warshall.html

