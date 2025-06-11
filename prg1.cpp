#include<iostream>
using namespace std;

class Base 

{   
    public:
    int iCnt= 0 ,  iFreq = 0;;

 

    void Display(int iNo)
    {
        
        
        for(iCnt = 1;iCnt<=iNo;iCnt++)
        {
            cout<<"%d Jay Ganesh.... \n",iCnt;
        }
    }
};

int main()
{
    
    Base Bobj;
    

    cout<<"Enter the Frequency: \n";
    cin>>Bobj.iFreq;

    Bobj.Display(Bobj.iFreq);

    return 0;
}