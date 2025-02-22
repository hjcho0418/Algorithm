#include <iostream> //240824 정렬 // 
#include <vector>   // v.erase(unique(v.begin(), v.end()), v.end());중복제거하기 비교함수돌아가는 원리알기
#include <algorithm>
#include <string>
using namespace std;

bool comp(string s1, string s2) {
    if (s1.length() == s2.length()) {
        return s1 < s2;
    }
    else {
        return s1.length() < s2.length();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<string> v(N);
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), comp);
    v.erase(unique(v.begin(), v.end()), v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }
    return 0;
}

//비교 함수가 적용되는 원리에 대해 설명하겠습니다.비교 함수는 두 요소를 비교하여 어떤 순서로 배치할지를 결정하는 함수입니다.sort 함수와 같은 알고리즘은 이 비교 함수를 반복적으로 호출하면서 배열이나 벡터의 요소들을 정렬합니다.
//
//비교 함수의 작동 원리
//비교 함수 호출 : sort 함수는 배열이나 벡터의 요소를 비교할 때마다 비교 함수를 호출합니다.예를 들어, 벡터에 "apple"과 "banana"가 있으면, comp("apple", "banana")와 같이 호출됩니다.
//
//비교 함수의 결과 :
//
//참(true) : 첫 번째 인자가 두 번째 인자보다 작다고 판단되는 경우, 즉 첫 번째 인자가 두 번째 인자보다 앞에 와야 하는 경우 true를 반환합니다.
//거짓(false) : 첫 번째 인자가 두 번째 인자보다 크다고 판단되면, 즉 첫 번째 인자가 두 번째 인자보다 뒤에 와야 하는 경우 false를 반환합니다.
//예제
//1. comp("apple", "banana")
//길이 비교 : "apple"과 "banana"는 길이가 다르므로 길이를 비교합니다. "apple"은 5글자, "banana"는 6글자이므로 "apple"이 더 짧아서 true를 반환합니다.따라서 "apple"이 "banana"보다 앞에 와야 한다고 판단합니다.
//2. comp("banana", "apple")
//길이 비교 : "banana"는 6글자, "apple"은 5글자입니다.이 경우 "banana"가 더 길기 때문에 false를 반환합니다.따라서 "banana"가 "apple"보다 뒤에 와야 한다고 판단합니다.
//전체 정렬 과정에서의 예
//벡터 v가["apple", "banana"]인 경우 :
//
//sort 함수는 comp("apple", "banana")를 호출합니다.
//결과가 true이므로 "apple"은 "banana"보다 앞에 위치합니다.
//벡터 v가["banana", "apple"]인 경우 :
//
//sort 함수는 comp("banana", "apple")를 호출합니다.
//결과가 false이므로 "banana"는 "apple"보다 뒤에 위치하게 됩니다.
//이렇게 sort 함수는 모든 요소에 대해 비교 함수를 적용하여 정렬을 수행합니다.결국, 비교 함수는 각 요소 쌍에 대해 어느 것이 앞에 와야 하는지를 결정하는 역할을 합니다.