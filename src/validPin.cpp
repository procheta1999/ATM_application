#include "../include/validPin.h";
#include <iostream>
#include <string>
using namespace std;
bool validPin(int pin)
{
    if(pin==1234)
    {
        return true;
    }
    else
    {
        return false;
    }
}