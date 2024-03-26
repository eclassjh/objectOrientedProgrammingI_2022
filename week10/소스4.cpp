#include <iostream>
using namespace std;

struct vector {
	float x;
	float y;
};
struct vector get_vector_sum(struct vector a, struct vector b);

int main() {
	// vector a 구조체 a 선언 및 초기화
	// 중괄호를 사용해 한번에 할당
	// struct 생략 가능
	struct vector a = { 2.0, 3.0 }; 
	struct vector b = { 5.0, 6.0 };
	struct vector sum;
	sum = get_vector_sum(a, b);
	cout << "Vector sum is (" << sum.x << ", " << sum.y << ")" << endl;
}
struct vector get_vector_sum(struct vector a, struct vector b){ // struct 셋 다 생략 가능
	struct vector result;
	result.x = a.x + b.x;
	result.y = a.y + b.y;
	return result;
}