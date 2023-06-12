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
    //Write your code here
    Node *temp1=firstHead,*temp2=secondHead;
    int c1=0,c2=0;
    while(temp1!=NULL)
    {
        c1++;
        temp1=temp1->next;
    }
    while(temp2!=NULL)
    {
        c2++;
        temp2=temp2->next;
    }
    temp1=firstHead;
    temp2=secondHead;
    int dif=abs(c1-c2);
    if(c1>c2)
    {
        while(dif)
        {
            // cout<<temp1->data<<" ";
            temp1=temp1->next;
            dif--;
        }
    }
    else
    if(c2>c1)
    {
        while(dif)
        {
            // cout<<temp2->data<<" ";
            temp2=temp2->next;
            dif--;
        }
    }
    // cout<<c1<<" "<<c2;
    while(true)
    {
        if(temp1==temp2)
        return temp1;
        // cout<<temp1->data<<" "<<temp2->data<<endl;
        temp2=temp2->next;
        temp1=temp1->next;
    }
    // if(temp1!=NULL)
    return temp1;
    // return temp2;

}