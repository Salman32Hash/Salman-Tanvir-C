#include <stdio.h>
#include <string.h>

int main() {
    char name[50], crush[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your crush's name: ");
    scanf("%s", crush);

    int score = (strlen(name) * strlen(crush) * 7) % 101;

    printf("\nChecking compatibility...\n");

    if (score >= 80)
        printf("%s + %s = Perfect Couple! ❤️😂\n", name, crush);
    else if (score >= 50)
        printf("%s + %s = Maybe... Try harder! 😆\n", name, crush);
    else
        printf("%s + %s = Bhai, move on! 💀😂\n", name, crush);

    printf("Love Score: %d%%\n", score);

    return 0;
}