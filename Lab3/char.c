#include <stdio.h>
#include <string.h>

int group(char ch)
{
    return isalpha(ch) ? 0 : isspace(ch) ? 1 : 2;
}

void word(char **r, char *s, int g)
{
    for (; *s && group(*s) == g; ++s)
        *((*r)++) = *s;
}

int main(void)
{
    char str[256], res[256], *s, *r;
    int next;

    while (gets(str))
    {
        r = res;

        for (next=group(s=str+strlen(str)-1); ; --s)
            if (s == str)
            {
                word(&r, s, group(*s));
                break;
            }
            else if (group(*s) != next)
            {
                word(&r, s+1, next);
                next = group(*s);
            }

        *r = 0;

        puts(res);
    }

    return 0;
}