class MyLinkedList {
public:
    struct Node{
        int data;
        Node* next;;
        Node(int val){
            this->data = val;
            next = NULL;
        }
    };
    Node* head;
    MyLinkedList() {
        head = NULL;
    }
    
    int get(int index) {
        if(index<0){
            return -1;
        }
        Node* temp = head;
        int c = 0;
        while(temp!=NULL && c<index){
            temp=temp->next;
            c++;
        }
        if(temp == NULL) return -1; 
        return temp->data;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if(head==NULL){
            head = newNode;
        }
        else{
            Node* temp = head;
            while(temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    
    void addAtIndex(int index, int val) {
        if(index < 0) return;

        if(index == 0) {
            addAtHead(val);
            return;
        }
        Node* temp = head;
        int c = 0;
        while(temp != NULL && c < index - 1){
            temp = temp->next;
            c++;
        }

        if(temp == NULL) return;
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    
    void deleteAtIndex(int index) {
        if(index < 0 || head == NULL) return;

        if(index == 0) {
            Node* del = head;
            head = head->next;
            delete del;
        }
        else {
            Node* temp = head;
            int c = 0;
            while(temp != NULL && c < index - 1){
                temp = temp->next;
                c++;
            }

            if(temp == NULL || temp->next == NULL) return;

            Node* del = temp->next;
            temp->next = temp->next->next;
            delete del;
        }

    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */