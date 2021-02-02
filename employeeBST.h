/*
    Author: Cameron Ellis
    Purpose: employeeBST Header File
    Date: 11/28/2020
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct employee {
    int empID;
    int ssn;
    float salary;
} Employee;

typedef struct bst {
    void* object;
    struct bst* right;
    struct bst* left;
} BST;

/* This function uses the simple BST insertion algorithm to insert an Employee
record into a BST (initially NULL) based on the employee ID field.
Note that this function does not necessarily preserve balance. */
BST * insertByID(BST *tree, Employee *record);

/* This function retrieves the record associated with the specified
employee ID, or returns NULL if the record is not found.
Note that the complexity of this function is determined by the length
of the longest path in the tree. */
Employee * searchEmpID(BST *tree, int empID);

/* This function retrieves the record associated with the specified
Social Security Number, or returns NULL if the record is not found.
Note that for a tree of size N, this function has O(N) complexity
regardless of whether the tree is balanced. */
Employee * searchSSN(BST *tree, int ssn);

/* This function frees memory allocated for the tree and returns NULL. */
void * freeBST(BST *tree);
