// to print inverted pyramid using'*'
#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        // Print spaces before stars
        for (j = i; j < n; j++)
            printf(" ");

        // Print stars
        for (j = 1; j <= (2 * i - 1); j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
