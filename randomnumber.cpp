
#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(nullptr));

    int randomNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "Welcome to the Guess the Number game!\n";
    cout << "I have selected a random number between 1 and 100. Try to guess it.\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < randomNumber) {
            cout << "Too low! Try again.\n";
        } else if (guess > randomNumber) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the number (" << randomNumber << ") in " << attempts << " attempts!\n";
        }

    } while (guess != randomNumber);

    return 0;
}
