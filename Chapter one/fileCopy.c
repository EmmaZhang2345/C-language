#include <stdio.h>

int main()
{
    int c;

    c = getchar();
    while(c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}

//Enter control + D for EOF in Mac on the shell
//CTRL in Windows (not sure)