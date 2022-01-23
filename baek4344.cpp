#include <iostream>
#include <cstring>
#define MAX 1000
using namespace std;

int main(){
    int C;
    float avg;
    float per;
    int arr[MAX]={0,};
    int number,sum=0;
    int count=0;
    cin >> C;
    while(C--){
        cin >> number;
        for(int i=0;i<number;i++){
            cin >> arr[i]; 
            sum += arr[i];
        }
        avg = (float)sum / number;
        //cout << avg;
        for(int i=0;i<number;i++){
            if((float)arr[i] > avg){
                count++;
            }
        }
        per = (float)count/number;
        cout << fixed;                 //소수점 자릿수 고정
        cout.precision(3);
        cout <<(float)per*100 << "%" << endl;
        memset(arr,0,sizeof(arr));
        sum=0;per=0;count=0;
    }
}