
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1[10][10], m2[10][10], product[10][10];
    int r1, c1, r2, c2;
    int i, j, k;
    scanf("%d%d", &r1, &c1);
    scanf("%d%d", &r2, &c2);
    if (c1 != r2)
    {
        printf("Matrix multiplication not possible");
        exit(0);
    }
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &m1[i][j]);

    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &m2[i][j]);

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            product[i][j] = 0;
        }
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                product[i][j] = product[i][j] + m1[i][k] * m2[k][j];
            }
        }
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
            printf("%d ", product[i][j]);
        printf("\n");
    }

    return 0;
}
*/

/*
int main()
{

    
int m1, n1, m2, n2;
int i, j, k;
scanf("%d %d", &m1, &n1);
scanf("%d %d", &m2, &n2);
if (n1 != m2)
    printf("Matrix multiplication not possible");
else
{
    int a[m1][n1];
    int b[m2][n2];
    int c[100][100];
    {
        for (i = 0; i < m1; i++)

        {
            for (j = 0; j < n1; j++)
                scanf("%d ", &a[i][j]);
        }
    }
    {
        for (i = 0; i < m2; i++)
        {
            for (j = 0; j < n2; j++)
                scanf("%d ", &b[i][j]);
        }
    }

    {
        for (i = 0; i < m1; i++)
            for (j = 0; j < n2; j++)
            {
                for (k = 0; k <= n2; k++)
                    c[i][j] += a[i][k] * b[k][j];
            }
    }
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("%d\t", c[i][j]);
        }

        printf("\n");
    }
}
return 0;
}
* /

#include<stdio.h>
int main()
{
int a,b;
a = 16,b=78;
float c = 2.5;
printf("%d %d\n",sizeof(a),sizeof(short int));
printf("%4.2f\n",c); // width.precission , f is float type
printf("%2.1f\n",c);
printf("%-5d %d\n",16,b); // - is for left justification
printf("ravan\rram\n");
printf("ram\nlakhan\n");
printf("ram\tbheem\n");
printf("\"Mahabharath\""); // To include quotes in the output
return 0;
}