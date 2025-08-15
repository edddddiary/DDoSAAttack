#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int banyakBukuYangInginDibeli, periodeDiskon;
    vector<int> hargaBuku;
    vector<int> maxBuku;
    vector<int> bayar;
    int a;
    cin >> banyakBukuYangInginDibeli >> periodeDiskon;
    for (int i=0; i<banyakBukuYangInginDibeli; i++){
        cin >> a;
        hargaBuku.push_back(a);
    }
    sort(hargaBuku.rbegin(),hargaBuku.rend());
    for (int i=0; i<periodeDiskon; i++){
        cin >> a;
        maxBuku.push_back(a);
        bayar.push_back(0);
    }
    for(int i =0; i<periodeDiskon; i++){
        a=banyakBukuYangInginDibeli%maxBuku[i];
        if (a!=0){
            for (int x=1; x<=a;x++){
                bayar[i]+=hargaBuku[banyakBukuYangInginDibeli-x];
            }
            
        }
        for (int j=0; j<(banyakBukuYangInginDibeli-a); j+=maxBuku[i]){
            for (int x=0; x<maxBuku[i]; x++){
                if(x==(maxBuku[i]-1)){
                    bayar[i]+= (hargaBuku[j+x]-(hargaBuku[j+x]/2));
                }
                else{
                    bayar[i]+= hargaBuku[j+x];
                }
            }
        }
    }
    for (int x: bayar){
        cout << x << endl;
    }
    return 0;
}