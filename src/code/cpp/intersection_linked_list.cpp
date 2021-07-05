/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *getNode(ListNode *bli, ListNode *sli, int mx, int mn)
    {
        int skip = mx - mn;

        while (skip--)
            bli = bli->next;

        while (bli != NULL)
        {
            if (bli == sli)
                return bli;
            bli = bli->next;
            sli = sli->next;
        }
        return NULL;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        int lenA = 0, lenB = 0;
        ListNode *currA = headA, *currB = headB;

        while (currA != NULL)
        {
            lenA++;
            currA = currA->next;
        }

        while (currB != NULL)
        {
            lenB++;
            currB = currB->next;
        }

        if (lenA > lenB)
            return getNode(headA, headB, lenA, lenB);
        return getNode(headB, headA, lenB, lenA);
    }
};