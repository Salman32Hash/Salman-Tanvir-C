#include <stdio.h>

int countEvenDiagonal(int a[][100], int n)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i][i] % 2 == 0)
            count++;
    }

    return count;
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[100][100];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("%d\n", countEvenDiagonal(a, n));

    return 0;
}