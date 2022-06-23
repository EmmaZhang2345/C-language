#include <stdio.h>

#define LOWER 0           // symbolic constants
#define UPPER 300         // written in UPPER case to distinguish
#define STEP 20           // no semicolon

/* print Fahrenheit-Celsius table */
int main()
{
    int fahr;
    //every value have to be declared before using, even this only used
    //as temporary value and in for loop conditions
    //In java, fahr does not need to be declared

    for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    // Allow for a single line or use braces {}

}
