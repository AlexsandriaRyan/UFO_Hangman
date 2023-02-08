// Alexsandria Ryan
// Learn C++ Codecademy Exercise: "UFO"
#include "../inc/ufo_functions.hpp"

using namespace std;

int main() {

    // display greeting
    greet();

    // variables
    string codeword = "codecademy";
    string answer = "__________";
    int misses = 0;
    vector<char> incorrect;
    bool guess = false;
    char letter;

    // while still playing
    while (answer != codeword && misses < 7) {

        display_misses(misses);
        display_status(incorrect, answer);

        // accept input
        cout << "Please enter your guess: ";
        cin >> letter;

        // compare guess with codeword
        for (int i = 0; i < codeword.size(); i++) {
          if (letter == codeword[i]) {
            answer[i] = letter;
            guess = true;
          }
        }

        // display correct / incorrect
        if (guess) {
          cout << "Correct!\n";

        } else {
          cout << "Incorrect! The tractor beam pulls the person in further.\n";
          incorrect.push_back(letter);
          misses++;
        }

        //reset guess boolean
        guess = false;
    }

    end_game(answer, codeword);

    return 0;
}
