#include <iostream>
using namespace std;

void prime(int n);

int main(){
    int N;
    cin>>N;
    prime(N);
}

void prime(int n){
    if(n%2==0||n%3==0){
        cout<<"no";
    }else{
        cout<<"yes";
    }
}
