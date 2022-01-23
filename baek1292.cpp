#include <iostream>
#define MAX 1000
using namespace std;

int main(){
    int a,b,sum=0;
    int num[MAX] = {0,};
    cin >> a >> b;
    int i=1,j=0;
    num[0] = 1;
    while(j<=b-1){
        for(j=(int)(i*(i+1)/2);j<=(int)(i*(i+3)/2) && j < 1000;j++){
            num[j] = i+1;
        }
        i++;
    }
    for(i=a-1;i<=b-1;i++){
        sum += num[i];
    }
    cout<<sum<<" ";
}