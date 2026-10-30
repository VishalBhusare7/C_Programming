//Accept single digit number from user and print it into word
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Accept single digit number from user and print it into word
//  Input        : Integer
//  Output       : String
//  Date         : 30/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0 )            //Updater
    {
        iNo = -iNo;
    }

    switch (iNo)
    {
    case 0:
        printf("Zero \n");
        break;
    case 1:
        printf("One \n");
        break;
    case 2:
        printf("Two \n");
        break;
    case 3:
        printf("Three \n");
        break;
    case 4:
        printf("Four \n");
        break;
    case 5:
        printf("Five \n");
        break;
    case 6:
        printf("Six \n");
        break;
    case 7:
        printf("Seven \n");
        break;
    case 8:
        printf("Eight \n");
        break;
    case 9:
        printf("Nine \n");
        break;
    default:
        printf("Invalid Number \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}