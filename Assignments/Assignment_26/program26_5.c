//Accept charecter from user and display it's ASCII value in decimal, octal and hexadecimal format.
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Accept charecter from user and display it's ASCII value in decimal, octal and hexadecimal format.
//  Input        : Charecter
//  Output       : Decimal , Octal , Hexadecimal
//  Date         : 11/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        printf("Decimal : %d\n",ch);
        printf("Octal : %o\n",ch);
        printf("Hexadecimal %x\n",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the Charecter : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}