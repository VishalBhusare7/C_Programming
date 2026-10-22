/*
Accept a single Charecter and determine whether it is an Uppercase alphabet, lowercase alphabet, digit or special charecter.
use charecter comparison without using library charecter-classification function.
*/
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CheckCharecterType
//  Description  : Accept a single Charecter and determine whether it is an Uppercase alphabet, lowercase alphabet, digit or special charecter
//  Input        : Charecter
//  Output       : String
//  Date         : 21/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////

void CheckCharecterType(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Uppercase Alphabet \n");
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Lowercase Alphabet \n");
    }
    else if((cValue >= '0') && (cValue <= '9'))
    {
        printf("Digit \n");
    }
    else
    {
        printf("Special Charecter \n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Charecter : \n");
    scanf("%c",&cValue);

    CheckCharecterType(cValue);

    return EXIT_SUCCESS;
}