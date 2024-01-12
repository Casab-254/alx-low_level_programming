
#include <unistd.h>

/* Helper function to print a single character */
void _putchar(char c) {
    write(1, &c, 1);
}

/* Helper function to print an integer */
void print_number(int n) {
    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    if (n / 10 != 0) {
        print_number(n / 10);
    }

    _putchar(n % 10 + '0');
}

/* Helper function to check if a number is divisible by any number up to its square root */
int is_divisible(int n, int divisor) {
    if (divisor * divisor > n) {
        return 0;  /* Not divisible by any number up to its square root */
    } else if (n % divisor == 0) {
        return 1;  /* Divisible, not a prime number */
    } else {
        return is_divisible(n, divisor + 1);
    }
}

/* Main function to check if a number is prime */
int is_prime_number(int n) {
    if (n < 2) {
        return 0;  /* Numbers less than 2 are not prime */
    } else {
        return !is_divisible(n, 2);  /* Check for divisibility starting from 2 */
    }
}

int main() {
    /* Example usage */
    int result = is_prime_number(17);
    print_number(result);
    _putchar('\n');

    result = is_prime_number(4);
    print_number(result);
    _putchar('\n');

    return 0;
}
