#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void usage(char *program_name) {
    printf("Sposob uzycia: %s <pierwsz liczba> <rodzaj działania> <druga liczba>\n", program_name);
    exit(1);
}
int main(int argc, char *argv[]) {
    int firstnumber, secondnumber,result;
    char *operation;
    if (argc < 3)
        usage(argv[0]);
    firstnumber = atoi(argv[1]);
    secondnumber = atoi(argv[3]);
    operation = argv[2];

    return 0;
}