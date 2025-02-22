//#include <iostream> //240807 그리디알고리즘
//#include <vector>  
//#include <typeinfo>
//
//using namespace std;
//
//int main() {
// /*   ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    long long N;
//    cin >> N;
//    vector<long long> roadLength(N-1);
//    vector<long long> oilPrice(N);
//   
//    for (size_t i = 0; i < roadLength.size(); i++) {
//        cin >> roadLength[i];
//    }
//    for (size_t i = 0; i < oilPrice.size(); i++) {
//        cin >> oilPrice[i];
//    }
//
//    long long cost = roadLength[0] * oilPrice[0];
//    long long opt = oilPrice[0];
//    for (size_t i = 1; i < N-1; i++) {
//        opt = min(opt, oilPrice[i]);
//        cost += opt * roadLength[i];
//    }
//
//    cout << cost;
//    return 0;*/
//    int a = 14;
//    long long b = 1000;
//    long long c = 0;
//    c = a;
//    cout <<c<<" " << typeid(c).name();
//}

#include <iostream> 
#include <vector>   

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> roadLength(N - 1);
    vector<int> oilPrice(N);

    for (int i = 0; i < roadLength.size(); i++) {
        cin >> roadLength[i];
    }
    for (int i = 0; i < oilPrice.size(); i++) {
        cin >> oilPrice[i];
    }

    long long cost = roadLength[0] * oilPrice[0];
    long long opt = oilPrice[0];
    for (int i = 1; i < N - 1; i++) {
        opt = min(opt, (long long)oilPrice[i]);
        cost += opt * roadLength[i];
    }

    cout << cost;
    return 0;
} 