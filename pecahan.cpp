#include <iostream>
#include <vector> 
using namespace std;
int main(){
    ios :: sync_with_stdio(false);
    float pecahan[4];
    for (int i=0; i<4 ; i++){
        cin >> pecahan[i];
    }
    if(pecahan[1]==pecahan[3]){
        if (pecahan[0]>pecahan[2]){
            cout << "lebih besar";
        } else if (pecahan[0]<pecahan[2]){
            cout << "lebih kecil";
        } 
        else{
            cout << "sama"; 
        }
    } else if (pecahan[0]/pecahan[1]> pecahan[2]/pecahan[3]){
        cout << "lebih besar"; 
    } else if(pecahan[0]/pecahan[1]<pecahan[2]/pecahan[3]){
        cout << "lebih kecil";
    } else {
        cout <<"sama";
    }
    return 0;
}