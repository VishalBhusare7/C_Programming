/*
    Accept a charecter from user.
    if charecter is small display its corresponding capital charecter,
    and if it capital then display its corresponding small small.
    in other cases display as it is.
*/
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Accept charecter from user if it's small return the capital & if capital return small charecter
//  Input        : Charecter
//  Output       : Charecter
//  Date         : 11/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch += 32;
        printf("%c",ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        ch -= 32;
        printf("%c",ch);
    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter The Charecter : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}