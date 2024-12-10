# Binary Tree Concepts

## 1. What is a Binary Tree?

A **binary tree** is a tree data structure where each node has at most two children: a left child and a right child. The topmost node is called the **root**, and nodes without children are called **leaf nodes**. Binary trees are used for various algorithms, including searching and sorting.

## 2. Difference Between a Binary Tree and a Binary Search Tree (BST)

- **Binary Tree**: A general tree where each node can have up to two children. There is no specific ordering of the nodes.
- **Binary Search Tree (BST)**: A special type of binary tree where the left subtree contains values smaller than the node's value, and the right subtree contains values greater than the node's value. This property allows efficient searching and insertion.

## 3. Possible Gain in Terms of Time Complexity Compared to Linked Lists

- **Linked List**: Searching in a linked list takes O(n) time because it requires traversing the list node by node.
- **Binary Tree**: In a balanced binary tree, searching can be done in O(log n) time, much faster than in a linked list. However, in the worst case (for unbalanced trees), it can still degrade to O(n).

## 4. Depth, Height, and Size of a Binary Tree

- **Depth**: The depth of a node is the number of edges from the root to that node.
- **Height**: The height of a tree is the number of edges in the longest path from the root to a leaf.
- **Size**: The size of a binary tree is the total number of nodes in the tree.

## 5. Different Traversal Methods to Go Through a Binary Tree

- **In-order Traversal**: Visit the left subtree, the node, and then the right subtree (Left, Root, Right).
- **Pre-order Traversal**: Visit the node, then the left subtree, and then the right subtree (Root, Left, Right).
- **Post-order Traversal**: Visit the left subtree, then the right subtree, and then the node (Left, Right, Root).
- **Level-order Traversal**: Visit nodes level by level, starting from the root (Breadth-First Search).

## 6. Types of Binary Trees

- **Complete Binary Tree**: A binary tree where all levels are fully filled except possibly the last, and all nodes are as far left as possible.
- **Full Binary Tree**: A binary tree where every node has either 0 or 2 children.
- **Perfect Binary Tree**: A binary tree where all internal nodes have exactly two children and all leaf nodes are at the same level.
- **Balanced Binary Tree**: A binary tree where the height difference between the left and right subtrees of every node is at most 1.