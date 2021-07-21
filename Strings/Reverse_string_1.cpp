#include <bits/stdc++.h>
using namespace std;

//program to reverse a string
//input = "rashi"
//output = "ihsar"

//method 1 - using two pointer approach
//Complexity: O(n); O(1)

string rev(string s, int n)
{
  for (int i = 0; i < n / 2; i++)
  {
    char temp = s[i];
    s[i] = s[n - i - 1];
    s[n - i - 1] = temp;
  }
  return s;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  string s;
  int n;
  cin >> n;
  cin >> s;
  cout << rev(s, n);
  return 0;
}