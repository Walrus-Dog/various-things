#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main () {
    cout << "\n\t\t\tWelcome to the number guessing game!"
        << endl;
    cout << "You have to guess a number between 1 and 100. "
        << "You will have limited choices based on the level you choose. "
        << "Good luck!"
        << endl;

    while (true) {
        cout << "\nEnter a difficulty level: \n";
        cout << "1 for easy!\t";
        cout << "2 for medium!\t";
        cout << "3 for hard!\t";
        cout << "0 to close the program!\n";

        //Slection of the difficulty level
        int difficultyLevel;
        cout << "\nChose your level :";
        cin >> difficultyLevel;

        //Generate the secret number
        srand(time(0));
        int secretNumber = 1 + (rand() % 100);
        int playerChoice;

        //Easy level
        if (difficultyLevel == 1) {
            cout << "\nYou have chosen the easy level!"
                << "\nYou have 10 guesses to find the number between 1 - 100";
            int guessesLeft = 10;
            for (int i = 1; i <= 10; i++) {

                //Prompts for player to enter their number
                cout << "\n\nEnter your guess: ";
                cin >> playerChoice;

                //Check if the palyer choice matches the number
                if (playerChoice == secretNumber) {

                    cout << "\nGreat job, you got it! The number was " << playerChoice;
                    cout << "\t\t\tThanks for playing!";
                    cout << "\nMake sure to play it again!\n\n" << endl;
                    break;

                }
                else {

                    cout << "\nNope! " << playerChoice << " is not the right number!";

                    if (playerChoice > secretNumber) {
                        cout << "\nThe number is less than " << playerChoice << ". Please choose again." << endl;
                    }
                    else {
                        cout << "\nThe number is greater than " << playerChoice << ". Please choose again." << endl;
                    }

                    guessesLeft--;

                    cout << "\n" << guessesLeft << " guesses left!" << endl;

                    if (guessesLeft == 0) {
                        cout << "You ran out of guesses and could not find the number!\nThe number was " << secretNumber << ". \nYou loose!\n\nPlay again and try to win!\n\n";
                    }
                }
            }
        }

        //Medium level
        else if (difficultyLevel == 2) {
            cout << "\nYou have chosen the medium level!"
                << "\nYou have 7 guesses to find the number between 1 - 100";
            int guessesLeft = 7;
            for (int i = 1; i <= 7; i++) {

                //Prompts for player to enter their number
                cout << "\n\nEnter your guess: ";
                cin >> playerChoice;

                //Check if the palyer choice matches the number
                if (playerChoice == secretNumber) {

                    cout << "\nGreat job, you got it! The number was " << playerChoice;
                    cout << "\t\t\tThanks for playing!";
                    cout << "\nMake sure to play it again!\n\n" << endl;
                    break;

                }
                else {

                    cout << "\nNope! " << playerChoice << " is not the right number!";

                    if (playerChoice > secretNumber) {
                        cout << "\nThe number is less than " << playerChoice << ". Please choose again." << endl;
                    }
                    else {
                        cout << "\nThe number is greater than " << playerChoice << ". Please choose again." << endl;
                    }

                    guessesLeft--;

                    cout << "\n" << guessesLeft << " guesses left!" << endl;

                    if (guessesLeft == 0) {
                        cout << "You ran out of guesses and could not find the number!\nThe number was " << secretNumber << ". \nYou loose!\n\nPlay again and try to win!\n\n";
                    }
                }
            }
        }

        //Hard level
        else if (difficultyLevel == 3) {
            cout << "\nYou have chosen the hard level!"
                << "\nYou have 5 guesses to find the number between 1 - 100";
            int guessesLeft = 5;
            for (int i = 1; i <= 5; i++) {

                //Prompts for player to enter their number
                cout << "\n\nEnter your guess: ";
                cin >> playerChoice;

                //Check if the palyer choice matches the number
                if (playerChoice == secretNumber) {

                    cout << "\nGreat job, you got it! The number was " << playerChoice;
                    cout << "\t\t\tThanks for playing!";
                    cout << "\nMake sure to play it again!\n\n" << endl;
                    break;

                }
                else {

                    cout << "\nNope! " << playerChoice << " is not the right number!";

                    if (playerChoice > secretNumber) {
                        cout << "\nThe number is less than " << playerChoice << ". Please choose again." << endl;
                    }
                    else {
                        cout << "\nThe number is greater than " << playerChoice << ". Please choose again." << endl;
                    }

                    guessesLeft--;

                    cout << "\n" << guessesLeft << " guesses left!" << endl;

                    if (guessesLeft == 0) {
                        cout << "You ran out of guesses and could not find the number!\nThe number was " << secretNumber << ". \nYou loose!\n\nPlay again and try to win!\n\n";
                    }
                }
            }
        }
        else if (difficultyLevel == 0) {
            exit(0);
        }
        else {
            cout << "Oops! You did not enter a correct number.\nPlease enter 1, 2 or 3 to start the game." << endl;
        }
    }
    return 0;
}