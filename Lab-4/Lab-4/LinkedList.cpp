//
//  LinkedList.cpp
//  Lab-4
//
//  Created by Maxx Rodriguez on 4/8/14.
//  Copyright (c) 2014 Maxx Rodriguez. All rights reserved.
//

#include "LinkedList.h"

LinkedList::LinkedList()//constructor
{
    next = NULL;
}
LinkedList::~LinkedList()//deconstructor
{
    delete this;
}
int LinkedList::getLineNum()//return line number
{
    return this->lineNum;
}
LinkedList* LinkedList::getNext()//return the next node in list
{
    return this->next;
}
void LinkedList::setNext(LinkedList* newNext)//set the next node in the list
{
    this->next = newNext;
}
void LinkedList::setLineNum(int num)//assign line number
{
    this->lineNum = num;
}
