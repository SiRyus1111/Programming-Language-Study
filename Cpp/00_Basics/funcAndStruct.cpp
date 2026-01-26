#include <iostream>
using namespace std;

// 오늘 주제는 함수와 구조체

// 여기서부터 함수

// 함수란 특정 작업을 수행하는 코드 집합이다.
// 반복해서 수행되는 코드를 함수로 만들면 재활용 할 수 있다.
// 이렇게 선언할 수 있다

/* 
반환_형식 함수_이름(매개변수(여러개 가능, 매개변수의 타입 명시)){
    함수_내용
}
*/

// 실제로 선언해보면,
int add(int a, int b){
    int ans = a + b;
    return ans;
}
// 이런 식으로 선언할 수 있다.

// 포인터 변수를 매개변수로 받는 함수
// 반환 값이 없을 때에는 void 사용
void multiple_negative_pointer(int *a){ // 매개 변수는 지역 변수이기 때문에 함수마다 같은 이름의 매개 변수를 쓸 수 있다.
    *a *= -1;
}

// 배열을 매개변수로 받는 함수
// 매개변수에 배열을 사용하면 사실상 배열의 첫 시작 주소(포인터)를 받는 것과 다르지 않다.
// 그래서 매개변수인 array 배열의 데이터를 변경하면 main 함수에 있는, arr 배열의 데이터도 변경된다.
int average(int array[], int count){
    int sum = 0;
    for (int i = 0; i < count; i++){
        sum += array[i];
        array[i]++;
    }
    return (sum/count);
}

// 여기서부터 구조체
    
    // 구조체는 하나 이상의 변수를 묶어서 새로운 자료형으로 정리할 수 있는 문법이다.
    // 이런 식으로 구조체를 선언할 수 있다.
    /* struct 구조체_이름{
        변수들
    }
    */
    
    // 실제로 선언해보면,
    struct Player{
        string name;
        int level;
        int exp;
        float progress;
    }; // 주의할 점 : 중괄호 뒤에 세미콜론 붙여야한다!
    // 이런 식으로 선언할 수 있다.
    // 실제로 이렇게 플레이어의 데이터 같은 변수는 클래스를 사용한다고 한다.

    // 구조체를 매개변수로 사용할 수 있다.

    // 이건 레벨이 15 이상이면 입장 가능 레벨이라고 알려주고, 
    // 레벨이 15 미만이라면 입장 가능 레벨이 아니라고 알려주는 함수다.
    void check_level(Player *player, int count){
        for (int i = 0; i < count; i++){
            if (player[i].level >= 15){
                cout << player[i].name << "님은 입장 가능 레벨입니다." << endl;
            }
            else {
                cout << player[i].name << "님은 입장 가능 레벨이 아닙니다." << endl;
            }
        }
    }

int main(){

    // 여기서부터 함수

    // add 함수를 호출해보자.
    int i = 3, j = 5;
    // 함수의 반환 타입이 int형이기 때문에 반환 값을 저장할 변수도 int형으로 만들어준다.
    int add_result = add(i,j); // 일반 변수도 매개 변수로 넣을 수 있다.
    cout << "i = " << i << ", j = " << j << ", add(i,j) = " << add_result << endl;

    // 물론 매개변수에는 포인터 변수와 배열도 넣을 수 있다.

    // 일단 포인터 변수를 매개변수로 받는 함수부터 보자.
    // 일반 변수를 매개변수로 넣으면 딱 그 함수에서만 쓰이는 지역 변수로 처리된다.
    // 그러므로 매개변수로 들어간 일반 변수에게 영향을 줄 수 없다.
    // 그래서 반환을 꼭 해줘야 한다.
    // 하지만 포인터 변수를 매개변수로 넣으면 
    // 값을 반환하지 않아도 값이 포인터 변수(주소값)에 저장된다.
    // 그러므로 매개변수로 들어간 포인터 변수에게 영향을 줄 수 있다.
    // (값이 저장될 위치를 매개 변수로 받는 것이므로)
    int x = 35;
    cout << "x = " << x << endl;
    multiple_negative_pointer(&x); // & 연산자로 변수 x의 주소(포인터)를 매개변수로 전달한다.
    cout << "multiple_negative_pointer 실행 후 x = " << x << endl;

    // 배열을 매개변수로 받는 함수도 보자.
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "원래의 arr 배열 요소 = ";
    for (int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "원래의 arr 배열의 평균 = " << average(arr, 10) << endl;

    cout << "바뀐 arr 배열 요소 = "; 
    for (int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // 여기서부터 구조체
    // 구조체는 하나 이상의 변수를 묶어서 새로운 자료형으로 정리할 수 있는 문법이다.
    // 뭔가 클래스와 비슷하다고 느꼈다.
    
    Player player1; // Player 구조체 변수 선언

    // Player 구조체의 구조체 변수 player1의 멤버에 접근
    // 구조체_변수.멤버
    // 이런 식으로 구조체 변수의 멤버의 접근과 초기화가 가능하다.
    player1.name = "SiRyus";
    player1.level = 10;
    player1.exp = 500000;
    player1.progress = 88.9f;

    cout << "player의 name" << player1.name << endl; 
    cout << "player Siryus의 level = " << player1.level << endl; 
    cout << "player Siryus의 exp = " << player1.exp << endl; 
    cout << "player Siryus의 prograss = " << player1.progress << endl; 

    // 물론 구조체 형식으로 배열을 선언할 수도 있다.

    Player players[4];

    // 그리고 이렇게 구조체 배열의 멤버도 초기화할 수 있다.
    players[0].name = "benedict";
    players[0].level = 15;
    players[0].exp = 1000000;
    players[0].progress = 91.5f;

    players[1].name = "J_woner";
    players[1].level = 12;
    players[1].exp = 650000;
    players[1].progress = 92.7f;

    players[2].name = "Octagon";
    players[2].level = 20;
    players[2].exp = 1800000;
    players[2].progress = 98.2f;

    // 물론 이렇게 간편하게 중괄호를 이용해서 구조체 변수/구조체 배열을 초기화할 수도 있다.
    Player player5 = {"visage", 17, 1350000, 95.3f};
    players[3] = {"INDEX", 22, 2500000, 99.8f};

    // 그리고 이게 핵심인데, 구조체를 매개변수로 사용할 수 있다.
    
    // 레벨이 15 이상이면 입장 가능 레벨이라고 알려주고,
    // 레벨이 15 미만이라면 입장 가능 레벨이 아니라고 알려주는 함수를 호출해보았다.
    check_level(players, 3);

    return 0;
}