#include<iostream>
#include<stdlib.h>
#include<cstdio>
#include<cstdlib>
using namespace std;
class casino
{
	public:
    string name;
	int amount;		
	int rupees;
	int number;
	int dice;
	int charge;
	char choice;
	
	public:
	void play()
	{
		cout<<"------------------------------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"    CCCCCCCCCCCCC          AAAAAAAAAAAAAAAAAAA          SSSSSSSSSSSSS   IIIIIIIIIIIII   NNNNNN        NNNN        OOOOOOOOOOO    "<<endl;
		cout<<"CCCCCCCCCC               AAAAAAAAA     AAAAAAAAA        SSSSSS             IIIIIII      NNNNNNNNN     NNNN   OOOOOOO       OOOOOOOO  "<<endl;
		cout<<"CCCCCCCCCC              AAAAAAAAA AAAAAA AAAAAAAA       SSSSSSSSSSSSS      IIIIIII      NNNN   NNNNN  NNNN  OOOOOOOO       OOOOOOOO   "<<endl;
		cout<<"CCCCCCCCCC             AAAAAAAAA           AAAAAAA      SSSSSSSSSSSSS      IIIIIII      NNNN     NNNN NNNN  OOOOOOOO       OOOOOOOO    "<<endl;
		cout<<"CCCCCCCCCC           AAAAAAAAA               AAAAAAA          SSSSSSS      IIIIIII      NNNN      NNNNNNNN    OOOOOOO    OOOOOOOO   "<<endl;
		cout<<"   CCCCCCCCCCCCCC   AAAAAAAAA                 AAAAAAA   SSSSSSSSSSSSS   IIIIIIIIIIIII   NNNN        NNNNNN         OOOOOOOOOO     "<<endl;
		cout<<"-----------------------------------------------------------------------------------------------------------------------------------"<<endl;
	}
	void display()
	{
		cout<<"***************************************************************************************************************************************"<<endl;
	    cout<<"WELCOME WELCOME WELCOME WELCOME WELCOME WELCOME WELCOME WELCOME WELCOME WELCOME WELCOME WELCOME WELCOME WELCOME WELCOME WELCOME WELCOME "<<endl;
	    cout<<endl;
		cout<<"Enter your name:  ";
		cin>>name;
		fflush(stdin);
		cout << "\n\nEnter Deposit amount to play game : $";
         cin >> amount;
		
	}
	void rules()
	{
			system("CLS"); 	
			cout<<endl;
			cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
			cout<<"\n\n\nThe rules of the ganmes  are: "<<endl;
			cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
			cout<<"      1. Choose any numbers between 1 to 10 "<<endl;
			cout<<"      2. if you win you willl get 10 times of the money you bet"<<endl;
			cout<< "      3. if you bet on wrong number you will loose your betting number"<<endl;
			cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			//cout<<"\n Your current balance is $ "<<amount<<endl;
			fflush(stdin);
		    //cout<<name<<", Please enter amount to bet : $";
			//cin>>rupees;
			do
			{
		    //system("cls");
	     	cout<<"Your current balance is "<<amount;
	     	cout<<endl;
	     	cout<<endl;
	    	do
	    	{
	    		cout<<name<<",enter the amount to bet: ";
	    		cin>>rupees;
	    	//	system("cls");
	    		cout<<endl;
	    		if(rupees>amount)
	    		{
	    			cout<<endl;
	    			cout<<"                 Your betting amount is more than your balance  "<<endl;
	    			cout<<endl;
	    			cout<<"                 Re-enter the amount"<<endl;
	    			cout<<endl;
	    			
				}
			}while(rupees>amount);
			
			do
			{
				cout<<"Guess the number between 1 to 10";
				cout<<endl;
				cin>>number;
				cout<<endl;
				if(number<0||number>10)
				{
					cout<<"Please check the number between 1 to 10";
					cout<<endl;
					cout<<"Re- enter the number";
					cout<<endl;
				}
			}while(number<0||number>10);
			
			dice=rand()%10 +1;
			
			 if(dice==number)
			 {
			    cout<<"-----------------------------------------------------------------------------------------------------------------------";
			    cout<<endl;
			 	cout<<"                CONGRATULATIONS !!!! YOU HAVE WON $   "<<rupees*10;
			 	cout<<endl;
			 	cout<<endl;
			 	cout<<"                Your new bank balance is  " << amount +rupees * 10;
			 	cout<<endl;
			 	cout<<"----------------------------------------------------------------------------------------------------------------------";
			 		
			 }
			 else
			 {

			 	cout<<"   OPPPPS !!! You loosse $  " << rupees;
			 	cout<<endl;
			 	cout<<endl;
			 	cout<<"    Your new bank balance is " <<amount-rupees ;
				 cout<<endl;
			 		
		}
			 cout<<"      The winning number was : "<<dice;
			 cout<<endl;
		     cout<<name<<"Your current balance is $ "<<amount<<endl;
			 cout<<endl;
			if(amount==0)
			 {
			 	cout<<"You donot have money to play ";
			 	break;
			 	cout<<endl;
			 }
			 cout<<endl;
			cout<<"Do you want to play again (Y/N) ";
			cin>> choice;
		}while(choice=='y'||choice=='Y');
		cout<<endl;
		cout<<"          !!!    Thanks for playing game !!! "<<endl;
		cout<<endl;
		cout<<"                  You balance is "<< amount-rupees;
		
			
				
}
};
int main()
{
	casino s1;
	s1.play();
	s1.display();
	s1.rules();
	
	return 0;
}
