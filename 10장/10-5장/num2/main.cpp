#include <iostream>//헤더파일 포함
using namespace std;//std생략
int main() {//메인함수
    int Student[3][4], sum = 0;//변수선언
    int max, index;//변수선언
    for (int j = 0; j < 3; j++) {//반복문
        sum = 0; // 초기화
        cout << j + 1 << "번째 학생의 국어, 영어, 수학 성적을 입력 : ";//출력문
        for (int i = 0; i < 4; i++) {//반복문
            cin >> Student[j][i];//입력받은 값 변수에 대입
            sum += Student[j][i];//합을 저장
        }
        Student[j][3] = sum / 3; // 평균값 저장
    }
    max = Student[0][3];//첫번째 값 저장
    for (int i = 1; i < 3; i++) {//반복문
        if (max < Student[i][3]) {//조건문
            max = Student[i][3];//최대 평균값 저장
            index = i;//인덱스 저장
        }
    }
    cout << "최우수 학생은 " << index + 1 << "번째 학생이고 평균점수는 " << max << "점이다" << endl;//출력문
}
