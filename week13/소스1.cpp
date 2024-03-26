// file 생성하고 갖고 노는 code

#include <iostream>
using namespace std;

int main() {
	FILE* fp = fopen("sample.txt", "w"); // a : add, sample.txt파일에 계속 내용이 추가되는 mode , w : write, 기존 내용 덮어쓰기

	if (fp == NULL)
		printf("fail\n");
	else
		printf("success\n"); // week13 폴더 안에 sample.txt 파일 생겼음을 확인할 수 있음

	fprintf(fp, "%d, %f", 10, 31.4); // sample.txt 파일 안에 10, 3.14가 추가됨

	fclose(fp);


	int i; float f;
	fp = fopen("sample.txt", "r");
	fscanf(fp, "%d, %f", &i, &f);
	cout << "i = " << i << ", f = " << f << endl;
	fclose(fp);

	system("pause");
}