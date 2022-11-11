#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, z;
    int x1, x2, x3, y1, y2, y3, z1, z2, z3;
    int A, B, C, D, result;


    printf("Enter x1, y1, z1: ");
    scanf("%d %d %d", &x1, &y1, &z1);				// Use 1, 7, 2
    printf("Enter x2, y2, z2: ");
    scanf("%d %d %d", &x2, &y2, &z2);				// Use 8, 2, 2
    printf("Enter x3, y3, z3: ");
    scanf("%d %d %d", &x3, &y3, &z3);				// Use 5, 1, 9

    printf("Enter the point x, y, z to be tested: ");
    scanf("%d %d %d", &x, &y, &z);

    A = (y1*(z2 - z3)) + (y2*(z3 - z1)) + (y3*(z1 - z2));
	printf("%d\t", A);
    B = z1*(x2 - x3) + z2*(x3 - x1) + z3*(x1 - x2);
	printf("%d\t", B);
    C = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);
	printf("%d\t", C);
    D = -x1*(y2*z3 - y3*z2) - x2*(y3*z1 - y1*z3) - x3*(y1*z2 - y2*z1);
	printf("%d\t", D);

    result = (A*x + B*y + C*z + D);
    printf("%d", result);
    if(result <= 0)
    {
        printf("(%d, %d, %d) lies inside the surface", x, y, z);
    }
    if(result > 0)
    {
        printf("(%d, %d, %d) lies outside the surface", x, y, z);
    }
}