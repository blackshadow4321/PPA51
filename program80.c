#include<stdio.h>
#include<stdlib.h>

int Addition (int Arr[],int iSize)
{
    int iSum = 0,iCnt = 0;
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int iLength = 0;
    int *ptr = NULL, iCnt = 0,iRet = 0;

    //Step 1: Accept the  number of elements from user
    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    //Step 2: Allocate that memory dynamically
    ptr = (int *)malloc (iLength *sizeof(int));


    printf("Enter the elements :\n");

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
   // Step 4: Perform the operations

    //Step 5:Deallocate memory
iRet = Addition(ptr,iLength);
printf("Addition is :%d\n",iRet);
  
    free(ptr);

    return 0;
}

/*
    Step 1: Accept the  number of elements from user
    Step 2: Allocate that memory dynamically
    Step 1: Accept the  number of elements from user
    Step 4: Perform the operations
    Step 5:Deallocate memory
*/