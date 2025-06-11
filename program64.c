#include<stdio.h>

int main()
{
    
    int Arr[4] ;
    int iCnt = 0;

    printf("Please enter the values :-  \n");

    scanf("%d\n",&Arr[0]);
    scanf("%d\n",&Arr[1]);
    scanf("%d\n",&Arr[2]);
    scanf("%d\n",&Arr[3]);

    
  
    printf("Values from the array are :\n");

    for(iCnt = 0; iCnt <=3;iCnt ++)
    {
        printf(" %d\n",Arr[iCnt]);
    }

    
   
    
    return 0;
}


