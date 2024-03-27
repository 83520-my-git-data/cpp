#include<iostream>
using namespace std;

class Date
{
    private:
    int day;
    int month;
    int year;

    public:
    void acceptDate()
    {
        cout<<"Enter Day   : ";
        cin>>day;
        cout<<"Enter Month : ";
        cin>>month;
        cout<<"Enter Year  : ";
        cin>>year;
    }

    void displayDate()
    {
        cout<<day<<"-"<<month<<"-"<<year<<endl;
    }
    
};

class Person
{
    private:
    string name;
    string address;
    Date birthdate;

    public:
    virtual void acceptData()
    {
        cout<<"Personal Information"<<endl;
        cout<<"Enter Name    : ";
        cin>>name;
        cout<<"Enter Address : ";
        cin>>address;
        cout<<"Birthdate Information"<<endl;
        birthdate.acceptDate();
    }

    virtual void displayData()
    {
        cout<<endl;
        cout<<"PERSON NAME = "<<name<<endl;
        cout<<"ADDRESS     = "<<address<<endl;
        cout<<"BIRTHDATE   = ";
        birthdate.displayDate();
    }
};

class Employee : public Person
{
    private:
    int id;
    string dept;
    double salary;
    Date joinDate;

    public:
    void acceptData()
    {
        Person::acceptData();
        cout<<"Employee Information"<<endl;
        cout<<"Enter ID         : ";
        cin>>id;
        cout<<"Enter Department : ";
        cin>>dept;
        cout<<"Enter Salary     : ";
        cin>>salary;
        cout<<"Joining Date Information"<<endl;
        joinDate.acceptDate();
    }

    void displayData()
    {
        Person::displayData();
        cout<<endl;
        cout<<"EMPLOYEE Id     = "<<id<<endl;
        cout<<"DEPARTMENT      = "<<dept<<endl;
        cout<<"EMPLOYEE SALARY = "<<salary<<"/-"<<endl;
        cout<<"JOINING DATE    = ";
        joinDate.displayDate();
    }
};

int main()
{
    Employee e;
    // here full Data display
    // e.acceptData();
    // e.displayData();

    // w/o virtual keyword --> Early Binding --> Object Slicing
    // with virtual keyword --> Late Binding --> Full Data display
    Person *ptr = new Employee();
    ptr->acceptData();
    ptr->displayData();

    delete ptr;
    ptr =  NULL;

    return 0;
}
