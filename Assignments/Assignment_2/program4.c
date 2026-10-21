// Accept two Numbers from the User and Print and Display first Number in second Number of times 
#include<stdio.h>
#include<stdlib.h>

void  Display(int iNo, int iFrequency)
{
    int iNumber = 0;
    //Updater
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }
    
    for(iNumber = 1; iNumber <= iFrequency; iNumber++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{   
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    printf("Enter Frequency : \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return EXIT_SUCCESS;
}