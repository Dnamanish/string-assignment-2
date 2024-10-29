/// Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
// Input : str = "2947578"
// Output : 8
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
  string str = "2947578";
  int n = str.length();
  int arr[n - 1];          /// n-1 because string m ek character extra hota h \n
  for (int i = 0; i < n; i++)
  {
    arr[i] = ((int)str[i] - 48);
  }
  int largest = arr[0];
  int s_largest = arr[0];
  for (int i = 1; i < n; i++)
  { 
    if (largest < arr[i])
      largest = arr[i];
  }

  for (int i = 1; i < n; i++)
  {
    if (s_largest < arr[i] && largest == s_largest)
       continue;
    else
     s_largest = arr[i];
  }
  cout<<"Second largest digit is:"<<s_largest;
}