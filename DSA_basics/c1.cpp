#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;

    ListNode(int value)
    {
        data = value;
        next = NULL;
    }
};

ListNode *arrtoLL(vector<int>arr)
{
    ListNode *head = NULL;
    for (int i = 0; i < arr.size(); i++)
    {
        if (head == NULL)
        {
            head = new ListNode(arr[i]);
        }
        else
        {
            ListNode *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new ListNode(arr[i]);
        }
    }return head;
}

ListNode *printLL(ListNode *head)
{
    ListNode *temp = head;
    while (temp)
    {
        cout << temp->data<<" ";
        temp = temp->next;
    }
    return head;
}

// ListNode *reverseLL_value(ListNode *head)
// {
//     vector<int> arr;
//     ListNode *temp = head;
//     while (temp != NULL)
//     {
//         arr.push_back(temp->data);
//         temp = temp->next;
//     }

//     int i = arr.size() - 1;
//     temp=head;

//     while (temp)
//     {
//         temp->data = arr[i];
//         i--;
//         temp = temp->next;
//     }
//     return head;
// }

// ListNode*reverseLL(ListNode*head){
//     ListNode*curr=head,*prev=NULL,*fut=NULL;
//     while(curr){
//         fut=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=fut;
//     }head=prev;
//     return head;
// }


//reverse LL using recursion

ListNode*revLL(ListNode*curr,ListNode*prev){
    if(curr==NULL){
        return prev;
    }
    ListNode*fut=curr->next;
    curr->next=prev;
    return revLL(fut,curr);
}



int main()
{
    vector<int>arr2;
    arr2={1,2,3,4,5,6,7};

    ListNode*head = arrtoLL(arr2);

    printLL(head);

    // head=reverseLL_value(head);
    // head=reverseLL(head);
        
    head=revLL(head,NULL);
    printLL(head);

    return 0;
}