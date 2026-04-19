#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char str1[100], str2[100], rev[100];

    printf("enter first string\n");
    if (!fgets(str1, sizeof str1, stdin)) return 1;
    size_t L = strlen(str1);
    if (L && str1[L-1] == '\n') str1[--L] = '\0';

    printf("enter second string\n");
    if (!fgets(str2, sizeof str2, stdin)) return 1;
    L = strlen(str2);
    if (L && str2[L-1] == '\n') str2[--L] = '\0';

    size_t len = strlen(str1);
    printf("length of string 1 = %zu\n", len);

    for (size_t i = 0; i < len; ++i) rev[i] = str1[len - i - 1];
    rev[len] = '\0';
    printf("Reversed string is %s\n", rev);

    if (strcmp(str1, str2) == 0) printf("Both strings are equal\n");
    else printf("Both strings are unequal\n");

    if (strcmp(str1, rev) == 0) printf("string is a palindrome\n");
    else printf("not a palindrome\n");

    if (strstr(str1, str2) != NULL) printf("\"%s\" is found in \"%s\"\n", str2, str1);
    else printf("not a substring\n");

    return 0;
}