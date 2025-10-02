class Solution {
public:
    DListNode* removeElements(DListNode* head, int val) {
        DListNode* temp = head;
        while (temp != NULL) {
            if (temp->val == val) {
                DListNode* nextNode = temp->next;
                DListNode* prevNode = temp->prev;

                if (prevNode != NULL) prevNode->next = nextNode;
                else head = nextNode; // deleting head node

                if (nextNode != NULL) nextNode->prev = prevNode;

                delete temp;
                temp = nextNode;
            } else {
                temp = temp->next;
            }
        }
        return head;
    }
};
