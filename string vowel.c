#include <stdio.h>
#include <string.h>

int countVowel(char str[]) {
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }

    return count;
}

int main() {
    char player1[100], player2[100];

    printf("Player 1: ");
    fgets(player1, sizeof(player1), stdin);

    printf("Player 2: ");
    fgets(player2, sizeof(player2), stdin);

    int vowel1 = countVowel(player1);
    int vowel2 = countVowel(player2);

    printf("\nPlayer 1 vowels: %d\n", vowel1);
    printf("Player 2 vowels: %d\n", vowel2);

    if (vowel1 > vowel2)
        printf("Player 1 Wins!");
    else if (vowel2 > vowel1)
        printf("Player 2 Wins!");
    else
        printf("Draw!");

    return 0;
}