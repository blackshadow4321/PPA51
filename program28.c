#include<stdio.h>



int main()
{
    int iCnt = 0;
    int iFrequency = 0;

    printf("enter the frequency : \n");
    scanf("%d",&iFrequency);

    if(iCnt <=0 )
    {
       printf("It is invalid frequency..!\n");
    }

    else{

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }

    }

    return 0;
}