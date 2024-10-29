// Given a sentence ‘str’, return the word that is lexicographically maximum.
// Input : str = "proud to be pwians"
// Output : pwians
// Input : str = "decode dsa with pw"
// Output : with
#include <iostream>
#include <string>
#include <sstream>
#include <climits> // to use max or min
using namespace std;
int main()
{

    string str = "proud to be pwians";
    int n = str.size();
    string word = "";
    string maxword = "";
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ')
        {
            maxword = max(maxword,word);
            word = "";
        }
        else
        {
            word += str[i];
        }
    }
    maxword = max(maxword, word);

    cout << maxword;
}