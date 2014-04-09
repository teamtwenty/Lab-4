//
//  Tree.cpp
//  Lab-4
//
//  Created by Maxx Rodriguez on 4/6/14.
//  Copyright (c) 2014 Maxx Rodriguez. All rights reserved.
//

#include "Tree.h"
#include "Token.h"


Tree::Tree()
{
    root = NULL;
}
Tree::~Tree()
{
    recursiveDeleteTree(root);
}
void Tree::recursiveDeleteTree(treeNode *node)
{
    if(node->left!=NULL)
        recursiveDeleteTree(node->left);// clear left node
    if(node->right!= NULL)
        recursiveDeleteTree(node->right);// Clear right node
    delete node;    // Destroy this node
}
bool Tree::isEmpty()
{
    return(root==NULL);
}

void Tree::addNode(Token *newToken)
{
    
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
    // Now attach the new node to the node that back points to
}