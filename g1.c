#include <stdio.h>

int main()
{
    int marks[5];
    int i;
    int sum = 0;
    int highest, lowest;

    printf("Enter marks of 5 subjects:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        sum += marks[i];
    }

    highest = lowest = marks[0];

    for (i = 1; i < 5; i++)
    {
        if (marks[i] > highest)
            highest = marks[i];

        if (marks[i] < lowest)
            lowest = marks[i];
    }

    printf("\nTotal Marks   : %d\n", sum);
    printf("Average Marks : %.2f\n", sum / 5.0);
    printf("Highest Marks : %d\n", highest);
    printf("Lowest Marks  : %d\n", lowest);

    if (sum / 5.0 >= 80)
        printf("Grade         : A+\n");
    else if (sum / 5.0 >= 70)
        printf("Grade         : A\n");
    else if (sum / 5.0 >= 60)
        printf("Grade         : B\n");
    else if (sum / 5.0 >= 50)
        printf("Grade         : C\n");
    else
        printf("Grade         : F\n");

    return 0;
}