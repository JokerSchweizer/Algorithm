
struct ListNode {
       int val;
       ListNode *next;
       ListNode() : val(0), next(nullptr) {}
       ListNode(int x) : val(x), next(nullptr) {}
       ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *result=new ListNode();
        ListNode *head=result;
        ListNode *index1=l1,*index2=l2;
        int temp=0;
        while (index1!= nullptr&&index2!= nullptr){
            temp=l1->val+l2->val+temp/10;
            ListNode *node=new ListNode((temp%10));
            result->next=node;
            result=node;
            index1=index1->next;
            index2=index2->next;
        }
        if (index1== nullptr) result->next=index2;
        if (index2== nullptr) result->next=index1;
        return head;
    }
};
//
//class Solution {
//public:
//    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//        auto l3= new ListNode(0);
//        ListNode *p=l3;
//        int cf=0;
//        int sum=0;
//        while(l1||l2||cf)
//        {
//            int sum=cf;
//            if(l1)
//            {
//                sum+=l1->val;l1=l1->next;
//            }
//            if(l2)
//            {
//                sum+=l2->val;l2=l2->next;
//            }
//            cf=sum/10;
//            sum=sum%10;
//            p->next=new ListNode(sum);
//            p=p->next;
//        }
//        return l3->next;
//    }
//};
