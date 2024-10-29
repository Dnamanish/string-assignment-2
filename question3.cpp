/// Input a string and return the number of substrings that contain only vowels.
// Input : str = "abjkoe"
// Output : 4
// Explanation : The possible substrings that only contain vowels are "a" , "o" , "e" , "oe"
// Input : str = "hgdhpw"
// Output : 0
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cout << "Enter string:";
    cin >> str;
    int count = 0;
    int answer = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' or str[i] == 'e' or str[i] == 'i' or str[i] == 'o' or str[i] == 'u')
        {
            count++;
        }
        else
        {
            answer = answer + (count * (count + 1)) / 2;
            count = 0;
        }
    }
    answer = answer + (count * (count + 1)) / 2;
    cout<<answer;
}