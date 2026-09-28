//Palindrome
#include <iostream>
using namespace std;

int main() {
    string s, s1;
    cout << "Enter a word: ";
    cin >> s;
    s1 = string(s.rbegin(), s.rend());

    if (s == s1) {
        cout << "It is a Palindrome.";
    } else {
        cout << "It is not a Palindrome.";
    }

    return 0;
}
