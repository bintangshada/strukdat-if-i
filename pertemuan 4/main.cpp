#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
};

Node* head = nullptr;
Node* tail = nullptr;
Node* newNode = nullptr;
Node* temp = nullptr;
Node* del = nullptr;

bool listkosong(){
    return (head == nullptr);
}

void cetakMaju(){
    if(listkosong()){
        cout << "List masih Kosong" << endl;
    } else {
        temp = head;
        while(temp != nullptr){
            cout << temp->data << endl;
            temp = temp->next;
        }
        cout << endl;
    }
}

void cetakMundur(){
    if(listkosong()){
        cout << "List masih Kosong" << endl;
    } else {
        temp = tail; // ganti ini menjadi tail
        while(temp != nullptr){
            cout << temp->data << endl;
            temp = temp->prev;// ganti ini menunjuk prev
        }
        cout << endl;
    }
}

void sisipDepan(int data){
    newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    if(listkosong()){
        head = tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void sisipBelakang(int data){
    newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    if(listkosong()){
        head = tail = newNode;
    } else {
        newNode->prev = tail; // ganti menjadi tail
        tail->next = newNode; // ganti menunjuk node baru 
        tail = newNode; // ganti value dari tail ke node baru
    }
}

void sisipTengah(int data){
    newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    temp = head; // diisi temp menunjuk ke head untuk traversal

    while(temp->next != nullptr && temp->next->data < data){
        temp = temp->next;
    }

    newNode->next = temp->next;

    if (temp->next != nullptr){
        temp->next->prev = newNode;
    }

    temp->next =newNode;
    newNode->prev = temp;
}



int main(){
    sisipDepan(10);
    sisipBelakang(20);
    sisipBelakang(30);
    sisipBelakang(40);
    sisipTengah(11);
    sisipTengah(21);
    cetakMaju();
    cetakMundur();
}