#include<iostream>
using namespace std;

void display(int iNo)
{
    if(iNo %2 == 0)
    {
        cout<<"Even Number\n";
    }
    else
    {
        cout<<"Odd Number\n";
    }
}

int main()
{
    int iFreq = 0;

    cout<<"Enter the Frequency: \n";
    cin>>iFreq;

    display(iFreq);


    return 0;
}