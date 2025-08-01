#include <iostream>

using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    int size = word.length();
    bool isPalindrome = true;

    for (int i = 0; i < size / 2; i++)
    {
        if (word[i] == word[size - 1 - i])
        {
            isPalindrome = true;
            cout << "Palindrome" << endl;
            break;
        }
        else
        {
            cout << "Not a Palindrome" << endl;
            break;
        }
    }


    return 0;
}
