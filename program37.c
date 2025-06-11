#include<stdio.h>

void display(int iNo)
{
    
    int iCnt = 0;

    iCnt = 1; // reinitialised
    while(iCnt <= iNo )
    {
        printf("%d Jay Ganesh...\n",iCnt);
        iCnt++;
    } 
}
int main()
{
    
    int iFreq = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iFreq);
    
    display(iFreq);

    
    return 0;
}