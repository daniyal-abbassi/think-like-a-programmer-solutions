//i do not write this one(couldn't figure it out), this code generated with ai and i just put it here for help others:

#include <iostream>
using namespace std;

int main() {
    int lines = 8; // Total number of lines
    int max_width = 13; // Maximum width of the shape (number of characters in the widest line)

    for (int i = 1; i <= lines; i++) {
        // Calculate the number of leading spaces
        int spaces = (i <= lines / 2) ? (i - 1) : (lines - i);

        // Calculate the number of '#' in the current line
        int hashes = (i <= lines / 2) ? (2 * i) : (2 * (lines - i + 1));

        // Print leading spaces
        for (int j = 1; j <= spaces; j++) {
            cout << ' ';
        }

        // Print the first set of '#'
        for (int j = 1; j <= hashes / 2; j++) {
            cout << '#';
        }

        // Print the middle spaces
        for (int j = 1; j <= max_width - 2 * spaces - hashes; j++) {
            cout << ' ';
        }

        // Print the second set of '#'
        for (int j = 1; j <= hashes / 2; j++) {
            cout << '#';
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
