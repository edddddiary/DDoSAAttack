#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int n;
    cin >>n;
    vector<int> tiang;
    int a;
    for (int i=0; i<n; i++){
        cin >> a;
        tiang.push_back(a);
    }
    if (!is_sorted(tiang.begin(), tiang.end()))
    {
        sort(tiang.begin(), tiang.end());
    }
    
    tiang.erase(unique(tiang.begin(), tiang.end()), tiang.end());
    cout << tiang[tiang.size()-1]-tiang[tiang.size()-2]<< endl;
    cout << tiang[tiang.size()-1]-tiang[0];
    return 0;
}