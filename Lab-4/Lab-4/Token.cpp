//
//  Token.cpp
//  Lab4
//
//  Created by Bryce Holton.
//

#include "Token.h"

Token::Token()//constructor creates a default token
{
    code = (TokenCode)NULL;
    type = (LiteralType)NULL;
    //literal = NULL;
    tokenString = "";
    
}
Token::~Token()
{
    free(this); //deconstructor frees memory
}
void Token::setCode(TokenCode newCode)//apply code to node
{
    this->code = newCode;
}
TokenCode Token::getCode()//retreive code 
{
    return this->code;
}
void Token::setType(LiteralType newType)//signify the type
{
    this->type = newType;
}
LiteralType Token::getType()//retrieve the type
{
    return this->type;
}
void Token::setLiteral(int newInteger)//fill literal with the passed integer
{
    this->literal.integer = newInteger;
}
int Token::getIntLiteral()//retrieve literal
{
    return this->literal.integer;
}
void Token::setLiteral(float newReal)//set literal with float
{
    this->literal.real = newReal;
}
float Token::getRealLiteral()//retrieve that float literal
{
    return this->literal.real;
}
void Token::setLiteral(string newString)//set literal with string
{
    this->literal.stringLiteral = (char*)malloc(sizeof(char) * newString.length() + 1);
    strcpy(this->literal.stringLiteral, newString.c_str());
}
string Token::getStringLiteral()//get the stringliteral
{
    return string(this->literal.stringLiteral);
}
void Token::setTokenString(string s)//set string
{
    this->tokenString = s;
}
string Token::getTokenString()//get string
{
    return this->tokenString;
}
//What methods am I missing to implement a binary tree.
