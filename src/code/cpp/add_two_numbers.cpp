class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int digit, carry = 0;
        ListNode *head = new ListNode(0);
        ListNode *node = head;

        while (l1 || l2)
        {
            digit = carry;
            if (l1)
            {
                digit += l1->val;
                l1 = l1->next;
            }
            if (l2)
            {
                digit += l2->val;
                l2 = l2->next;
            }
            carry = digit / 10;
            digit = digit % 10;
            node->next = new ListNode(digit);
            node = node->next;
        }
        if (carry)
        {
            node->next = new ListNode(carry);
        }

        return head->next;
    }
};