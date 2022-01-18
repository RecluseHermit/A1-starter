/**
 * Assignment-1
 * CSE30 Username: cs30wi22mt
 * Class: UCSD CSE30-WI22
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    if (argc != 2) {
        fprintf(stderr, "%s wrong number of arguments\n", argv[0]);
        return EXIT_FAILURE;
    }

    unsigned int population = (unsigned) atoi(argv[1]);

    // output to print each line
    int remain, i = 0;

    while(population > 0){
        // get the value for variables
        remain = population % 2;
        population = population / 2;

        // print the result
        printf("%d * 2^%d\n", remain, i);
        i++;
    }

    return EXIT_SUCCESS; 
}
