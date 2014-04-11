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



Tree::Tree()//constructor
{
    root = NULL; 
}
Tree::~Tree()//free memory (deconstructor)
{
    
}
void Tree::recursivePrintTree(treeNode *node,Print &print)
{
    if(node->left!=NULL)//check left node
    {
        recursivePrintTree(node->left, print);// clear left node
    }
    if(node->right!= NULL)//check right node
    {
        recursivePrintTree(node->right, print);// Clear right node
    }
    print.printToken(node->data);
    delete node;    // Destroy this node
}
bool Tree::isEmpty()
{
    return(root==NULL);
}

void Tree::addNode(Token *newToken, int scannerLineNum)//add a node to the tree
{
    LinkedList *lineNumber = new LinkedList();
    lineNumber->setLineNum(scannerLineNum);
    
    if(root == NULL)//checks for emptiness so it can put the new node here
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
                if(current->left != NULL)//checks left for null
                {
                    current = current->left;//move to left
                    
                }
                else
                {
                    current->left->data = newToken; //fill left node with data
                    addLineNum(lineNumber, scannerLineNum);//add a lline number
                    current = NULL;
                }
            }
            else
            {
                if(current->right != NULL)//check right for NULL
                {
                    current = current->right;//move to right
                }
                else
                {
                    current->right->data = newToken;//fill right node with data
                    current = NULL;
                }
            }
        }
    }
}
treeNode* Tree::getRoot() //get the root of the tree
{
    return this->root;
}
void Tree::addLineNum(LinkedList *lineNum,int Num)//add line number to the tree node
{
    LinkedList *tmp = root->head;
    while(tmp->getNext() != NULL)
    {
        tmp = tmp->getNext();
    }
    tmp->setNext(lineNum);
    tmp->setLineNum(Num);
    
}
