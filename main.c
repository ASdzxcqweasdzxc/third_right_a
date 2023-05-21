#include <stdio.h>
#include <string.h>

char res = 0;

int S(const char c[], int i) {
    if (c[i] == 'a') {
        printf("S -> aA ");
        S(c, ++i);
    } else if (c[i] == 'b') {
        printf("S -> bA ");
        S(c, ++i);
    }

    if (c[i] == 0) {
        return res = c[i - 3];
    }
    return S(c, ++i);
}

int main() {
    char c[100];
    int i = 0;
    printf("Enter char sequence for {a,b}: ");
    scanf("%s", c);

    S(c, i);
    printf("\nFinal_res= %c \n", res);
    if (res == 'a') {
        puts("Well done!");
    } else if (res == 'b') {
        puts("Wrong word!!!");
    }

    return 0;
}
