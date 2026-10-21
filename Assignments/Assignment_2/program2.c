//Accept one number from the user and print that number of * on screen 
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo > 0)
    {
        printf("*");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}