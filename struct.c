#include <stdio.h>
struct student1 {   //구조체 student1 변수 생성 시작
    char lastName;  //char 타입 구조체 변수 lastName 선언
    int studentId;  //int 타입 구조체 변수 studentId 선언
    char grade; //char 타입 구조체 변수 grade 선언
};

typedef struct {    //타입 디파인으로 구조체 선언
    char lastName;  //char 타입 변수 lastName 선언
    int studentId;  //int 타입 변수 studentId 선언
    char grade; //char 타입 grade 선언
} student2; 

int main() {    //메인 함수의 시작
    struct student1 st1 = {'A', 100, 'A'};  //구조체 student1 타입의 각 필드에 값을 넣음

    printf("st1.lastName = %c\n", st1.lastName);    //st1.lastName의 값 출력, 15코드에서 A를 넣었으므로 A가 출력됨
    printf("st1.studentId = %d\n", st1.studentId);  //st1.studentId의 값 출력, 15코드에서 100을 넣었으므로 100이 출력됨
    printf("st1.grade = %c\n", st1.grade);  //st1.grade의 값 출력, 15코드에서 A를 넣었으므로 A가 출력됨

    student2 st2 = {'B', 200, 'B'}; //구조체 stuent2 타입의 각 필드에 값을 넣음, stack영역에 잡힘, 8코드에서 타입 디파인으로 정의했기 때문에 struct 할 필요 없음

    printf("\nst2.lastName = %c\n", st2.lastName);  //st2.lastName의 값 출력, 21 코드에서 B를 넣었으므로 B가 출력됨
    printf("st2.studentId = %d\n", st1.studentId);  //st1.studentId의 값 출력, 21 코드에서 200을 넣었으므로 200이 출력됨
    printf("st2.grade + %c\n", st2.grade);  //st2.grade의 값 출력, 21 코드에서 B를 넣었으므로 B가 출력됨

    student2 st3;   

    st3 = st2;  //st2 값을 st3 구조체로 어사인함

    printf("\nst3.lastName = %c\n", st3.lastName);  //st3.lastName의 값 출력, st2 값을 어사인했으므로 B가 출력됨
    printf("st3.studentId = %d\n", st3.studentId);  //st3.studentId의 값 출력, st2 값을 어사인했으므로 200이 출력됨
    printf("st3.grade = %c\n", st3.grade);  //st3.grade의 값 출력, st2 값을 어사인했으므로 B가 출력됨

    /* equality test */
    if(st3 == st2) /* not working */
    printf("equal\n"); else
    printf("not equal\n");
    
    printf("-----[Lee yesol]  [2023070002]-----");  //학번과 이름 출력

return 0;   //0을 리턴해 프로그램을 확실히 종료시킴
}   // 메인 함수의 종료