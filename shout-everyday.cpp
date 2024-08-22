#include <iostream>
using namespace std;
 
int main() {
    //愛を叫ぶ時刻A
    //就寝時刻B
    //起床時刻C
    int A,B,C;
    cin >> A >> B >> C;
    //日をまたがない
    if(B < C){
        if(B < A && A < C){
            cout << "No" << endl;
            return 0;
        }
        cout << "Yes" << endl;
        return 0;
    }else{
    //日をまたぐとき
        if(C < A && A < B){
            cout << "Yes" << endl;
            return 0;
        }else{
            cout << "No" << endl;
            return 0;
        }
    }
}