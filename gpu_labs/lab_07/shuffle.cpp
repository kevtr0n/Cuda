#include <stdlib.h>
#include "Card.h"
#include "shuffle.h"


static Suit suits[] = {
  HEARTS, SPADES, DIAMONDS, CLUBS
};

static Rank ranks[] = {
  ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING
};

void init(Card* cards) {
  for(int suitno=0; suitno < 4; suitno++) {
    for(int rankno=0; rankno < 13; rankno++) {
      cards->rank = ranks[rankno];
      cards->suit = suits[suitno];
      cards++;
    }
  }

  return;
}

/**
 * Shuffles a deck.
 */
void shuffle(Card* cards) {
  for(int index = 0; index < SHOE_SIZE; index++) {
    Card temp = Card_(cards[index]);
    int random = rand() % (51 + 1 - 0) + 0;
    cards[index] = cards[random];
    cards[random] = temp;
  }
}

/**
 * Decodes the given rank and returns
 * a corresponding char* value.
 * ----------------------------------- *
 * @param rank    a card rank
 * @return        a string
 */
char* decode(Rank rank) {
  switch (rank) {
    case NO_RANK: return "NO RANK";
    case ACE:     return "ACE";
    case TWO:     return "TWO";
    case THREE:   return "THREE";
    case FOUR:    return "FOUR";
    case FIVE:    return "FIVE";
    case SIX:     return "SIX";
    case SEVEN:   return "SEVEN";
    case EIGHT:   return "EIGHT";
    case NINE:    return "NINE";
    case TEN:     return "TEN";
    case JACK:    return "JACK";
    case QUEEN:   return "QUEEN";
    case KING:    return "KING";
  }
}

/**
 * Decodes the given suit and returns
 * a corresponding char* value.
 * ----------------------------------- *
 * @param suit    a card suit
 * @return        a string
 */
char* decode(Suit suit) {
  switch (suit) {
    case NO_SUIT:   return "NO SUIT";
    case DIAMONDS:  return "DIAMONDS";
    case HEARTS:    return "HEARTS";
    case SPADES:    return "SPADES";
    case CLUBS:     return "CLUBS";
  }
}