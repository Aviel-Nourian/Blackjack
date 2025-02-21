#include <string>
#include <random>
#include <iostream>

class Card
{
private:
    std::string name;
    int value;

public:
    // getters
    std::string getName() const
    {
        return name;
    }
    int getValue() const
    {
        return value;
    }

    // setters
    void setName(std::string inName)
    {
        name = inName;
    }
    void setValue(int inValue)
    {
        value = inValue;
    }
    
    
    // Initializes a Card with a random value and gives it a name
    Card()
    {
        value = rand() % 13 + 1;
        if (value == 1)
        {
            name = "Ace";
            value = 11;
        }else if (value == 2)
        {
            name = "Two";
        }else if (value == 3)
        {
            name = "Three";
        }else if (value == 4)
        {
            name = "Four";
        }else if (value == 5)
        {
            name = "Five";
        }else if (value == 6)
        {
            name = "Six";
        }else if (value == 7)
        {
            name = "Seven";
        }else if (value == 8)
        {
            name = "Eight";
        }else if (value == 9)
        {
            name = "Nine";
        }else if (value == 10)
        {
            name = "Ten";
        }else if (value == 11)
        {
            name = "Jack";
            value = 10;
        }else if (value == 12)
        {
            name = "Queen";
            value = 10;
        }else if (value == 13)
        {
            name = "King";
            value = 10;
        }
    }
};