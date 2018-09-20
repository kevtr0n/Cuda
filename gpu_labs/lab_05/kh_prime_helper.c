/**
 * @author: Kevin Hayden
 * @file:   kh_prime_helper.c
 * @date:   September 18th, 2018
 * 
 * This file contains helper methods which
 * provide checks for whether an input is
 * prime or a valid integer value.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * ------------------------------------------
 * Checks to see if the number value provided
 * is a prime number.
 * ------------------------------------------
 * @param number:   an integer in char* form.
 * @return          a bool value.
 * ------------------------------------------
 */
bool isprime(char* number) {

    // Convert input to an integer.
    int number__ = atoi(number);
    
    // Numbers less than 2 cannot be prime.
    if (number__ < 2) {
        return false;
    }

    // If input is divisible by any number other
    for (int i = 2; i <= number__; i++) {
        if ((number__ / i) == 0) {
            return false;
        }
    }

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
bool isvalid(char* number) {

    int number__ = atoi(number);

    // Numbers less than 2 cannot be prime.
    if (number__ == 0 && number[0] != '0') {
        return false;
    }

    return true;
}