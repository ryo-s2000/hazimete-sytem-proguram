#include <stdio.h>

int
main(void)
{
	printf("Hello");
    int count = 0;

	goto StartLoop;

	printf("World");

loop:
    count++;
    printf("%d", count);
    if (count >= 10) goto END;
    goto loop;

StartLoop:
	goto loop;

END:
    return 0;
}
