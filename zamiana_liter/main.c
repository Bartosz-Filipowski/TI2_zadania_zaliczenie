#include <stdio.h>

void small_letters(char *tekst)
{
    while(*tekst)
    {
    if ('A' <= *tekst && *tekst <= 'Z')
    {
        *tekst += ('a' - 'A');
    }
    tekst++;
    }
}
void big_letters(char *tekst)
{
    while(*tekst)
    {
        if ('a' <= *tekst && *tekst <= 'z')
        {
            *tekst -= ('a' - 'A');
        }
        tekst++;
    }
}




int main() {
    char tekst[] = "PrzYKladoWY.? nAPisss!!$";
    printf("%s \n",tekst);
    small_letters(tekst);
    printf("%s\n", tekst);
    big_letters(tekst);
    printf("%s\n", tekst);
    return 0;
}
