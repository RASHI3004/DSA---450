#include <bits/stdc++.h>
using namespace std;
//to find minimum number of coins
//O(n)
string lex(string s)
{
  if (s[1] > s[0])
    return s;
  else if (s[1] < s[0])
  {
    char a = s[0], b = s[1];
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == a)
        s[i] = b;
      else if (s[i] == b)
        s[i] = a;
    }
  }
  else
  {
    int i = 0;
    while (s[i] == s[i + 1])
    {
      if (i + 1 == s.length())
        break;
      i++;
    }
    int index = i + 1;
    if (s[index] < s[index - 1])
    {
      int a = s[index - 1], b = s[index];
      for (int i = 0; i < s.length(); i++)
      {
        if (s[i] == a)
        {
          s[i] = b;
        }
        else if (s[i] == b)
        {
          s[i] = a;
        }
      }
    }
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
  cin >> s;
  cout << lex(s);
  return 0;
}