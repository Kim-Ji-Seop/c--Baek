#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> queue;
void push(int num);
int pop();
int size();
int empty();
void front();
void back();
int main(){
    int N;
    string str;
    cin >> N;
    while(N--){
        getline(cin,str);

        if(str == "front") front();
        else if(str == "back") back();
        else if(str == "size") size();
        else if(str == "pop") pop();
        else if(str == "empty") empty();
        else if(str == "push"){
            int a; cin >> a;
            push(a);
        }
        str="";

    }
}
void print(string str) { 
    if(str.compare("push") == 0) {
        cin >> queue[0];
    }else if(str.compare("front")) front();
    else if(str == "back") back();
    else if(str == "size") size();
    else if(str == "pop") pop();
    else if(str == "empty") empty();
}
void push(int num){
    queue[0] = num;
}
int pop(){
    int num;
    if(queue.empty()) return -1;
    num = queue.back();
    queue.pop_back();
    return num; 
}
int size(){
    return queue.size();
}
int empty(){
    if(queue.empty()) return 1;
    else return 0;
}
void front(){
    if(queue.empty()) cout << -1 << endl;
    cout << queue.back() << endl;
}
void back(){
    if(queue.empty()) cout << -1 << endl;
    cout << queue.at(0) << endl;
}