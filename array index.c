#include <stdio.h>

int main() {
    int n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements with their positions:\n");

    for (i = 0; i < n; i++) {
        printf("Position %d = %d\n", i, arr[i]);
    }

    return 0;
}