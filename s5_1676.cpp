//#include <iostream>  //240825 수학
//#include <string>    //숫자->문자열 to_string(숫자) 문자열->숫자 stoi(문자열)
//using namespace std;
//
//long long factorial(int n) {
//    if (n == 0) {
//        return 1;
//    }
//    else {
//        return n * factorial(n - 1);
//    }
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int N, count=0;
//    cin >> N;
//    long long factN = factorial(N);
//    string str = to_string(factN);
//
//    for (int i = (str.length()-1); i >= 0; i--) {
//        if (str[i] == '0') {
//            count++;
//        }
//        else {
//            break;
//        }
//    }
//
//    cout << count;
//    return 0;
//}

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, count = 0;
    cin >> N;

    for (int i = 5; i <= N; i *= 5) {
        count += N / i;
    }

    cout << count;
    return 0;
}

//코드가 잘못된 이유는 N!을 직접 계산하는 과정에서 발생하는 오버플로우 문제 때문입니다.N!은 매우 큰 수가 될 수 있는데, 특히 N = 20 이상이면 long long 타입으로도 이 수를 표현하기 어렵습니다.오버플로우가 발생하면 결과가 잘못되거나, 프로그램이 제대로 동작하지 않게 됩니다.
//
//이 문제는 N!의 끝에 있는 0의 개수를 구하는 것이기 때문에, N!의 값을 직접 계산할 필요가 없습니다.대신에 0이 몇 개 있는지 파악하기 위해 2와 5가 몇 번 곱해졌는지 세는 방식으로 문제를 해결할 수 있습니다.끝에 있는 0은 10의 배수에서 나오며, 10은 2와 5의 곱으로 이루어져 있습니다.N!에서 2의 개수는 충분히 많으므로, 5의 개수를 세는 것으로 0의 개수를 알 수 있습니다.
//
//코드를 수정하면 다음과 같습니다 :