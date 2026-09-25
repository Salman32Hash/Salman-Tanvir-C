#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer;

    srand(time(0));

    printf("===== ROCK PAPER SCISSORS =====\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");

    printf("Enter your choice: ");
    scanf("%d", &player);

    computer = rand() % 3 + 1;

    printf("Computer chose: %d\n", computer);

    if (player == computer) {
        printf("It's a Draw!\n");
    }
    else if ((player == 1 && computer == 3) ||
             (player == 2 && computer == 1) ||
             (player == 3 && computer == 2)) {
        printf("You Win!\n");
    }
    else if (player >= 1 && player <= 3) {
        printf("Computer Wins!\n");
    }
    else {
        printf("Invalid Choice!\n");
    }

    return 0;
}