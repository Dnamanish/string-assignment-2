// Input a string and concatenate with its reverse string and print it.
// Input : str = "PWSkills"
// Output : "PWSkillssllikSWP"

#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    string str = "PWSkills";
    string str1=str;
    reverse(str.begin(),str.end());
    str1=str1+str;
    cout << str1;
}
