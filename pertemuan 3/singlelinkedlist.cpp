#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *newNode;

Node *buatNode(int nilai)
{
    return new Node{nilai, nullptr};
}

void tambahAwal(Node *&head, Node *&tail, int nilai)
{
    Node *newNode = new Node{nilai, head};
    // baru -> head -> pertama
    if (head->data > nilai)
    {
        head = newNode;

        if (tail == nullptr)
        {
            tail = newNode;
        }
    }
    else
    {
        cout << "Nilai terlalu besar daripada head" << endl;
    }
}

void tambahAkhir(Node *&head, Node *&tail, int nilai)
{
    Node *newNode = new Node{nilai, nullptr};
    if (tail->data < nilai)
    {
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }

        tail->next = newNode;
        tail = newNode;
    }
    else
    {
        cout << "Nilai terlalu kecil daripada tail" << endl;
    }
}

void tambahTengah(Node *&head, Node *&tail, int nilai)
{
    Node *newNode = new Node{nilai, nullptr};
    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    Node *temp = head;

    if (newNode->data < head->data)
    {
        cout << "data terlalu kecil daripada head" << endl;
    }else if(newNode->data > tail->data){
        cout << "data terlalu besar daripada tail" << endl;
    }else{
        while (temp != nullptr && newNode->data > temp->next->data)
        {
            temp = temp->next;
        }
    
        newNode->next = temp->next;
        temp->next = newNode;
        
    }
}

void traversal(Node* head){
    Node* temp = head;

    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *pertama = buatNode(10);
    Node *head = pertama;
    Node *tail = pertama;

    // cout << head->data << endl;
    tambahAwal(head, tail, 5);
    // cout << head->data << endl;
    // cout << tail->data << endl;
    tambahAkhir(head, tail, 15);
    // cout << tail->data << endl;
    tambahTengah(head, tail, 14);
    tambahAkhir(head, tail, 20);
    tambahAkhir(head, tail, 30);
    tambahAkhir(head, tail, 40);
    // cout << head->next->data << endl;

    traversal(head);
}