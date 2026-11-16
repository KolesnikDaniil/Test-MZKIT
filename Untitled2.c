#include <stdio.h>
#include <math.h>
int main() {
    double y, y1, y2, S = 0., S1 = 0., S2 = 0.;
    int k_end, k, k1 = 1, k2 = 1, count = 1, count1 = 1, count2 = 1;
    printf("Enter number of members: ");
    scanf("%d", &k_end);
    printf("             \n");
    printf("For\n");
    printf("             \n");
    for (k = 1; k <= k_end; k++) {
        y = pow(-1., k) * (3 * k+1) / (3 * pow(k, 2) - 1);
        S = S += y;
        printf("%d) y = %.4lf  S = %.4lf\n", count, y, S);
        count++;
    }
    printf("             \n");
    printf("While\n");
    printf("             \n");
    while (k1 <= k_end) {
        y1 = pow(-1., k1) * (3 * k1+1) / (3 * pow(k1, 2) - 1);
        S1 = S1 += y1;
        printf("%d) y = %.4lf  S = %.4lf\n", count1, y1, S1);
        count1++;
        k1++;
    }
    printf("             \n");
    printf("Do-While\n");
    printf("             \n");
    do {
        y2 = pow(-1., k2) * (3 * k2+1) / (3 * pow(k2, 2) - 1);
        S2 = S2 += y2;
        printf("%d) y = %.4lf  S = %.4lf\n", count2, y2, S2);
        count2++;
        k2++;
    } while (k2 <= k_end);
    return 0; }
