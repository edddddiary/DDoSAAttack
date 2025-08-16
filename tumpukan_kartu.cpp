#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios :: sync_with_stdio(false);
    int jumlahKartu, jumlahAksi;
    vector<int> kartu;
    // vector<pair<char, int>> aksi;
    char a;
    int b;
    cin >> jumlahKartu >> jumlahAksi;
    for (int i=0; i<jumlahKartu; i++){
        cin >> b; 
        kartu.push_back(b);
    }
    for (int i =0; i<jumlahAksi; i++){
        cin >> a >> b;
        if(a=='A'){
            kartu.insert(kartu.begin(), b);
        } 
        else if (a=='G'){
            if (kartu[0]!=b){
                auto it = find(kartu.begin(), kartu.end(), b);
                rotate(kartu.begin(), it, kartu.end());
            }
        }
        jumlahKartu++;
    }
    cout << jumlahKartu << endl;
    for (int x: kartu){
        cout << x << " ";
    }
    return 0;
}