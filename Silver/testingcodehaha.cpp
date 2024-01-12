/*
#include <iostream>
#include <random>
#include <cstdlib>
using namespace std;
int main() {
    int a;
    string yesno = "";
    while(yesno != "N") {
        int rand();
        int number = rand() % 1000;
        cout << "I have chosen a numer between 0 and a thousand(1,000)." << endl << "You have 10 guesses to guess my number." << endl;
        for(int i = 1; i <= 10; i++) {
            if(i < 10) {
                cout << "Guess number " << i << ": ";
                cin >> a;
                if(a > number) cout << a << " is higher than my number. Wrong!" << endl;
                if(a < number) cout << a << " is lower than my number. Guess again!" << endl;
                if(a == number) {
                    cout << "You guessed it! Congrats! You win bragging rights!!" << endl << "Would you like to play again? Press Y to guess a different number. Press N to end the game: ";
                    cin >> yesno;
                    break;
                }
            } else {
                cout << "This is your last guess! Type your final guess: ";
                cin >> a;
                if(a != number)
                    cout << "You have 0 guesses left. Oh no! You lost! So close! The number was " << number << "." << endl << "Would you like to try again? Press Y to guess a different number. Press N to end the game: ";
                cin >> yesno;
            }
        }
    }
}
*/
