#include <iostream>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;



    void initDate()
    {
        day = 01;
        month=01;
        year=1000;

        cout<<"Initial Date is "<<day<<"/"<<month<<"/"<<year<<"\n"<<endl;

    }


    void acceptDateFromConsole()
    {
       cout<<"\nEnter day- "<<endl;
       cin>>day;
       cout<<"Enter month- "<<endl;
       cin>>month;
       cout<<"Enter year- "<<endl;
       cin>>year;
       cout<<endl;

       cout<<"Date - "<<day<<"/"<<month<<"/"<<year<<endl;

    }

    void printDateOnConsole()
    {
        cout<<"Date - "<<day<<"/"<<month<<"/"<<year<<endl;
    }


    bool isLeapYear()
    { 
        
        if( year % 4)
        {    
            return true;
        }
        else
        {
            return false;
        }

    }
};



int main()
{

    struct Date d1;
    int choice = 0;
    bool a;

   do{
    printf("\nEnter 0 for Exit");
    printf("\n------------------------");
    printf("\nEnter 1 for Init_Date");
    printf("\n------------------------");
    printf("\nEnter 2 for Accept_Date");
    printf("\n------------------------");
    printf("\nEnter 3 for Display_Date\n");
    printf("\n------------------------");

    printf("\nEnter 4 for Check_leap_year\n");

    printf("\n------------------------\n");

    scanf("%d", &choice);

    switch(choice)
    {
        case 0:
            printf("\nThank You..\n");
            break;

        case 1:
            d1.initDate();
            break;

        case 2:
            d1.acceptDateFromConsole();
            break;

        case 3:
           d1.printDateOnConsole();
            break;

        case 4:
            a=d1.isLeapYear();
            if(a)
                printf("\nNon-leap year\n");
            else
                printf("\nLeap year\n");
            break;

       default:
            printf("\nWrong choice...\n");
            break;

    }

}while(choice!=0);

    

    return 0;
}
