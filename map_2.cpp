#include <iostream>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int words_count;
    cin >> words_count;

    map<string, int> words;
    string current_word;

    for (int i = 0; i < words_count; i++) {
        cin >> current_word;
        words[current_word]++;
    }

    cout << max_element(words.begin(), words.end())->second;

    return 0;
}