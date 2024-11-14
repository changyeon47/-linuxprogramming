#include <iostream>//헤더파일 포함
using namespace std;//std생략
template <class T>//템플릿 함수 선언
T getmax(T a[], int n){//템플릿 함수 정의
    T max = a[0];//변수 값을 초기화
    for(int i = 1;i<n;i++){//반복문
        if(max < a[i])//max값 보다 클때
            max = a[i];//max값 초기화
    }
    return max;//max값 리턴
}
int main() {//메인함수 정의
    int a[5]={-5, 10, 30, 20, 6};//변수 선언 및 초기화
    double b[4]= {3.14, 1.5, -6.0, 0.5};//변수 선언 및 초기화
    char c[3] = {'a', 'x', 'p'};//변수 선언 및 초기화
    cout << "정수배열의 최대값은" << getmax<int>(a, 5) << endl;//출력문
    cout << "실수배열의 최대값은" << getmax<double>(b, 4) << endl;//출력문
    cout << "문자배열의 최대값은" << getmax<char>(c, 3) << endl;//출력문
    return 0;//함수종료
}