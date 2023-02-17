#include <iostream>
#include <string>

using namespace std;

string shorten_word(const string& word) {
    int n = word.length();
    if (n <= 10) {
        return word;
    }
    else {
        string abbreviation = "";
        abbreviation += word[0]; 
        abbreviation += to_string(n - 2); 
        abbreviation += word[n - 1]; 
        return abbreviation;
    }
}

int main() {
    int n;
    cin >> n; 

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word; 
        cout << shorten_word(word) << endl; 
    }

    return 0;
}
