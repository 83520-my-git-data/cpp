#include <iostream>
using namespace std;

class StudentDetails
{
private:
    int rollno;
    string name;
    float marks;

public:

    void initStudent()
    {
        rollno = 00;
        name = "xyz";
        marks = 0.0;

        cout<<"Rollno- "<<rollno<<"\n"<<"Name- "<<name<<"\n"<<"Marks- "<<marks<<"\n"<<endl;
    }


    void acceptStudentFromConsole()
    {
        cout<<"Rollno - "<<endl;
        cin>>rollno;
        cout<<"Name - "<<endl;
        cin>>name;
        cout<<"Marks - "<<endl;
        cin>>marks;
        cout<<"\n";

        cout<<"Rollno- "<<rollno<<"\n"<<"Name- "<<name<<"\n"<<"Marks- "<<marks<<"\n"<<endl;

    }


    void printStudentOnConsole()
    {   
        
        cout<<"Rollno - "<<rollno<<"\n"<<"Name - "<<name<<"\n"<<"Marks - "<<marks<<"\n"<<endl;
        
    }


};



int main()
{
    StudentDetails s;

    int choice = 0;

  

    do{
    printf("\nEnter 0 for Exit");
    printf("\n------------------------");
    printf("\nEnter 1 for Init_Student");
    printf("\n------------------------");
    printf("\nEnter 2 for Accept_Student_Details");
    printf("\n------------------------");
    printf("\nEnter 3 for Display_Student_Details\n");
    printf("------------------------\n");

    scanf("%d", &choice);


    switch(choice)
    {
        case 0:
            printf("\nThank You..\n");
            break;

        case 1:
            s.initStudent();
            break;

        case 2:
            s.acceptStudentFromConsole();
            break;

        case 3:
            s.printStudentOnConsole();
            break;

       default:
            printf("\nWrong choice...\n");
            break;

    }

}while(choice!=0);



    return 0;
}