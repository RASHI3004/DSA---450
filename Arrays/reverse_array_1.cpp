#include <bits/stdc++.h>
using namespace std;
//program to reverse an array or string
//input = [1,2,3,4]
//output = [4,3,2,1]

//method 1 - Using one for loop
//Complexity: (time, auxillary space) - O(n); O(1)

vector<int> rev(vector<int> arr, int n)
{
  int temp;
  for (int i = 0; i < n / 2; i++)
  {
    temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
  }
  return arr;
}

//Method 2 - recursion
//start+=1
//end-=1

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
  vector<int> op = rev(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << op[i] << " ";
  }
  return 0;
}