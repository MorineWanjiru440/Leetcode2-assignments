typedef struct {
    int *stack;
    int *inc;
    int maxSize;
    int top;
} CustomStack;

CustomStack* customStackCreate(int maxSize);
void customStackPush(CustomStack* obj, int x);
int customStackPop(CustomStack* obj);
void customStackIncrement(CustomStack* obj, int k, int val);
void customStackFree(CustomStack* obj);