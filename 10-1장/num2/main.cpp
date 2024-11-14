#include <iostream>//헤더파일 포함
using namespace std;//std생략
class Circle {//클래스 선언
    int radius;//맴버변수 선언
public://접근지정자
    Circle(int radius = 1) { this->radius = radius; }//생성자 정의
    int getRadius() { return radius; }//맴버함수 선언 및 정의
    bool operator>(Circle &a);//맴버함수 선언
};

bool Circle::operator>(Circle &a) {//맴버함수 정의
    return this->radius > a.getRadius();//값을 리턴
}

template <class T>//탬플릿함수 선언
T bigger(T a, T b) { // 두 개의 매개변수를 비교하여 큰 값을 리턴
    if (a > b) return a;//조건문 및 값을 리턴
    else return b;//조건문 및 값을 리턴
}

int main() {//메인함수
    int a = 20, b = 50, c;//변수 선언 및 값 초기화
    c = bigger(a, b);//함수 호출
    cout << "20과 50 중 큰 값은 " << c << endl;//출력문 및 함수 호출
    Circle donut(10), pizza(20), y;//객체 생성
    y = bigger(donut, pizza);//함수 호출
    cout << "donut과 pizza 중 큰 반지름은 " << y.getRadius() << endl;//출력 및 함수 호출
    return 0;//함수 종료
}
