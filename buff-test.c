#include <stdio.h>
#include <unistd.h>

#define SIZE 2

int main(void) {
    static char buffer[SIZE];

    if(setvbuf(stdout, buffer, _IOFBF, sizeof(buffer)) != 0 ){
        printf("setvbuf error\n");
    }

    for (int i = 0; i < 20; i++) {
        printf("%d", i);

        if (i % 5 == 4) {
            printf("\n");
        }

        usleep(500000);
    }

    printf("\n");
}
