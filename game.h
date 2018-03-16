#include <string>

#ifndef ROCKPAPERSCISSORS_GAME_H
#define ROCKPAPERSCISSORS_GAME_H


class Game {
public:
    enum Result { TIE, USER, COMPUTER, INCONCLUSIVE };
    Game(std::string user_choice);
    std::string getUserChoice();
    std::string getCompChoice();
    std::string decideWinner();
    const std::string resultToString(Result r);
private:
    std::string user_choice;
    std::string comp_choice;
    std::string compMakeChoice();
};


#endif // GAME_H
