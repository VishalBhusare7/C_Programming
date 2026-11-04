//Write a program which accept name from user and print that name 
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: main
//  Description  : accept name from user and print that name
//  Input        : String
//  Output       : String
//  Date         : 04/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Name[30];

    printf("Enter Your Full Name : \n");
    scanf("%[^'\n']s",&Name);

    printf("Your Name Is : %s",Name);

    return EXIT_SUCCESS;
}