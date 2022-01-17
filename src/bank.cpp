#include "../include/bank.h"
#include <iostream>
#include <string>
using namespace std;
Bank::Bank()
{
    name="Procheta";
    account_number=23456789;
    pin=1234;
    balance=11111;
    mobile_number=24381301;
}
Bank::Bank(string arg_name,long int arg_account_number,int arg_pin,long int arg_balance,long int arg_mobile_number)
{
    name=arg_name;
    account_number=arg_account_number;
    pin=arg_pin;
    balance=arg_balance;
    mobile_number=arg_mobile_number;
}
bool Bank::CheckCredentials(long int input_acc_no,int input_pin)
{
    if(account_number==input_acc_no && pin==input_pin)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Bank::checkBalance()
{
    cout<<"Your balance is "<<balance<<endl;
}
void Bank::cashwithdraw(long int deduction)
{
    balance=balance-deduction;
}
void Bank::getUserDetails()
{
    cout<<"Hello "<<name<<" your account number is "<<account_number<<" and your PIN is "<<pin<<" .You have a balance of "<<balance<<" . Your mobile number is "<<mobile_number<<" ."<<endl;
}
void Bank::setMobileNumber(long int updated_mobile_number)
{
    mobile_number=updated_mobile_number;
}
