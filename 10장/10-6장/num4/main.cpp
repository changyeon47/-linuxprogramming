#include <iostream>//헤더파일 포함
#include <vector>//헤더파일 포함
#include <algorithm>//헤더파일 포함
using namespace std;//std생략
int main(){//메인함수
    vector<vector<int>> a = {{-5, 2, 35}, {-20, 5, 100}, {-75, 5, -25}};//2차원 벡터 클래스 객체 초기화
    for(int i = 0;i<3;i++){//반복문
        for(int j = 0; j<3;j++){//반복문
            if(0 > a.at(i).at(j)){//조건문
                a.at(i).at(j) = 0;//값을 대입
                cout << a.at(i).at(j) << "  ";//출력문
            }
            else{//이외 상황
                a.at(i).at(j) = 255;//값을 대입
                cout << a.at(i).at(j) << "  ";//출력문
            }
        }
        cout << endl;//줄바꿈
    }  
}