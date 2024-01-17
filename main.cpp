#include"stack.h"

int main() {
    string input;

    cout << "Enter a string with brackets: ";
    getline(cin, input);

    if (AreBracketsCorrect(input)) {
        cout << "The brackets are placed correctly." << endl;
    }
    else {
        cout << "The string contains bracket errors." << endl;
    }

    return 0;
}