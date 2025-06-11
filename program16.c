
/*
START 
        accept the percentage from user
        if the percentage are less than 40 then display FAIL
        and if it is greater than or equal to 40 then display PASS
STOP
*/

#include<stdio.h>

void DisplayResult(float fPercentage)
{
    
    if(fPercentage > 100.0f)
    {
        printf("Invalid percentage.please enter in the range of 0 to 100");
        
    }
    if(fPercentage >= 40.00f)
    {
        printf("You are PASS\n");
    }

    else
    {
        printf("you are FAIL\n");
    }
}
int main()
{
    float fValue =0.0f;

    printf("Enter your percentage :-");
    scanf("%f",&fValue);

    DisplayResult(fValue);

    return 0;

}