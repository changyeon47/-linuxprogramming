#include <iostream> // 헤더파일 포함
using namespace std; // std 생략

int main() { // 메인함수
    int ary[3][3] = { -5, 2, 35, -20, 5, 100, -75, 5, -25 }; // 변수 선언
    int max = ary[0][0], a = 0, b = 0; // 초기값 설정

    for (int j = 1; j < 3; j++) { // 행 반복
        for (int i = 0; i < 3; i++) { // 열 반복
            if (max < ary[j][i]) { // 조건문
                max = ary[j][i]; // 최대값 저장
                a = j; // 행 인덱스 저장
                b = i; // 열 인덱스 저장
            }
        }
    }
    cout << "최대값은 " << max << endl; // 최대값 출력
    cout << "위치는 " << a + 1 << "행 " << b + 1 << "열" << endl; // 위치 출력
    return 0;
}
