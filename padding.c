#include <stdio.h>
struct student {    //구조체 변수 생성 시작
    char lastName[13]; /* 13 bytes */   //char타입 데이터를 13개 담을 수 있는 배열을 student 구조체에 생성(선언), 초기화를 안 했기 때문에 쓰레기값이 저장됨
    int studentId; /* 4 bytes */    //int타입 구조체 변수 studentId 선언
    short grade; /* 2 bytes */  //short타입 구조체 변수 grade 선언
};

int main() {    //메인 함수의 시작

    struct student pst; //struct student 구조체 변수 pst를 선언

    printf("size of student = %ld\n", sizeof(struct student)); //size of student = 구조체 student의 전체 메모리 크기 출력, 
    printf("size of int = %ld\n", sizeof(int)); //size of int = 구조체 중 int형 변수의 메모리 크기 출력, 4bytes
    printf("size of short = %ld\n", sizeof(short)); //size of short = 구조체 중 short형 변수의 메모리 크기 출력, 2bytes

    printf("-----[Lee yesol]  [2023070002]-----");  //학번과 이름 출력

    return 0; //0을 리턴해 프로그램을 확실히 종료시킴

    }   //메인 함수의 종료