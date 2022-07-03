#include <iostream>

using namespace std;

enum Status
{
    normal = 0,
    abnormal,
    disconnect = 100,
    close

};
// enum class가 등잠함으로써 같은 이름의 enum 요소를 사용할 수 있게 됨
enum class MachineStatus : char
{
    normal = 'n',
    abnormal,
    disconnect = 100,
    close
};

int main()
{
    // enum class 요소를 사용하려면 enum class 이름을 먼저 기입해야 됨
    MachineStatus machine = MachineStatus::abnormal;

    if (machine == MachineStatus::normal)
        cout << "Status : normal" << endl;
    else if(machine == MachineStatus::abnormal)
        cout << "Status : abnormal" << endl;
    else if(machine == MachineStatus::disconnect)
        cout << "Status : disconnet" << endl;
    else
        cout << "Status : close" << endl;
    
    cout << "machine : " << static_cast<int>(machine) << ", " << static_cast<char>(machine) << endl;

    return 0;
}