#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

#include<bits/stdc++.h>
using namespace std;
//program for level order traversal
//input = [1]
//      [2]  [3]
//    [4]      [5]
//output = [1,2,3,4,5]

//method 1 - using recursion
//complexity: O(n), O(1)
struct Node
{
  int data;
  Node *left, *right;
};
