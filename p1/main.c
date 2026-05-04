#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int found = 0;

    for (int a = 1; a <= N / 900; a++) {          // A 최소 1
        for (int b = 2; b <= N / 750; b += 2) {   // B 짝수 + 최소 2
            for (int c = 1; c <= N / 200; c++) {  // C 최소 1

                int total = 900 * a + 750 * b + 200 * c;

                if (total == N && (c < a || c < b)) {
                    printf("%d %d %d\n", a, b, c);
                    found = 1;
                }
            }
        }
    }

    if (!found) {
        printf("none\n");
    }

    return 0;
}
