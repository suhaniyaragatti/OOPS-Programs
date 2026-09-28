//Swapping numbers using pass by value, pass by reference and pass by pointers
#include<iostream>
using namespace std;
void value(int a, int b);
void reference1(int &a, int &b);
void point(int *a, int *b);
int main()
{
    int x=9;
    int y=10;
    //value(x,y);
    reference1(x,y);
    cout << "before swapping: "<<x<<endl;
    cout << "before swapping: "<<y<<endl;
}
void value(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;
    cout << "after swapping: "<<a<<endl;
    cout << "after swapping: "<<b<<endl;

}
void reference1(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
    cout << "after swapping: "<<a<<endl;
    cout << "after swapping: "<<b<<endl;
}
