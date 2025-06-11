#include<stdio.h>

void DisplayTimetable(int iStd)
{
    
    if(iStd == 8)
    {
        printf("Your Exam is at 9.30 AM\n");
    }

    else if(iStd == 9)
    {
        printf("Your Exam is at 10.30 AM\n");
    }
    else if(iStd == 10)
    {
        printf("Your Exam is at 11.30 AM\n");
    }
    else
    {
        printf("Sorry we dont have that information about your standard...\n");
    }


}
int main()
{
    int iValue =0 ;

    printf("Please enter your Standard : \n");
    scanf("%d",&iValue);

    DisplayTimetable(iValue);
    return 0;
}