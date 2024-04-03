/*
#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "hello world";
    printf("the length of the string is %d", strlen(s));
    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char my_string[] = "hello! how are you";
    char temp[50];
    strncpy(temp, my_string, sizeof(temp) - 1);
    printf("the copied string is %s", temp);
    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char src[50], dest[50];
    strcpy(src, "this is source");
    strcpy(dest, "this is destination");
    strncat(dest, src, 15);
    printf("the final string is |%s|", dest);
    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[100];
    char name[25][50], temp[25];
    int l, i, n, j;
    printf("print individual characters in reverse order\n");
    printf("---------------------------------------------\n");
    printf("input a string");
    scanf("%s", str);
    l = strlen(str);
    printf("the characters in string in reverse are:\n");
    for (i = l; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    printf("------------------------------------------------\n");
    printf("input number of strings\n");
    scanf("%d", &n);
    printf("input string %d:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }
    for (i = 0; i <= n; i++)
        for (j = 0; j <= n - i; j++)
            if (strcmp(name[j], name[j + 1]) > 0)
            {
                strncpy(temp, name[j], sizeof(temp) - 1);
                strncpy(name[j], name[j + 1], sizeof(name[j]) - 1);
                strncpy(name[j + 1], temp, sizeof(name[j + 1]) - 1);
            }
    printf("the sorted string:\n");
    for (i = 0; i <= n; i++)
        printf("%s\n", name[i]);
    return 0;
}