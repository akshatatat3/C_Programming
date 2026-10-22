/*
   Input : 12   5
   Output : 12  12  12  12  12 
*/
#include<stdio.h>

void Display(int iNo , int ifrequency)
{
    int iCnt = 0;

    // write updater

    for(iCnt = 1; iCnt <= ifrequency; iCnt++ )
    {
        printf("%d",iNo);
    }
    
}

int main()
{
    int iValue = 0;
    int iCount = 0;
    
    printf("Enter the number :");
    scanf("%d",&iValue);

    printf("Enter the frequency :");
    scanf("%D",&iCount);

    Display(iValue , iCount);
   
    return 0;
}