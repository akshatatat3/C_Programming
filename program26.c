#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];       // we can store n-1 character ie means we are not allowed more than 30 char
    printf("Enter your name :\n");
    scanf("% [^'\n']s",sName);        //in previous code we on;y use %s so that in output it print letter till space it not giving output after space 
                                      //% [^'\n']s it print letter After space it may be any no of character 

    printf("Welcome %s\n",sName);


    return EXIT_SUCCESS;
}