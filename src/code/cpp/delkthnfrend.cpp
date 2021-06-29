#include <bits/stdc++.h>
using namespace std;

class LinkedList
{
public:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int d)
        {
            data = d;
            next = NULL;
        }
    };

    Node *head;

    Node *deleteNode(int key)
    {
        Node *first = head, *second = head;
        for (int i = 0; i < key; i++)
        {
            if (second->next == NULL)
            {
                if (i == key - 1)
                    head = head->next;
                return head;
            }
            second = second->next;
        }

        while (second->next != NULL)
        {
            first = first->next;
            second = second->next;
        }

        first->next = first->next->next;
        return head;
    }

    Node *push(int new_data)
    {
        Node *new_node = new Node(new_data);
        new_node->next = head;
        head = new_node;
        return head;
    }

    void printList()
    {
        Node *tnode = head;
        while (tnode != NULL)
        {
            cout << (tnode->data) << (" ");
            tnode = tnode->next;
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n, k, a[1000000];
        cin >> n >> k;
        LinkedList *llist = new LinkedList();
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = n - 1; i >= 0; i--)
            llist->head = llist->push(a[i]);
        llist->head = llist->deleteNode(k);
        llist->printList();
    }
    return 0;
}