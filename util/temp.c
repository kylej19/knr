#include <stdio.h>

double ftoc(int);

int main()
{
    int fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    for (fahr = lower; fahr <= upper; fahr = fahr + step)
        printf("F: %d\tC: %.0f\n", fahr, ftoc(fahr));
}

double ftoc(int fahr)
{
    return (double) (fahr-32) * (5.0 / 9.0);
}
