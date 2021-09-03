#include <bits/stdc++.h>
using namespace std;

int count_jobs(int deadline[], int profit[], int n)
{
  int d = 0, c = 0;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 1; j < n; j++)
    {
      if (profit[j] > profit[i])
      {
        int temp = profit[j];
        profit[j] = profit[i];
        profit[i] = temp;

        temp = deadline[j];
        deadline[j] = deadline[i];
        deadline[i] = temp;
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (d < deadline[i])
    {
      c++;
      d = d + 1;
      cout << d << " " << profit[i] << endl;
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
  int deadline[n], profit[n];
  for (int i = 0; i < n; i++)
  {
    cin >> deadline[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> profit[i];
  }
  cout << count_jobs(deadline, profit, n);
  return 0;
}