#include <iostream>
#include "Time.h"


int main()
{
	using std::cout;
	using std::endl;
	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total, total_2;

	cout << "Czas planowania: ";
	planning.Show();
	cout << endl;

	cout << "Czas kodowania: ";
	coding.Show();
	cout << endl;

	cout << "Czas poprawiania: ";
	fixing.Show();
	cout << endl;

	total = coding.Sum(fixing);
	cout << "Laczny czas (coding.Sum(fixing)): ";
	total.Show();
	cout << endl;

	total_2 = coding + fixing;
	cout << "Laczny czas (coding + fixing): ";
	total_2.Show();
	cout << endl;
	Time morefixng(3, 28);
	cout << "Wiecej poprawek: ";
	morefixng.Show();
	cout << endl;

	//total = morefixng.operator+(total);
	total = morefixng+ total;
	cout << "lacznie (morefixng.operator+(total)): ";
	total.Show();

	total = total + total;
	total.Show();

	total = total * 3;
	total = 3 * total;
	cout << total << endl;
	cout << 5 * total_2 << endl;


	std::cin.get();
	return 0;

}