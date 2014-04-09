//
//  LinkedList.h
//  Lab-4
//
//  Created by Maxx Rodriguez on 4/8/14.
//  Copyright (c) 2014 Maxx Rodriguez. All rights reserved.
//

#ifndef __Lab_4__LinkedList__
#define __Lab_4__LinkedList__

#include <iostream>
#include "common.h"
#include "Token.h"

class LinkedList
{

private:
    int lineNum;
    LinkedList *node;

public:
    LinkedList();
    ~LinkedList();
    int getLineNum();
    void setLineNum(int line);
};




#endif /* defined(__Lab_4__LinkedList__) */
