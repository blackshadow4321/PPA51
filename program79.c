#include<stdio.h>
#include<stdlib.h>


int main()
{
    int iLength = 0;
    int *ptr = NULL, iCnt = 0;

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