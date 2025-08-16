#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    int jumlah; 
    vector<int> hargaBeli;
    vector<int> hargaJual;
    vector<int> keuntungan;
    int a;
    cin >> jumlah;
    for (int i=0; i<jumlah; i++){
        cin >> a;
        if (i>jumlah-3){
            hargaBeli.push_back(0);
        }
        else{
            hargaBeli.push_back(a);
        }
    }
    for (int i=0; i<jumlah; i++){
        cin >> a;
        if (i==0 || i==1){
            hargaJual.push_back(0);
        } else {
            hargaJual.push_back(a);
        }
    }

    for (int i=0; i<jumlah-2; i++){
        auto max = max_element(hargaJual.begin()+i+2, hargaJual.end());
        keuntungan.push_back(*max - hargaBeli[i]);
    }
    auto max = max_element(keuntungan.begin(), keuntungan.end());
    if (*max>0){
        cout << *max;
    }else {
        cout << "tidak mungkin";
    }
    return 0;
}