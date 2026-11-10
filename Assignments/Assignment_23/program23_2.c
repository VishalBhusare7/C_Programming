//Write a program which accept string from user and convert it into upper case
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: struprx
//  Description  : program which accept string from user and convert it into upper case
//  Input        : String
//  Output       : Charecter Array
//  Date         : 09/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void struprx(char *str)
{
    while (*str != '\0')
    {
        if(*str > 96 && *str < 123)
        {
            *str = *str - 32;
            str++;
        }
        else
        {
            str++;
        }
    } 
}

int main()
{
    char Arr[20];

    printf("Enter Your String : \n");
    scanf("%[^'\n']s",&Arr);

    struprx(Arr);

    printf("Modified String is : %s",Arr);

    return EXIT_SUCCESS;
}

