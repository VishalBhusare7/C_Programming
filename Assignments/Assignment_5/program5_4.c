//Accept an integer and determine whether it is divisible by 3 and 5, only 3, only 5 or neither.
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CheckMultipleDivisibility
//  Description  : Accept an integer and determine whether it is divisible by 3 and 5, only 3, only 5 or neither.
//  Input        : Integer
//  Output       : String
//  Date         : 21/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////

void CheckMultipleDivisibility(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        printf("Divisible by Both \n");
    }
    else if((iNo % 3) == 0)
    {
        printf("Divisible by 3 only \n");
    }
    else if((iNo % 5) == 0)
    {
        printf("Divisible by 5 only \n");
    }
    else
    {
        printf("Not Divisible by Either");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}