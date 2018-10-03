#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Card.h"
#include "shuffle.h"

int main(int argc, char** argv) {
  // Initialize the random number generator
  srand(time(NULL));
  
  // Initialize the shoe with default cards
  Card shoe[SHOE_SIZE] = { Card_() };

  // Put in "real" cards
  init(shoe);

  // Shuffle the shoe
  shuffle(shoe);

  // Output the shoe
  printf("Randomized shoe:\n");

  for(int k=0; k < SHOE_SIZE; k++) {
    printf("#%2d %s of %s\n", k+1, decode(shoe[k].rank), decode(shoe[k].suit));
  }

  return 0;
}