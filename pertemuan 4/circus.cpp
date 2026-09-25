#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = nullptr;
Node *tail = nullptr;
Node *newNode = nullptr;
Node *temp = nullptr;
Node *del = nullptr;

bool listkosong()
{
    return (head == nullptr && tail == nullptr);
}

void tambahNode(int data)
{
    newNode->data = data;
    newNode->next = nullptr;

    if (listkosong())
    {
        head = tail = newNode;
        newNode->next = head;
    }
    else if (data < head->data)
    { // misal data lebih kecil
        newNode->next = head;
        head = newNode;
        tail->next = head;
    }
    else if (data >= tail->data)
    { // misal data paling besar
        tail->next = newNode;
        tail = newNode;
        tail->next = head;
    }
    else
    { // untuk sisip tengah
        temp = head;
        while (temp->next != head && temp->next->data <= data)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void hapusNode(int data_hapus)
{
    if (listkosong())
    {
        cout << "List kosong" << endl;
        return;
    }

    temp = tail;
    del = head;

    do
    {
        if (del->data == data_hapus)
        {
            if (head == tail)
            { // misal data cuman satu
                head = tail = nullptr;
            }
            else
            {
                temp->next = del->next;
                if (del == head)
                    head = del->next;
                if (del == tail)
                    tail = temp;
            }
            delete del;
            return;
        }
        temp = del;
        del = del->next;
    } while (del != head);
}

void cetakCircular()
{
    temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main()
{
}