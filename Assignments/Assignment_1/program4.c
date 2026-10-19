//Accept one number and check whether it is divisible by 5 or not
#include<stdio.h>
#include<stdlib.h>


typedef int Bool;
#define TRUE 1
#define FALSE 0

Bool Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    Bool bRet = FALSE;
    
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }

    return EXIT_SUCCESS;
}