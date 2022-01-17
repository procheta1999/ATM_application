#ifndef BANK
#define BANK
#include <iostream>
#include <string>
using namespace std;
class Bank
{
  private:
  string name;
  long int account_number;
  int pin;
  long int balance;
  long int mobile_number;
  public:
  Bank();
  Bank(string arg_name,long int arg_account_number,int arg_pin,long int arg_balance,long int arg_mobile_number);
bool CheckCredentials(long int input_acc_no,int input_pin);
  void checkBalance();
  void cashwithdraw(long int deduction);
  void getUserDetails();
  void setMobileNumber(long int updated_mobile_number);
  // {
  //   cout<<"Your balance is: "<<balance<<endl;
  // }
};
#endif