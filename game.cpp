#include "game.h"

Game::Game(std::string user_choice) {
    this->user_choice = user_choice;
    this->comp_choice = this->compMakeChoice();
}

std::string Game::getUserChoice() {
    return this->user_choice;
}

std::string Game::getCompChoice() {
    return this->comp_choice;
}

std::string Game::decideWinner() {
    if (this->user_choice == this->comp_choice) return resultToString(TIE);
    else {
        if (this->user_choice == "rock") {
            if (this->comp_choice == "scissors") return resultToString(USER);
            else if (this->comp_choice == "paper") return resultToString(COMPUTER);
        }
        else if (this->user_choice == "paper") {
            if (this->comp_choice == "rock") return resultToString(USER);
            else if (this->comp_choice == "scissors") return resultToString(COMPUTER);
        }
        else if (this->user_choice == "scissors") {
            if (this->comp_choice == "paper") return resultToString(USER);
            else if (this->comp_choice == "rock") return resultToString(COMPUTER);
        }
    }
    return resultToString(INCONCLUSIVE);
}

std::string Game::compMakeChoice() {
    std::string choices[3] = { "rock", "paper", "scissors" };
    return choices[rand()%3];
}

const std::string Game::resultToString(Game::Result r) {
    switch (r) {
        case TIE:           return "tie";
        case USER:          return "user";
        case COMPUTER:      return "computer";
        case INCONCLUSIVE:
        default:            return "inconclusive";
    }
}
