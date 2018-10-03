
#define SHOE_SIZE 52

/*!
  \brief Overwrite cards with real cards.
  \param cards Cards in the shoe
*/
void init(Card* cards);

/*!
  \brief Randomly shuffles cards in the shoe.
  \param cards Cards in the shoe
*/
void shuffle(Card* cards);

/*!
  \brief Decodes a rank to its string form.
  \param rank Rank to decode
  \return Rank in string form
*/
char* decode(Rank rank);

/*!
  \brief Decodes a suit to its string form.
  \param suit Suit to decode
  \return Suit in string form
*/
char* decode(Suit suit);