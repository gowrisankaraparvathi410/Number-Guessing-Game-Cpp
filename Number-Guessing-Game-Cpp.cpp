#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "=================================" << endl;
    cout << "      NUMBER GUESSING GAME       " << endl;
    cout << "=================================" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    while (true) {
        cout << "\nEnter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > secretNumber) {
            cout << "Too High!" << endl;
        }
        else if (guess < secretNumber) {
            cout << "Too Low!" << endl;
        }
        else {
            cout << "\nCongratulations!" << endl;
            cout << "You guessed the correct number: " << secretNumber << endl;
            cout << "Total Attempts: " << attempts << endl;
            break;
        }
    }

    return 0;
}