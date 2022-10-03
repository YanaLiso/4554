#include <iostream>
using namespace std;
int main() {
	
	
	//ƒано целое число в диапазоне 1Ц7.¬ывести строку Ч название дн€
	//недели, соответствующее данному числу(1 Ч Ђпонедельникї, 2 Ч Ђвтор -
	//18 ћ.Ё.јбрам€н.Ёлектронный задачник Programming Taskbook 4.5
	//никї и т.д.)

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

	//Case2.ƒано целое число K.¬ывести строку - описание оценки, соответствующей
	//числу K(1 Ч Ђплохої, 2 Ч Ђнеудовлетворительної, 3 Ч Ђудовлетворительної,
	//4 Ч Ђхорошої, 5 Ч Ђотличної).≈сли K не лежит в диапазоне 1Ц5,
	//то вывести строку Ђошибкаї

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