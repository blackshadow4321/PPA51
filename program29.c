#include<stdio.h>
void Display(int iFreq)
{
    int iCnt = 0;

     for(iCnt = 1; iCnt <= iFreq; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }

}


int main()
{
    
    int iFrequency = 0;

    printf("enter the frequency : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);
   

   
    return 0;
}