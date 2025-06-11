#include<iostream>
using namespace std;
class Base 
{   
    public:
    int iCnt= 0 ,  iFreq = 0;;

    void Display()
    {
      iCnt =1;
      while(iCnt <= iFreq)
      {
        printf("%d Jay Ganesh\n",iCnt);
        iCnt ++;
      }
    }
};
int main()
{
    
    Base Bobj;
    

    cout<<"Enter the Frequency: \n";
    cin>>Bobj.iFreq;

    Bobj.Display();

    return 0;
}