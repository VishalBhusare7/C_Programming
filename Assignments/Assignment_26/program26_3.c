/*
    Accept charecter from user.
    if it is capital then display all the charecters from the input till Z.
    if input charecter is small then print all the charecters in reverse order till a.
    in other cases return directly.
*/
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Accept charecter from user if it's capital return till Z and if small return till a else return directly
//  Input        : Charecter
//  Output       : Charecters
//  Date         : 11/11/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        while (ch <= 'Z')
        {
            printf("%c\t",ch);
            ch++;
        }
        
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        while(ch >= 'a')
        {
            printf("%c\t",ch);
            ch--;
        }
    }
    else
    {
        return;
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