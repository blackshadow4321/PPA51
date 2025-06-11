#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//function Name : Addition 
// Description: It is used to perform addition of 2 float values
// input : float , float 
//  Author :     Aniruddha somnath fase 
// date :   06/10/2024
//
/////////////////////////////////////////////////////////////////////////

float Addition(float fValue1, float fValue2)
{
    float fAdd = 0.0f;    
    
    if(fValue1 < 0.0f)
    {
        fValue1 = -fValue1;

    }  

     if(fValue2 < 0.0f)
    {
        fValue2 = -fValue2;

    } 
                //local variables for input 
    fAdd = fValue1 + fValue2;   //Bussiness Logic
    return fAdd;
}

/////////////////////////////////////////////////////////////////////////
//
// this application is used to perform addition of 2 numbers 
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    float fNo1 = 0.0f; float fNo2 = 0.0f; float fAns = 0.0f; // Local Variable for input

    printf("Enter first number :- \n");
    scanf("%f",&fNo1);

    printf("Enter second number :- \n");
    scanf("%f",&fNo2);

    fAns = Addition(fNo1,fNo2);

    printf("Addition is :-  %f\n",fAns);

    return 0;
}

/*
     Step 5 : Test the code

    TestCase 1
     enter the first Number:

*/