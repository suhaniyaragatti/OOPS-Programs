//Lenght of String without lenght()
#include<iostream>

using namespace std;
int main()
{
    int count =0;

    char str[]="Hellohsis";
    for(int i=0;i<10;i++)
    {
        if(str[i]!='\0')
        {
            count =count +1;
        }
    }
    cout<< "lenght is: "<< count<< endl;
    return 0;
}
