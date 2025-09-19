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
- **Edges**: Multiple connections forming a complex network
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
├── src/
│   ├── graph.h          # Graph structure definitions
│   ├── graph.c          # Graph implementation
│   ├── dfs.c           # DFS algorithm implementation
│   ├── bfs.c           # BFS algorithm implementation
│   └── main.c          # Main program with test cases
├── examples/
│   └── sample_output.txt
└── docs/
    └── algorithm_analysis.md
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

# Compile the program
gcc -o graph_traversal src/*.c

# Run the program
./graph_traversal
```

## Sample Output

```
Graph Traversal Demonstration
=============================

DFS Traversal starting from vertex 1:
1 -> 2 -> 5 -> 9 -> 11 -> 12 -> 10 -> 8 -> 7 -> 4 -> 3 -> 6

BFS Traversal starting from vertex 1:
1 -> 2 -> 3 -> 5 -> 4 -> 6 -> 9 -> 7 -> 11 -> 8 -> 12 -> 10

Time Complexity Analysis:
- Vertices (V): 12
- Edges (E): 15
- DFS Time Complexity: O(12 + 15) = O(27)
- BFS Time Complexity: O(12 + 15) = O(27)
```

## Contributing

This is an academic assignment, but suggestions and improvements are welcome:

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/improvement`)
3. Commit your changes (`git commit -am 'Add improvement'`)
4. Push to the branch (`git push origin feature/improvement`)
5. Create a Pull Request

## Academic Integrity

This project is submitted as part of an academic assignment. Please respect academic integrity policies when referencing or using this code.

## Author

**Tesi Kelia**
- GitHub: [@TKelia](https://github.com/TKelia)
- Repository: [Discussion_Forum_II](https://github.com/TKelia/Discussion_Forum_II)

## License

This project is created for educational purposes as part of a data structures and algorithms course.

---

*Last updated: September 2025*
