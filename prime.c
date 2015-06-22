#include <stdio.h>
#include <time.h>

int result = 0;
int main() {
    clock_t begin, end;
    double time_spent;
    int i, j, k, l, prime;

    begin = clock();
    result |= 2;
    for (i = 3; i <= 10000; i++) {
        prime = 1;
        for (j = 2; j < i; j++) {
            k = i/j;
            l = k*j;
            if (l == i) prime = 0;
        }
        if (prime) result |= i;
    }
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Time: %fs\n", time_spent);
    return 0;
}
