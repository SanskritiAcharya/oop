#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
using namespace std;
int countRepeatedLetters(const string& word) {
    unordered_map<char, int> letterCount;
    int maxRepeated = 0;
    for (char ch : word) {
        letterCount[ch]++;
    }
    for (const auto& entry : letterCount) {
        if (entry.second > 1) {
            maxRepeated = max(maxRepeated, entry.second);
        }
    }
    return maxRepeated;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); 
    stringstream ss(str); 
    string word;
    string wordWithMaxRepeats;
    int maxRepeats = 0;
    while (ss >> word) {
        int repeats = countRepeatedLetters(word);
        if (repeats > maxRepeats) {
            maxRepeats = repeats;
            wordWithMaxRepeats = word;
        }
    }
    cout << "Word which has the highest number of repeated letters: " << wordWithMaxRepeats << endl;
    return 0;
}
