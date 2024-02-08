
/*
#include <stdio.h>

int main()
{
    printf("Hi, my name is Moulya");
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Enter a value and name:");
    scanf("%d %s", &i, str);
    printf("\nYou entered number %d::%s\n", i, str);
    return 0;
}*/
/*
#include <stdio.h>
int main()
{
    double x;
    scanf("%lf", &x);
    printf("%lf", x);
}
*/
/*
#include <stdio.h>
int main()
{
    char MYchar;
    MYchar = '\n';
    printf("%c", MYchar);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    enum Company
    {
        GOOGLE,
        FACEBOOK,
        XEROX,
        YAHOO,
        EBAY,
        MICROSOFT
    };
    enum Company xe = XEROX, goo = GOOGLE, eb = EBAY;
    printf("THE ENUM VALUE OF XEROX %d\n", xe);
    printf("THE ENUM VALUE OF GOOGLE %d\n", goo);
    printf("THE ENUM VALUE OF EBAY %d\n", eb);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int integervar = 3;
    float flovar = 6.99999999;
    double douvar = 6.99999999;
    _Bool boolvar = 1;
    char charvar = 'u';
    printf("the integer value is  %d\n", integervar);
    printf("the floating value is %f\n", flovar);
    printf("the doubles value is %g\n", douvar);
    printf("the boolean value is %i\n", boolvar);
    printf("the floating point with two decimal places is %.2f\n", flovar);
    printf("the char value is %c\n", charvar);
}
*/
/*
#include <stdio.h>
int main()
{
    double length = 6.899432;
    double width = 3.45677;
    double perimeter = 0;
    double area = 0;
    perimeter = 2.0 * (length + width);
    area = length * width;

    printf("the perimeter of rectangle = %g\n", perimeter);
    printf("the area of rectangle = %g\n", area);
}
*/
/*
#include <stdio.h>
int main(int argc, char *argv[0])
{
    int numberofarguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("the number of arguments are %d\n", numberofarguments);
    printf("argument1 is %s\n", argument1);
    printf("argument2 is %s\n", argument2);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a = 20, b = 10;
    int c = a + b;
    printf("c is %d", ++c);
}
*/
/*
#include <stdio.h>
int main()
{
    unsigned int a = 60;
    unsigned int b = 13;
    int result = 0;
    result = a & b;
    printf("the result is %d", result);
}*/
/*
#include <stdio.h>
int main()
{
    int a = 4, b = 3;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("the value of a and b %d,%d", a, b);
}
*/
/*
#include <stdio.h>
int main()
{
    printf("size of int %zd\n", sizeof(int));
    printf("size of double %zd\n", sizeof(double));
    printf("size of char %zd\n", sizeof(char));
    printf("size of long %zd\n", sizeof(long));
    printf("size of long long %zd\n", sizeof(long long));
    printf("size of long double %zd\n", sizeof(long double));
}
*/
#include <stdio.h>

int main()

{

    int a = 1, b = 1, c;

    c = a++ + b;

    printf("%d, %d", a, b);
}