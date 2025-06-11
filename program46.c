#include<stdio.h>
#include<stdbool.h>

bool CheckDivisble(int iNo)
{
   

   if(((iNo % 3 ) == 0) && ((iNo % 5) == 0))
   {
    return true;
   }

   else
   {
    return false;
   }
}
int main()
{

    int iValue = 0;
    bool bFlag = false;


    printf("Enter the Number: \n");
    scanf("%d",&iValue);

    bFlag = CheckDivisble(iValue);

    if(bFlag == true)
    {
        printf("%d is divisible by 3 & 5 \n",iValue);

    }
    
    else
    {
        printf("%d is not divisible by 3 &  5 \n",iValue);
    }


    return 0;
}