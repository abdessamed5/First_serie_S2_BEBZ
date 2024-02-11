
#include <stdio.h>

int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) 
{
    return (a * b) / gcd(a, b);
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
    int gcd_result = 0;
    int lcm_result = 1;
    for (int i = 0; i < N; i++) 
        {
    gcd_result = gcd(gcd_result, T[i]);
    lcm_result = lcm(lcm_result, T[i]);
        }

    printf("GCD of the elements of T: %d\n", gcd_result);
    printf("LCM of the elements of T: %d\n", lcm_result);
}
