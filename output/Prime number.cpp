#include<iostream>
using namespace std;

class Box
{
double width;
public:
friend void printWidth(Box box);
void setWidth(double wid);
};

void Box :: setWidth(double wid) //Member function definition
{
width = wid;
//printwidth() is a friend of Box
}

void printWidth(Box box)
{
cout<<"Width of box: "<<box.width<<endl;
}

int main()
{
Box box;
box.setWidth(10.0);
printWidth( box);
return 0;
}