#include<iostream>
using namespace std;
//The global variables used throughout the program
long float acc_num;
int activity;
int w_opt;
float dep_amnt;
float in;
float bal = 500;
//functions for the working of the ATM
float Welcome();
float menu();
float balance();
float withdraw();
float deposit();
float eject();
int main()
//main
{
	cout << "************************Crytek Holdings; Federation of MARS************************" << endl;
	cout << "****************************Welcome User!**************************" << endl;
	cout << "***********************************************************" << endl;
	cout << "Standing by..." << endl;
	cout << "--INSERT CARD--" << endl;
	system("pause");
	Welcome();
	system("pause");
	return 0;
}
float Welcome()
{
	//Welcome screen which the user is greeted to
	system("cls");
	cout << "***********************************************************" << endl;
	cout << "***********************************************************" << endl;
	cout << "***********************************************************" << endl;
	cout << "Processing Card......Please Wait" << endl;
	cout << endl;
	
	cout << "Card detected! Enter 6 digit PIN..." << endl;
	x:
	cin >> acc_num; 
	if (acc_num < 99999 || acc_num>999999)
	{

		cout << "You entered an invalid PIN" << endl;
		cout<< acc_num << endl;
		cout << "Please re-enter a 6 digit PIN......" << endl;
		goto x;
	}
	cout << "You entered " << acc_num << endl;
	
	cout << "Would you like to Proceed (1) or Re-enter (2)???" << endl;
	cin >> in; 
	system("cls");
	
	menu();
	return 0;
}
float menu() 
{
//main menu 
	do
	{
		system ("cls");
	cout << "Accessing Crytek Holdings Secure Servers............." << endl;
	cout << ".................Access Granted" << endl;
	cout << "******************************************************" << endl;
	cout << "*********************MAIN MENU************************" << endl;
	cout << " 1. CURRENT BALANCE " << endl;
	cout << "***********************************************************" << endl;
	cout << endl;
	cout << "***********************************************************" << endl;
	cout << " 2. WITHDRAW " << endl;
	cout << "***********************************************************" << endl;
	cout << endl;
	cout << "***********************************************************" << endl;
	cout << " 3. DEPOSIT " << endl;
	cout << "***********************************************************" << endl;
	cout << endl;
	cout << "***********************************************************" << endl;
	cout << " 4. EJECT CARD " << endl;
	cout << "***********************************************************" << endl;
	cout << "Please select a banking activity: " << endl;
	cout << endl;
	cin >> activity;
	}
	while (activity < 1 || activity>4);
 switch (activity) 
 { 
 case 1:balance();
 break; 
 case 2:withdraw();
 break; 
 case 3:deposit();
 break;
 case 4:eject();
 }
 return 0;
}
float balance()
//method for balance
{
	system("cls");
	cout<<"\nRetrieving account balance from Crynet Database/User/Personal..."<<endl;
	cout<<"ACCOUNT: "<<acc_num<<endl;
	cout<<"Your balance is  ￥"<<bal<<endl;
	system("pause");
	menu ();
	return 0;
}
float withdraw()
//method for withdrawing 
{
	system("cls");
	do
	{
		cout << "Accessing Crytek Holdings Secure Network........." << endl;
		cout <<".......Access Granted." << endl;
		cout << " Updating databases.....please wait" << endl;
		cout << ".......Databases updated" << endl;
		cout << "******************WITHDRAWALS MENU****************************" << endl;
		cout << "\nPlease select amount you want to withdraw from the listed options(1-6) or select 7. to Return" << endl;
		cout << "\n 1. ￥20 (Twenty Yuan Only)" << endl;
		cout << "\n 2. ￥40 (Forty Yuan Only)" << endl;
		cout << "\n 3. ￥60 (Sixty Yuan Only)" << endl;
		cout << "\n 4. ￥80 (Eighty Yuan Only)" << endl;
		cout << "\n 5. ￥100 (One Hundred Yuan Only)" << endl;
		cout << "\n 6. ￥300 (Three Hundred Yuan Only" << endl;
		cout << "\n 7. ￥500 (Five Hundred Yuan Only)" << endl;
		cout << "\n 8. ￥1000 (One Thousand Yuan Only" << endl;
		cout << "\n 9. CANCEL (Exit & Return to Main Menu)" << endl;
		cout << "\nPlease select amount you want to withdraw from the listed options" << endl;
		cin >> w_opt;
		cout << endl;
	}
	while (w_opt < 1 || w_opt>9); 
	switch (w_opt) 
	{
	case 1:if (bal < 20) 
	{ 
		cout << "\nYou are poor, Sorry. Please try another option." << endl;
		cout << "\nAVAILABLE BALANCE: ￥" << bal << endl; 
		cout << endl;
		system("pause"); 
		 
	}
		   else 
	{
	cout << "\nWithdrawing Twenty Yuan from: \nACCOUNT:" << acc_num << endl;
	bal = bal - 20;
	cout << "New Balance: ￥ " << bal << endl; 
	}
	break; 
	case 2:if (bal < 40) 
	{ 
		cout << "\nYou are poor, Sorry. Please try another option." << endl;
		cout << "\nAVAILABLE BALANCE: ￥" << bal << endl; 
		cout << endl; 
		system("pause"); 
		 
	}
		   else 
	{ 
		cout << "\nWithdrawing Forty Yuan from: \nACCOUNT:" << acc_num << endl;
		bal = bal - 40; 
		cout << "New Balance: ￥ " << bal << endl; 
	}
		   break;
	case 3:if (bal < 60) 
	{ 
		cout << "\nYou are poor, Sorry. Please try another option." << endl;
		cout << "\nAVAILABLE BALANCE: ￥" << bal << endl;
		cout << endl; 
		system("pause");
		 
	}
		   else
	{ 
	cout << "\nWithdrawing Sixty Yuan from: \nACCOUNT:" << acc_num << endl;
	bal = bal - 60;
	cout << "New Balance: ￥ " << bal << endl; 
	}
	break;
	case 4:if (bal < 80) 
	{ 
		cout << "\nYou are poor, Sorry. Please try another option." << endl;
		cout << "\nAVAILABLE BALANCE: ￥" << bal << endl;
		cout << endl;
		system("pause"); 
		 
	}
		   else 
	{ 
	cout << "\nWithdrawing Eighty Yuan from: \nACCOUNT:" << acc_num << endl;
	bal = bal - 80; 
	cout << "New Balance: ￥ " << bal << endl;
	}
	break; 
	case 5:if (bal < 100)
	{ 
		cout << "\nYou are poor, Sorry. Please try another option." << endl; 
		cout << "\nAVAILABLE BALANCE: ￥" << bal << endl; 
		cout << endl; 
		system("pause");
		 
	}
		   else
	{ 
	cout << "\nWithdrawing Hundred Yuan from: \nACCOUNT:" << acc_num << endl;
	bal = bal - 100;
	cout << "New Balance: ￥ " << bal << endl; 
	}
	break; 
	case 6:if (bal < 300) 
	{
		cout << "\nYou are poor, Sorry. Please try another option." << endl;
		cout << "\nAVAILABLE BALANCE: ￥" << bal << endl;
		cout << endl; system("pause"); 
		
	}
		   else 
	{ 
		cout << "\nWithdrawing Hundred Yuan from: \nACCOUNT:" << acc_num << endl;
		bal = bal - 300; 
		cout << "\nNew Balance: ￥ " << bal << endl;
	}
		   break;

	case 7:if (bal < 500)
	{
		cout << "\nYou are poor, Sorry. Please try another option." << endl;
		cout << "\nAVAILABLE BALANCE: ￥" << bal << endl;
		cout << endl;
		system("pause");
		
	}
		   else
	{
		cout << "\nWithdrawing Five Hundred Yuan from: \nACCOUNT:" << acc_num << endl;
		bal = bal - 500;
		cout << "New Balance: ￥ " << bal << endl;
	}
		   break;

	case 8:if (bal < 1000)
	{
		cout << "\nYou are poor, Sorry. Please try another option" << endl;
		cout << "\nAVAILABLE BALANCE: ￥" << bal << endl;
		cout << endl;
		system("pause");
		
	}
		   else
	{
		cout << "\nWithdrawing One Thousand Yuan from: \nAccount: " << acc_num << endl;
		bal = bal - 1000;
		cout << "New Balance: ￥ " << bal << endl;
	}
		   break;


	case 9:
		cout << "\nEXITING WITHDRAWAL MENU..." << endl;
		cout << "\nReturning to Main Menu..." << endl; 
		cout << "\nPlease wait..." << endl; 
		system("pause"); 
		system("cls");
		menu(); 
		break;
	}
	cout << "NOTE:\nPLEASE CHECK & SECURE YOUR MONEY BEFORE LEAVING ATM COUNTER AND MAKE SURE TO TAKE YOUR CARD ONCE EJECTED." << endl;
	system("pause");
	menu(); 
	return 0; 
}
float deposit()
//method for deposits 
{
	system("cls");
	cout<<"Accessing Crytek Holdings Secure Network....."<<endl;
	cout<<".......Access Granted. Databases updated."<<endl;
	cout<<"***********************************************************"<<endl;
	cout<<"\nEnter the amount you would like to deposit.\nTHANK YOU."<<endl;
	cout<<"\nAMOUNT: "<<endl;
	cin>>dep_amnt;
	system("pause");
	cout<<"\n>> Please wait while funds are verified..."<<endl;
	cout<<"\n>> Total Deposit Amount Entered: "<<dep_amnt<<endl;
	cout<<"\n>> Total Verified Amount: "<<dep_amnt<<endl;bal= bal+(dep_amnt);
	cout<<"\nDepositing ￥"<<dep_amnt<<" to:\nACCOUNT: "<<acc_num<<endl;
	cout<<"\nNEW BALANCE: ￥"<<bal<<endl;
	cout<<"\nThank you!"<<endl;
	cout<<endl;
	system("pause");
	menu ();
	return 0;
}
float eject()
//method for ejecting 
{
	system("cls");
	cout<<"*********************¯\_(ツ)_/¯**********************"<<endl;
	cout<<"*****************************************************"<<endl;
	cout<<"*********************┌( ಠ_ಠ)┘*****************************"<<endl;
	cout<<"\nCard ejecting..."<<endl;
	cout<<"\nPlease wait..."<<endl;
	cout<<"\nCard ejected!"<<endl;
	cout<<"\nThank you for choosing Crytek Holdings. May the odds be ever in your favour."<<endl;
	cout<<"\nPlease make sure to take your card, your money and your belongings. We shall not be responsible."<<endl;
	cout<<endl;
	system("pause");
	system("cls");
	main ();
	return 0;
}



//Project completed by 萨合，阿萨德，文书，万踏法，坦维尔
