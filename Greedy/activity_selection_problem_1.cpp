#include <bits/stdc++.h>
using namespace std;
//O(n)
int count_meetings(int start[], int end[], int n)
{
  int c = 1, j = 0;
  for (int i = 1; i < n; i++)
  {
    if (end[j] <= start[i])
    {
      j = i;
      c++;
    }
  }

  return c;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int n;
  cin >> n;
  int start[n], end[n];
  for (int i = 0; i < n; i++)
    cin >> start[i];
  for (int i = 0; i < n; i++)
    cin >> end[i];
  cout << count_meetings(start, end, n);
  return 0;
}