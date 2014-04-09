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
#include "LinkedList.h"
#include "Print.h"


struct treeNode
{
    Token *data;
    LinkedList *head;
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
    void addNode(Token *newToken, int scannerLineNum);
    void recursivePrintTree(treeNode *T, Print &print);
    treeNode* getRoot();
    void addLineNum(LinkedList *lineNum, int Num);
};


#endif
