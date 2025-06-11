/*


*/
#include<stdio.h>

void DisplayTimetable(int iStd)
{
   switch(iStd)
   {
    case 8:
        printf("Your exam is at 9:30\n");
        break;
        
    case 9:
        printf("Your exam is at 10:30\n");
        break;

    case 10:
        printf("your exam is at 11.30\n");
        break;

        default :
        printf("Sorry we dont have that information about your standard\n");
        break;  //formality 
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