#include <iostream>
using namespace std;

int main() {
	int secim;

	cout << "Welcome to fortune teller!" << endl;
	cout << "Hangisi size daha cok uyuyor (1: x 2 : 0 3 : +)";
	cin >> secim;
	cout << endl;

 if (secim == 1)
	{
	 cout << "x bilinmeyendir gizli olmayi seviyorsunuz" << endl;
	}
	else if (secim == 2)
	{
	 cout << " 0 degersiz elemandir kendinizi kucuk goruyorsunuz" << endl;
	}
	else if (secim == 3)
	{
	 cout << "+ fazlaligi temsil eder kendinizi ustun goruyorsunuz" << endl;
	}
	else
	{
	 cout << "Sanirim bu siklar gururunuzu tatmin etmedi" << endl;
	}

	return 0;
}