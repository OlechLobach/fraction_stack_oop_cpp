#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool AreBracketsCorrect(const string& input) {
    stack<char> bracketStack;

    for (size_t i = 0; i < input.size(); ++i) {
        char ch = input[i];

        if (ch == '(' || ch == '[' || ch == '{') {
            bracketStack.push(ch);
        }
        else if (ch == ')' || ch == ']' || ch == '}') {
            if (bracketStack.empty()) {
                cout << "Error: Extra closing bracket at position " << i << endl;
                return false; 
            }

            char openBracket = bracketStack.top();
            bracketStack.pop();

            if ((ch == ')' && openBracket != '(') ||
                (ch == ']' && openBracket != '[') ||
                (ch == '}' && openBracket != '{')) {
                cout << "Error: Mismatched brackets at position " << i << endl;
                return false;  
            }
        }
    }

    if (!bracketStack.empty()) {
        cout << "Error: Unclosed opening bracket(s) at the end of the string." << endl;
        return false;  
    }

    return true;
}
#endif