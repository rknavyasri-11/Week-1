#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[200];

    cout << "Enter a sentence: ";
    cin.getline(s, 200);

    int vowels = 0, consonants = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' ||
                ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}
