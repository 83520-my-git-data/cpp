#include <stdio.h>

struct Date
{
    
    int day;
    int month;
    int year;

};
    
    void initDate(struct Date *ptrDate)
    {
        ptrDate->day = 01;
        ptrDate->month = 01;
        ptrDate->year = 1000;

        printf("initial date is - %d/%d/%d", ptrDate->day, ptrDate->month, ptrDate->year);
        printf("\n------------------------\n");
    }

    void acceptDateFromConsole(struct Date *ptrDate)
    {
        printf("Enter day, month, year - ");
        scanf("%d%d%d", &ptrDate->day, &ptrDate->month, &ptrDate->year);
        printf("\n------------------------\n");

    };

    void printDateOnConsole(struct Date *ptrDate)
    {

        printf("Date- %d/%d/%d", ptrDate->day, ptrDate->month, ptrDate->year);
        printf("\n------------------------\n");
    };






int main()
{
    int choice = 0;
    struct Date d1;


do{
    printf("\nEnter 0 for Exit");
    printf("\n------------------------");
    printf("\nEnter 1 for Init_Date");
    printf("\n------------------------");
    printf("\nEnter 2 for Accept_Date");
    printf("\n------------------------");
    printf("\nEnter 3 for Display_Date\n");
    printf("\n------------------------\n");

    scanf("%d", &choice);


    switch(choice)
    {
        case 0:
            printf("\nThank You..\n");
            break;

        case 1:
            initDate(&d1);
            break;

        case 2:
            acceptDateFromConsole(&d1);
            break;

        case 3:
           printDateOnConsole(&d1);
            break;

        default:
            printf("\nWrong choice...\n");
            break;

    }
}while(choice!=0);

    

    return 0;
}