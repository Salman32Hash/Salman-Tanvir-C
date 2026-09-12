#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int secret, guess;
    int attempts = 0;

    srand(time(0));

    secret = rand() % 100 + 1;

    printf("===== NUMBER GUESSING GAME =====\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("Try to guess it!\n\n");

    while (1) {

        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secret) {
            printf("Too high! Try again.\n");
        }
        else if (guess < secret) {
            printf("Too low! Try again.\n");
        }
        else {
            printf("\n🎉 Congratulations!\n");
            printf("You guessed the number in %d attempts!\n", attempts);
            break;
        }
    }

    return 0;
}