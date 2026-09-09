#include <stdio.h>

int main(int argc, char **argv)
{
    int c, spaces = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++spaces;
            if (spaces == 4) {
                putchar('\t');
                spaces = 0;
            }
        } else {
            while (spaces > 0) {
                spaces--;
                putchar(' ');
            }
            putchar(c);
        }
    }
}
