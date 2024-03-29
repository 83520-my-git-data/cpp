#include <iostream>
#include <exception>
using namespace std;

enum EAccountType
{
    
    SAVING=1,
    CURRENT,
    DMAT
};



class InSufficientFundsException
{
private:
    int accNo;
    double currentBalance;
    double withdrawAmount;

public:
    InSufficientFundsException(int accNo, double currentBalance, double withdrawAmount)
    {
        this->accNo = accNo;
        this->currentBalance = currentBalance;
        this->withdrawAmount = withdrawAmount;
    }

    void display()
    {
        cout<<"\nInsufficient Balance "<<endl;
        cout<<"Account Number : "<<accNo<<endl;
        cout<<"Current Balance : "<<currentBalance<<endl;
        cout<<"Withdraw Amount : "<<withdrawAmount<<endl;
        cout<<"***********************************\n";
    }


};













class Account
{

private:
    EAccountType acctype;
    int accNo;
    double balance;
    
    

public:
    
    Account()
    {
        acctype = EAccountType(1);
        accNo = 1000;
        balance = 1000;

    }


    Account( EAccountType acctype, int accNo, double balance)
    {
       
        this->acctype = acctype;
        this->accNo = accNo; 
        this->balance = balance;
    }







    void accept()
    {   
        int num;

        cout<<"\nEnter Account Type : 1 for Savings, Enter 2 for Current, Enter 3 DMAT : ";
        cin>>num;

        acctype = EAccountType(num); 

        cout<<"\nEnter accno : ";
        cin>>accNo;

        cout<<"\nEnter balance : ";
        cin>>balance;  

        Account(acctype, accNo, balance);    
       
    }

    int getBalance()
    {
        return balance;
    }



    int getaccNo()
    {
        return accNo;
    }

    void display()
    {
        cout<<"Account type : "<<acctype<<endl;
        cout<<"Account Number : "<<accNo<<endl;
        cout<<"Balance : "<< balance <<endl;
        cout<<"***********************************\n";
    }

    void display(int accNo)
    {
        
        cout<<"Account type : "<<acctype<<endl;
        cout<<"Account Number : "<<accNo<<endl;
        cout<<"Balance : "<< balance <<endl;
        cout<<"***********************************\n";
    }


    void deposit()
    {
        cout<<"Your balance is - "<<balance<<endl;
        cout<<"Enter amount to deposit - ";
        double amount;
        cin>>amount;
        balance = balance + amount;

        cout<< "current balance - "<<balance <<endl;
        cout<<"***********************************\n";
    }



    void withdraw()
    {

        cout<<"Your balance is - "<<balance<<endl;
        cout<<"Enter amount to withdraw - ";
        double amount;
        cin>>amount;

        if(balance < amount)
            throw InSufficientFundsException(accNo, balance, amount);
        else
            balance = balance - amount;

        cout<< "current balance - "<<balance <<endl;
        cout<<"***********************************\n";
    }
};







int main()
{
    
    Account* arr[5] ;
    int index = 0;
    int num=0;
    double amount=0;

    

    int choice;

    do
    {
        /* code */
        cout<<"Enter 0 for Exit"<<endl;
        cout<<"Enter 1 to create account"<<endl;
        cout<<"Enter 2 for particular account details"<<endl;
        cout<<"Enter 3 to deposit amount "<<endl;
        cout<<"Enter 4 to withdraw amount "<<endl;
        cout<<"Enter 5 to display all accounts "<<endl;
        cin>>choice;



        switch (choice)
        {
        case 0:
            /* code */
            cout<<"Thank You..."<<endl;
            for(int i=0; i<index; i++)
            {
                delete arr[i];
                arr[i] = NULL;
            }

            

            break;

        case 1:
            if(index<5)
            {
                arr[index] = new Account();
                arr[index]->accept();
                index++;
            }
            else{
                cout<<"Array is full....can't accept more account";
            }  

            break;


        case 2:
            cout<<"Enter account number : ";
            cin>>num;
            for(int i=0;i<index;i++)
            if(num == arr[i]->getaccNo())
            {
                arr[i]->display(num);
            }

            break;

            

        case 3:
            

                cout<<"Enter accno -";
                cin>>num;
                for(int i=0;i<index;i++)
                if(num == arr[i]-> getaccNo())
                arr[i]->deposit();
                


            break;


        case 4:
            

                cout<<"Enter accno -";
                cin>>num;
                for(int i=0;i<index;i++)
                if(num == arr[i]->getaccNo())
                try{
                arr[i]->withdraw();
                }
                
                catch(InSufficientFundsException e){
                e.display();
                }

            break;


        case 5:
            for(int i=0; i<index; i++)
                arr[i]->display();
        
            break;



        
        default:
            cout<<"Wrong choice...try again";
            cout<<"***********************************\n";
            break;
        }



    }while(choice!=0);
    

    return 0;
}