/*
#include <stdio.h>
int main()
{
    FILE *fp;
    int c;
    fp = fopen("hi.txt", "r");
    if (fp == NULL)
    {
        printf("Error in opening file");
        return (-1);
    }
    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
    }
    fclose(fp);
    fp = NULL;
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    FILE *fp;
    char str[60];
    fp = fopen("hi.txt", "r");
    if (fp == NULL)
    {
        printf("Error in opening file");
        return (-1);
    }
    if (fgets(str, 10, fp) != NULL)
    {
        printf("%s", str);
    }
    fclose(fp);
    fp = NULL;
    return (0);
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#define FILENAME "hi.txt"
int main()
{
    FILE *fp = NULL;
    char ch = ' ';
    int linescount = 0;
    fp = fopen(FILENAME, "r");
    if (fp == NULL)
    {
        printf("File does not exist\n");
        return -1;
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
            linescount++;
        printf("%c", ch);
    }
    fclose(fp);
    fp = NULL;
    printf("Total number of lines are: %d\n", linescount);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    FILE *fp = NULL;
    fp = fopen("hello.txt", "w+");
    if (fp != NULL)
        fprintf(fp, "%s %s %s %s %d", "hello", "my", "number", "is", 20);
    fclose(fp);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define FILENAME "test.txt"
int main()
{
    FILE *fp = NULL;
    FILE *fp1 = NULL;
    char ch = ' ';
    fp = fopen(FILENAME, "r");
    if (fp == NULL)
        return -1;
    fp1 = fopen("test1.txt", "w");
    if (fp1 == NULL)
        return -1;

    while ((ch = fgetc(fp)) != EOF)
    {
        if (islower(ch))
        {
            ch = ch - 32;
        }
        fputc(ch, fp1);
    }
    fclose(fp);
    fclose(fp1);
    rename("test1.txt", "test.txt");
    remove("test1.txt");
    fp = fopen("test.txt", "r");
    if (fp == NULL)
        return -1;
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
    fp = NULL;
    fp1 = NULL;
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp = NULL;
    int len;
    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        printf("File does not exist");
        return -1;
    }
    fseek(fp, 0, SEEK_END);
    len = ftell(fp);
    fclose(fp);
    printf("Length of file is %d bytes\n", len);
    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
#define FILENAME "reverse.txt"
int main()
{
    FILE *fp = NULL;
    int count = 0;
    int i = 0;

    fp = fopen(FILENAME, "r");
    if (fp == NULL)
        return -1;
    fseek(fp, 0, SEEK_END);
    count = ftell(fp);
    while (i < count)
    {
        i++;
        fseek(fp, -i, SEEK_END);
        printf("%c", fgetc(fp));
    }
    printf("\n");
    fclose(fp);
    fp = NULL;
    return 0;
}