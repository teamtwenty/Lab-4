//
//  Tree.cpp
//  Lab-4
//
//  Created by Maxx Rodriguez on 4/6/14.
//  Copyright (c) 2014 Maxx Rodriguez. All rights reserved.
//

#include "Tree.h"


Tree::Tree()
{
    root =NULL;
}
Tree::~Tree()
{
    ClearTree(root);
}
void Tree::ClearTree(treeNode *T)
{
    if(T==NULL) return;  // Nothing to clear
    if(T->left != NULL) ClearTree(T->left); // Clear left sub-tree
    if(T->right != NULL) ClearTree(T->right); // Clear right sub-tree
    delete T;    // Destroy this node
}
bool Tree::isEmpty()
{
    return(root==NULL);
}
treeNode *Tree::SearchTree(int Key)
{
   // int      ValueInTree = false;
    treeNode *temp;
    
    temp = root;
    while((temp != NULL) && (temp->Key != Key))
    {
        if(Key < temp->Key)
            temp = temp->left;  // Search key comes before this node.
        else
            temp = temp->right; // Search key comes after this node
    }
    if(temp == NULL) return temp;    // Search key not found
    else
        return temp;    // Found it so return a duplicate
}
int Tree::Insert(treeNode *newNode)
{
    treeNode *temp;
    treeNode *back;
    
    temp = root;
    back = NULL;
    
    while(temp != NULL) // Loop till temp falls out of the tree
    {
        back = temp;
        if(newNode->Key < temp->Key)
            temp = temp->left;
        else
            temp = temp->right;
    }
    
    // Now attach the new node to the node that back points to
    if(back == NULL) // Attach as root node in a new tree
        root = newNode;
    else
    {
        if(newNode->Key < back->Key)
            back->left = newNode;
        else
            back->right = newNode;
    }
    return(true);
}