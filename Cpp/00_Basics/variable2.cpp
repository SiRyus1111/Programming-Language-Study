#include <iostream>

int value3 = 0; //전역 변수

void print_func(void){ // void로 매개변수가 없음을 표시
    
    // void로 값을 반환하지 않는 함수를 선언할 수 있어서 return 0; 같은 반환값을 입력할 필요가 없다.
    std::cout << "void로 값을 반환하지 않는 함수 선언 가능" << std::endl; 
}
// 추가적인 void 사용 방법으로는 제네릭 포인터가 있다

void local_value(){

    int value = 10; // 지역 변수
    int value2 = 25; // 지역 변수

    // main 함수의 지역 변수인 value2가 있지만, 각각의 함수에 정의된 지역 변수에만 접근할 수 있다.
    std::cout << "local_value 함수 내에서의 지역변수 value2 : "<< value2 << std::endl;
}

int main(){

    int i, j;
    // 이번에는 네임스페이스 std를 using문을 사용하지 않고 직접 사용해보았다.
    // 네임스페이스(namespace)란 변수, 함수 등의 소속을 지정
    // 소속이 다르면 같은 이름이어도 OK (이름 충돌 방지)
    std::cout << "i 입력 : "; 
    std::cin >> i;

    std::cout << "j 입력 : ";
    std::cin >> j;

    std::cout << " i + j = "<< i + j << std::endl;

    print_func(); // void를 사용해서 값을 반환하지 않는 함수
    
    // 지역 변수 value는 변수 value가 선언된 local_value 함수 안에서만 유효함
    // std::cout << value << std::endl; 
    
    int value2 = 50;
    
    std::cout << "main 함수 내에서의 지역 변수 value2 : " << value2 << std::endl; // local_value 함수의 지역 변수인 value2가 있지만, 각각의 함수에 정의된 지역 변수에만 접근할 수 있다.

    local_value();

    int value3 = 30;

    // 전역 변수와 지역 변수가 같은 이름이면 지역 변수를 우선으로 접근
    std::cout << "지역 변수 value3 우선 접근 : " << value3 << std::endl; 

    float float_value = 1.5f; // 1.5 뒤에 f는 float형임을 표시하는 리터럴
    
    // float형의 변수를 좀 더 큰 실수 자료형인 double로 변환 (암시적 형변환) (숫자 승격)
    double double_value = float_value; 

    // float형의 변수를 다른 자료형(정수)인 int로 변환하거나, 크기가 더 작은 자료형으로 변환 (암시적 형변환) (숫자 변환)
    // 데이터가 유실될 가능성 있음.
    int int_value = float_value; 

    std::cout << "float_value : " << float_value << std::endl;
    // float : 실수형 int : 정수형이므로 소수점 아래 데이터 유실 (숫자 변환에서는 데이터 유실 가능성 있음)
    std::cout << "int_value : " << int_value << std::endl; 
    // 숫자 승격에서는 데이터 유지됨
    std::cout << "double_value : " << double_value << std::endl; 

    int a = 10;
    int b = 15;
    // 더하는 값은 정수형(int)이지만 float형으로 변환할 것을 명시적으로 표기 (명시적 형변환)
    // 데이터 유형간의 호환성을 위해 사용
    float float_avg = (float)(a + b) / 2;

    return 0; 
}

