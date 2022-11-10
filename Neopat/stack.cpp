#include <iostream>
using namespace std;

struct Stack{
    int top;
    unsigned capacity;
    int * array;
};

struct Stack * createStack(unsigned capacity){
    struct Stack * stack = (struct Stack *)malloc(capacity*sizeof(struct Stack));
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (int *)malloc(capacity*sizeof(int));
    return stack;
}
void push(struct Stack *s, int val){
    s->array[++s->top] = val;
}
int pop(struct Stack *s){
    return s->array[s->top--];
}
void printStack(struct Stack *s){
    for(int i = 0; i <= s->top; i++){
        cout << s->array[i] << " ";
    }
    cout << endl;
}

int main(){
    struct Stack * stack = createStack(10);
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    printStack(stack);
    cout<<pop(stack)<< endl;
    printStack(stack);
    return 0;
}