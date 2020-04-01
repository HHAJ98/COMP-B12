struct node {
    int value;
    node *next;
};

class linkedList{
public:
    linkedList();
    void append(int);
    void deleteFirstInstanceOf(int);
private:
    node head;
    node dummy;
    node tail;
    node *lastNode;
};

linkedList::linkedList(){
    tail.next = nullptr;
    dummy.next = &tail;
    head.next = &dummy;
    
    lastNode = &dummy;
}

void linkedList::append(int value){
    node newNode;
    newNode.value = value;
    newNode.next = &tail;

    (*lastNode).next = &newNode;

    lastNode = &newNode;
}

void linkedList::deleteFirstInstanceOf(int value){
	node *pointerToCurrNode = &dummy;
	while((*pointerToCurrNode).value != value && (*pointerToCurrNode).next){
    	pointerToCurrNode = (*pointerToCurrNode).next;
		
    }
}