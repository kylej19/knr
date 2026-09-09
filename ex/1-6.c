#include <stdio.h>

/* verify the expression getchar() != EOF is 0 or 1 */
/* copy input to output, v2 */
int main()
{
    int c;

    while (printf(c = getchar()) != EOF) {
        putchar(c);
    }
}
