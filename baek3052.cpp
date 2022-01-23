#include <iostream>

using namespace std;

int main(){
    int arr[42] = {0,};
    int a=10,b;
    int sum=0;
    while(a--){
        cin >> b;
        if(arr[b%42] == 0){
            arr[b%42]++;
        }
    }
    for(int i=0;i<42;i++){
        sum += arr[i];
    }
    cout << sum;
}