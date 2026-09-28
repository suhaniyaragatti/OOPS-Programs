//Finding largest
#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter numbers: "<< endl;
    for (int i=0;i<4;i++)
    {
        cin >> arr[i];
    }
    for (int i=0;i<4;i++)
    {
       cout << arr[i]<<endl;
    }

    int temp;
    for(int i=0;i<4;i++)
    {
        if(arr[i]>arr[i+1])
        {
            temp=arr[i];
        }
    }
    cout<<"Maximum is: " << temp<<endl;
    return 0;
}
