#include<iostream>
using namespace std;
class Car
{
private:
    float mileage;
public:
    float UpdateMileage();
    void setData()
    {
        mileage =18.5;
    }
    void displayData()
    {
        cout<<"Current Mileage: "<<mileage<<endl;
        cout<<"Updated Mileage: "<<UpdateMileage();
    }
};
float car :: UpdateMileage()
{
    return mileage+2;

}
int main()
{
    car c1;
    c1.setData();
    c1.UpdateMileage();
    c1.displayData();
    return 0;
}
