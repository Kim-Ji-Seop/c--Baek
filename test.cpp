#include <iostream>

using namespace std;

int main(void){

    int a,b;
    cin >> a >> b;

    if(a%10 != b%10){
        if(a%10 < b%10){
            cout << b%10 * 100 + ((b%100)/10) * 10 + b/100; 
        }else{
            cout << a%10 * 100 + ((a%100)/10) * 10 + a/100 << endl;
        }
    }else if(a%10 == b%10){
        if((a%100)/10 != (b%100)/10){
            if((a%100)/10 < (b%100)/10){
                cout << b%10 * 100 + ((b%100)/10) * 10 + b/100 << endl;
                
            }else{
                cout << a%10 * 100 + ((a%100)/10) * 10 + a/100;
            }
        }else{
            if(a/100 != b/100){
                if(a/100 < b/100){
                    cout << b%10 * 100 + ((b%100)/10) * 10 + b/100; 
                }else{
                    cout << a%10 * 100 + ((a%100)/10) * 10 + a/100;
                }
            }    
        }
    }    
    

    return 0;
}