#include <stdio.h>

struct Student{
	char name[50];
	int score;
};
int main(){
	//학생 수를 입력 받을 정수형 변수
	int count=0;
	//학생 구조체 변수 선언
	struct Student s;
	//구조체 멤버변수 값을 저장할 파일 포인터 선언
	//파일 포인터 두개 추가(pass,fail)
	FILE *fp;
	FILE *pass;
	FILE *fail;
	//저장할 파일이름 student.txt 쓰기 모드로 OPEN
	fp = fopen("student.txt","w");

	//fp 널 값을 가질 때 "파일 열기 실패"라고 출력 후  1을 돌려주기
	if(fp == NULL){
		printf("파일 열기 실패");
		return 1;
	}

	//학생 수 입력 받고 count 변수에 저장 후 반복문에서 학생 수 만큼 입력(이름,점수)
	//구조체 멤버 변수에 저장 받기
	//ex) 학생 수 입력 : 5
	printf("학생 수 입력");
	scanf("%d",&count);

	//입력 받은 학생 수 만큼 반복하면서 구조체 멤버변수에 데이터 저장(name,score)
	for(int i=0; i<count; i++){
		printf("\n%d번째 학생 이름",i+1);
		scanf("%49s",s.name); //배열의 시작주소라 & 쓰지 않음

		printf("점수:");
		scanf("%d",&s.score); //여기서는 & 쓰기
		//fprintf(파일포인터, 서식문자, 저장할 값)
		fprintf(fp, "%s %d\n",s.name,s.score);
	}
	fclose(fp);

	fp = fopen("students.txt","r");
	pass = fopen("pass.txt","w");
	fail = fopen("fail.txt","w");

	//만약 세 파일 중 하나라도 열기에 실패했다면
	if(fp == NULL || pass == NULL || fail == NULL){
		//오류 메시지 출력
		printf("파일 열기 실패\n");
		//성공적으로 열린 파일은 닫기
		if(fp != NULL) fclose(fp);
		if(pass != NULL) fclose(pass);
		if(fail != NULL) fclose(fail);
		//프로그램 종료
		return 1;
	}
	//파일에서 이름과 점수를 모두 읽을 수 있는 동안 반복
	//읽은 데이터를 학생 구조체에 저장
	while(fscanf(fp, "%49s %d", s.name, &s.score) == 2){
		//만약 학생 점수가 80점 이상이라면
		//pass.txt에 이름과 점수 저장
		if(s.score >=80){
			fprintf(pass, "%s %d\n", s.name, s.score);
		}
		else{ // fail.txt에 이름과 점수 저장
			fprintf(fail, "%s %d\n", s.name, s.score);
		}
	}
	fclose(fp);
	fclose(pass);
	fclose(fail);

	printf("파일 저장 및 분류 완료!");
		
}
	
