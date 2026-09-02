#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        char S[10001];
        scanf("%s", S);

        int capital = 0, small = 0, digit = 0;

        for (int i = 0; S[i] != '\0'; i++)
        {
            if (S[i] >= 'A' && S[i] <= 'Z')
            {
                capital++;
            }
            else if (S[i] >= 'a' && S[i] <= 'z')
            {
                small++;
            }
            else if (S[i] >= '0' && S[i] <= '9')
            {
                digit++;
            }
        }

        printf("%d %d %d\n", capital, small, digit);
    }

    return 0;
}