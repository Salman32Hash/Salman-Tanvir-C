#include <stdio.h>

int mostFrequent(int a[], int n)
{
    int maxCount = 0;
    int result = a[0];

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }

        if (count > maxCount)
        {
            maxCount = count;
            result = a[i];
        }
    }

    return result;
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("%d", mostFrequent(a, n));

    return 0;
}