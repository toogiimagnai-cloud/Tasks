#include <stdio.h>

int main() {
    float a, n, b, area, perimeter;
    
    
    printf("a талын уртыг оруулна уу: ");
    scanf("%f", &a);
    
    printf("n коэффициентийг оруулна уу : ");
    scanf("%f", &n);
    
    
    b = n * a;
    
    
    area = a * b;
    perimeter = 2 * (a + b);
    
    
    printf("\nТооцооллын үр дүн:\n");
    printf("a тал = %.2f\n", a);
    printf("b тал = %.2f\n", b);
    printf("Талбай = %.2f\n", area);
    printf("Периметр = %.2f\n", perimeter);
    
    return 0;
}
