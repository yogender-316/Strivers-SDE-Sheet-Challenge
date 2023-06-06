#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if(first==NULL)
    return second;
    if(second==NULL)
    return first;
    Node<int> *ans=NULL;
    Node<int> *temp1=first,*temp2=second;
    if(temp1->data<temp2->data)
    {
        ans=temp1;
        temp1=temp1->next;
    }
    else
    {
        ans=temp2;
        temp2=temp2->next;
    }
    Node<int> *temp=ans;
    while(temp1!=NULL&&temp2!=NULL)
    {
        if(temp1->data<temp2->data)
        {
            ans->next=temp1;
            ans=temp1;
            temp1=temp1->next;
        }
        else
        {
            ans->next=temp2;
            ans=temp2;
            temp2=temp2->next;
        }
    }
    if(temp1!=NULL)
    ans->next=temp1;
    else
    ans->next=temp2;
    return temp;
}
