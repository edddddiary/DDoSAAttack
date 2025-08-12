#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int a, b, c, d;
    cin >> a>> b>> c >> d;
    int hari=(a/3);
    if (a%3!=0){
        hari+=1;
    }
    hari+=(b/3);
    c+= b%3;
    hari+=(c/3);
    if (c%3!=0){
        hari+=1;
    }
    hari+=(d/3);
    if (d%3!=0){
        hari+=1;
    }
    cout << hari;
}