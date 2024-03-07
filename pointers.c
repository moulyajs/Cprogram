/*

#include <stdio.h>
int main(void)
{
    int number = 0;
    int *pnumber = NULL;
    number = 10;
    printf("number's address: %p\n", &number);
    printf("number's value: %d\n\n", number);
    pnumber = &number;
    printf("pnumber's address: %p\n", (void *)&pnumber);
    printf("pnumber's size : %d bytes\n", sizeof(pnumber));
    printf("pnumber's value : %p\n", pnumber);
    printf("value pointed to: %d\n", *pnumber);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num = 150;
    int *pnum = NULL;
    pnum = &num;
    printf("num address is: %p\n", &num);
    printf("address of pnum is: %p\n", &pnum);
    printf("value of pnum: %p\n", pnum);
    printf("value of what pnum is pointing to : %d\n", *pnum);
    return 0;
}
*/
/*
#include <stdio.h>
int main(void)
{
    long num1 = 0L;
    long num2 = 0L;
    long *pnum = NULL;

    pnum = &num1;
    *pnum = 2L;
    ++num2;
    num2 += *pnum;

    pnum = &num2;
    ++*pnum;

    printf("num1 = %ld  num2 = %ld  *pnum = %ld  *pnum + num2 = %ld  ", num1, num2, *pnum, *pnum + num2);
    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    return;
}
int main(void)
{
    int a = 100;
    int b = 200;
    printf("Before swap, value of a %d\n", a);
    printf("Before swap, value of b %d\n", b);
    swap(a, b);
    printf("After swap, value of a %d\n", a);
    printf("After swap, value of b %d\n", b);
    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main(void)
{
    int a = 100;
    int b = 200;
    printf("Before swap, value of a %d\n", a);
    printf("Before swap, value of b %d\n", b);
    swap(&a, &b);
    printf("After swap, value of a %d\n", a);
    printf("After swap, value of b %d\n", b);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
void square(int *const x);

int main()
{
    int num = 6;
    square(&num);
    printf("the square of the number is %d", num);

    return 0;
}

void square(int *const x)
{
    *x = (*x) * (*x);
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
void square(int *x);

int main()
{
    int *num = (int *)malloc(sizeof(int));
    *num = 4;
    square(num);
    printf("the square of the number is %d", *num);

    return 0;
}

void square(int *x)
{
    *x = (*x) * (*x);
}
*/
/*
#include <stdio.h>
int array_sum(int array[], const int n);
int main(void)
{
    int values[10] = {2, 4, -6, 43, 7, 8, 5, 9, 0, 5};
    printf("the sum is %d\n", array_sum(values, 10));
    return 0;
}
int array_sum(int array[], const int n)
{
    int sum = 0, *ptr;
    int *const array_end = array + n;
    for (ptr = &array[0]; ptr < array_end; ++ptr)
        sum += *ptr;
    return sum;
}
*/
/*
#include <stdio.h>
int array_sum(int *ptr, const int n);
int main(void)
{
    int values[10] = {2, 4, -6, 43, 7, 8, 5, 9, 0, 5};
    printf("the sum is %d\n", array_sum(values, 10));
    return 0;
}
int array_sum(int *ptr, const int n)
{
    int sum = 0;
    int *const array_end = ptr + n;
    for (; ptr < array_end; ++ptr)
        sum += *ptr;
    return sum;
}
*/
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    int i;
    char multiple[] = "a string";
    char *p = multiple;
    for (i = 0; i < strlen(multiple); ++i)
        printf("multiple[%d] = %c *(p+%d) = %c  &multiple[%d] = %p p+%d = %p\n", i, multiple[i], i, *(p + i), i, &multiple[i], i, p + i);
    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    int i;
    long multiple[] = {15L, 25L, 35L, 45L};
    long *p = multiple;
    for (i = 0; i < sizeof(multiple) / sizeof(multiple[0]); ++i)
        printf("address p+%d (&multiple[%d]): %llu     *(p+%d)  value: %d\n", i, i, (unsigned long long)(p + i), i, *(p + i));
    printf("\n   type long occupies:%d bytes\n", (int)sizeof(long));
    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
int string_length(const char *string);
int main()
{
    printf("%d\n", string_length("stringlength test"));
    printf("%d\n", string_length(""));
    printf("%d\n", string_length("jason"));
    return 0;
}
int string_length(const char *string)
{
    const char *lastaddress = string;
    while (*lastaddress)
        ++lastaddress;
    return lastaddress - string;
}