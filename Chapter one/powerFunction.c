#include <stdio.h>
int power(int base, int n)
{
    int p = 1;
    for(int i = 1; i <= n; ++i)
        p *= base;
    return p;
}

int main()
{
    for(int i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    return 0;
}

/*if you want to call a function before it defined, have to declare a
prototype, for example, in the book, at the head of the code, we 
declare int power(int m, int n) so we can put the function body at the end 
(after main, after we call the function), otherwise, it will appear error.
But if we put the function before the main( before we call it), 
that also works with any prototype. */
