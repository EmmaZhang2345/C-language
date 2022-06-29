#include <stdio.h>
#define MAXLINE 1000

/* read a line into line[] and return the length */
int getLine(char line[], int maxline)
{
    int c, i;
    for(i = 0; i < maxline-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;

    if(c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
    
}


void copy(char to[], char from[])
{
    int i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}



int main()
{
    int len, max;
    char line[MAXLINE], longest[MAXLINE];

    max = 0;
    while((len = getLine(line, MAXLINE)) > 0)
        if(len > max)
        {
            max = len;
            copy(longest, line);
        }

    if(max > 0)
        printf("%s", longest);   //%s string
    return 0;
}