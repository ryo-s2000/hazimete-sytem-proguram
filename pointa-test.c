#include <stdio.h>

int main(void)
{
    int *p;
    int i;
    p = &i;

    printf("p = %p\n", p);
    printf("&i = %p\n", &i);

    printf("p = %i\n", *p);
    printf("i = %i\n", i);

    *p = 100;

    printf("p = %i\n", *p);
    printf("i = %i\n", i);

    return 0;
}
