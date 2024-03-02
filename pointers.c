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