/*
    START
        Accept the total marks
        Accept the obtained marks
        Calculate the percentage as (obtained/ total) *100
        Display the calculated percentage
    STOP    

*/


#include<stdio.h>

float CalculatePercentage(int iTmarks,int iOmarks)
{
     float  iAns = 0.0f;
    iAns = ((float)iOmarks/(float)iTmarks) * 100;
    return iAns;
}
int main()
{
    int iValue1 = 0 , iValue2 = 0 ; 
    float iResult = 0.0f;
    

    printf("Enter the total marks\n");
    scanf("%d",&iValue1);

    printf("Enter the obtained marks\n");
    scanf("%d",&iValue2); 

    iResult = CalculatePercentage(iValue1,iValue2);

    printf("Calculated percentage is : %f\n",iResult);

    return 0;
}