/**
 * @author: Kevin Hayden
 * @file:   kh_sieve.c
 * @date:   September 27th, 2018
 * 
 * This file contains the code to implement the
 * Sieve of Eratosthenes.
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int* number);
bool isValid(char* number);
int getPrimes(int* number);

int main(int argc, char** argv) {

    // If no arguments are provided, exit with code 1:
    if (argc == 1) {
        fprintf(stderr, "Usage: sieve number");
        return 1;
    }

    // Get the command line argument as a string and validate that it is a number:
    char* number = argv[1];
    if (!isValid(number)) {
        fprintf(stderr, "Bad Argument: '%s'\n", number);
        return 2;
    }

    // Convert the input to an integer:
    int number__ = atoi(number);
    int* ptr = &number__;

    // Print primes:
    printf("2-%d: ", number__);
    int exit_code = getPrimes(ptr);
    return exit_code;
}

/**
 * ------------------------------------------
 * Checks to see if the number value provided
 * is a prime number.
 * ------------------------------------------
 * @param number:   an integer in char* form.
 * @return          a bool value.
 * ------------------------------------------
 */
bool isPrime(int* number) {
    
    // Numbers less than 2 are not prime:
    if (*number < 2) {
        return false;
    }

    // Return false if the number is divisible by 1 or itself:
    for (int i = 2; i < *number; i++) {
        if ((*number % i) == 0) {
            return false;
        }
    }

    // Else, return true:
    return true;
}

/**
 * ------------------------------------------
 * Checks to see if the provided input is a
 * number.
 * ------------------------------------------
 * @param number:   an integer in char* form.
 * @return          a bool value.
 * ------------------------------------------
 */
bool isValid(char* number) {

    // Convert the input to an integer:
    int number__ = atoi(number);

    // Make sure the input is a number:
    if (number__ == 0 && number[0] != '0') {
        return false;
    }

    // Numbers less than 2 aren't valid:
    if (number__ < 2) {
        return false;
    }

    // Else, return true:
    return true;
}

/**
 * ------------------------------------------
 * Prints all prime numbers within range of 2 
 * to the provided number.
 * ------------------------------------------
 * @param number:   an integer.
 * @return          a return code.
 */
int getPrimes(int* number) {

    // Dynamically allocate enough memory to hold primes:
    int *primes = (int *)malloc(*number * sizeof(int));

    // If malloc fails, free the memory and return exit code 3:
    if (primes == NULL) {
        free(primes);
        fprintf(stderr, "sieve: memory overflow");
        return 3;
    }

    // Initialize counter:
    int counter = 0;

    // Add each prime to memory and increment counter:
    for (int i = 2; i < *number; i++) {
        int* ptr = &i;
        if (isPrime(ptr)) {
            primes[counter] = i;
            counter++;
        }
    }

    // Print each prime:
    for (int i = 0; i < counter; i++) {
        printf("%d ", primes[i]);
    }
    printf("\n");
    
    // Free memory:
    free(primes);

    // Return exit code 0:
    return 0;
}