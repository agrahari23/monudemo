#include <stdio.h>
#include <math.h>

int main()
{
    char eq1[20];
    char eq2[20];
    float a1, a2, b1, b2, c1, c2, x, y;
    printf("Note:enter the equation without giving any gap\n\n");
    printf("Enter the first equation: ");
    scanf("%s", eq1);
    printf("\nEnter the second equation: ");
    scanf("%s", eq2);

    printf("enter the coefficient of eq1 and constant: ");
    scanf("%f"
          "%f"
          "%f",
          &a1, &b1, &c1);

    printf("enter the coefficient of eq2 and constant: ");
    scanf("%f"
          "%f"
          "%f",
          &a2, &b2, &c2);

    x = (c1 - (b1 * c2) / b2) / (a1 - (b1 * a2) / b2);
    y = (c2 - a2 * x) / b2;

    printf("value of x= %f\n", x);
    printf("value of y= %f\n", y);

    return 0;
}
