#include <iostream>
using namespace std;
int main() {
	
	
	//���� ����� ����� � ��������� 1�7.������� ������ � �������� ���
	//������, ��������������� ������� �����(1 � ������������, 2 � ����� -
	//18 �.�.�������.����������� �������� Programming Taskbook 4.5
	//��� � �.�.)

	//int day;
	//cin >> day;
	//switch (day) {
	//case 1: cout << "Monday" << endl; break;
	//case 2: cout << "Tuesday" << endl; break;
	//case 3: cout << "Wednesday" << endl; break;
	//case 4: cout << "Tthursday" << endl; break;
	//case 5: cout << "Friday" << endl; break;
	//case 6: cout << "Saturday" << endl; break;
	//case 7: cout << "sunday" << endl; break;
	//default: cout << "wrong day number" << endl;
	//}

	//Case2.���� ����� ����� K.������� ������ - �������� ������, ���������������
	//����� K(1 � ������, 2 � ��������������������, 3 � ������������������,
	//4 � �������, 5 � ��������).���� K �� ����� � ��������� 1�5,
	//�� ������� ������ �������

	int mark;
	cin >> mark;
	switch (mark) {
	case 1: cout << "poorly" << endl; break;
	case 2: cout << "unsatisfactory" << endl; break;
	case 3: cout << "satisfactory" << endl; break;
	case 4: cout << "good" << endl; break;
	case 5: cout << "Great" << endl; break;
	default: cout << "mistake" << endl;
	}
}