/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int val;
 *		Node *next;
 * 		Node *prev;
 *		Node() : val(0), next(nullptr), prev(nullptr){};
 *		Node(int x) : val(x), next(nullptr), prev(nullptr) {}
 *		Node(int x, Node *next, Node *prev) : val(x), next(next), prev(prev) {}
 * };
 */

Node *deleteNode(Node *head, int k){
    // Write your code here

    if(k==1 && head->next==nullptr)
    {
        //one single node
        return nullptr;
    }

    Node *tmp=head;
    int i=1;

    if(k==1 && head->next!=nullptr)
    {
        //delete first node
        head = head->next;
        head->prev=NULL;
    }
    else 
    {
        while(i!=k)
        {
            tmp=tmp->next;
            i++;
        }
        tmp->prev->next=tmp->next;

        if(tmp->next!=nullptr)
        {
            tmp->next->prev=tmp->prev;
        }
        
    }
    

    tmp=nullptr;
    return head;
}
