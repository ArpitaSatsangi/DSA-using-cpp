/*
 * Definition for doubly-linked list.
 * class Node
 * {
 * public:
 *    int data;
 *    Node *next, *prev;
 *    Node() : data(0), next(nullptr), prev(nullptr) {}
 *    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
 *    Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
 * };
 */

Node* constructDLL(vector<int>& arr) {
    // Write your code here

    Node* start= new Node(arr[0]);
    Node *curr=start;
    Node *p=start, *n=nullptr;

    for(int i=1;i<arr.size();i++)
    {
        Node *tmp=new Node(arr[i]);
        p->next=tmp;
        tmp->prev=p;

        p=p->next;
    }


    return start;
}
