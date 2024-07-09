#ifndef TOKEN_H_
#define TOKEN_H_

#include <iostream>

using namespace std;

// Class for token
class token
{
private:
    string type; // Type of the token
    string val;  // Value of the token

public:
    void setType(const string &sts); // Set the type of the token
    void setVal(const string &str);  // Set the value of the token
    string getType();                // Get the type of the token
    string getVal();                 // Get the value of the token
    bool operator!=(token t);        // Inequality comparison operator for tokens
};

// Set the type of the token
void token::setType(const string &str)
{
    type = str;
}

// Set the value of the token
void token::setVal(const string &str)
{
    val = str;
}

// Get the type of the token
string token::getType()
{
    return type;
}

// Get the value of the token
string token::getVal()
{
    return val;
}

#endif