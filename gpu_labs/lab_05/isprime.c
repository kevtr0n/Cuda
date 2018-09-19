/*!
 * This program tests whether the command line argument is a positive prime number.
 * However, it is incomplete. The isvalid and isprime functions need to be written.
 * \author Ron Coleman
 * \date 16 Sep 2018
 */
#include <stdio.h>
#include <stdbool.h>

/*!
  \brief Tests if a (string) number is prime.
  \param number Number as a to test
  \return True if number is prime and false otherwise.
*/
extern bool isprime(char* number);

/*!
  \brief Tests if a string is a valid number.
  \param number String to test
  \return True if string contains only alphanumerics.
*/
extern bool isvalid(char* number);

int main(int argc, char** argv) {
  // Validate the command has proper argument.
  if(argc == 1) {
    fprintf(stderr,"usage: isprime number\n");
    return 1;
  }

  // Get the command line value as a string and validate that it is
  // a legitimate number as a string.
  char* number = argv[1];

  if(!isvalid(number)) {
    fprintf(stderr,"bad argument: '%s'\n",number);
    return 2;
  }

  // Test number (string) as a prime
  bool aprime = isprime(number);

  printf("%s: %s\n", number, aprime?"YES":"no");

  return 0;
}