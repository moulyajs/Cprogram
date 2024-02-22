#include <stdio.h>
int gcd(int u, int v);
float absolute_value(float x);
float square_root(float x);
int main()
{

    int result = 0;
    float f1 = -15.66, f2 = -30.6, f3 = -23.89;
    int i1 = -17;

    float absolute_result = 0.0;

    result = gcd(13, 6);
    printf("the gcd of 13 and 6 is %d\n ", result);
    printf("the gcd of 50 and 24 is %d\n ", gcd(40, 98));

    absolute_result = absolute_value(f1);
    printf("result is %.2f\n", absolute_result);
    absolute_result = absolute_value(f2) + absolute_value(f3);
    printf("result is %.2f\n", absolute_result);
    absolute_result = absolute_value((float)i1);
    printf("result is %.2f\n", absolute_result);
    absolute_result = absolute_value(i1);
    printf("result is %.2f\n", absolute_result);
    printf("%.2f\n", absolute_value(-6.0) / 4);

    printf("%.2f\n", square_root(-3.0));
    printf("%.2f\n", square_root(16.0));
    printf("%.2f\n", square_root(250.0));
    printf("%.2f\n", square_root(40.0));

    return 0;
}

int gcd(int u, int v)
{
    int temp;
    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }
    return u;
}
float square_root(float x)
{
    const float epsilon = .00001;
    float guess = 0.1;
    float return_value = 0.0;
    if (x < 0)
    {
        printf("negative arguement to squareroot\n");
        return_value = -1.0;
    }
    else
    {
        while (absolute_value(guess * guess - x) >= epsilon)
            guess = (x / guess + guess) / 2.0;
        return_value = guess;
    }
    return return_value;
}

float absolute_value(float x)
{
    if (x < 0)
        x = -x;
    return x;
}
