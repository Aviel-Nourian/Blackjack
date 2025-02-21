#include "Hand.cpp"

// Starting money
int money = 10;

void hit(Hand hand)
{
    
}

void play()
{
    // Initializes starting variables
    Hand dealer;
    Hand player;
    Card dealerShowCard = dealer.getCards()[0];
    int bet;
    std::string betString;
    std::string temp;
    bool insurance;
    int bets = 1;

    // Asks for bet
    std::cout << "How much would you like to bet? You have " << money << " dollars: ";
    std::getline(std::cin, betString);
    bet = stoi(betString);
    while (bet > money)
    {
        std::cout << "You can't bet more money than you have. Please enter a correct bet amount: ";
        std::getline(std::cin, betString);
        bet = stoi(betString);
        //IMPORTANT
        money -= bet;
    }

    // Prints dealers hand and players hand
    std::cout << "Dealer is showing a " << dealerShowCard.getName() << std::endl;
    std::cout << "Your " << player;

    // Checks for blackjack
    if (player.hasBlackjack())
    {
        std::cout << "Blackjack!" << std::endl;
        money += bet + bet * 1.5;
    }

    // Checks for insurance
    if (dealerShowCard.getValue() == 11)
    {
        std::cout << "Would you like to buy insurance? (y/n): ";
        std::getline(std::cin, temp);
        while(temp != "y" || temp != "n")
        {
            std::cout << "Please enter a 'y' or 'n': ";
            std::getline(std::cin, temp);
        }
        if(temp == "y")
        {
            insurance = true;
        }
        else
        {
            insurance = false;
        }
        // If dealer has 21
        if(dealer.getHandValue() == 21)
        {
            /* 
            TODO: INSURANCE
            */
        }
    }
    //Split
    if (player.getCards()[0].getValue() == player.getCards()[1].getValue())
    {
        std::cout << "Would you like to split (y/n)?: ";
        std::getline(std::cin, temp);
        if(temp == "y")
        {
            /*
            TODO: SPLIT
            */
        }
    }
    //Player's action
    if (!player.hasBlackjack() && dealerShowCard.getValue() != 11)
    {
        std::cout << "Would you like to hit, stand, or double (h/s/d)";
        std::getline(std::cin, temp);
        if (temp == "h")
        {
            player.getCards().push_back(Card());
        } 
        else if (temp == "d")
        {
            if (money - bet < 0)
            {
                std::cout << "Insufficient funds to double." << std::endl;
            }
            else
            {
                money -= bet;
                bet *= 2;
            }
        }
        
        //for(player.getHandValue() < 21)
        {
            
        }
    }
}


int main()
{
    std::cout << "---WELCOME TO THE BLACKJACK TABLE---" << std::endl;    

    // Starts while loop for gameplay
    while (money > 0)
    {
        play();
    }
    
}