#include "Card.h"

Card Card_(void) {
	Card card = Card_(NO_RANK, NO_SUIT);
	return card;
}

Card Card_(Rank rank, Suit suit) {
	Card card = {rank, suit};
	return card;
}

Card Card_(Card card) {
	Card copy = Card_(card.rank, card.suit);
	return copy;
}