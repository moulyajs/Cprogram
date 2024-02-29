#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int string_length(const char string[]);
void concat(char result[], const char str[], const char str1[]);
bool equalstrings(const char s1[], const char s2[]);
int main()
{
    const char word1[] = "hello";
    const char word2[] = "world";
    const char word3[] = "hi";
    char result[50];
    printf("%d  %d  %d\n", string_length(word1), string_length(word2), string_length(word3));
    concat(result, word1, word2);
    printf("\n%s", result);
    printf("\n%d\n", equalstrings("hi", "hi"));
    printf("%d\n", equalstrings("hello", "hi"));

    return 0;
}
int string_length(const char string[])
{
    int count = 0;
    while (string[count] != '\0')
        ++count;
    return count;
}
void concat(char result[], const char str[], const char str1[])
{
    int i, j;
    for (i = 0; str[i] != '\0'; ++i)
    {
        result[i] = str[i];
    }
    for (j = 0; str1[j] != '\0'; ++j)

        result[i + j] = str1[j];
    result[i + j] = '\0';
}
bool equalstrings(const char s1[], const char s2[])
{
    int i = 0;
    bool isequals = "false";
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        ++i;
    if (s1[i] == '\0' && s2[i] == '\0')
        isequals = true;
    else
        isequals = false;
    return isequals;
}
