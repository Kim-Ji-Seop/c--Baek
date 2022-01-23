#include <iostream>

using namespace std;

int main(){
    int n,M=0;
    float sum=0;
    int arr[1001]={0,};
    cin >> n;
    float arr1[n] = {0,};
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(M<arr[i]) M = arr[i];
    }
    for(int i=0;i<n;i++){
        arr1[i] = (float)arr[i]/M*100;
        sum += arr1[i];
    }
    cout << sum / n << endl;
    cout << M << endl << arr1[0] << endl << arr1[1] << endl << arr1[2];
}