//Write  an  algorithm  to  determine  whether  a  given  number  is  prime  or  not.

#include <stdio.h>
#include <math.h>

int main() {
    int n, isPrime = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Handle numbers less than or equal to 1
    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
        return 0;
    }

    // Check divisors from 2 to sqrt(n)
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = 0; // Found a divisor, not prime
            break;
        }
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}


