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
/*
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
*/
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char string[80] = "hello how are you -my name is -ram";
    const char s[2] = "-";
    char *token;
    token = strtok(string, s);
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, s);
    }
    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char buf[100];
    int nletters = 0;
    int ndigits = 0;
    int npunct = 0;
    printf("enter an interesting string of less than 100 characters:");
    scanf("%s", buf);
    int i = 0;
    while (buf[i])
    {
        if (isalpha(buf[i]))
            ++nletters;
        else if (isdigit(buf[i]))
            ++ndigits;
        else if (ispunct(buf[i]))
            ++npunct;
        ++i;
    }
    printf("\nentered string contained %d letters , %d digits , %d punctuation", nletters, ndigits, npunct);
    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "happy ending";
    char ch = 'e';
    char *pGot_char = NULL;
    pGot_char = strchr(str, ch);
    printf("%p", pGot_char);
}
*/
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "welcome to c";
    char word[] = "to";
    char *pGot_char = NULL;
    pGot_char = strstr(str, word);
    printf("%p", pGot_char);
}
*/
/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char text[100];
    int i;
    char sub_string[50];
    printf("enter the string to be converted ");
    scanf("%s", text);
    printf("enter the substring\n");
    scanf("%s", sub_string);
    printf(" first string :%s\n", text);
    printf("second string:%s\n", sub_string);
    for (i = 0; (text[i] = (char)toupper(text[i])) != '\0'; ++i)
        ;
    for (i = 0; (sub_string[i] = (char)toupper(sub_string[i])) != '\0'; ++i)
        ;
    printf("the second string %s found in the first.\n", (strstr(text, sub_string)) == NULL ? "was not" : "was");
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    double value = 0;
    char str[] = "3.5 2.5 1.26";
    char *pstr = str;
    char *ptr = NULL;
    while (true)
    {
        value = strtod(pstr, &ptr);
        if (pstr == ptr)
            break;
        else
        {
            printf("%f", value);
            pstr = ptr;
        }
    }
}
*/
