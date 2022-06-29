#include <stdio.h>

int main()
{
    double numChar;

    for(numChar=0; getchar() != EOF; ++numChar)  //null statement
        ;                                        //do not have the body
    
    printf("%.0f\n", numChar); //%f for double and float
}hh