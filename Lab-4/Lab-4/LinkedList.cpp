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
    next = NULL;
}
LinkedList::~LinkedList()
{
    delete this;
}
int LinkedList::getLineNum()
{
    return this->lineNum;
}
LinkedList* LinkedList::getNext()
{
    return this->next;
}
void LinkedList::setNext(LinkedList* newNext)
{
    this->next = newNext;
}
void LinkedList::setLineNum(int num)
{
    this->lineNum = num;
}