#include <iostream>
using namespace std;


struct Node {
    string nama; 
    string nim;  
    Node* next;  
};

class Queue {
private:
    Node* front; 
    Node* back;  

public:
    Queue() {
        front = NULL;
        back = NULL;
    }

    bool isEmpty() {
        return front == NULL;
    }

    void enqueue(string nama, string nim) {
        Node* newNode = new Node; 
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = NULL;

        if (isEmpty()) {
            front = newNode; 
            back = newNode;
        } else {
            back->next = newNode; 
            back = newNode; 
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Antrian kosong" << endl;
        } else {
            Node* temp = front; 
            front = front->next; 
            delete temp; }
    }

    int countQueue() {
        int count = 0;
        Node* current = front; 
        while (current != NULL) {
            count++;
            current = current->next;
        }
        return count;
    }

    void clearQueue() {
        while (!isEmpty()) {
            dequeue(); 
        }
    }

    void viewQueue() {
        if (isEmpty()) {
            cout << "Antrian kosong" << endl;
        } else {
            cout << "Data antrian mahasiswa:" << endl;
            Node* current = front; 
            int position = 1;
            while (current != NULL) {
                cout << position << ". Nama: " << current->nama << ", NIM: " << current->nim << endl;
                current = current->next; 
                position++;
            }
        }
    }
};

int main() {
    Queue queue;
    queue.enqueue("Rasyid", "2311102011");
    queue.enqueue("Rama", "2311102111");
    queue.viewQueue();
    cout << "Jumlah antrian = " << queue.countQueue() << endl;
    queue.dequeue();
    queue.viewQueue();
    cout << "Jumlah antrian = " << queue.countQueue() << endl;
    queue.clearQueue();
    queue.viewQueue();
    cout << "Jumlah antrian = " << queue.countQueue() << endl;
    return 0;
}
