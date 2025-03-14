# **Data Structures and Algorithms Cheat Sheet**

## **Contents:**
### **Data Structures**
- [Array](#1-array)
- [Queue](#2-queue)
- [Stack](#3-stack)
- [Linked List](#4-linked-list)
- [Tree](#5-tree)
- [Heap](#6-heap)
- [Graph](#8-hash-table)

### **Common Algorithms**
- [Sorting Algorithms](#1-sorting-algorithms)
- [Searching Algorithms](#2-searching-algorithms)
- [Graph Algorithms](#3-graph-algorithms)

## **Data Structures**

### **1. Array**
- **Definition:** An array is a data structure consisting of a collection of elements (values or variables), of same memory size, each identified by at least one array index or key. An array is stored such that the position of each element can be computed from its index tuple by a mathematical formula.
- **Common Use Cases:** Storing ordered data, matrix operations, dynamic programming.
- **Time Complexity:**
  - Access: **O(1)**
  - Search: **O(n)**
  - Insertion/Deletion (end): **O(1)**; (middle): **O(n)**
- **Pros:** Fast access, predictable performance.
- **Cons:** Fixed size (in static arrays), resizing overhead (in dynamic arrays).
- **Links:**
    - [W3 Schools](https://www.w3schools.com/dsa/dsa_data_arrays.php)
    - [G4G - Getting Started With Array Data Structure](https://www.geeksforgeeks.org/introduction-to-arrays-data-structure-and-algorithm-tutorials/)
    - [Wikipedia](https://en.wikipedia.org/wiki/Array_(data_structure))

| **Variant**       | **Description**          | **Use Case**          |
|------------------|----------------------|------------------|
| **Array List**   | Resizable array      | When a dynamic size is needed |

---

### **2. Queue**
- **Definition:** A queue is defined as a linear data structure that is open at both ends and the operations are performed in **First In First Out (FIFO)** order. We define a queue to be a list in which all additions to the list are made at one end, and all deletions from the list are made at the other end.
- **Common Use Cases:** Task scheduling, breadth-first search.
- **Time Complexity:**
  - Enqueue: **O(1)**
  - Dequeue: **O(1)**
- **Pros:** Ensures order processing.
- **Cons:** Inefficient random access.
- **Links:**
    - [W3 Schools](https://www.w3schools.com/dsa/dsa_data_queues.php)
    - [G4G - Introduction to Queue Data Structures](https://www.geeksforgeeks.org/introduction-to-queue-data-structure-and-algorithm-tutorials/)
    - [Wikipedia](https://en.wikipedia.org/wiki/Queue_(abstract_data_type))

| **Variant**          | **Description**                 | **Use Case**             |
|---------------------|--------------------------------|-------------------------|
| **Priority Queue** | Dequeues elements based on priority | Task scheduling, Dijkstra’s shortest path |

---

### **3. Stack**
- **Definition:** The stack data structure is a linear data structure that accompanies a principle known as **LIFO (Last In First Out)** or **FILO (First In Last Out)**. Real-life examples of a stack are a deck of cards, piles of books, piles of money, and many more.
- **Common Use Cases:** Undo/redo, call stack, depth-first search.
- **Time Complexity:**
  - Push: **O(1)**
  - Pop: **O(1)**
- **Pros:** Ideal for nested or backtracking operations.
- **Cons:** Inefficient searching.
- **Links:**
    - [W3 Schools](https://www.w3schools.com/dsa/dsa_data_stacks.php)
    - [G4G - What Is A Stack Data Structure?](https://origin.geeksforgeeks.org/introduction-to-stack-data-structure-and-algorithm-tutorials/)
    - [G4G - Implementing Stack Using Array](https://www.geeksforgeeks.org/implement-stack-using-array/)
    - [G4G - Implementing Stack Using Linked List](https://www.geeksforgeeks.org/implement-a-stack-using-singly-linked-list/)

---

### **4. Linked List**
- **Definition:** A collection of nodes where each node points to the next (and sometimes previous) node.
- **Common Use Cases:** Implementing stacks, queues, dynamic memory allocation.
- **Time Complexity:**
  - Access: **O(n)**
  - Insertion/Deletion: **O(1)**
- **Pros:** Efficient insertions/deletions.
- **Cons:** Higher memory overhead due to pointers.
- **Links:**
    - [W3 Schools](https://www.w3schools.com/dsa/dsa_theory_linkedlists.php)
    - [G4G - Singly Linked List](https://www.geeksforgeeks.org/singly-linked-list-tutorial/)
    - [G4G - Doubly Linked List](https://www.geeksforgeeks.org/doubly-linked-list/)
    - [G4G - Circular Linked List](https://www.geeksforgeeks.org/doubly-linked-list/)

| **Variant**            | **Description**              | **Use Case**             |
|----------------------|--------------------------|-------------------------|
| **Singly Linked List** | Each node points to the next | Simple list operations |
| **Doubly Linked List** | Nodes have references to both previous and next nodes | Navigation systems, undo/redo |

---

### **5. Tree**
- **Definition:** A hierarchical structure where each node has a value and references to child nodes.
- **Common Use Cases:** File systems, database indexes.
- **Time Complexity:**
  - Search: **O(log n)**
  - Insert/Delete: **O(log n)**
- **Pros:** Efficient hierarchical organization.
- **Cons:** Can become unbalanced.
- **Links:**
    - [W3 Schools](https://www.w3schools.com/dsa/dsa_theory_trees.php)
    - [G4G - Introduction to Tree Data Structure](https://www.geeksforgeeks.org/introduction-to-tree-data-structure/)
    - [G4G - Tree Traversal Techniques](https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/?ref=next_article_top)


| **Variant**         | **Description**                        | **Use Case**     |
|--------------------|--------------------------------|---------------|
| **Binary Search Tree** | Each node has at most two children | Efficient searching |
| **AVL Tree**      | Self-balancing BST | Maintaining O(log n) operations |
| **B+ Tree**       | Multi-level balanced tree | Database indexing |

---

### **6. Heap**
- **Definition:** In data structures, a heap is a tree-based data structure that satisfies the heap property: a parent node's value is always greater than or equal to its children (max-heap) or less than or equal to its children (min-heap).
- **Common Use Cases:** Priority queues, heap sort.
- **Time Complexity:**
  - Insert/Delete: **O(log n)**
- **Pros:** Fast retrieval of min/max elements.
- **Cons:** Not efficient for arbitrary searches.
- **Links:**
    - [G4G - Introduction To Heap](https://www.geeksforgeeks.org/introduction-to-heap/)

| **Variant**  | **Description**              | **Use Case**             |
|-------------|--------------------------|-------------------------|
| **Min Heap** | Smallest element at the root | Dijkstra’s algorithm |
| **Max Heap** | Largest element at the root | Scheduling problems |

---

### **7. Graph**
- **Definition:** Graphs in data structures are non-linear data structures made up of a finite number of nodes or vertices and the edges that connect them. Graphs in data structures are used to address real-world problems in which it represents the problem area as a network like telephone networks, circuit networks, and social networks.
- **Common Use Cases:** Social networks, recommendation systems, routing.
- **Time Complexity:** Varies based on implementation.
- **Pros:** Best for representing networks.
- **Cons:** Complex operations.
- **Links:**
    - [W3 Schools](https://www.w3schools.com/dsa/dsa_theory_graphs.php)
    - [G4G - Introduction to Graph Data Structure](https://www.geeksforgeeks.org/introduction-to-graphs-data-structure-and-algorithm-tutorials/)
    - [G4G - Graph and it's Representations](https://www.geeksforgeeks.org/graph-and-its-representations/)
    - [Wikipedia](https://en.wikipedia.org/wiki/Graph_(abstract_data_type))

| **Representation**   | **Description**                     |
|---------------------|--------------------------------|
| **Adjacency List**  | List of neighbors per node (efficient for sparse graphs) |
| **Adjacency Matrix** | Matrix representation (good for dense graphs) |

| **Type**            | **Description**             |
|---------------------|-------------------------|
| **Directed/Undirected** | One-way or two-way edges |
| **Weighted/Unweighted** | Edges with or without weights |
| **Cyclic/Acyclic**   | With or without cycles |

---

### **8. Hash Table / Map**
- **Definition:** A data structure that maps keys to values using a hash function.
- **Common Use Cases:** Caching, indexing.
- **Time Complexity:**
  - Average: **O(1)**
  - Worst case: **O(n)**
- **Pros:** Fast lookup.
- **Cons:** Collisions can degrade performance.
- **Links:**
    - [W3 Schools](https://www.w3schools.com/dsa/dsa_data_hashmaps.php)
    - [G4G - HashMap Data Structure](https://www.geeksforgeeks.org/hashing-data-structure/)
    - [Wikipedia](https://en.wikipedia.org/wiki/Hash_table)

| **Variant**  | **Description**     |
|------------|-----------------|
| **Hash Map** | Similar but may allow null keys/values |

---


## **Common Algorithms**

### **1. Sorting Algorithms**
| **Algorithm**     | **Time Complexity** | **Use Case**      |
|------------------|-------------------|------------------|
| **[Bubble Sort](https://www.w3schools.com/dsa/dsa_algo_bubblesort.php)**   | O(n^2) | Simple cases, teaching |
| **[Selection Sort](https://www.w3schools.com/dsa/dsa_algo_selectionsort.php)** | O(n^2) | Small datasets |
| **[Insertion Sort](https://www.w3schools.com/dsa/dsa_algo_insertionsort.php)** | O(n^2) | Nearly sorted data |
| **[Merge Sort](https://www.w3schools.com/dsa/dsa_algo_mergesort.php)**    | O(n log n) | Large datasets |
| **[Quick Sort](https://www.w3schools.com/dsa/dsa_algo_quicksort.php)**    | O(n log n) (average), O(n^2) (worst) | General purpose |
| **[Heap Sort](https://www.geeksforgeeks.org/heap-sort/)**     | O(n log n) | Priority queues |
| **[Radix Sort](https://www.w3schools.com/dsa/dsa_algo_radixsort.php)**    | O(nk) | Sorting numbers |

### **2. Searching Algorithms**
| **Algorithm**     | **Time Complexity** | **Use Case**      |
|------------------|-------------------|------------------|
| **[Linear Search](https://www.w3schools.com/dsa/dsa_algo_linearsearch.php)**  | O(n) | Small or unsorted data |
| **[Binary Search](https://www.w3schools.com/dsa/dsa_algo_binarysearch.php)**  | O(log n) | Sorted data |
| **[Hashing](https://www.geeksforgeeks.org/introduction-to-hashing-2/)**  | O(1) (avg), O(n) (worst) | Hash tables |

### **3. Graph Algorithms**
| **Algorithm**  | **Use Case** |
|--------------|----------------|
| **[DFS (Depth First Search)](https://www.geeksforgeeks.org/depth-first-search-or-dfs-for-a-graph/)** | Exploring paths |
| **[BFS (Breadth First Search)](https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/)** | Shortest path (unweighted) |
| **[Dijkstra’s Algorithm](https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-greedy-algo-7/)** | Shortest path (weighted) |
| **[Floyd-Warshall](https://www.geeksforgeeks.org/floyd-warshall-algorithm-dp-16/)** | All-pairs shortest path |

---


