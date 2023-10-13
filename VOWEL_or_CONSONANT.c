#include <stdio.h>
int main() {
    char c;
    int a,b;
    scanf("%c", &c);
    a = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    b = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (a || b)
    {
        printf("VOWEL", c);
    }    
    else
     {
         printf("CONSONANT", c);
     }
}