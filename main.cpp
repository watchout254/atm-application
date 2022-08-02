#include <iostream>
using namespace std;

//create a function 

void showMenu(){
	cout<<"\t\t\t--------------FRADS ATM--------------\n";
	cout<<"\t\tStart-up Menu\n";
	cout<<"\t1.Check Balance\n";
	cout<<"\t2.Deposit money\n";
	cout<<"\t3.Withdraw money\n";
	cout<<"\t4.Exit";
	cout<<"\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
}

int main() {
	
	int choose; //create variable for user to choose
	float balance = 60000;
	
	//invoke the function 
	do{
	showMenu();
	cout<<"Kindly choose an option you want: \n";
	cin>>choose;
	system("cls");
	//user gauges the option and system process it
	switch(choose) {
		case 1:
		cout<<"Your balance is: "<< "KSH\t" << balance;
		break;
		
		case 2:
		cout<<"Deposit amount?: KSH ";
		float depCash;
		cin>> depCash;
		balance += depCash;
		break;
		
		case 3:
		cout<<"Withdraw amount?: KSH ";
		float withCash;
		cin>>withCash;
		
		if(withCash <= balance) {
			balance -= withCash;
		}
		
		else {
			cout<<"Sorry!!!You have insufficient funds";
		}
		
		break;
	}
	} 
	while(choose!=4);
	
	return 0;
}
