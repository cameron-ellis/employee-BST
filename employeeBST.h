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

BST * insertByID(BST *tree, Employee *record);
Employee * searchEmpID(BST *tree, int empID);
Employee * searchSSN(BST *tree, int ssn);
void * freeBST(BST *tree);
