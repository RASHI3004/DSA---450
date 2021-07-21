#include <bits/stdc++.h>
using namespace std;
//program to reverse the linked list by changing the direction
//input = 1->2->3->4->5
//outut = 1<-2<-3<-4<-5

//method 1 - changing directions
//O(n); O(1)
struct Node
{
  int data;
  Node *ptr;
  Node(int data)
  {
    this->data = data;
    ptr = NULL;
  }
};
struct linkedlist
{
  Node *head;
  linkedlist()
  {
    head = NULL;
  }
  void rev()
  {
    //head->[1,11]->[2,22]->[3,33]->[4,44]->NULL
    //NULL<-[1,44]<-[2,33]<-[3,22]<-[4,11]<-head
    Node *prev = NULL, *curr = head, *next = NULL;
    while (curr != NULL)
    {
      next = curr->ptr;
      curr->ptr = prev;
      prev = curr;
      curr = next;
    }
    head = prev;
  }
  void push(int data)
  {
    Node *temp = new Node(data);
    temp->ptr = head;
    head = temp;
  }
  void print()
  {
    Node *temp = head;
    while (temp != NULL)
    {
      cout << temp->data << " ";
      temp = temp->ptr;
    }
    cout << endl;
  }
};
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  linkedlist l;
  l.push(1);
  l.push(2);
  l.push(3);
  l.push(4);
  l.push(5);
  l.print();
  l.rev();
  l.print();
  return 0;
}