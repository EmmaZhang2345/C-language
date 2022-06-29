#include <stdio.h>

#define IN 0
#define OUT 1

int main()
{
    int c, newWord, newChar, newLine, state;
    state = OUT;
    newWord = newChar = newLine = 0;

    while((c = getchar()) != EOF)
    {
        ++newChar;
        if(c == '\n')
            ++newLine;
        if(c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if(state == OUT)
        {
            state = IN;
            ++newWord;
        }
    }

    printf("%d %d %d\n", newWord, newChar, newLine);
}