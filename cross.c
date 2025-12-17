//to print cross using '*'
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the size of the cross: ");
    scanf("%d", &n);
    
    if (n % 2 == 0) {
        printf("Please enter an odd number for better symmetry.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j || i + j == n - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
