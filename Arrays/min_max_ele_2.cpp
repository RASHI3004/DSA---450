#include <bits/stdc++.h>
using namespace std;
//program to find the minimum and maximum element in an array using minimum no. of comparisons
//input = [1,2,3,4]
//output = min: 1; max: 4

//Method 1 - assigning initial values to min and max and then comparing them to array elements
//Complexity : O(n); O(1)
struct pairs
{
  int mn, mx;
};
struct pairs minmax(vector<int> arr, int n)
{
  struct pairs p;
  p.mn = INT_MAX, p.mx = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < p.mn)
    {
      p.mn = arr[i];
    }
    else if (arr[i] > p.mx)
    {
      p.mx = arr[i];
    }
  }
  return p;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  vector<int> arr;
  int n, ip;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    while (cin >> ip)
    {
      arr.push_back(ip);
    }
  }
  struct pairs p = minmax(arr, n);
  cout << "min: " << p.mn << " max: " << p.mx;
  return 0;
}