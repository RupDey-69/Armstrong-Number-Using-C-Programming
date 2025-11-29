#include <stdio.h>
int main()
{
    int n, rem, arm = 0, c;
    printf("Enter the number: ");
    scanf("%d", &n);

    c = n; // store original number

    while (n > 0)
    {
        rem = n % 10;          // last digit
        arm = (rem * rem * rem) + arm;   // cube of digit added
        n = n / 10;            // remove last digit
    }

    if (c == arm)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not Armstrong Number");
    }

    return 0;
}

