#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    printf("%d\n", atoi("         -42"));
    printf("%d\n", atoi(" +555"));
    printf("%d\n", atoi("   1234567890    "));
    printf("%ld\n", atol("         -42"));
    printf("%ld\n", atol(" +555"));
    printf("%ld\n", atol("   1234567890    "));
    return 0;
}
