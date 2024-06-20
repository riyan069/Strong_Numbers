#include <stdio.h>
int main()
{
    int num, rem, temp, i, fact, sum = 0;
    printf("enter your digit: ");
    scanf("%d", &num);
    temp = num;

    while (temp != 0)
    {
        rem = temp % 10;
        fact = 1;
        for (i = 1; i <= rem; i++)
        {
            fact = i * fact;
        }
        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == num)
    {
        printf("%d is a strong number: ", num);
    }
    else
    {
        printf("%d is not a strong number: ", num);
    }
}