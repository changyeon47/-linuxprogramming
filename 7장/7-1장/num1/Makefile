#Makefile
#this is comment
CX = g++ #변수 CX에 g++을 할당하여 컴파일러로 사용
CXFLAGS = -g -Wall # -g: 디버깅 정보를 포함, -Wall: 모든 경고 메시지를 활성화
OBJS = main.o complex.o  # main.o와 complex.o 두 개의 오브젝트 파일 나열
TARGET = complexer # 최종적으로 생성될 실행 파일의 이름을 complexer로 설정
$(TARGET) : $(OBJS) # TARGET(복소계산기)을 생성하기 위해 OBJS(오브젝트 파일)가 필요
	$(CX) -o $(TARGET) $(OBJS) # g++를 사용하여 OBJS를 링크하여 TARGET을 생성
main.o : main.cpp complex.hpp  # main.o를 생성하기 위해 main.cpp와 complex.hpp가 필요
	$(CX) $(CXFLAGS) -c main.cpp # g++를 사용하여 main.cpp를 컴파일하여 main.o를 생성
complex.o : complex.cpp complex.hpp # complex.o를 생성하기 위해 complex.cpp와 complex.hpp가 필요
	$(CX) $(CXFLAGS) -c complex.cpp # g++를 사용하여 complex.cpp를 컴파일하여 complex.o를 생성
.PHONY: clean #파일을 삭제하는 규칙 
clean :	# clean 타겟을 정의
	rm $(TARGET) $(OBJS) # 생성된 실행 파일과 오브젝트 파일을 삭제
