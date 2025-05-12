#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void usage(char *program_name) {
    printf("Sposob uzycia: %s <pierwsz liczba> <rodzaj działania> <druga liczba>\n", program_name);
    exit(1);
}
int main(int argc, char *argv[]) {
    int first_number, second_number,result;
    char *operation;
    if (argc < 3)
        usage(argv[0]);
    first_number = atoi(argv[1]);
    second_number = atoi(argv[3]);
    operation = argv[2];
    if (strcmp(operation, "add") == 0) {
        result = first_number + second_number;
        printf("%d + %d = %d\n",first_number,second_number, result);
    }else if (strcmp(operation, "sub") == 0) {
        result = first_number - second_number;
        printf("%d - %d = %d\n",first_number,second_number, result);

    }else if (strcmp(operation, "multiply") == 0) {
        result = first_number * second_number;
        printf("%d * %d = %d\n",first_number,second_number, result);
    }else if (strcmp(operation, "divide") == 0) {
        if(second_number == 0) {
            printf("Nie mozna dzielic przez 0!!!");
            exit(1);
        }else {
            float result_of_dividing;
            result_of_dividing = (float)first_number / (float)second_number;
            printf("%d / %d = %f\n",first_number,second_number, result_of_dividing);
        }
    }
    return 0;
}
