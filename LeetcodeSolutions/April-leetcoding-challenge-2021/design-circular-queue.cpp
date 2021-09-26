class MyCircularQueue {
public:
    vector<int> arr;
    int front,rear,size;
    MyCircularQueue(int k) {
        arr.clear();
        arr.resize(k,-1);
        front=-1;   rear=-1;    size=k;
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
        
        if(front==-1){
            arr[0]=value;
            front=0;    rear=0;
            return true;
        }
        
        if(rear==size-1){
            rear=0;
            arr[rear]=value;
            return true;
        }
        else{
            rear++;
            arr[rear]=value;
            return true;
        }
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        
        if(front==rear){
            front=-1;   rear=-1;
            return true;
        }
        
        if(front==size-1){
            front=0;
            return true;
        }
        else{
            front++;
            return true;
        }
    }
    
    int Front() {
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[front];
        }
    }
    
    int Rear() {
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[rear];
        }        
    }
    
    bool isEmpty() {
        if(front==-1){
            return true;
        }
        else{
            return false;
        }
    }
    
    bool isFull() {
        if(rear==size-1){
            return front==0;
        }
        else{
            return rear==front-1;
        }
    }
};
