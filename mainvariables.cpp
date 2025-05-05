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
    if (strcmp(operation, "add") == 0) {
        result = firstnumber + secondnumber;
        printf("%d + %d = %d\n",firstnumber,secondnumber, result);
    }else if (strcmp(operation, "sub") == 0) {
        result = firstnumber - secondnumber;
        printf("%d - %d = %d\n",firstnumber,secondnumber, result);

    }else if (strcmp(operation, "multiply") == 0) {
        result = firstnumber * secondnumber;
        printf("%d * %d = %d\n",firstnumber,secondnumber, result);
    }else if (strcmp(operation, "divide") == 0) {
        if(secondnumber == 0) {
            printf("Nie mozna dzielic przez 0!!!");
            exit(1);
        }else {
            result = firstnumber / secondnumber;
            printf("%d / %d = %d\n",firstnumber,secondnumber, result);
        }
    }
    return 0;
}