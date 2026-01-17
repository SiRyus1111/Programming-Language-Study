#include <iostream>
using namespace std;

int main(){
    
    int n1; // int형 변수 n1을 선언
    n1 = 3; // n1에 3이라는 값 "대입"
    cout << "n1 : " << n1 << endl;

    n1 = 10; // n1에 10이라는 값 "대입"
    cout << "변경된 n1 : " << n1 << endl;

    int n2 = 24; // int형 변수 n2를 선언 후 n2의 값을 24로 "초기화"
    cout << "초기회된 변수 n2 : " << n2 << endl;
    n2 = n1; // n2에 n1값 "대입"
    cout << "n1의 값을 n2에 대입함, n2 : " << n2 << endl;

    return 0;
}