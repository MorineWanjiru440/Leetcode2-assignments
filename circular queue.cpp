class MyCircularQueue {
private:
    vector<int> data;
    int front, rear, size, capacity;

public:
    MyCircularQueue(int k);
    bool enQueue(int value);
    bool deQueue();
    int Front();
    int Rear();
    bool isEmpty();
    bool isFull();
};