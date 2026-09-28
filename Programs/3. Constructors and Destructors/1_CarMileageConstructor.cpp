#include<iostream>
using namespace std;
class car
{
private:
    float mileage;
public:
    car()//same name as class
    {
        cout<<"Enter mileage:";
        cin>>mileage;
    }
    void display()
    {
        cout<<"Mileage:"<<mileage<<endl;
    }
};
int main()
{
    car c1,c2;//called automatically
    c1.display();
    c2.display();
}
