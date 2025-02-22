//#include <iostream> 
//#include <vector>
//
//using namespace std;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int N, M, num, count = 0;
//    cin >> N >> M;
//
//    vector<int> v(N);
//
//    for (int i = 0; i < N; i++) {
//        cin >> num;
//        v[i] = (num % M);
//    }
//
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j <= i; j++) {
//            int sum = 0;
//            for (int k = j; k <= i; k++) {
//                sum += v[k];
//            }
//            if ((sum % M) == 0) {
//                count++;
//            }
//        }
//    }
//
//    cout << count;
//    return 0; 
//}

//#include <iostream>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int N, M, num, count = 0;
//    cin >> N >> M;
//
//    vector<int> v(N);
//    for (int i = 0; i < N; i++) {
//        cin >> num;
//        v[i] = num % M;
//    }
//
//    unordered_map<int, int> map;
//    map[0] = 1;
//
//    int sum = 0;
//    for (int i = 0; i < N; i++) {
//        sum = (sum + v[i]) % M;
//
//      
//        if (sum < 0) {
//            sum += M;
//        }
//
// 
//        if (map.find(sum) != map.end()) {
//            count += map[sum];
//        }
//
//
//        map[sum]++;
//    }
//
//    cout << count << endl;
//    return 0;
//}    

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> v(N);

    for (int i = 0; i < v.size(); i++) {
        int num;
        cin >> num;
        v[i] = num % M;
    }

    long long count = 0;
    int sum = 0;
    unordered_map<int, int> mapCount;
    mapCount[0] = 1;

    for (int i = 0; i < N; i++) {
        sum = (sum + v[i]) % M;
        if (sum < 0) {
            sum += M;  
        }
        count += mapCount[sum];
        mapCount[sum]++;
    }

    cout << count << '\n';
    return 0;
}




  
