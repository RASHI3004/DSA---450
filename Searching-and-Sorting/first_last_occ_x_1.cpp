#include <bits/stdc++.h>
using namespace std;
//program to find the first and last occurrence of a given element
//array is sorted
//input = [1,2,2,3,4,4,4,4,5]; x=4
//output = 4, 7

//method 1 - linear search from both ends
//Complexity: O(n); O(1)

void lin(vector<int> arr, int n, int x)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == x)
    {
      cout << "first: " << i << endl;
      break;
    }
  }
  for (int i = n - 1; i >= 0; i--)
  {
    if (arr[i] == x)
    {
      cout << "last: " << i << endl;
      break;
    }
  }
}

//method 2 - binary search
//Comlexity: O(logn); O(1)
/*void bin(vector<int> arr, int n, int x)
{
  int mn = INT_MAX, mx = INT_MIN, mid, i = 0, j = n - 1;
  while (i < j)
  {
    mid = (i + (j - i)) / 2;
    if (arr[mid] == x)
    {
      if (mid < mn)
      {
        mn = mid;
      }
      if (mid > mx)
      {
        mx = mid;
      }
    }
    if (arr[mid] > x)
    {
      j = mid - 1;
    }
    else
    {
      i = mid + 1;
    }
  }
  cout << "first: " << mn << endl;
  cout << "last: " << mx << endl;
}*/

//method 3 - STL
//Complexity: O(logn); O(1)
void fin(vector<int> arr, int n, int x)
{
  auto it1 = upper_bound(arr.begin(), arr.end(), x);
  auto it2 = lower_bound(arr.begin(), arr.end(), x);
  cout << *it1 << " " << *it2;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  vector<int> arr;
  int n, x, ip;
  cin >> n;
  cin >> x;
  for (int i = 0; i < n; i++)
  {
    while (cin >> ip)
    {
      arr.push_back(ip);
    }
  }
  fin(arr, n, x);
  //bin(arr, n, x);
  lin(arr, n, x);
  return 0;
}