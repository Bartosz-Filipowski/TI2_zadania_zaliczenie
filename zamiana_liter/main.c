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
int how_many_letters(char *tekst)
{
    int l = 0;
    while(*tekst)
    {
        if (('A' <= *tekst && *tekst <= 'Z') || ('a' <= *tekst && *tekst <= 'z'))
        {
            l ++;
        }
        tekst++;

    }
return l;

}
int combinestr(char *source1, char *source2, char *source3) {
    while (*source1) {
        *source3 = *source1;
        source1++;
        source3++;
    }


    while (*source2) {
        *source3 = *source2;
        source2++;
        source3++;
    }
    return 0;
}




int main() {
    char str1[]="Ala";
    char str2[]=" ma kota";
    char str3[80]="";
    char tekst[] = "PrzYKladoWY.? nAPisss!!$";
    printf("%s \n",tekst);
    small_letters(tekst);
    printf("%s\n", tekst);
    big_letters(tekst);
    printf("%s\n", tekst);
    int ilosc = how_many_letters(tekst);
    printf("%d\n", ilosc);

    combinestr(str1, str2, str3);
    printf("%s\n", str3);
    return 0;
}
