#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define MAX 8
using namespace std;

int nomor[MAX];
int head=-1, tail=-1;bool

iaEmpty(){
    if(tail == -1){
        return true;
    }else{
        return false;
    }
    
}

bool IsFu11 () {
    if(tail == MAX-1) {
        return true;
    }else{
        return false;
    }
}
void AntrianMasuk (int no) {
    if(IsEmpty)() {
        head= tail=0;
    }else {
        tail++;
    }
    nomer[tail]=no;

}

void AntrianKeluar(){
    if(IsEmpty()) {
        cout<<"Antrian sudah kosong ! ";
        getch () {
        }
    } else {
        for(int a=head;a<tail;a++) {
            nomer[a]=nomer[a+1];
        }
        tail--;
        if(tail == -1) {
            head = -1;
        }   
}
void clear(){
    head=tail=-1;
}

void view() {
    if(IsEmpty()) {
        cout<<"Antrian Kosong ! ";

    }else {
        syste("cls");
        print("==========================") ;
        printf("     DAFTAR ANTRIAN      ") ;
        PRINTF("=========================") ;

        for(int a=head;a<=tail;a++) {
            prinf(" [&d]",nomer[a]) ;
            
    }
    printf("\n=============================\n") ;

}
int main[] {
    system("colour if");
    int coose,p=1, urut;
    do(
        sysetm("cin");
        cout << "\n\n===== PROGRAM ANTRIAN  ======"
             << "\n|1. Tambah Antrian            |"
             << "\n|2. Panggil Antrian           |"
             << "\n|3. Lihat daftar antrian      |"
             << "\n|4. Format                    |"
             << "\n|5. Exit                      |"
        cout << "\nChoose ! "; cin >> choose;
        cout << "\n\n";
        if (choose == 1) {
            if ( Isfull()) {
                cout<<"Antrian penuh !";
            }
            else{
                urut=p;
                AntrianMasuk(urut) ;
                cout << "ANTRIAN" << endl;
                cout << "-----" << endl;
                cout << "| "<< p <<" |" << endl;
                cout << "-----" << endl;
                cout <<"Silahkan Menunggu !"<< endl;
                p++;
            }
            
        }
        else if(choose == 2){
            cout << "====================================" << endl;
            cout << "No. Antri :" << nomer[head]<< "| Dipanggil";
            cout << ""
        }


