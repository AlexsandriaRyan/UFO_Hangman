#ifndef UFO_HANGMAN_UFO_FUNCTIONS_H
#define UFO_HANGMAN_UFO_FUNCTIONS_H

#include <iostream>
#include <vector>

using namespace std;

void greet();
void end_game(string answer, string codeword);
void display_status(vector<char> incorrect, string answer);
void display_misses(int misses);

#endif //UFO_HANGMAN_UFO_FUNCTIONS_H
