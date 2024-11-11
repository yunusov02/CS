#include <stdio.h>

int main() {
    unsigned int height = 12345552;
    long long dist = 12355666LL;
    long double weight = 45.34566672;

    printf("%u %lld %.4Lf", height, dist, weight);

    return 0;
}
