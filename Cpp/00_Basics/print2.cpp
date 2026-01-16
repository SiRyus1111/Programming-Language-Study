#include <iostream>
using namespace std;

int main(){
    cout << "문자 : " << 'A' << endl;
    cout << "문자열 : " << "ABCDE" << endl;
    cout << "정수 : " << 123 << endl;
    cout << "실수 : " << 1.23 << endl;

    cout << "이스케이프 시퀀스 예시 : " << '\n' << endl; // 줄바꿈 이스케이프 시퀀스
    cout << "이스케이프 시퀀스 예시 : " << "\\n" << endl; // \n은 줄바꿈인데 줄바꿈되지 않음
    cout << "이스케이프 시퀀스 예시 : " << "\'예시\'" << endl; // '은 문자 리터럴인데 표기됨
    
    cout << "10진수로 표현된 10 : " << 10 << endl;
    cout << "8진수로 표현된 10 : " << 010 << endl;
    cout << "16진수로 표현된 10 : " << 0x10 << endl;

    cout << "8진수 101이 가리키는 문자 : " << '\101' << endl;
    cout << "16진수 61이 가리키는 문자 : " << '\x61' << endl;

    return 0;
}