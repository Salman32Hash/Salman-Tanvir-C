#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        int newDays = (M1 * D) / (M1 + M2);
        int answer = D - newDays;

        printf("%d\n", answer);
    }

    return 0;
}