#include<iostream>
using namespace std;

class bank
{
	int amount;
	float intrest;
	int time;
	float hIntrest = 1.7;
public:
	bank(int amt, float i,int t) {
		amount = amt;
		intrest = i;
		time = t;
	}
	void selected() {
		int select;
		cout << "\ninput 1 if u r with home lone, enter 0 if u r without home lone\n";
		cin >> select;
		if (select == 0)
		{
			input();
		}
		else if (select == 1)
		{
			input2();
		}
		else
		{
			cout << "Error: either enter 0(normal) or 1(home lone)";
			selected();
		}
		
	}
	void input();
	void calculation();
	void input2();
	void calculation2();
	~bank() {
		cout << "\nbank has been destroyed\n";
	}
};
void bank::input() 
{
	cout <<"\n enter lone amount\n";
	cin >> amount;
	cout << "\n enter intrest\n";
	cin >> intrest;
	cout << "\n enter time in years \n";
	cin >> time;
	calculation();
}
void bank::calculation() {
	int A;
	A = amount*(1 + (intrest * time));
	cout << "\nsimple intrest is\n" << A;
}
void bank::input2() {
	cout << "\n enter lone amount\n";
	cin >> amount;
	cout << "\n enter time in years \n";
	cin >> time;
	calculation2();
}
void bank::calculation2() {
	int A;
	A = amount * (1 + (hIntrest * time));
	cout << "\nsimple intrest is\n" << A;
}


int main() {
	bank b1(0, 0, 0);
	b1.selected();
	return 0;
}