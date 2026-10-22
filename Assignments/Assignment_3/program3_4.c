//Accept one Charecter from user and convert case of that Charecter
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: DisplayConvert
//  Description  : Accept one Charecter from user and convert case of that Charecter
//  Input        : Charecter
//  Output       : Charecter
//  Date         : 19/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////

void DisplayConvert(char CValue)
{
    if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c\n",CValue + 32);
    }
    else if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c\n",CValue - 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Charecter : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}