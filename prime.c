#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers in the array are: ");
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int is_prime = 1;

        if (num <= 1) {
            is_prime = 0;
        } else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    is_prime = 0;
                    break;
                }
            }
        }

        if (is_prime) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}

