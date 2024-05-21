#include <iostream>
#include <stack>
#include <sstream>
#include <string>
using namespace std;

string reverseWords(string sentence) {
    stack<char> charStack;
    stringstream ss(sentence);
    string word;
    string reversedSentence = "";

    while (ss >> word) {
        for (char c : word) {
            charStack.push(c);
        }

        while (!charStack.empty()) {
            reversedSentence += charStack.top();
            charStack.pop();
        }

        reversedSentence += ' '; 
    }
    if (!reversedSentence.empty()) {
        reversedSentence.pop_back();
    }

    return reversedSentence;
}
int main() {
    string sentence;

    cout << "Masukkan kalimat (minimal 3 kata): ";
    getline(cin, sentence);

    int wordCount = 0;
    stringstream ss(sentence);
    string word;
    while (ss >> word) {
        wordCount++;
    }

    if (wordCount < 3) {
        cout << "Kalimat harus terdiri dari minimal 3 kata." << endl;
    } else {
        string result = reverseWords(sentence);
        cout << "Data: " << result << endl;
    }

    return 0;
}
