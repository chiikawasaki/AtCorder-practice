#include<iostream>
using namespace std;

int main(){

    //有効票N,高橋T票,青木A票
    int N,T,A;
    cin >> N >> T >> A;
    int sum = T+A;

    //田中と青木が同じ票の時
    if(A == T){
        cout << "No" << endl;
        return 0;
    }
    if(T < A){
        if(T+(N-sum) < A){
        cout << "Yes" << endl; 
        return 0;
        }
    }else if(A+(N-sum) < T){
        cout << "Yes" << endl;
        return 0;
    }
        cout << "No" << endl;
        return 0;
}