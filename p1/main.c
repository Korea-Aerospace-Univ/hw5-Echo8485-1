#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int found = 0;

    for (int a = 0; a <= N / 900; a++) {
        for (int b = 0; b <= N / 750; b++) {
            if (b % 2 != 0) continue; // b는 짝수

            for (int c = 0; c <= N / 200; c++) {

                int total = 900 * a + 750 * b + 200 * c;

                if (total == N && c <= b) {
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
