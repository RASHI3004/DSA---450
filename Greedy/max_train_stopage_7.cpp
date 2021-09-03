#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int max_trains(int arr[], int dep[], int platform[], int m)
{
  vector<pair<int, int>> vect[m + 1];

  for (int i = 0; i < m; i++)
    vect[arr[i][2]].push_back(
        make_pair(arr[i][1], arr[i][0]));

  // sort trains for each platform as per
  // dept. time
  for (int i = 0; i <= n; i++)
    sort(vect[i].begin(), vect[i].end());

  // perform activity selection approach
  int count = 0;
  for (int i = 0; i <= n; i++)
  {
    if (vect[i].size() == 0)
      continue;

    // first train for each platform will
    // also be selected
    int x = 0;
    count++;
    for (int j = 1; j < vect[i].size(); j++)
    {
      if (vect[i][j].second >=
          vect[i][x].first)
      {
        x = j;
        count++;
      }
    }
  }
  return count;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int m;
  cin >> m;
  int arr[m], dep[m], platform[m];
  for (int i = 0; i < m; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < m; i++)
  {
    cin >> dep[i];
  }
  for (int i = 0; i < m; i++)
  {
    cin >> platform[i];
  }
  cout << max_trains(arr, dep, platform, m);
  return 0;
}