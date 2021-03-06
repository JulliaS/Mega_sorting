#include <iostream>
#include <time.h>
#include "Array.h"

using namespace std;


int main()
{
	double time1, time2;
	long long int N, i;
	do
	{
		cout << "Enter N:  " << endl;
		cin >> N;

		Array Arr(N);

		int menu;
		cout << "________________________________________________________________________________" << endl;
		cout << "                                |    MENU   |                                   " << endl;
		cout << "________________________________|___________|___________________________________" << endl;
		cout << "1) Quiq sort;\n2) Marge sort\n3) Heap sort\n4) New array\n5) Exit.\n\n\n";
		do
		{
			cout << "\nEnter number of menu: ";
			cin >> menu;
			switch (menu)
			{
			case 1:
			{
				cout << "\n\nQUIQ SORT\n\n";
				time1 = double(clock()) / CLOCKS_PER_SEC;
				Arr.Quiq_sort(0, N - 1);
				time2 = double(clock()) / CLOCKS_PER_SEC;
				Arr.Print();
				cout << "\nTime: " << double(time2 - time1) << "s\n\n";
			}
			break;

			case 2:
			{
				cout << "\n\nMERGE SORT\n\n";
				time1 = (double)clock() / CLOCKS_PER_SEC;
				Arr.Merge_sort(0, N - 1);
				time2 = (double)clock() / CLOCKS_PER_SEC;
				Arr.Print();
				cout << "\nTime: " << double(time2 - time1) << "s\n\n";
			}
			break;
			case 3:
			{
				cout << "\n\nHEAP SORT\n\n";
				time1 = (double)clock() / CLOCKS_PER_SEC;
				Arr.Heap_sort();
				time2 = (double)clock() / CLOCKS_PER_SEC;
				Arr.Print();
				cout << "\nTime: " << double(time2 - time1) << "s\n\n";
			}
			break;
			case 4: break;
			case 5: return 0;
			default: cout << ("Wrong number!!!") << "\n\n\n";
			}
			cout << "\n\n\n\n\n";

		} while (menu != 4);
	} while (true);

	system("pause");
	return 0;
}