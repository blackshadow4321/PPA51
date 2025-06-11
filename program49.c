#include<stdio.h>


void SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    printf("Factors of %d are : \n",iNo);

    for(iCnt =1 ; iCnt <iNo;iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            
        }
    }
    return iSum;


}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

   iRet = SumFactors(iValue);

    return 0;
}