#include <stdio.h>

/* Count digits, white space, others */

int main()
{
    int c, whiteSpace, others;
    int numdigits[10];
    whiteSpace = others = 0;
    for(int i = 0; i < 10; ++i)
        numdigits[i] = 0;

    while((c = getchar()) != EOF)
        if(c >= '0' && c <= '9')
            ++numdigits[c - '0'];
        else if(c == '\n' || c == ' ')
            ++whiteSpace;
        else
            ++others;
    
    printf("digits = ");
    for(int i = 0; i < 10; ++i)
        printf(" %d", numdigits[i]);
    printf("\n");

}

/*Questions: why in the book we have to declare the i before the for loop
but we can declare int i inside the loop head in this example.

Answer: Old C compilers require all variable declaration be made before the
for loop, but C99 allows to declare inside the header. */