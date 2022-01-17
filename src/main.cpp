#include "../include/bank.h"
#include "../include/choice.h"
#include "../include/accountExists.h"
#include "../include/validPin.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	// std::cout << "Hello world!" << std::endl;
	string name;
	long int account_number;
	int pin;
	long int balance;
	long int mobile_number;
	bool status=false;
	cout<<"Welcome.Please enter your name"<<endl;
	cin>>name;
	if(accountExists(name))
	{
		cout<<"Please enter your pin"<<endl;
		cin>>pin;
		if(validPin(pin))
	{
		cout<<"Welcome "<<name<<endl;
	}
	else
	{
		cout<<"Invalid PIN"<<endl;
		return 0;
	}
		Bank account;
		account.getUserDetails();
		while(true)
		{
			selectChoice(account);
		}
	
	}
	else
	{
		cout<<"Account doesn't exist."<<endl;
	 string response;
		cout<<"Do you want to create account?Yes/No"<<endl;
		cin>>response;
		if(response=="yes" || response=="Yes")
		
		{
			status=true;
			cout<<"Account Number: "<<endl;
			cin>>account_number;
			cout<<"PIN: "<<endl;
			cin>>pin;
			cout<<"Deposit money: "<<endl;
			cin>>balance;
			cout<<"Mobile Number: "<<endl;
			cin>>mobile_number;
			Bank NewAccount(name,account_number,pin,balance,mobile_number);
			NewAccount.getUserDetails();
			while(true)
		{
			selectChoice(NewAccount);
		}
			
		}
		else
		
		{
			cout<<"Visit Again."<<endl;
			return 0;
		}
	}
	
	
	


}