#include <stdio.h>

void rowMax(int a[][100], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        int max = a[i][0];

        for(int j = 1; j < c; j++)
        {
            if(a[i][j] > max)
                max = a[i][j];
        }

        printf("Row %d max = %d\n", i + 1, max);
    }
}

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[100][100];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    rowMax(a, r, c);

    return 0;
}