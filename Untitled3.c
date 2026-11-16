#include <stdio.h>
#include <math.h>
int main() {
    int k = 1, count = 1;
    double y, e, S=0.;
    y = pow(-1, k) * (3*k+1) / (3*pow(k, 3)-1);
    printf("Enter value of epsilon: ");
    scanf("%lf", &e);
    while(fabs(y) >= e) {
          S = S += y;
          printf("%d) y = %.6lf  S = %.6lf\n", count, y, S);
          count++;
          k++;
          y = pow(-1, k) * (3*k+1) / (3*pow(k, 3)-1);
    }
    printf("y = %.6lf is less than mistake = %.6lf", fabs(y), e);
    printf("\nFinal S = %lf", S);
    return 0;}
