#include"Header.h"  //it include both header file stdio.h , stdlib.h

#include<assert.h>  // used for testing

int main()
{
    assert(Addition(10,11) == 22);

    assert(Addition(-10,20) == 21);

    assert(Addition(-10,-20) == 21);

    return EXIT_SUCCESS;
}