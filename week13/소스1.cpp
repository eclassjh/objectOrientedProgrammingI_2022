// file �����ϰ� ���� ��� code

#include <iostream>
using namespace std;

int main() {
	FILE* fp = fopen("sample.txt", "w"); // a : add, sample.txt���Ͽ� ��� ������ �߰��Ǵ� mode , w : write, ���� ���� �����

	if (fp == NULL)
		printf("fail\n");
	else
		printf("success\n"); // week13 ���� �ȿ� sample.txt ���� �������� Ȯ���� �� ����

	fprintf(fp, "%d, %f", 10, 31.4); // sample.txt ���� �ȿ� 10, 3.14�� �߰���

	fclose(fp);


	int i; float f;
	fp = fopen("sample.txt", "r");
	fscanf(fp, "%d, %f", &i, &f);
	cout << "i = " << i << ", f = " << f << endl;
	fclose(fp);

	system("pause");
}