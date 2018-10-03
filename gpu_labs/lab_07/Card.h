/*! \enum Suit
    \brief Suits in shoe
*/
typedef enum {
  NO_SUIT = 0,     /**< Default suit */
  HEARTS = 'H',
  SPADES = 'S',
  DIAMONDS = 'D',
  CLUBS = 'C'
} Suit;

/*!
  \enum Rank
  \brief Ranks in shoe
*/
typedef enum {
  NO_RANK=0,        /**< Default rank */
  ACE,
  TWO,
  THREE,
  FOUR,
  FIVE,
  SIX,
  SEVEN,
  EIGHT,
  NINE,
  TEN,
  JACK,
  QUEEN,
  KING
} Rank;

/*! \struct Card
    \brief  Defines a card.
*/
typedef struct {
  Rank rank;
  Suit suit;
} Card;

/*!
  \brief No-args constructor
*/
Card Card_();

/*!
  \brief Constructor
  \param rank Card rank
  \param suit Card suit
*/
Card Card_(Rank rank, Suit suit);

/*!
  \brief Copy constructor
  \param card Card to copy
 */
Card Card_(Card card);