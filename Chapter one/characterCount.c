#include <stdio.h>

int main()
{
    long numChar;
    numChar = 0;

    while(getchar() != EOF)
        ++numChar;
    printf("%ld\n", numChar); //ld for long
}