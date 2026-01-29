#include <iostream>

using namespace std;

// 1. Struktur Node (Simpul)
struct TNode {
    int data;    
    TNode *next; 
};

TNode *head = NULL;
TNode *tail = NULL;

// Cek apakah list kosong
bool isEmpty() {
    return (head == NULL);
}

// Menambah node di awal list (Insert Head)
void addHead(int dataBaru) {
    TNode *nodeBaru = new TNode; 
    nodeBaru->data = dataBaru;
    nodeBaru->next = NULL;

    if (isEmpty()) {
        head = nodeBaru;
        tail = nodeBaru;
    } else {
        nodeBaru->next = head; 
        head = nodeBaru;       
    }
}

// Menambah node di akhir list (Insert Tail)
void addTail(int dataBaru) {
    TNode *nodeBaru = new TNode;
    nodeBaru->data = dataBaru;
    nodeBaru->next = NULL;

    if (isEmpty()) {
        head = nodeBaru;
        tail = nodeBaru;
    } else {
        tail->next = nodeBaru; 
        tail = nodeBaru;       
    }
}

// *** FUNGSI UTAMA YANG DIMINTA: DISPLAY ***
void displayList() {
    if (!isEmpty()) {
        TNode *bantu = head;
        cout << "\nIsi Linked List: ";
        while (bantu != NULL) {
            cout << bantu->data << " -> ";
            bantu = bantu->next;
        }
        cout << "NULL" << endl;
    } else {
        cout << "Linked List kosong." << endl;
    }
}
// *****************************************


int main() {
    cout << "--- DEMO LINKED LIST (DISPLAY) ---" << endl;

    // Tambah beberapa data menggunakan addTail
    addTail(10);
    addTail(20);
    addTail(30);

    // Tambah data menggunakan addHead (agar list berubah)
    addHead(5);

    // Panggil fungsi displayList untuk menampilkan semua data
    displayList();
    
    // Hasil yang akan ditampilkan: 5 -> 10 -> 20 -> 30 -> NULL

    return 0;
}