#include <iostream> //240910
#include <string>  
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string S, str="abcdefghijklmnopqrstuvwxyz";
	cin >> S;

	for (int i = 0; i < str.length(); i++) {
		cout << (int)S.find(str[i]) << " ";   //만약 찾는 문자열이 없을 경우 string::npos를 반환한다. npos의 값은 - 1이지만 자료형이 unsigned이므로 int로 캐스팅 후 출력한다.
	}

	return 0;
}

//만약 없는 문자열을 찾으려 할 경우에는 string::npos가 반환된다.
//npos의 값은 - 1로 정의되어있지만, string::npos의 자료형이 unsigned이므로 2의 보수 개념에 의해 표현할 수 있는 최대 크기의 양수가 출력된다.
//이를 방지하기 위해서는 unsigned가 아닌 일반 int형으로 캐스팅을 진행하여 출력하면 된다.