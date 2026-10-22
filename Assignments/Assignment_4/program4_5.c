//Accept an integer and determine whether it is divisible by 5 without leaving any remainder
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CheckDivisibility
//  Description  : Accept an integer and determine whether it is divisible by 5 without leaving any remainder
//  Input        : Integer
//  Output       : String
//  Date         : 20/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////

void CheckDivisibility(int iNo)
{
    if((iNo % 5) == 0 )
    {
        printf("Divisible by 5 \n");
    }
    else
    {
        printf("Not Divisible by 5 \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}