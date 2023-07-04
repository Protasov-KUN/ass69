#include <stdio.h>

int main()
{
    double b[2] = {1.2, 1.2};
    
    int a = 1;
    int c = 2;
    int d = 3;

    puts("array: idouble b[]");
    printf("b[0]: %.1lf\n", b[0]);
    printf("b[1]: %.1lf\n", b[1]);

    puts("var: int a");
    printf("a: %i\n", a);

    puts("var: int c");
    printf("c: %i\n", c);

    puts("var: int d");
    printf("d: %i\n", d);
    
    printf("a+c+d: %i\n", a+c+d);

    return 0;
}
