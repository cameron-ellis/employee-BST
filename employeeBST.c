/*
    Author: Cameron Ellis
    Purpose: employeeBST Implementation File
    Date: 11/28/2020
*/

#include "employeeBST.h"

BST * newTree(void* object) {
    BST * tree = malloc(sizeof(BST));
    tree->object = object;
    tree->right = NULL;
    tree->left = NULL;
    return tree;
}

BST * insertByID(BST *tree, Employee *record) {
    if (tree == NULL) {
        return newTree(record); //if branch is NULL insert new branch
    }
    else if (record->empID < ((Employee*)(tree->object))->empID) {
        tree->left = insertByID(tree->left, record); //insert new branch into left branch if <
    }
    else if (record->empID > ((Employee*)(tree->object))->empID) {
        tree->right = insertByID(tree->right, record); //insert new branch into right branch if >
    }
    return tree; //return root of tree with new inserted branch
}

Employee * searchEmpID(BST *tree, int empID) {
    if (tree == NULL) {
        return NULL; //tree empty return NULL
    }
    else if (empID == ((Employee*)(tree->object))->empID) {
        return tree->object; //if empID is found return the employee record
    }
    else if (empID > ((Employee*)(tree->object))->empID) {
        return searchEmpID(tree->right, empID); //if entered ID is > search right
    }
    else if (empID < ((Employee*)(tree->object))->empID) {
        return searchEmpID(tree->left, empID); //if entered id is < search left
    }
    else {
        return NULL; //empID not found
    }
}

Employee * searchSSN(BST *tree, int ssn) {
    Employee* emp = NULL; //hold employee record when ssn found
    if (tree == NULL) {
        return NULL; //if employee ssn not found return NULL
    }
    else if (ssn == ((Employee*)(tree->object))->ssn) {
        return tree->object; //if employee ssn found return employee
    }
    emp = searchSSN(tree->right, ssn); //search right branch for ssn
    if (emp == NULL) {
        emp = searchSSN(tree->left, ssn); //not in right branch search left
        return emp; //return employee record once searched
    }
    return emp; //return employee record if not NULL
}

void * freeBST(BST *tree) {
    if (tree == NULL) {
        return NULL; //if tree is NULL then return
    }
    freeBST(tree->left); //free left branch
    freeBST(tree->right); //free right branch
    free(tree); //free root
    return NULL; //return NULL when done
}
