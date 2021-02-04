# employee-BST
### Overview
A set of functions created to simulate the storage and search of an employee data type using a Binary Search Tree

### Functions
1. insertByID:
- This function uses the simple BST insertion algorithm to insert an Employee
record into a BST (initially NULL) based on the employee ID field.
Note that this function does not necessarily preserve balance.
2. searchEmpID:
- This function retrieves the record associated with the specified
employee ID, or returns NULL if the record is not found.
Note that the complexity of this function is determined by the length
of the longest path in the tree.
3. searchSSN:
- This function retrieves the record associated with the specified
Social Security Number, or returns NULL if the record is not found.
Note that for a tree of size N, this function has O(N) complexity
regardless of whether the tree is balanced.
4. freeBST:
- This function frees memory allocated for the tree and returns NULL.
