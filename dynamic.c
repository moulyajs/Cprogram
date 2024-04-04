/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char *str = NULL;
    str = (char *)malloc(15 * sizeof(char));
    strcpy(str, "jason");
    printf("string is %s and address is %p\n", str, str);
    str = (char *)realloc(str, 25);
    strcat(str, ".com");
    printf("string is %s and address is %p", str, str);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size;
    char *text = NULL;
    printf("enter the limit of the text:");
    scanf("%d", &size);
    text = (char *)malloc(size * sizeof(char));
    if (text != NULL)
    {
        printf("enter some text\n");
        scanf(" ");
        fgets(text, size, stdin);
        printf("the inputted text %s\n", text);
    }
    free(text);
    text = NULL;
    return 0;
}
*/