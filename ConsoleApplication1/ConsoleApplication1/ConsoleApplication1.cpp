#include "stdafx.h"
#include "iostream"
using namespace std;


//Square
class Square {
private:
	int a = 5;
public:	
	void Show() {
		for (int i = 0; i < a; i++){
			for (int j = 0; j < a; j++){
				cout << "*";
			}
			cout << endl;
		}
	}
};

int main() {
	const int array_size = 3;
	Square square[array_size];
	
	for (int i = 0; i < array_size; i++){
		square[i].Show();
		cout << endl;
	}

	system("pause");
	return 0;
}

