#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand() % 100 + 1;
    int userGuess = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have generated a random number between 1 and 100.\n";
    cout << "Can you guess what it is?\n";

    
    while (true) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        if(userGuess > 100){
            cout<<"invalid number.\n";
        }
        else if (userGuess < randomNumber) {
            cout << "Too low! Try again.\n";
        } else if (userGuess > randomNumber) {
            cout << "Too high! Try again.\n";
        } 
         
            else {
            cout << "Congratulations! You guessed the correct number: " << randomNumber << endl;
            break;
        }
    }

    return 0;
}
