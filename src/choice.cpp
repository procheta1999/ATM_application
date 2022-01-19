#include "../include/bank.h"
#include "../include/choice.h"
#include <iostream>
#include <string>
void selectChoice(Bank &account)
{
    int choice;
   cout<<"Select from the below choices:"<<endl;
	cout<<"1.Check Balanace"<<endl;
	cout<<"2.Cash Withdrawl"<<endl;
	cout<<"3.Get User Details"<<endl;
	cout<<"4.Update Mobile Number"<<endl;
	cout<<"5.exit"<<endl;
	cin>>choice;
		switch (choice)
		{
		case 1:
			account.checkBalance();
			break;
		case 2:
		    long int cash;
		    cout<<"Amount you want to withdraw"<<endl;
		    cin>>cash;
		    account.cashwithdraw(cash);
			account.checkBalance();
			break;
		case 3:
            account.getUserDetails();
			break;
		case 4:
		    long int mobile_number_new;
		    cout<<"Enter mobile number new:"<<endl;
			cin>>mobile_number_new;
		    account.setMobileNumber(mobile_number_new);
			break;	
		default:
		    exit(0);
			break;
		}
}