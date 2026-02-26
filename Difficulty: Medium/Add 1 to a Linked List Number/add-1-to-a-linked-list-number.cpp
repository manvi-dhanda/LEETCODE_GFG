class Solution {
public:
    
    int helper(Node* head) {
        if(!head) return 1;   
        
        int carry = helper(head->next);
        
        int sum = head->data + carry;
        head->data = sum % 10;
        
        return sum / 10;
    }
    
    Node* addOne(Node* head) {
        
        int carry = helper(head);
        
        if(carry) {
            Node* newNode = new Node(carry);
            newNode->next = head;
            head = newNode;
        }
        
        return head;
    }
};