#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[200];
    char words[50][50];
    int count = 0;

    cout << "Enter a sentence: ";
    cin.getline(s, 200);

    char *token = strtok(s, " ");

    while (token != NULL) {
        strcpy(words[count], token);
        count++;
        token = strtok(NULL, " ");
    }

    cout << "Reversed sentence: ";

    for (int i = count - 1; i >= 0; i--) {
        cout << words[i];

        if (i != 0)
            cout << " ";
    }

    cout << endl;

    return 0;
}
