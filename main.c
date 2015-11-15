#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define GIGS 8

int main(int argc, char **argv) {
    char *blob[GIGS];
    size_t size = 1024 * 1024 * 1024 * sizeof(char);
    printf("allocating\n");
    for (int i = 0; i < GIGS; i++) {
        blob[i] = (char *) malloc(size);
        memset(blob[i], '\0', size);
    }
    while(1) {
        printf(".");
        fflush(stdout);
        sleep(10);
    }
}
