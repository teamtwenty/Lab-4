//
//  Tree.h
//  Lab-4
//
//  Created by Maxx Rodriguez on 4/6/14.
//  Copyright (c) 2014 Maxx Rodriguez. All rights reserved.
//

#ifndef Lab_4_Tree_h
#define Lab_4_Tree_h

#include <iostream>
#include "common.h"
#include "Token.h"


struct treeNode
{
    int      Key;
    treeNode *left;
    treeNode *right;
};

class Tree
{
private:
    treeNode *root;
    
    
public:
    Tree();
    ~Tree();
    bool isEmpty();
    treeNode *SearchTree(int Key);
    int Insert(treeNode *newNode);
    int Insert(int Key, float f, int i, char *cA);
    int Delete(int Key);
    void ClearTree(treeNode *T);
};


#endif
