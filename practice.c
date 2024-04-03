/*
#include <stdio.h>
int main()
{
    int a, b;
    a = 16, b = 78;
    float c = 2.5;
    printf("%d %d\n", sizeof(a), sizeof(short int));
    printf("%4.2f\n", c); // width.precission , f is float type
    printf("%2.1f\n", c);
    printf("%-5d %d\n", 16, b); // - is for left justification
    printf("ravan\rram\n");
    printf("ram\nlakhan\n");
    printf("ram\tbheem\n");
    printf("\"Mahabharath\""); // To include quotes in the output
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a, b, ret_Value_scanf, ret_Value_printf;
    printf("Enter the value of a and b");
    ret_Value_scanf = scanf("%d%d", &a, &b);
    ret_Value_printf = printf("a : %d b : %d\n", a, b);
    printf("The return value of scanf is %d\n", ret_Value_scanf);
    printf("The return value of printf is %d", ret_Value_printf);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    char ch;
    ch = getchar();
    putchar(ch);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    char ch;
    printf("enter a char\n");
    ch = getc(stdin);
    printf("entered char\n");
    putc(ch, stdout);
    return 0;
}
*/
#include <stdio.h>
int main()
{
    int a = 10;
    printf("%d\n", a);
    int b = a++;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", a++);
    printf("%d", ++a);
    return 0;
}