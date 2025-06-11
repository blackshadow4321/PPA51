#include<iostream>

void display(int iNo)
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
int main()
{

int  iFreq = 0;

cout<<"Enter the Frequency : \n";
cin>>iFreq;

display(iFreq);

}