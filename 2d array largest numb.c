#include <stdio.h>

int findMax(int a[][100], int r, int c)
{
    int max = a[0][0];

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(a[i][j] > max)
                max = a[i][j];
        }
    }

    return max;
}

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[100][100];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("%d\n", findMax(a, r, c));

    return 0;
}