enum class Suit {
  DIAMOND,
  CLUB,
  HEART,
  SPADE, // extra comma allowed in C++11
};

Suit s = Suit::CLUB;

enum class Altitude : char {
  HIGH = 'h',
  LOW = 'l',
};

char a = static_cast<char>(Altitude::HIGH); // a = 'h'
