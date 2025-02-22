#include <iostream> //240919 수학 구현 사칙연산
#include <string> 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int H, W, N;
        cin >> H >> W >> N;
        int room = N / H + 1;
        int floor = N % H;

        if (floor == 0) {
            floor = H;
            room -= 1;
        }

        string roomNum = (room < 10) ? "0" + to_string(room) : to_string(room);
        string floorNum = to_string(floor);

        cout << stoi(floorNum + roomNum) << "\n";
    }

    return 0;
}

////(room < 10): room 값이 10보다 작은지를 확인하는 조건문입니다.
//
//만약 room이 10보다 작으면 true가 되고, 10 이상이면 false가 됩니다.
//삼항 연산자 ? ::
//
//삼항 연산자는 조건 ? 참일 때의 값 : 거짓일 때의 값 형태로, 조건이 참이면 ? 뒤의 값을 사용하고, 조건이 거짓이면 : 뒤의 값을 사용합니다.