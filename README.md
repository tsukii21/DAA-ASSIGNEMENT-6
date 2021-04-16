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
After cloning, go to assignment_06 folder and compile and then run the cpp file.
```
#Download project
git clone https://github.com/tsukii21/DAA-ASSIGNMENT-5.git
```
---

**Test case**

Find shortest path
```
Test Case-1
Input:
4 4
1 2 24
1 4 20
3 1 3
4 3 12
1
Out:
0 24 3 15
#--------------------------#
Test Case-2
Input:
1
5 6
1 2 32
1 4 45
3 1 7
4 3 17
5 4 12
5 3 11
3
Out:
7 39 0 17 11 
#--------------------------#
```
---

### Theory
Djikstra Algorithm : For a given source node in the graph, the algorithm finds the shortest path between that node and every other.[7]:196–206 It can also be used for finding the shortest paths from a single node to a single destination node by stopping the algorithm once the shortest path to the destination node has been determined. For example, if the nodes of the graph represent cities and edge path costs represent driving distances between pairs of cities connected by a direct road (for simplicity, ignore red lights, stop signs, toll roads and other obstructions).

BFS(Undirected Graph): Uses greedy method and computes the distances level wise.
 
Bellman Ford: Uses V-1 times travels every edge to make sure all vertices acquire their required minimum distance from source..This algorithm holds for negative weight in a graph
---

### Analysis

**Time Complexity**
**BFS(Directed/Undirected unweighted Graph)** : O(V+E)

**Djikstra Method (Using adjacency matrix)** : O(V^2)

**Djikstra Method (Using adjacency list)** : O(ElogV)

**Bellman Ford Algorithm** : O(VE)

**Floyd Warshall Algorithm** : O(V^3)

---

**Space Complexity**
**BFS(Directed/Undirected unweighted Graph)** : O(V+E)

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

