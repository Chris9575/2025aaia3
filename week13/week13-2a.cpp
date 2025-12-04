//week13-2a.cpp 學習計畫 Linked List 第一題
//21. Merge Two Sorted Lists 左邊list1 右邊list2合起來
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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*ans=new ListNode(999);//故意亂寫999
        ListNode*ans2=new ListNode(888);
        ans->next=ans2;//把他們接起來
        //鮮血4行,熟悉一下結構怎麼new新的節點、怎麼接起來
        return ans;
    }
};
