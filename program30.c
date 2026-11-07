#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30]; 
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter your name :\n");
    scanf("% [^'\n']s",sName);    // enters remains in input buffer 
    
    printf("Enter your age: \n");
    scanf("%d",&iAge);         //we write &iAge it hold address of age

    printf("Enter your marks : \n");
    scanf("%d",&fMarks);

    printf("Welcome %s\n",sName);

    printf("Your age is :%d\n",iAge);

    printf("Your marks is :%d\n",fMarks);


    return EXIT_SUCCESS;
}