#include <stdio.h>
struct student1 {
    char lastName;
    int studentId; 
    char grade;
};

typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;

// typedef는 스트럭트의 별칭이라 의미는 하단의 코드와 똑같다.
// struct student1 {
//     char lastName;
//     int studentId; 
//     char grade;
// };

int main() {
    printf("[----- [hwajinLee] [2020037103] -----]\n");
    struct student1 st1 = {'A', 100, 'A'};//struct student1로 선언을 하였으므로 student1의 인스턴스를 생성시 struct를 명시해야함
    printf("st1.lastName = %c\n", st1.lastName); 
    printf("st1.studentId = %d\n", st1.studentId); 
    printf("st1.grade = %c\n", st1.grade);
    student2 st2 = {'B', 200, 'B'};//student2는 typedef로 선언하였으므로 struct없이 인스턴스 생성 가능
    printf("\nst2.lastName = %c\n", st2.lastName); 
    printf("st2.studentId = %d\n", st2.studentId); 
    printf("st2.grade = %c\n", st2.grade);
    student2 st3;
    st3 = st2;
    printf("\nst3.lastName = %c\n", st3.lastName); //st3 = st2를 하였으므로 st2의 변수값들이 st3의 변수에 복사됨
    printf("st3.studentId = %d\n", st3.studentId); 
    printf("st3.grade = %c\n", st3.grade);
    /* equality test */

    //메모리 주소가 같은지를 체크하였습니다.
    if(&st3 == &st2)
        printf("adress is equal\n"); 
    else
        printf("adress is not equal\n"); //st3과 st2는 값이 같을 뿐 주소는 메모리에 각각 할당되어있음으로 거짓

    //인스턴스의 값이 같은지를 체크하였습니다.
    if(st3.lastName == st2.lastName && st3.studentId == st2.studentId && st3.grade == st2.grade) 
        printf("value is equal\n"); //st3 = st2;를 한 뒤 수정되는 부분이 없었으므로 참
    else
        printf("value is not equal\n");
    return 0; 
}