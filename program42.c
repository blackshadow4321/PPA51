#include<stdio.h>

void Display(int iNo)
{

    int iNo1 = 0;

    for(int iCnt =1 ; iNo1<=10;i++)
    {
        printf("%d\n",iNo1);                       
    }

}
int main()
{

    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);


    Display(iValue);

    return 0;
}