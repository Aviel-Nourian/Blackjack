#include "Card.cpp"
#include <vector>

class Hand
{
private:
    std::vector<Card> cards;
    int handValue;

public:
    // getters
    std::vector<Card> getCards() const 
    {
        return cards;
    }

    int getHandValue() const
    {
        return handValue;
    }

    // setters
    void setCards(std::vector<Card> inCards)
    {
        cards = inCards;
    }

    void setHandValue(int inHandValue)
    {
        handValue = inHandValue;
    }

    // Constructor
    Hand()
    {
        cards.push_back(Card());
        cards.push_back(Card());
        handValue = cards[0].getValue() + cards[1].getValue();
    }

    bool hasBlackjack()
    {
        if (handValue == 21)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool hasBusted()
    {
        if (handValue > 21)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

// Operator Overloading
std::ostream& operator<<(std::ostream& os, Hand h)
{
    os << "Hand: ";
    for (int i = 0; i < h.getCards().size(); i++)
    {
        os << h.getCards()[i].getName();
        os << " ";
    }
    os << std::endl;

    int tempHandValue = 0;
    for (int i = 0; i < h.getCards().size(); i++)
    {
        tempHandValue+= h.getCards()[i].getValue();
    }
    h.setHandValue(tempHandValue);
    os << h.getHandValue() << std::endl;
    return os;
}