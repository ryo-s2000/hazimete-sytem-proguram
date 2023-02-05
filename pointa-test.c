#include <stdio.h>

void change_array(int* data);
void print_array(int data[]);

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

    // int array[10];
    int array[10] = { 15, 78, 98, 15, 98, 85, 17, 35, 42, 15 };

    change_array(array);
    print_array(array);

    return 0;
}

void change_array(int* data)
{
    data[0] = 0;
    data[1] = 0;
}

void print_array(int data[])
{
    for (int i = 0; i < 10; i++) {
        printf("%p:%d\n", &data[i], data[i]);
    }
}
