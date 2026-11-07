#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];       // we can store n-1 character ie means we are not allowed more than 30 char
    printf("Enter your name :\n");
    scanf("%s",sName);

    printf("Welcome %s\n",sName);


    return EXIT_SUCCESS;
}