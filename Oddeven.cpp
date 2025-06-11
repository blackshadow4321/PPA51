#include<iostream>
using namespace std;

class Base

{

 void Display(int iNo)
{
    if(iNo%2 == 0 )
    {
        cout<<"It is even Number\n";
    }
    else
    {
        cout<<"It is odd Number";
    }
}
};

int main()
{

Base bobj;
int  iFreq = 0;

cout<<"Enter the Frequency : \n";
cin>>iFreq;

Display(iFreq);

return 0;

}