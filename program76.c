#include<stdio.h>
#include<stdlib.h>

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

     printf("elements of the array elements :\n");

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }


    
    free(ptr);

    return 0;
}