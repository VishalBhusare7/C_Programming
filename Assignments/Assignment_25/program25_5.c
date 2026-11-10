/*
Accept division of student from user and depend on the division display exam timing.
There are 4 divisions in school as A,B,C,D
Exam of Division A at 7AM, B at 8.30AM, c at 9.20AM and d at 10.30AM
(Application Should be case insensitive) 
*/
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: DisplaySchedule
//  Description  : Accept division of student from user and depend on the division display exam timing
//  Input        : Charecter
//  Output       : String
//  Date         : 10/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("Your Exam At 7AM");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Your Exam At 8.30AM");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your Exam At 9.20AM");
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your Exam At 10.30AM");
    }
    else
    {
        printf("Invalid Input");
    }
}

int main()
{
    char cValue = 0;

    printf("Enter Your Division : \n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}