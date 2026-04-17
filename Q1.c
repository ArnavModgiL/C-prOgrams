// PRIME NUMBER CHECK :

#include <stdio.h>

int verifyPrime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int T, n;
    scanf("%d", &T);

    while (T--) {
        scanf("%d", &n);

        if (verifyPrime(n))
            printf("PRIME\n");
        else
            printf("NOT PRIME\n");
    }

    return 0;
}