#include <iostream>//헤더파일 포함
#include <vector>//헤더파일 포함
#include <algorithm>//헤더파일 포함
using namespace std;//std생략
int main(){//메인함수
    vector<vector<int>> score1 = {{2, 4}, {5, -5}};//2차원벡터 객체 선언 및 초기화
    vector<vector<int>> score2 = {{-2, 3}, {0, -5}};//2차원 벡터객체 선언 및 초기화
    cout << "연산결과: " <<endl;//출력문
    for(int i =0;i<2;i++){//반복문
        for(int j = 0;j<2;j++){//반복문
            int a;//변수선언
            a = score1.at(i).at(j) + score2.at(i).at(j); // 계산후 값을 대입
            cout << a << "  ";//출력문
        }
        cout << endl;//줄바꿈
    }
}