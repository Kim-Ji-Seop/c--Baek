#include<iostream>

using namespace std;

int main(){
    int a,b,c,val;
    int arr[10]={0,};
    cin >> a;
    cin >> b;
    cin >> c;
    val = a*b*c;
    while(val){
        arr[val%10]++;
        val /= 10;
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
}