#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int N,num;
    cin >> N;
    queue<int> q;
    while(N--){
        string str;
        cin >> str;
        if(str=="push"){
            int qData;
            cin >> qData;
            q.push(qData);
        }else if(str == "pop"){
            if(q.size() != 0){
                num = q.front();
                q.pop();
            }else num = -1;
            cout << num << '\n';
 
        }else if(str == "size") cout << q.size() << '\n';
        else if(str == "empty"){
            if(q.size() == 0) num =1;
            else num =0;
            cout << num << '\n';
        }else if(str == "front"){
            if(q.size() == 0) num = -1;
            else num = q.front();
            cout << num << '\n';
 
        }else if(str == "back"){
            if(q.size() == 0)
                num = -1;
            else num = q.back();
            cout << num << '\n';
        }
    }
    return 0;
}