#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int teman;
    float lumpia;
    cin >> teman;
    cin >> lumpia;
    float a;
    vector<int> arr;
    for(int i=0; i<teman; i++){
        cin>>a;
        arr.push_back(a); // 1 2 2 1
    }
    vector<float>potongan={lumpia/2, lumpia/2}; // 500 500
    for (int i=1; i<teman; i++){
        a = potongan[arr[i]-1]/2;
        if(arr[i]<potongan.size()){
             potongan.insert(potongan.begin()+ arr[i], a ); // 500 500 250 
        }
        else{
            potongan.push_back(a);
        }
       
        potongan[arr[i]-1]=a; // 500 250 250 
    }
    for(float x :potongan){
        cout << x << " ";
    }

}