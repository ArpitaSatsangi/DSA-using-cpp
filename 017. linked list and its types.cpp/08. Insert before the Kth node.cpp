/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;
        Node *prev;

        Node(int val) {
            this->data = val;
            next = NULL;
            prev = NULL;
        }
        ~Node() {
            if(next != NULL || prev != NULL){
                delete next;
            }
        }
};

************************************************************/

Node* insert(Node *head, int k, int val) {
    
    Node *newnode=new Node(val);
    Node *tmp=head;

    if(k==1)
    {
        //insert at 1st position
        newnode->next=tmp;
        tmp->prev=newnode;
        head=newnode;

        return head;
    }

    int i=1;
    while(i<k-1)
    {
        tmp=tmp->next;
        i++;
    }

    newnode->next=tmp->next;
    newnode->prev=tmp;
    tmp->next=newnode;
    newnode->next->prev=newnode;

    return head;
}
