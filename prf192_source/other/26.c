#include <stdio.h>

int main()
{
    //---//
    char s[100];
    int i, j = 0;
    gets(s);
    for (i = 0; s[i]; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || s[i]==' ')
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
    //---//
    puts("\nOUTPUT:");
    //---//
    printf("%s", s);
}
