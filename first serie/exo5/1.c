
#include <stdio.h>

#define MAX_SIZE 20

int SYM(int matrix[][MAX_SIZE], int N) 
{
    for (int i = 0; i < N; i++) 
    {
        for (int j = i + 1; j < N; j++) 
        {
            if (matrix[i][j] != matrix[j][i]) 
            {
                return 0;
            }
        }
    }
    return 1;
}

int main(void) 
{
    int N;
    printf("Enter the order of the square matrix (N <= 20): ");
    scanf("%d", &N);

    int matrix[MAX_SIZE][MAX_SIZE];
    printf("Enter the elements of the square matrix:\n");
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (SYM(matrix, N)) 
    {
        printf("The matrix is symmetrical.\n");
    } else {
        printf("The matrix is not symmetrical.\n");
    }


}
