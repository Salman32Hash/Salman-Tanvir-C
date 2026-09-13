#include <stdio.h>

int palindrome(int n)
{
    int original = n;
    int reverse = 0;

    while (n > 0)
    {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    if (palindrome(n))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}