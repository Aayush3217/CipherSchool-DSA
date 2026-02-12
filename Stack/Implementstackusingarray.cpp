// Link : https://www.geeksforgeeks.org/problems/implement-stack-using-array/1

class myStack {
  public:
    int *arr, top, capacity;
    myStack(int n) {
        capacity = n;
        arr = new int[capacity];
        top = -1;
    }

    bool isEmpty() {
        return (top==-1);
    }

    bool isFull() {
        return (top==capacity-1);
    }

    void push(int x) {
        if(isFull()) return;
        arr[++top] = x;
    }

    void pop() {
        if(isEmpty()) return;
        top--;
    }

    int peek() {
        if(isEmpty()) return -1;
        return arr[top];
    }
};