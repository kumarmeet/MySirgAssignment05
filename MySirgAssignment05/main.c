#include <stdio.h>
#include <stdlib.h>

int main()
{
//    sum_square_n_numbers();
//    sum_cube_n_numbers();
//    sum_first_n_odd_numbers();
//    factorial();
//    count_digit();
//    sum_digit();
//    reverse_digit();
//    table();
//    fibonacci_series();
    return 0;
}

void fabonicci_nth_term()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0, i;

    printf("Enter the n value: ");
    scanf("%d", &n);

    if(n == 0 || n == 1)
        printf("%d", n);
    else
        nextTerm = t1 + t2;

    for (i = 3; i <= n; ++i)
    {
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    printf("%d", t2);

    return;
}

//fibonacci number or not
void fabonicci_or_not()
{
    int n, n1 = 0, n2=1, n3, i = 1;

    scanf("%d", &n);

    if(n == 0 || n == 1)
        printf("Yes! This is fibonacci number");
    else
    {
        while(i <= n)
        {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;

            if(n3 == n)
                printf("YES! This is fibonacci number");

            i++;
        }
    }
    return;
}

//print n series of fibonacci
void fibonacci_series()
{
    int n, n1 = -1, n2 = 1, n3, i = 2;

    scanf("%d", &n);

    while(i < n)
    {
        n3 = n1 + n2;
        printf("%d\n", n3);
        n1 = n2;
        n2 = n3;

        i++;
    }

    return;
}

void table()
{
    int n, i = 0;
    printf("Enter a number -> ");
    scanf("%d", &n);

    do
    {
      printf("%d x %d = %d\n",n, i, n * i);
      i++;
    }while(i <= 10);

    return;
}

void reverse_digit()
{
    int n, r = 0, t;
    printf("Enter a number -> ");
    scanf("%d", &n);

    while(n != 0)
    {
        t = n % 10;
        n = n / 10;
        r = r  * 10 + t;
    }
    printf("%d", r);

    return;
}

void sum_digit()
{
    int n, sum = 0, t;
    printf("Enter a number -> ");
    scanf("%d", &n);

    while(n != 0)
    {
        t = n % 10;
        sum = sum + t;
        n = n / 10;
    }
    printf("%d", sum);

    return;
}

void count_digit() //it will not count 0000 as 4 digit?
{
    int n, count = 0;
    printf("Enter a number -> ");
    scanf("%d", &n);

    while(n != 0)
    {
        n = n / 10;
        ++count;
    }
    printf("%d", count);

    return;
}

void factorial()
{
    int i = 1, fact = 1, n;

    printf("Enter a number -> ");
    scanf("%d", &n);

    do
    {
        fact = fact * i;
        i++;

    }
    while(i <= n);

    printf("Factorial of %d is %d",n, fact);

    return;
}

void sum_first_n_odd_numbers()
{
    int i = 1, sum = 0, n;

    printf("Enter a number -> ");
    scanf("%d", &n);

    do
    {
        if(i % 2 == 1)
            sum = sum + i;

        i++;

    }
    while(i <= n);

    printf("Sum of cube n numbers %d", sum);

    return;
}

void sum_cube_n_numbers()
{
    int i = 1, sum = 0, n;

    printf("Enter a number -> ");
    scanf("%d", &n);

    do
    {
        sum = sum + (i * i * i);
        i++;

    }
    while(i <= n);

    printf("Sum of cube n numbers %d", sum);

    return;
}

void sum_square_n_numbers()
{
    int i = 1, sum = 0, n;

    printf("Enter a number -> ");
    scanf("%d", &n);

    do
    {
        sum = sum + (i * i);
        i++;

    }
    while(i <= n);

    printf("Sum of square n numbers %d", sum);

    return;
}
