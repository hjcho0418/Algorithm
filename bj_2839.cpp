#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int bag = 0;
	while (N>-3) {
		if ((N % 5) == 0 && N>=0) {
			bag += (N / 5);
			cout << bag << endl;
			break;	
		}
		else if ((N % 5) != 0 && N >= 0) {
			N += (-3);
			bag ++;
		}
		else if (N<0) {
			cout << -1;
			break;
		}
	}
}