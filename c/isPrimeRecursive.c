#include<stdio.h>

int isPrime(int, int);

int main()
{
    int num, prime;
    printf("Enter a positive number to check if it is prime: ");
    scanf("%d", &num);
    prime = isPrime(num, num/2);
    if(prime)
        printf("\n%d is a prime number\n", num);
    else
        printf("\n%d is a Composite number\n", num);
    return 0;
}

int isPrime(int n, int i)
{
    return i == 1 ? 1 : (n % i == 0 ? 0 : isPrime(n, i - 1));
}
