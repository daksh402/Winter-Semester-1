/*
PAT2
Write a c program to find the number of  words,vowels, consonants, space and special characters in a string

INPUT:

*Nothing is impossible in this world.

OUTPUT:

Words = 6

Vowels = 10

Consonants = 20

Space = 5

Special Characters = 2
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[100];
    printf("Enter a string: ");
    gets(s);
    int a=strlen(s);
    int v=0;
    int sp=0;
    int sc=0;
    int w=0;
    int c=0;
    for(int i=0;i<a;i++)
    {
        char y=tolower(s[i]);
        int x=(int)(s[i]);
        if(y=='a' || y=='e' || y=='i' || y=='o' || y=='u')
        {
            v=v+1;
        }
        else if(x<65 || (x>90 && x<97) || x>122)
        {
            if(x==32)
            {
                sp=sp+1;
            }
            else
            {
                sc=sc+1;
            }
            if(i!=0 && i!=a-1)
            {
                int b=(int)(s[i-1]);
                int c=(int)(s[i+1]);
                if(((b>=65 && b<=90) || (b>=97 && b<=122)) && ((c>=65 && c<=90) || (c>=97 && c<=122)))
                {
                    w=w+1;
                }
            }
        }
        else
        {
            c=c+1;
        }
    }
    if(w>0)
    {
        w=w+1;
    }
    printf("Words = %d\n", w);
    printf("Vowels = %d\n", v);
    printf("Consonants = %d\n", c);
    printf("Spaces = %d\n", sp);
    printf("Special Characters = %d\n", sc);
    return 0;
}