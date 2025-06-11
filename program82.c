#include<stdio.h>
#include<stdlib.h>

int EvenDisplay (int Arr[],int iSize)
{
    int iCnt = 0;

    printf("Even Elements from the array are:\n");
    
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            printf("%d\n",Arr[iCnt]);
        }
        

        
    }
    
}

int main()
{
    int iLength = 0;
    int *ptr = NULL, iCnt = 0;

   
    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

   
    ptr = (int *)malloc (iLength *sizeof(int));


    printf("Enter the elements :\n");

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
 
     EvenDisplay(ptr,iLength);

   
  
    free(ptr);

    return 0;
}

