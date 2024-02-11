#include <stdio.h>

void IntFrac(double x, int *integerPart, double *fractionalPart) 
{
    *integerPart = (int)x;
    *fractionalPart = x - *integerPart;
}

void Fexpo(double fractionalPart, int *M, int *n) 
{
    *n = 0;
    while (fractionalPart - (int)fractionalPart != 0) 
    {
        fractionalPart *= 10;
        (*n)--;
    }
    *M = (int)fractionalPart;
}

int reverseNumber(int num) 
{
    int rev = 0;
    while (num > 0) 
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int isMirror(int integerPart, int M) 
{
    return integerPart == reverseNumber(M);
}

void DisplayMirrorElements(int T[], int N) 
{
    for (int i = 0; i < N; i++) {
        double number = T[i];
        int integerPart;
        double fractionalPart;
        int M, n;
        
        IntFrac(number, &integerPart, &fractionalPart);

        Fexpo(fractionalPart, &M, &n);

        if (isMirror(integerPart, M)) {
            printf("%f\n", number);
        }
    }
}

int main(void) 
{
    int T[] = {23658, 85632, 12345, 54321};
    int N = sizeof(T) / sizeof(T[0]);

    DisplayMirrorElements(T, N);

}
