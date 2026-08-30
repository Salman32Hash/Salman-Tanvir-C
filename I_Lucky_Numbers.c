#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a = n / 10;
    int b = n % 10;

    // handle zero digit case
    if(a == 0 || b == 0)
    {
        printf("NO");
    }
    else if(a % b == 0 || b % a == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}