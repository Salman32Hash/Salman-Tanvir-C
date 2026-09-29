#include <stdio.h>

int multiple(int a, int b)
{
    if (b == 0)
        return 0;
    else
        return a + multiple(a, b - 1);
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d", multiple(a, b));

    return 0;
}