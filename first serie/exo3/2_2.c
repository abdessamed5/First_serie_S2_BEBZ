
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) 
{
    if (n <= 1) 
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) 
        {
            return false;
        }
    }
    return true;
}

void display_prime_pairs(int T[], int N) 
{
    printf("Prime pairs in T:\n");
    for (int i = 0; i < N - 1; i++) 
    {
        for (int j = i + 1; j < N; j++) 
        {
            if (is_prime(T[i] + T[j])) 
            {
                printf("(%d, %d)\n", T[i], T[j]);
            }
        }
    }
}
int main() 
{
    int N;
    printf("Enter the number of elements in the array (2 <= N <= 50): ");
    scanf("%d", &N);

    if (N < 2 || N > 50) 
    {
        printf("Invalid input for N. Exiting...\n");
        return 1;
    }
    int T[N];
    printf("Enter %d non-zero natural numbers:\n", N);
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &T[i]);
        if (T[i] == 0) 
        {
            printf("Zero is not a non-zero natural number. Exiting...\n");
            return 1;
        }
    }
    display_prime_pairs(T, N);

}
