#include "Card.cpp"

class Hand
{
private:
    Card c1;
    Card c2;
    int handValue;

public:
    // getters
    Card getCard1()
    {
        return c1;
    }
    Card getCard2()
    {
        return c2;
    }

    // setters
    void setCard1(Card inCard)
    {
        c1 = inCard;
    }
    void setCard2(Card inCard)
    {
        c2 = inCard;
    }

    // Constructor
    Hand()
    {
        c1 = Card();
        c2 = Card();
        handValue = c1.getValue() + c2.getValue();
    }
};