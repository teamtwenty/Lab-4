//
//  LinkedList.cpp
//  Lab-4
//
//  Created by Maxx Rodriguez on 4/8/14.
//  Copyright (c) 2014 Maxx Rodriguez. All rights reserved.
//

#include "LinkedList.h"

LinkedList::LinkedList()
{
    node = NULL;
}
LinkedList::~LinkedList()
{
    delete this;
}
int LinkedList::getLineNum()
{
    return this->lineNum;
}
void LinkedList::setLineNum(int num)
{
    this->lineNum = num;
}