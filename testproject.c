
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
/*
#include <stdio.h>

int main()

{

    int a = 1, b = 1, c;

    c = a++ + b;

    printf("%d, %d", a, b);
}
*/
/*
#include <stdio.h>
int main()
{
    int score = 95;
    int word = 90;
    //    if (score > word)
    //     printf("jackpot");
    if (score > word)
    {
        // score++;
        printf("you win");
    }
}
*/
/*
#include <stdio.h>
int main()
{
    int number, remainder;
    printf("enter a number\n");
    scanf("%d", &number);
    remainder = number % 2;
    if (remainder == 0)

        printf("even number");
    else
        printf("odd number");
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int number, sign;
    printf("enter a number");
    scanf("%d", &number);
    if (number > 0)

        sign = 1;
    else if (number == 0)
        sign = 0;
    else
        sign = -1;
    printf("the sign is %d", sign);
}
*/
/*
#include <stdio.h>
int main()
{
    int a = 0, b = 4, c = 5;
    if (a == 0)
        if (c == 8)

            printf("nested if is executed");
        else
            printf("nested if is not executed");
    else
        printf("if is not executed");
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a, b;
    a = 16, b = 78;
    float c = 2.5;
    printf("%d %d\n", sizeof(a), sizeof(short int));
    printf("%4.2f\n", c);
    printf("%2.1f\n", c);
    printf("%5d %d\n", 16, b);
    printf("ravan\r ram\n");
    printf("ram\n lakshman\n");
    printf("ram\t bheem\n");
    printf("\"Mahabharat\"");
    return 0;
}
*/
// calculate weekpay
/*
#include <stdio.h>
#include <stdlib.h>
#define PAYRATE 12.0
#define TAXRATE_150 .20
#define TAXRATE_300 .15
#define TAXRATE_REST .25
#define OVERTIME 40

int main()
{
    int hours = 0;
    double grosspay = 0.0;
    double taxes = 0.0;
    double netpay = 0.0;
    printf("Please enter the number of hours worked this week:\n");
    scanf("%d", &hours);
    if (hours <= 40)
        grosspay = hours * PAYRATE;
    else
    {
        grosspay = 40 * PAYRATE;
        double overtimepay = (hours - 40) * (PAYRATE * 1.5);
        grosspay += overtimepay;
    }

    if (grosspay <= 300)
    {
        taxes = grosspay * TAXRATE_300;
    }
    else if (grosspay > 300 && grosspay <= 450)
    {
        taxes = 300 * TAXRATE_300;
        taxes += (grosspay - 300) * TAXRATE_150;
    }
    else
    {
        taxes = 300 * TAXRATE_300;
        taxes = 150 * TAXRATE_150;
        taxes += (grosspay - 450) * TAXRATE_REST;
    }

    netpay = grosspay - taxes;

    printf("Your grosspay this week %.2f\n", grosspay);
    printf("Your taxes this week %.2f\n", taxes);
    printf("Your netpay this week %.2f\n", netpay);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    enum weekday
    {
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday,
        sunday
    };
    enum weekday today = saturday;
    switch (today)
    {
    case sunday:
        printf("today is sunday");
        break;
    case monday:
        printf("today is monday");
        break;
    default:
        printf("whatever");
        break;
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    float a, b;
    char operator;
    printf("enter the expression");
    scanf("%f %c %f", &a, &operator, & b);
    switch (operator)
    {
    case '+':
        printf("%.2f\n", a + b);
        break;
    case '-':
        printf("%.2f\n", a - b);
        break;
    case '*':
        printf("%.2f\n", a * b);
        break;
    case '/':
        if (b == 0)
            printf("division by zero");
        else
            printf("%.2f\n", a / b);
        break;
    default:
        printf("unknown operator");
        break;
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    for (int i = 1, j = 2; i <= 5; ++i, j += 2)
        printf("%d\n", i * j);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    unsigned int sum = 0;
    unsigned int count = 0;
    printf("enter the number of integers u want to sum:");
    scanf("%d", &count);
    for (unsigned int i = 1; i <= count; ++i)
        sum += i;
    printf("the sum of first %u numbers is %u", count, sum);
    return 0;
}
*/
/*
#include <stdio.h>
int main(void)
{
    int count = 1;
    while (count <= 5)
    {
        printf("%d\n", count);
        ++count;
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int number;
    do
        scanf("%d", &number);
    while (number != 20);
}
*/
/*
#include <stdio.h>
int main()
{
    int number = 4;
    do
    {
        printf("number = %d", number);
        number++;
    } while (number < 4);
}
*/
/*
#include <stdio.h>
int main()
{
    int count = 5;
    for (int i = 1; i <= count; ++i)
    {
        int sum = 0;
        for (int j = 1; j <= i; ++j)
            sum += j;
        printf("\n%d\t%d", i, sum);
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    enum day
    {
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday,
        sunday
    };
    for (enum day days = monday; days <= sunday; days++)
        if (days == wednesday)
            continue;
    printf("its not wednesday\n");
}
*/
/*
#include <stdio.h>
int main()
{
    int grades[10];
    int count = 10;
    long sum = 0;
    float average = 0.0f;
    printf("\n enter the 10 grades \n");
    int i;
    for (i = 0; i < count; ++i)
    {
        printf("%2u>", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }
    printf("sum=%d\n", sum);
    average = (float)sum / count;
    printf("the average is %.2f", average);
    return 0;
}
*/
/*
#include <stdio.h>
#define MONTHS 12
int main()
{
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;
    for (index = 0; index < MONTHS; index++)
        printf("months %d has %2d days\n", index + 1, days[index]);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int array_values[10] = {0, 1, 4, 9, 16};
    int i;
    for (i = 5; i < 10; ++i)
        array_values[i] = i * i;
    for (i = 0; i < 10; ++i)
        printf("array_values[%d]=%d\n", i, array_values[i]);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'O' || c == 'o' || c == 'u' || c == 'U')
        printf("%c is vowel", c);
    else if (c == 'b' || c == 'B' || c == 'c' || c == 'C' || c == 'd' || c == 'D' || c == 'f' || c == 'F' || c == 'g' || c == 'G' || c == 'h' || c == 'H' || c == 'j' || c == 'J' || c == 'k' || c == 'K' || c == 'l' || c == 'L' || c == 'm' || c == 'M' || c == 'n' || c == 'N' || c == 'P' || c == 'p' || c == 'q' || c == 'Q' || c == 'R' || c == 'r' || c == 's' || c == 'S' || c == 'T' || c == 't' || c == 'V' || c == 'v' || c == 'W' || c == 'w' || c == 'x' || c == 'X' || c == 'y' || c == 'Y' || c == 'z' || c == 'Z')
        printf("%c is consonant", c);
    else
        printf("invalid input");
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int n, m;
    float sum, average;
    scanf("%d", &n);
    for (m = 1; m <= n; ++m)
        sum += m;
    printf("%.0f\n", sum);
    average = sum / n;
    printf("%.1f", average);
    return 0;
}
*/
/*
#include <stdio.h>
void multiply(int x, int y)
{
    int result = x * y;
    printf("the product of %d and %d is : %d\n", x, y, result);
}
int main(void)
{
    multiply(10, 20);
    multiply(45, 1);
    multiply(4, 5);

    return 0;
}
*/
/*
#include <stdio.h>
int two(int x, int y)
{
    int result = x * y;
    return result;
}
int main(void)
{
    int result = 0;
    result = two(10, 20);
    printf("the result is %d", result);
    return 0;
}
*/
/*
#include <stdio.h>
int main(void)
{
    char str1[] = "TO BE OR NOT TO BE";
    char str2[] = "hello everyone";
    unsigned int count = 0;
    while (str1[count] != "\0")
        ++count;
    printf("the length of the string \"%s\" is %d characters.\n", str1, count);
    count = 0;
    while (str2[count] != "\0")
        ++count;
    printf("the length of the string \"%s\" is %d characters.\n", str2, count);
    return 0;
}
*/
