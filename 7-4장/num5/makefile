#Makefile
#this is comment
CX = g++ #변수 CX에 g++을 할당하여 컴파일러로 사용
CXFLAGS = -g -Wall # -g: 디버깅 정보를 포함, -Wall: 모든 경고 메시지를 활성화
OBJS = main.o Book.o  # main.o와 Book.o 두 개의 오브젝트 파일 나열
TARGET = booker # 최종적으로 생성될 실행 파일의 이름을 booker로 설정
$(TARGET) : $(OBJS) # TARGET을 생성하기 위해 OBJS가 필요
	$(CX) -o $(TARGET) $(OBJS) 
main.o : main.cpp Book.hpp  # main.o를 생성하기 위해 main.cpp와 Book.hpp가 필요
	$(CX) $(CXFLAGS) -c main.cpp 
Book.o : Book.cpp Book.hpp # Book.o를 생성하기 위해 Book.cpp와 Book.hpp가 필요
	$(CX) $(CXFLAGS) -c Book.cpp 
.PHONY: clean #파일을 삭제하는 규칙 
clean :	# clean 타겟을 정의
	rm $(TARGET) $(OBJS) 
