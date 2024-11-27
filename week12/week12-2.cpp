class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            //ListNode*ans = list1;
            ListNode*ans = new ListNode(99);
            //ListNode*ans = new ListNode(99,new ListNode(90));
        //開新的Node 裡面放99 後面轉接 [新的Node裡有90]
        return ans;
    }//請把3種版本都執行過 看test result 裡面的result
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */