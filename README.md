# Graph Traversal using DFS & BFS

## Assignment Overview

This repository contains the implementation of **Depth-First Search (DFS)** and **Breadth-First Search (BFS)** algorithms in C programming language, as part of a data structures and algorithms assignment.

## Assignment Requirements

Based on the discussion prompt, this project addresses the following objectives:

### 🎯 Primary Objectives
1. **Implement DFS algorithm in C** on the provided graph structure
2. **Implement BFS algorithm in C** on the provided graph structure  
3. **Share source code links** on GitHub for collaboration and review
4. **Analyze time complexity** for graphs with V vertices and E edges
5. **Identify other algorithms** that utilize BFS and DFS techniques

## Graph Structure

The assignment uses the following undirected graph with 12 vertices:

```
        2 ---- 5 ---- 9 ---- 11
       /|      |      |      |
      1 |      |      |      |
       \|      7      |      12
        3 ---- 4 ---- 8 ---- 10
         \            |
          6 ----------/
```

### Graph Representation
- **Vertices**: 12 nodes (numbered 1-12)
- **Edges**: 14 connections as shown in the graph
- **Type**: Undirected graph
- **Representation**: Can be implemented using adjacency list or adjacency matrix

## Algorithm Implementations

### 🔍 Depth-First Search (DFS)
DFS explores as far as possible along each branch before backtracking.

**Key Characteristics:**
- Uses a **stack** data structure (or recursion)
- **Time Complexity**: O(V + E)
- **Space Complexity**: O(V) for the stack and visited array
- Useful for: Path finding, cycle detection, topological sorting

### 🌊 Breadth-First Search (BFS)
BFS explores all vertices at the current depth before moving to vertices at the next depth level.

**Key Characteristics:**
- Uses a **queue** data structure
- **Time Complexity**: O(V + E)
- **Space Complexity**: O(V) for the queue and visited array
- Useful for: Shortest path in unweighted graphs, level-order traversal

## Time Complexity Analysis

For a graph with **V vertices** and **E edges**:

| Algorithm | Time Complexity | Space Complexity | Data Structure Used |
|-----------|----------------|------------------|-------------------|
| **DFS**   | O(V + E)       | O(V)             | Stack (or recursion) |
| **BFS**   | O(V + E)       | O(V)             | Queue |

### Explanation:
- **O(V)**: Each vertex is visited exactly once
- **O(E)**: Each edge is examined exactly once (twice for undirected graphs)
- **Total**: O(V + E) represents the optimal time complexity for graph traversal

## Applications of BFS and DFS

### 🔍 DFS Applications:
1. **Topological Sorting** - Ordering tasks with dependencies
2. **Cycle Detection** - Finding cycles in directed/undirected graphs
3. **Path Finding** - Finding any path between two vertices
4. **Connected Components** - Finding all connected parts of a graph
5. **Maze Solving** - Finding a way through a maze
6. **Tree Traversals** - In-order, pre-order, post-order traversals

### 🌊 BFS Applications:
1. **Shortest Path** - Finding shortest path in unweighted graphs
2. **Level Order Traversal** - Processing nodes level by level
3. **Bipartite Graph Check** - Determining if a graph is bipartite
4. **Social Network Analysis** - Finding connections within a certain distance
5. **Web Crawling** - Systematic exploration of web pages
6. **GPS Navigation** - Finding shortest routes (with modifications)

## Project Structure

```
Discussion_Forum_II/
├── README.md
├── dfs.c           # DFS algorithm implementation
├── bfs.c           # BFS algorithm implementation
└── analysis.txt    # Time complexity analysis
```

## Getting Started

### Prerequisites
- GCC compiler
- Basic understanding of C programming
- Knowledge of graph theory concepts

### Compilation and Execution
```bash
# Clone the repository
git clone https://github.com/TKelia/Discussion_Forum_II.git
cd Discussion_Forum_II

# Compile DFS
gcc -o dfs dfs.c

# Compile BFS
gcc -o bfs bfs.c

# Run the programs
./dfs
./bfs
```

## Sample Output

```
DFS traversal: 1 2 5 7 4 3 6 8 10 12 11 9
Time complexity: O(V + E) where V=12, E=14

BFS traversal: 1 2 3 5 4 6 7 8 9 10 11 12
Time complexity: O(V + E) where V=12, E=14
```
