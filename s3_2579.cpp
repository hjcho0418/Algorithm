#include <iostream> //240724
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    int *accVal=new int[N];
    int *score = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> score[i];
    }
    
	accVal[0] = score[0];
	accVal[1] = score[0] + score[1];
	accVal[2] = max(score[0] + score[2], score[1] + score[2]);

	for (int i = 3; i < N; i++)
	{
		int a = accVal[i - 2] + score[i];
		int b = accVal[i - 3] + score[i - 1] + score[i];
		accVal[i] = max(a, b);
	}
	
	cout << accVal[N-1];

	delete [] accVal;
	delete[] score;
}