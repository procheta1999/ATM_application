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
// 			int choice;
//    cout<<"Select from the below choices:"<<endl;
// 	cout<<"1.Check Balanace"<<endl;
// 	cout<<"2.Cash Withdrawl"<<endl;
// 	cout<<"3.Get User Details"<<endl;
// 	cout<<"4.Update Mobile Number"<<endl;
// 	cout<<"5.exit"<<endl;
// 	cin>>choice;
// 		switch (choice)
// 		{
// 		case 1:
// 			account.checkBalance();
// 			break;
// 		case 2:
// 		    long int cash;
// 		    cout<<"Amount you want to withdraw"<<endl;
// 		    cin>>cash;
// 		    account.cashwithdraw(cash);
// 			account.checkBalance();
// 			break;
// 		case 3:
//             account.getUserDetails();
// 			break;
// 		case 4:
// 		    long int mobile_number_new;
// 		    cout<<"Enter mobile number new:"<<endl;
// 			cin>>mobile_number_new;
// 		    account.setMobileNumber(mobile_number_new);
// 			break;	
// 		default:
// 		    exit(0);
// 			break;
// 		}
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
			cout<<"Visit Again.Thank You"<<endl;
			return 0;
		}
	}
	
	
	


}