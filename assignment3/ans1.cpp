#include<iostream>
using namespace std;

class Cylinder
{
    private:
    double radius;
    double height;
    double volume;
    static const double PI;

    public:
    Cylinder()
    {
        radius = 5.5;
        height = 7;
    }

    // Initialize members using constructor member initializer list.
    Cylinder(double radius):height(8)
    {
        this->radius = radius;
    }

    Cylinder(double radius, double height)
    {
        this->radius = radius;
        this->height = height;
    }

    double getRadius()
    {
        return radius;
    }

    void setRadius(double r)
    {
        radius = r;
    }

    double getHeight()
    {
        return height;
    }

    void setHeight(double h)
    {
        height = h;
    }
    
    double getVolume()
    {
        return volume;
    }

    void printVolume()
    {
        volume = 3.14 * radius * radius * height;
        cout<<"Volume Of Cylinder = "<<volume<<endl<<endl;
    }
};
const double Cylinder::PI = 3.14;


int main()
{
    Cylinder c;
    c.printVolume();

    Cylinder b(6,11);
    b.printVolume();

    Cylinder a(9);
    a.printVolume();

    cout<<a.getRadius()<<endl;
    a.setRadius(7);

    cout<<a.getHeight()<<endl;
    a.setHeight(10);

    cout<<a.getVolume()<<endl;
    a.printVolume();

    return 0;
}
