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
