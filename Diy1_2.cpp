#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    char word1[100], word2[100];

    cout << "Enter first word: ";
    cin >> word1;

    cout << "Enter second word: ";
    cin >> word2;

    int len1 = strlen(word1);
    int len2 = strlen(word2);

    if (len1 != len2) {
        cout << "Not an anagram" << endl;
        return 0;
    }

    sort(word1, word1 + len1);
    sort(word2, word2 + len2);

    if (strcmp(word1, word2) == 0)
        cout << "The words are anagrams." << endl;
    else
        cout << "The words are not anagrams." << endl;

    return 0;
}
