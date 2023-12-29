/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };

*****************************************************************/

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    Node *ans=NULL;

    Node *temp1=NULL;
    Node *temp2=secondHead;

    while(temp2!=NULL)
    {
        temp1=firstHead;
        while(temp1!=NULL)
        {
            if(temp1==temp2){
                ans=temp2;
                return ans;
            }
            temp1=temp1->next;
        }
        temp2=temp2->next;
        
    }

    return ans;
}
