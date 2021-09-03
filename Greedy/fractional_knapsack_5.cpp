#include <bits/stdc++.h>
using namespace std;
//O(nLogn)
int knapsack(int val[], int weight[], int n, int w)
{
  double maxVal = 0.0;
  int i;
  for (i = 0; i < n; i++)
  {
    if (weight[i] < w)
    {
      maxVal += val[i];
      w -= weight[i];
    }
  }
  if (w > 0)
  {
    for (int j = i - 1; j < n; j++)
    {
      maxVal += ((double)((double)w) / weight[j]) * val[j];
      w -= weight[j];
    }
  }
  return maxVal;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n, w;
  cin >> n >> w;
  int val[n], weight[n];
  for (int i = 0; i < n; i++)
  {
    cin >> val[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> weight[i];
  }
  cout << knapsack(val, weight, n, w);
  return 0;
}