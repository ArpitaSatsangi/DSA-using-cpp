/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int value;
 *      Node *prev;
 *      Node *next;
 *      Node() : value(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : value(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : value(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node* insertAtFront(Node *head, int k) {
    // Write your code here.

    Node *tmp = new Node(k);
    
    if(head!=nullptr)
    {
        tmp->next=head;
        head->prev=tmp;
    }
    
    head=tmp;
    return head;
}
