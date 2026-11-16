#include <stdio.h>
#include <math.h>
int main() {
    double x, y;
    int count = 1, n;
    printf("Enter number of members: ");
    scanf("%d", &n);
    printf("Enter value of x: ");
    scanf("%lf", &x);
    double S = (x-1)/(x+2);
    for (int i = 2; i <= n; i++) {
        int a = 2 * i - 1;
        y = 1. / a * pow((x-1)/(x+1), a);
        S = S += y;
        printf("%d) y = %.4lf  S = %.4lf\n", count, y, S);
        count++;
        }
    printf("This is the sum of %d numbers: %.4lf", n, S);
    return 0;
}
