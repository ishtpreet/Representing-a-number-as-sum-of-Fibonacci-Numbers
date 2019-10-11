#include<stdio.h>
int Fibonacci[30]; //Array with first 30 fibonacci numbers
int Arr[15];   //Storing Indexes of Fibonacci numbers

void fibonacci()
{
    Fibonacci[0] = 0;
    Fibonacci[1] = 1;
    int i;
    for (i = 2; i < 30; i++)
    {
        Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
        // printf("\n%d",Fibonacci[i]);
    }
}
int check(int number)
{
    int i = 0;
    while (number > Fibonacci[i])
    {
        i++;
    }
    return i;
}

void main()
{
    fibonacci();
    int i, n, number, a, b, c;
    printf("\nEnter a number ");
    scanf("%d", &n);
    number = n;
    int sum = 0;
    i = 0;
    while (sum != n)
    {
        a = check(number) - 1;
        if (a == 0)
        {
            Arr[i] = 1;
            sum++;
            i++;
        }
        else if (a < 0)
        {
            break;
        }
        else
        {
            number = number - Fibonacci[a];
            sum += Fibonacci[a];
            Arr[i] = a;
            i++;
        }
    }
    for (i = 0; i < 10; i++)
    {
        if(Arr[i]!=0)
        printf("\n%d", Fibonacci[Arr[i]]);
    }
    printf("\n");
}