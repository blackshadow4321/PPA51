#include<stdio.h>


void Display(int *ptr)
{
    printf("Values of the array are : \n");

    printf("%d\n",*ptr);
    ptr++;
     printf("%d\n",*ptr);
    ptr++;
     printf("%d\n",*ptr);
    ptr++;
     printf("%d\n",*ptr);
    

}

int main()
{
    
    int Arr[4] ;
    int iCnt = 0;
    int iSum = 0;

    printf("Please enter the values :-  \n");

        //  1         2         3
        for(iCnt = 0;iCnt <=3;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);//4
    }
    
    Display(Arr);
    
   
    
    return 0;
}


