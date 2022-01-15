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
  
    // put your code here (use as many lines as you need)

    // set up maximum loop and variable needed for the loop
    int n = 32, i = 0, remain;

    // output to print each line
    while(i < n){
        // check for the end of the process
        if(population == 0)
            break;

        remain = population % 2;
        population = population / 2;

        // print the result
        printf("%d * 2^%d\n", remain, i);
        i++;
    }

    return EXIT_SUCCESS; 
}
