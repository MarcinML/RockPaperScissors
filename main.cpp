#include <iostream>
#include <algorithm>
#include "game.h"

using namespace std;

int main(int argc, char *argv[]) {
    string choice;
    if (argc == 2) {
        choice = argv[1];
    }
    while (choice.empty() || (choice != "rock" && choice != "paper" && choice != "scissors")) {
        cout << "Enter your choice as a word (rock, paper, scissors):\n> ";
        getline(cin, choice);
    }
    transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
    Game *game = new Game(choice);
    cout << "You chose: " << game->getUserChoice() << "." << endl;
    cout << "The computer chose: " << game->getCompChoice() << "." << endl;
    cout << "The winner is: " << game->decideWinner() << "." << endl;
    delete game;
    return 0;
}
