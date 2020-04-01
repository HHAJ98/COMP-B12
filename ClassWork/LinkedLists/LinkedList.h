struct node {
    int value;
    node *next;
};

class linkedList{
public:
    linkedList();
    void append(int);
    int deleteAfter(int);
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

int linkedList::deleteAfter(int value){
//	node *pointerToCurrNode = &dummy;
//	while((*pointerToCurrNode).value != value){
//    	//pointerToCurrNode = &(*pointerToCurrNode).next;
//		
//    }
    return 0;
}