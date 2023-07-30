#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Integer Equivalents:\n");

    printf("Uppercase Letters:\n");
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c: %d\n", ch, (int)ch);
    }

    printf("Lowercase Letters:\n");
    for (char ch = 'a'; ch <= 'z'; ch++) {
        printf("%c: %d\n", ch, (int)ch);
    }


    printf("Digits:\n");
    for (char ch = '0'; ch <= '9'; ch++) {
        printf("%c: %d\n", ch, (int)ch);
    }



    printf("Special Symbols:\n");
    printf("$: %d\n", (int)'$');
    printf("*: %d\n", (int)'*');
    printf("+: %d\n", (int)'+');
    printf("/: %d\n", (int)'/');
    printf("Blank Character: %d\n", (int)' ');

}
