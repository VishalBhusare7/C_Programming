/*
Accept a year and determine whether it is a leap year according to gregorian calender rules.
A year is a leap year if it is divisible by 400 or divisible by 4 but not by 100.
Consider years less than or equal to zero invalid.
*/
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CheckLeapYear
//  Description  : Accept a year and determine whether it is a leap year according to gregorian calender rules
//  Input        : Integer 
//  Output       : String
//  Date         : 21/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////

void CheckLeapYear(int iNo)
{
    if(iNo <= 0)
    {
        printf("Invalid Year");
        return;
    }
    else if(((iNo % 400) == 0) || ((iNo % 4) == 0) && ((iNo % 100) != 0))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter Year : \n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}