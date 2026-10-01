#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Stack
{
    Node *top;
};

Stack stack;

Stack *buatStack()
{
    stack.top = nullptr;
    return &stack;
}

bool isEmpty(Stack stack)
{
    return stack.top == nullptr;
}

void push(Stack *&stack, int nilai)
{
    Node *newNode = new Node;
    newNode->data = nilai;
    newNode->next = nullptr;

    if (isEmpty(*stack))
    {
        stack->top = newNode;
    }
    else
    {
        newNode->next = stack->top;
        stack->top = newNode;
    }
}

bool pop(Stack *&stack)
{
    if (isEmpty(*stack))
    {
        cout << "Stack kosong";
        return false;
    }

    Node *temp = stack->top;
    stack->top = stack->top->next;

    delete temp;
    return true;
}

void peek(Stack *&stack)
{
    if (isEmpty(*stack))
    {
        cout << "Stack kosong";
    }

    cout << stack->top->data;
}

void tampil(Stack *&stack){
    if (isEmpty(*stack))
    {
        cout << "Stack kosong";
    }

    Node* current = stack->top; 
    while (current != nullptr)
    {
        cout << current->data << " "; 
        current = current->next; 
    }
}

void clear(Stack *&stack){
    while (stack->top != nullptr)
    {
        Node *temp = stack->top; 
        stack->top = stack->top->next; 
        delete temp; 
    } 
}

int main()
{
    Stack *s = buatStack();
    push(s, 10);
    push(s, 20);

    peek(s);
    cout << endl; 
    tampil(s); 

    cout << endl; 
    clear(s);
    tampil(s);  
}