#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
struct Reading {
    int hour;
    double temperature;
};

int main()
{
    cout << "Enter name of input file: " ;
    string iname;
    cin >> iname;
    ifstream ist{iname}; // ist ������ ������ �� ����� iname

    string oname;
    cout << "Enter name of outputing file : ";
    cin >> oname;
    ofstream ost{oname} ; // os t ���������� ������ � ���� �����

    vector<Reading> temps ; // ��������� ������
    int hour ;
    double temperature;
    while (ist >> hour >> temperature) {
        temps.push_back(Reading{hour, temperature});
    }
    for (int i=0; i < temps.size(); ++i)
    {
        ost << i << " " << temps[i].hour << " "<< temps[i].temperature << '\n';
    }

}
