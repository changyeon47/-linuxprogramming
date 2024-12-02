#include <iostream>//헤더파일 포함
#include <vector>//헤더파일 포함
#include <algorithm>//헤더파일 포함
using namespace std;//std생략
int main(){//메인함수
    vector<vector<int>> score;//2차원 벡터 객체 생성
    vector<int> avg;//평균값을 저장할 백터 객체 생성
    vector<int>::iterator it;//최대값을 저장할 이터레이터 객체 생성
    for(int i =0;i<3;i++){//반복문
        vector<int> tmp;//벡터 객체 생성
        int a;//변수선언
        cout << i+1 <<"번째 학생의 국어, 영어, 수학 성적을 입력 :";//출력문
        for(int j = 0;j<3;j++){//반복문
            cin >> a;//값을 대입
            tmp.push_back(a);//값을 벡터 객체에 대입
        }
        score.push_back(tmp);//백터 객체를 2차원 백터 객체에 값을 대입
    }
    for(int i = 0;i<3;i++){//반복문
        int a = 0;//변수선언 및 초기화
        for(int j = 0;j<3;j++){//반복문
            a += score[i][j];//계산후 값을 대입
        }
        a = a/3;//평균값 계산 및 대입
        avg.push_back(a);//벡터객체에 값을 대입
    }
    it = max_element(avg.begin(),avg.end());//최대값 주소를 저장
    cout << "최우수 학생은" << distance(avg.begin(),it) + 1 <<"번째 학생이고 평균점수는" << *it << "점이다" << endl;//출력문
}












//vector 1차원,2차원 문제 나옴