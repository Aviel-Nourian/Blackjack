#include <string>
#include <random>

class Card
{
public:
    int value;

    Card()
    {
        value = random();
    }
};