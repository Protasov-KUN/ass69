#include <stdio.h>

int main()
{
    double b[2] = {1.2, 1.2};
    
    int a = 1;
    int d = 3;
   
    puts("array: idouble b[]");
    printf("b[0]: %.1lf\n", b[0]);
    printf("b[1]: %.1lf\n", b[1]);

    puts("array: int a");
    printf("a: %i\n", a);

    puts("array: int d");
    printf("d: %i\n", d);
    
    printf("a+d: %i\n", a+d);

    return 0;
}
