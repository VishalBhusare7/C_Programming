/*
Write a program which accept number from user and if number is less than 50 then print small,
if it is greater than 50 and less than 100 print medium,
if it is greater than 100 then print large.
*/
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: Number
//  Description  : if number is < 50 then print small,if 50 > 100 print Medium, if 100 < print large
//  Input        : Integer
//  Output       : String
//  Date         : 30/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo <= 0)                        //Filter
    {
        printf("Invalid Input \n");
        return;
    }

    if(iNo <= 50)
    {
        printf("Small \n");
    }
    else if((iNo > 50) && (iNo <= 100))
    {
        printf("Medium \n");
    }
    else 
    {
        printf("Large \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}