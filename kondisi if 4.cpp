//Tentukan berapa nilai untuk lulus?

#include <iostream>
using namespace std;

int main (){
    int nilai;
  
    cout << "Masukan nilai : ";
    cin >> nilai;
  
    if (nilai >= 60){
        cout << "Lulus";
    }
    else {
        cout << "Tidak Lulus";
    }
}
