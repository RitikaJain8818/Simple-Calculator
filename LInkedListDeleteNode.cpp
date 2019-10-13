#include <bits/stdc++.h>
using namespace std;

class node {
  public:
  int data;
  node * next;
};

void push (node** head_ref, int new_data){
  node * new_node = new node();
  new_node -> data = new_data ;
  new_node -> next = *head_ref;
  *head_ref = new_node;
}

void del(node * prev_node){
  node * temp = new node();
  temp = prev_node -> next ;
  prev_node -> next = temp -> next ;
  delete temp;
}

void printList(node *node)
{
    while (node != NULL)
    {
        cout<<" "<<node->data;
        node = node->next;
    }
}

int main()
{



  return 0;
}
