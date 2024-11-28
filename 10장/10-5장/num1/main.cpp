#include<iostream>//헤더파일 포함
using namespace std;//std생략
int main(){//메인함수 정의
    int a[2][2] = {{2,4},{5,-5}};//2x2행렬 선언 및 변수 초기화
    int b[2][2] = {{-2,3}, {0,-5}};//2x2행렬 선언 및 변수 초기화
    cout << "연산 결과:" ;//출력문
    for(int i =0;i<2;i++){//반복문
        cout << endl;//줄바꿈
        for(int j =0;j<2;j++){//반복문
            cout << a[i][j] + b[i][j] << "  ";//출력문
        }
    }
    cout << endl;//출력문
}
