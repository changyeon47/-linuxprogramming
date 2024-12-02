#include <iostream>//헤더파일 포함
#include <vector>//헤더파일 포함
#include <algorithm>//헤더파일 포함
using namespace std;//std생략
int main(){//메인함수
    vector<vector<int>> a = {{-5, 2, 35}, {-20, 5, 100}, {-75, 5, -25}};//2차원 벡터 클래스 객체 초기화
    int max = a.at(0).at(0);//변수 선언 및 초기화
    int row = 0, cul = 0;//행과 열을 저장할 변수 선언 및 초기화
    for(int i = 0;i<3;i++){//반복문
        for(int j = 0; j<3;j++){//반복문
            if(max < a.at(i).at(j)){//조건문
                max = a.at(i).at(j);//변수값 대입
                row = i; cul =j;//행과 열 값 대입
            }
        }
    }
    cout << "최대값은" << max <<endl;//출력문
    cout << "위치는" << row+1 << "행" << cul+1 << "열" << endl;//출력문  
}