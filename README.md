# Data Structures and Algorithms Cheatsheet
Working through creating a refernce or cheatsheet for a number of basic data structures and algorithms in a couple of languages.

## Author:
John Humphrey

## Contents:

## List of Types:
- Array
    - Array
    - Array List
- Queue
    - Queue
    - Priority Queue
- Stack
- Linked List
    - Singly Linked List
    - Doubly Linked List
- Tree
    - Binary Search Tree
    - AVL Tree
    - B+ Tree
- Heap
    - Min Heap
    - Max Heap
- Graph
    - list major types...
- Hash
    - Hash Table
    - Hash Map
- Trie


Data Structures and Algorithms Cheat Sheet
Data Structures
1. Array

    Simple Explanation: A collection of elements stored in a fixed-size, contiguous block of memory.
    Overview: Arrays allow fast access to elements using an index. They are ideal for storing ordered data but are limited by their fixed size in some implementations.
    Common Use Cases: Storing a list of items, matrix operations, and dynamic programming.
    Time Complexity:
        Access: O(1)
        Search: O(n)
        Insertion/Deletion (end): O(1); (middle): O(n)
    Why Choose It? Efficient for fast access and predictable performance.
    Drawbacks: Fixed size in static arrays; resizing in dynamic arrays can be costly.

Array Variants

    Array List (Dynamic Array): A resizable array that grows dynamically.
        Common Use Cases: When an array’s size needs to be flexible.
        Functions: add(), remove(), get(index), resize()

2. Queue

    Simple Explanation: A data structure that follows the FIFO (First-In-First-Out) principle.
    Overview: Queues are useful when processing elements in the order they arrive.
    Common Use Cases: Task scheduling, print jobs, breadth-first search.
    Time Complexity:
        Enqueue: O(1)
        Dequeue: O(1)
    Why Choose It? Ensures order processing.
    Drawbacks: Random access is inefficient.

Queue Variants

    Priority Queue: Elements are dequeued based on priority instead of order.
        Common Use Cases: Task scheduling, Dijkstra’s shortest path.
        Implementation: Can be built using a heap.
        Time Complexity: Enqueue: O(log n), Dequeue: O(log n)

3. Stack

    Simple Explanation: A data structure that follows the LIFO (Last-In-First-Out) principle.
    Overview: Used for operations where the last inserted item should be processed first.
    Common Use Cases: Undo/redo functionality, call stack, depth-first search.
    Time Complexity:
        Push: O(1)
        Pop: O(1)
    Why Choose It? Useful for nested or backtracking problems.
    Drawbacks: Not efficient for searching.

4. Linked List

    Simple Explanation: A collection of nodes where each node points to the next (and sometimes previous) node.
    Overview: Unlike arrays, linked lists allow dynamic memory allocation without requiring a contiguous block.
    Common Use Cases: Implementing stacks and queues, dynamic memory allocation.
    Time Complexity:
        Access: O(n)
        Insertion/Deletion: O(1)
    Why Choose It? Good for insertions and deletions.
    Drawbacks: Higher memory overhead due to pointers.

Linked List Variants

    Singly Linked List: Each node has a reference to the next node.
    Doubly Linked List: Nodes have references to both previous and next nodes.
        Common Use Cases: Navigation systems, undo/redo.
        Time Complexity: Searching: O(n), Insert/Delete: O(1).

5. Tree

    Simple Explanation: A hierarchical structure where each node has a value and references to child nodes.
    Overview: Trees provide fast searching and hierarchical organization.
    Common Use Cases: File systems, database indexes.
    Time Complexity:
        Search: O(log n)
        Insert/Delete: O(log n)
    Why Choose It? Efficient for hierarchical data.
    Drawbacks: Can become unbalanced, leading to performance degradation.

Tree Variants

    Binary Search Tree (BST): Each node has at most two children, with left children smaller and right children larger.
    AVL Tree: A self-balancing BST that maintains O(log n) operations.
    B+ Tree: A multi-level balanced tree, used in databases.

6. Heap

    Simple Explanation: A tree-based structure where parent nodes follow a specific ordering rule.
    Overview: Used for priority-based tasks and heap sort.
    Common Use Cases: Priority queues, shortest path algorithms.
    Time Complexity: Insert/Delete: O(log n)
    Why Choose It? Fast retrieval of min/max elements.
    Drawbacks: Not good for searching arbitrary elements.

Heap Variants

    Min Heap: The smallest element is at the root.
    Max Heap: The largest element is at the root.

7. Graph

    Simple Explanation: A collection of nodes (vertices) connected by edges.
    Overview: Graphs represent relationships between entities.
    Common Use Cases: Social networks, recommendation systems, routing.
    Time Complexity: Varies based on implementation.
    Why Choose It? Best for representing networks.
    Drawbacks: Complex operations.

Graph Representations

    Adjacency List: A list of neighbors per node (efficient for sparse graphs).
    Adjacency Matrix: A matrix representation (good for dense graphs).

Graph Types

    Directed vs. Undirected
    Weighted vs. Unweighted
    Cyclic vs. Acyclic

8. Hash

    Simple Explanation: A data structure that maps keys to values using a hash function.
    Overview: Provides fast lookups, insertions, and deletions.
    Common Use Cases: Caching, indexing.
    Time Complexity:
        Average: O(1)
        Worst case: O(n)
    Why Choose It? Fast retrieval.
    Drawbacks: Collisions can degrade performance.

Hash Variants

    Hash Table: Implements key-value mapping using a hash function.
    Hash Map: Similar but may allow null keys and values.

9. Trie (Prefix Tree)

    Simple Explanation: A tree for storing strings where common prefixes share nodes.
    Overview: Used for fast retrieval of words.
    Common Use Cases: Autocomplete, spell checkers.
    Time Complexity:
        Insert/Search: O(m) (m = length of the word)
    Why Choose It? Optimized for prefix searches.
    Drawbacks: High memory usage.