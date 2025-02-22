#include <iostream> //240919 ���� ���� ��Ģ����
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

////(room < 10): room ���� 10���� �������� Ȯ���ϴ� ���ǹ��Դϴ�.
//
//���� room�� 10���� ������ true�� �ǰ�, 10 �̻��̸� false�� �˴ϴ�.
//���� ������ ? ::
//
//���� �����ڴ� ���� ? ���� ���� �� : ������ ���� �� ���·�, ������ ���̸� ? ���� ���� ����ϰ�, ������ �����̸� : ���� ���� ����մϴ�.