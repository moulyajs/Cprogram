/*
#include <stdio.h>
#include <stdlib.h>
struct employee
{
    char name[30];
    char date[30];
    float salary;
};
int main()
{
    struct employee emp = {"mike", "12/3/03", 23456.09};
    printf("name %s\n", emp.name);
    printf("hire date %s\n", emp.date);
    printf("salary %.2f\n", emp.salary);
    printf("enter the employee's information:");
    printf("enter name:");
    scanf("%s", emp.name);
    printf("enter date:");
    scanf("%s", emp.date);
    printf("enter salary:");
    scanf("%f", &emp.salary);
    printf("name %s\n", emp.name);
    printf("hire date %s\n", emp.date);
    printf("salary %.2f\n", emp.salary);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
struct date
{
    int month;
    int day;
    int year;
};
int main(void)
{
    struct date today, *dateptr;
    dateptr = &today;
    dateptr->month = 9;
    dateptr->day = 15;
    dateptr->year = 1965;

    printf("today's date is %d/%d/%d", dateptr->day, dateptr->month, dateptr->year);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
struct intptrs
{
    int *p1;
    int *p2;
};
int main()
{
    struct intptrs pointers;
    int i1 = 100;
    int i2;
    pointers.p1 = &i1;
    pointers.p2 = &i2;
    *pointers.p2 = -97;
    printf("i1 = %d *pointers.p1 = %d\n", i1, *pointers.p1);
    printf("i2 = %d *pointers.p2 = %d", i2, *pointers.p2);
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

struct item
{
    char *item_name;
    int qty;
    float price;
    float amount;
};
void readitem(struct item *i);
void printitem(struct item *i);

int main()
{
    struct item itm = {NULL, 0, 0.0, 0.0};
    ;
    struct item *pitem = NULL;
    pitem = &itm;

    pitem->item_name = (char *)malloc(30 * sizeof(char));
    if (pitem == NULL)
        exit(-1);
    readitem(pitem);
    printitem(pitem);
    free(pitem->item_name);
    return 0;
}
void readitem(struct item *i)
{
    printf("enter name of product :\n");
    scanf("%s", i->item_name);
    printf("enter quantity of product :\n");
    scanf("%d", &i->qty);
    printf("enter price of product :\n");
    scanf("%f", &i->price);
    i->amount = (float)i->qty * i->price;
}
void printitem(struct item *i)
{
    printf("name : %s\n", i->item_name);
    printf("name : %.2f\n", i->price);
    printf("name : %d\n", i->qty);
    printf("name : %.2f\n", i->amount);
}
*/