#include <iostream> // 헤더파일 포함
using namespace std; // std 생략

int main() { // 메인함수
    int ary[3][3] = { -5, 2, 35, -20, 5, 100, -75, 5, -25 }; // 변수 선언
    int res[3][3]; // 초기값 설정

    for (int j = 0; j < 3; j++) { // 행 반복
        for (int i = 0; i < 3; i++) { // 열 반복
            if (0 > ary[j][i])  // 조건문
                res[j][i] = 0;//값 저장
            else//조건문
                res[j][i] = 255;//값 저장
        }
    }
    for (int j = 0; j < 3; j++) { // 행 반복
        cout << endl;//출력문
        for (int i = 0; i < 3; i++) { // 열 반복
            cout << res[j][i] << "  ";//출력문
        }
    }
    cout << endl;
}
