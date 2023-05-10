#include <iostream>
using namespace std;

void loopfor(){
    for(int a=10; a>=3; a--){
        cout<< a <<endl; 
    }
}

void tambah (){
    int a = 10;
    int b = 5;
    int c;
    c = a + b;
    cout << c << endl;
}
    
void pilih(){
    int pil;

    pilihan:
        cout<<"0.exit"<<endl;
        cout<<"1.penjumlahan"<<endl;
        cout<<"2.loopfor"<<endl;
        cout<<"pilihan : ";
        cin>>pil;
        system("clear");

    if(pil==0){
        cout<<"thanks"<<endl;
        return;
    }else if(pil==1){
        tambah();
        goto pilihan;
    }else if(pil==2){
        loopfor();
        goto pilihan;       
    }else{
        cout<<"pilihan salah"<<endl;
        goto pilihan;      

    }  
}    
int main(){
    pilih();
    return 0;
}