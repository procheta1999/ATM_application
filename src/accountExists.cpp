#include "../include/accountExists.h";
#include <iostream>
#include <string>
using namespace std;
bool accountExists(string name)
{
    if(name=="Procheta")
    {
        return true;
    }
    else
    {
        return false;
    }
}