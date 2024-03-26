#include <iostream>
//#include <string>
//#include <cstdlib>
//#include <ctime>
# define NUM 20
using namespace std;


void fill_list(int list[NUM][NUM]) {
	srand((unsigned int)time(NULL));
	for (int i = 0; i < NUM; i++) {
		for (int j = 0; j < NUM; j++) {
			list[i][j] = rand() % 100;
		}
	}
	cout << "FIlled_ List : { ";
	for (int i = 0; i < NUM; i++) {
		for (int j = 0; j < NUM; j++) {
			cout << list[i][j] << " ";
		}
	}
	cout << "}" << endl;
}

void show_list(int list[NUM][NUM]) {
//	srand((unsigned int)time(NULL));
	cout << "List : { ";
	for (int i = 0; i < NUM; i++) {
		for (int j = 0; j < NUM; j++) {
			cout << list[i][j] << " ";
		}
	}
	cout << "}" << endl;
}

int row_sum(int list[NUM][NUM], int row_num) {
	int sum = 0;
	for (int i = 0; i < NUM; i++) {
		sum += list[row_num][i];
	}
	cout << sum << endl;
	return sum;
}

int col_sum(int list[NUM][NUM], int col_num) {
	int sum = 0;
	for (int i = 0; i < NUM; i++) {
		sum += list[i][col_num];
	}
	cout << sum << endl;
	return sum;
}

int diag_sum(int a[NUM][NUM]) {
    int sum = 0;
    for (int i = 0; i < NUM; i += 1) {
        sum += a[i][i];
    }
	cout << sum << endl;
    return sum;
}

int back_diag_sum(int a[NUM][NUM]) {
    int sum = 0;
    for (int i = 0; i < NUM; i += 1) {
        sum += a[NUM - i - 1][i];
    }
	cout << sum << endl;
    return sum;
}

int find_row_max(int a[NUM][NUM], int row_index) {
    int max = a[row_index][0];
    int index = 0;
    for (int i = 1; i < NUM; i += 1) {
        if (max < a[row_index][i]) {
            max = a[row_index][i];
            index = i;
        }
    }
	cout << index << endl;
    return index;
}

int find_col_max(int a[NUM][NUM], int column_index) {
    int max = a[0][column_index];
    int index = 0;
    for (int i = 1; i < NUM; i += 1) {
        if (max < a[i][column_index]) {
            max = a[i][column_index];
            index = i;
        }
    }
	cout << index << endl;
    return index;
}

int find_max_row(int a[NUM][NUM]) {
    int max_sum = row_sum(a, 0);
    int index = 0;
    for (int i = 1; i < NUM; i += 1) {
        int sum = row_sum(a, i);
        if (max_sum < sum) {
            max_sum = sum;
            index = i;
        }
    }
	cout << index << endl;
    return index;
}

int find_max_col(int a[NUM][NUM]) {
    int max_sum = col_sum(a, 0);
    int index = 0;
    for (int i = 1; i < NUM; i += 1) {
        int sum = col_sum(a, i);
        if (max_sum < sum) {
            max_sum = sum;
            index = i;
        }
    }
	cout << index << endl;
    return index;
}

int main() {
	int example_list[NUM][NUM];
	int num;

	while (true) {
		cout << "Select the function num." << endl;
		cin >> num;
		switch (num) {
		case 1:
			fill_list(example_list);
			break;
		case 2:
			show_list(example_list);
			break;
		case 3:
			row_sum(example_list, 1);
			break;
		case 4:
			col_sum(example_list, 1);
			break;
		case 5:
			diag_sum(example_list);
			break;
		case 6:
			back_diag_sum(example_list);
			break;
		case 7:
			find_row_max(example_list, 1);
			break;
		case 8:
			find_col_max(example_list, 1);
			break;
		case 9:
			find_max_row(example_list);
			break;
		case 10:
			find_max_col(example_list);
			break;
		}
	}
}

