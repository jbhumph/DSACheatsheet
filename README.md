# **Data Structures and Algorithms Cheat Sheet**

## **Data Structures**

### **1. Array**
- **Definition:** A collection of elements stored in a fixed-size, contiguous block of memory.
- **Common Use Cases:** Storing ordered data, matrix operations, dynamic programming.
- **Time Complexity:**
  - Access: **O(1)**
  - Search: **O(n)**
  - Insertion/Deletion (end): **O(1)**; (middle): **O(n)**
- **Pros:** Fast access, predictable performance.
- **Cons:** Fixed size (in static arrays), resizing overhead (in dynamic arrays).

| **Variant**       | **Description**          | **Use Case**          |
|------------------|----------------------|------------------|
| **Array List**   | Resizable array      | When a dynamic size is needed |

---

### **2. Queue**
- **Definition:** A data structure that follows the **FIFO** (First-In-First-Out) principle.
- **Common Use Cases:** Task scheduling, breadth-first search.
- **Time Complexity:**
  - Enqueue: **O(1)**
  - Dequeue: **O(1)**
- **Pros:** Ensures order processing.
- **Cons:** Inefficient random access.

| **Variant**          | **Description**                 | **Use Case**             |
|---------------------|--------------------------------|-------------------------|
| **Priority Queue** | Dequeues elements based on priority | Task scheduling, Dijkstra’s shortest path |

---

### **3. Stack**
- **Definition:** A data structure that follows the **LIFO** (Last-In-First-Out) principle.
- **Common Use Cases:** Undo/redo, call stack, depth-first search.
- **Time Complexity:**
  - Push: **O(1)**
  - Pop: **O(1)**
- **Pros:** Ideal for nested or backtracking operations.
- **Cons:** Inefficient searching.

---

### **4. Linked List**
- **Definition:** A collection of nodes where each node points to the next (and sometimes previous) node.
- **Common Use Cases:** Implementing stacks, queues, dynamic memory allocation.
- **Time Complexity:**
  - Access: **O(n)**
  - Insertion/Deletion: **O(1)**
- **Pros:** Efficient insertions/deletions.
- **Cons:** Higher memory overhead due to pointers.

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

| **Variant**         | **Description**                        | **Use Case**     |
|--------------------|--------------------------------|---------------|
| **Binary Search Tree** | Each node has at most two children | Efficient searching |
| **AVL Tree**      | Self-balancing BST | Maintaining O(log n) operations |
| **B+ Tree**       | Multi-level balanced tree | Database indexing |

---

### **6. Heap**
- **Definition:** A tree-based structure where parent nodes follow a specific ordering rule.
- **Common Use Cases:** Priority queues, heap sort.
- **Time Complexity:**
  - Insert/Delete: **O(log n)**
- **Pros:** Fast retrieval of min/max elements.
- **Cons:** Not efficient for arbitrary searches.

| **Variant**  | **Description**              | **Use Case**             |
|-------------|--------------------------|-------------------------|
| **Min Heap** | Smallest element at the root | Dijkstra’s algorithm |
| **Max Heap** | Largest element at the root | Scheduling problems |

---

### **7. Graph**
- **Definition:** A collection of nodes (vertices) connected by edges.
- **Common Use Cases:** Social networks, recommendation systems, routing.
- **Time Complexity:** Varies based on implementation.
- **Pros:** Best for representing networks.
- **Cons:** Complex operations.

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

### **8. Hash Table**
- **Definition:** A data structure that maps keys to values using a hash function.
- **Common Use Cases:** Caching, indexing.
- **Time Complexity:**
  - Average: **O(1)**
  - Worst case: **O(n)**
- **Pros:** Fast lookup.
- **Cons:** Collisions can degrade performance.

| **Variant**  | **Description**     |
|------------|-----------------|
| **Hash Map** | Similar but may allow null keys/values |

---

### **9. Trie (Prefix Tree)**
- **Definition:** A tree for storing strings where common prefixes share nodes.
- **Common Use Cases:** Autocomplete, spell checkers.
- **Time Complexity:**
  - Insert/Search: **O(m)** (m = word length)
- **Pros:** Optimized for prefix searches.
- **Cons:** High memory usage.

---

## **Common Algorithms**

### **1. Sorting Algorithms**
| **Algorithm**     | **Time Complexity** | **Use Case**      |
|------------------|-------------------|------------------|
| **Bubble Sort**   | O(n^2) | Simple cases, teaching |
| **Selection Sort** | O(n^2) | Small datasets |
| **Insertion Sort** | O(n^2) | Nearly sorted data |
| **Merge Sort**    | O(n log n) | Large datasets |
| **Quick Sort**    | O(n log n) (average), O(n^2) (worst) | General purpose |
| **Heap Sort**     | O(n log n) | Priority queues |
| **Radix Sort**    | O(nk) | Sorting numbers |

### **2. Searching Algorithms**
| **Algorithm**     | **Time Complexity** | **Use Case**      |
|------------------|-------------------|------------------|
| **Linear Search**  | O(n) | Small or unsorted data |
| **Binary Search**  | O(log n) | Sorted data |
| **Hashing**  | O(1) (avg), O(n) (worst) | Hash tables |

### **3. Graph Algorithms**
| **Algorithm**  | **Use Case** |
|--------------|----------------|
| **DFS (Depth First Search)** | Exploring paths |
| **BFS (Breadth First Search)** | Shortest path (unweighted) |
| **Dijkstra’s Algorithm** | Shortest path (weighted) |
| **Floyd-Warshall** | All-pairs shortest path |

---


