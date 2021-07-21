#include <bits/stdc++.h>
using namespace std;
//program to traverse a 2D matrix spirally
//input = [1 2 3 4,
//         5 6 7 8,
//         9 10 11 12,
//        13 14 15 16]
//output = [1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10]

//Method 1 - using indexes
//Complexity: O(n^2); O(1)

void spiral(int arr[10][10], int m, int n)
{
  int k = 0, l = 0;
  while (k < m && l < n)
  {
    for (int i = l; i < m; ++i)
    {
      cout << arr[k][i] << " ";
    }
    k++;
    for (int j = k; j < m; ++j)
    {
      cout << arr[j][n - 1] << " ";
    }
    n--;
    if (k < m)
    {
      for (int i = n - 1; i >= l; --i)
      {
        cout << arr[m - 1][i] << " ";
      }
      m--;
    }
    if (l < n)
    {
      for (int j = m - 1; j >= k; --j)
      {
        cout << arr[j][l] << " ";
      }
      l++;
    }
  }
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int m, n;
  cin >> m >> n;
  int arr[10][10];
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j];
    }
  }
  spiral(arr, m, n);
}