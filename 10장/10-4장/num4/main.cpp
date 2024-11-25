#include <iostream>//헤더파일포함
#include <vector>//헤더파일포함
#include <string>//헤더파일포함
#include <algorithm>//헤더파일포함
using namespace std;//std생략
class Student{//클래스 정의
    int score;//맴버변수 선언
    string name;//맴버변수 선언
public://접근 ㅣㅈ정자
    Student(){score = 0; name = " ";}//클래스 기본생성자
    void insert(int score, string name) {//맴버함수 정의
        this->name = name;//값 대입
        this->score = score;//값 대입
    }
    bool operator<(Student std);//연산자함수 선언
    string get_name(){return name;}//맴버함수 정의
    int get_score(){return score;}//맴버함수 정의
};
bool Student::operator<(Student std){//연산자함수 정의
    if(this->score < std.score)//조건문
        return true;//값을 리턴
    else//이 외에 상황
        return false;//값을 리턴
}
int main(){//메인함수 정의
    vector<Student> st;//벡터 객체 생성
    vector<Student>::iterator it;//백터 이터레이터 객체 생성
    for(int i =0;i<3;i++){//반복문
        Student s;//객체 생성
        string name;//스트링 객체 생성
        int score;//변수선언
        cout << "이름과 성적을 입력 : ";//출력문
        cin >> name;//값을 대입
        cin >> score;//값을 대입
        s.insert(score,name);//맴버함수 호출
        st.push_back(s);//벡터에 값을 대입
    }
    it = max_element(st.begin(),st.end());//이터레이터 객체를 최대값이 저장된 주소로 초기화
    cout << "최우수 학생은"<<endl;//출력문
    cout << "이름 : " <<  it->get_name() << endl;//출력및 맴버함수 호출
    cout << "성적 : " <<  it->get_score() << endl;//출력 및 맴버함수 호출
}