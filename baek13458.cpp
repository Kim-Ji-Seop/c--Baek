#include <iostream>
#include <vector>
#define MAX 1000000
using namespace std;

int main(){
    vector<long long int> v;
    long long int n,a,b,c;
    long long int count=0;
    cin >> n;
    while(n--){
        cin >> a;
        v.push_back(a);
    }

    cin >> b >> c;

    for(int i : v){
        i = i - b;
        count++;
        //cout << i << " ";
        if(i <= 0) continue;
        if(i%c < c && i%c > 0){
            count += i/c+1;
            i=0;
        }else if(i%c == 0){
            count += i/c;
            i=0;
        } 
    }
    cout << count;
}