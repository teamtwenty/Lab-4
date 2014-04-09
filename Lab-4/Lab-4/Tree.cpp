//
//  Tree.cpp
//  Lab-4
//
//  Created by Maxx Rodriguez on 4/6/14.
//  Copyright (c) 2014 Maxx Rodriguez. All rights reserved.
//

#include "Tree.h"
#include "Token.h"
#include "Scanner.h"



Tree::Tree()
{
    root = NULL;
}
Tree::~Tree()
{
    recursivePrintTree(root);
}
void Tree::recursivePrintTree(treeNode *node)
{
    if(node->left!=NULL)
        recursivePrintTree(node->left);// clear left node
    if(node->right!= NULL)
        recursivePrintTree(node->right);// Clear right node
    delete node;    // Destroy this node
}
bool Tree::isEmpty()
{
    return(root==NULL);
}

void Tree::addNode(Token *newToken, int scannerLineNum)
{
    LinkedList *lineNumber = new LinkedList();
    lineNumber->setLineNum(scannerLineNum);
    
    if(root == NULL)
    {
        root->data = newToken;
    }
    else
    {
        treeNode *current = root;
        while(current != NULL)
        {
            if(newToken->getTokenString().compare(current->data->getTokenString()))
            {
                if(current->left != NULL)
                {
                    current = current->left;
                    
                }
                else
                {
                    current->left->data = newToken;
                    addLineNum(lineNumber, scannerLineNum);
                    current = NULL;
                }
            }
            else
            {
                if(current->right != NULL)
                {
                    current = current->right;
                }
                else
                {
                    current->right->data = newToken;
                    current = NULL;
                }
            }
        }
    }
}
treeNode* Tree::getRoot()
{
    return this->root;
}
void Tree::addLineNum(LinkedList *lineNum,int Num)
{
    LinkedList *tmp = root->head;
    while(tmp->getNext() != NULL)
    {
        tmp = tmp->getNext();
    }
    tmp->setNext(lineNum);
    tmp->setLineNum(Num);
    
}
