#include<iostream>
#include<math.h>
using namespace std;
template<typename t,typename r>
class stdcal {
	int a, b;
public:
	//stdcal(t a = 0, r b = 0);
	void addition(t a, r b);
	void subtraction(t a, r b);
	void multiplication(t a, r b);
	void division(t a, r b);
	void Modulus(t a, r b);
};
template<typename t,typename r>
  void stdcal<t,r> ::addition(t a, r b)
{
	cout<< a + b<<endl;
}
template<typename t, typename r>
void stdcal<t,r>::subtraction(t a, r b)
{
	cout << b - a << endl;
}
template<typename t, typename r>
void stdcal<t,r>::multiplication(t a, r b)
{
	cout<< b * a<<endl;
}
template<typename t, typename r>
void stdcal<t, r>::division(t a, r b)
{
	if(b!=0)
	cout<< b/a<<endl;
	else
		cout<<"Enter the correct B value" <<endl;
}
template<typename t, typename r>
void stdcal<t, r>::Modulus(t a, r b)
{
	cout << b % a << endl;
}
template<typename t, typename r>
class scical {
	int a, b;
public:
	void square(t a);
	void cubea(t a);
	void power(t a,r b);
	void sqroot(t a);
	void fact(t a);
	void sine(t a);
	void cose(t a);
	void tane(t a);
};
template<typename t,typename r>
void scical<t, r>::square(t a)
{
	cout << pow(a,2)<<endl;
}
template<typename t, typename r>
void scical<t, r>::cubea(t a)
{
	cout << pow(a,3) << endl;
}
template<typename t, typename r>
void scical<t, r>::sqroot(t a)
{
	cout << pow(a,0.5) << endl;
}
template<typename t, typename r>
void scical<t, r>::power(t a,r b)
{
	cout << pow(a, b) << endl;
}
template<typename t, typename r>
void scical<t, r>::fact(t a)
{
	int i=1,j;
	if (a == 0)
	{
		cout << "1" << endl;
	}
	else
	{
		for (j = 1; j <= a; j++)
		{
			i *= j;
		}
		cout << i << endl;
	}
}
template<typename t, typename r>
void scical<t, r>::sine(t a)
{
	int x = a * 3.14159 / 180;
	cout << sin(x) << endl;
}
template<typename t, typename r>
void scical<t, r>::cose(t a)
{
	int x = a * 3.14159 / 180;
	cout << cos(x) << endl;
}
template<typename t, typename r>
void scical<t, r>::tane(t a)
{
	int x = a * 3.14159 / 180;
	cout << sin(x)/cos(x) << endl;
}
int main()
{
	int a, b;
	do
	{
		int choice;
		cout << "======Type of Calculators=======" << endl;
		cout<< "1. Standard Calculator" << endl;
		cout<< "2. Scientific Calculator" << endl;
		cout<<"3. Exit" << endl;
		cout<< "Choose the type of Calculator" << endl;
		cin >> choice;
		if (choice == 1)
		{
			switch (choice)
			{
			case 1:cout << "1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Modulus " << endl;
				cout << "Enter your Choice" << endl;
				int ch;
				cin >> ch;
				switch (ch)
				{
				case 1:cout << "Enter the two numbers to perform addition" << endl;
					cin >> a >> b;
					stdcal<int, int> s;
					s.addition(a, b);
					break;
				case 2:cout << "Enter the two numbers to perform Subtraction" << endl;
					cin >> a >> b;
					stdcal<int, int> l;
					l.subtraction(a, b);
					break;
				case 3:cout << "Enter the two numbers to perform Multiplication" << endl;
					cin >> a >> b;
					stdcal<int, int> m;
					m.multiplication(a, b);
					break;
				case 4:cout << "Enter the two numbers to perform Division" << endl;
					cin >> a >> b;
					stdcal<int, int> n;
					n.division(a, b);
					break;
				case 5:cout << "Enter the two numbers to perform addition" << endl;
					cin >> a >> b;
					stdcal<int, int> o;
					o.Modulus(a, b);
					break;
				default:cout << "Choose the correct Option" << endl;
				}
			}
		}
		else if(choice==2)
		{
			int ch;
			int a, b;
			cout << "1.Square of a number\n 2.cube of a number\n 3.Power of the 1st number to the second\n 4.Square root a number \n 5.Factorial of a number \n 6.Sin value of a number \n 7.Cos value of a number \n 8.Tan value of a number" << endl;
			cout << "Enter your choice :\t";
			cin >> ch;
			switch (ch)
			{
			case 1: cout << "Enter the number to find the Square :";
				cin >> a;
				scical<int,int> c;
				c.square(a);
				break;
			case 2: cout << "Enter the number to find the Cube :";
				cin >> a;
				scical<int, int> d;
				d.cubea(a);
				break;
			case 4: cout << "Enter the number to find the Square root :";
				cin >> a;
				scical<int, int> da;
				da.sqroot(a); break;
			case 5: cout << "Enter the number to find the factorial :";
				cin >> a;
				scical<int, int> e;
				e.fact(a); break;
			case 3: cout << "Enter the number to find the power of the 2nd number :";
				cin >> a>>b;
				scical<int, int> f;
				f.power(a,b); break;
			case 6: cout << "Enter the number to find the sine value :";
				cin >> a;
				scical<int, int> g;
				
				g.sine(a); break;
			case 7: cout << "Enter the number to find the cos value :";
				cin >> a;
				scical<int, int> h;
				h.fact(a); break;
			case 8: cout << "Enter the number to find the tane :";
				cin >> a;
				scical<int, int> k;
				k.tane(a); break;
			default:cout << "Choose the correct Option" << endl;
			}

		}
		else
		{
			exit(0);
		}
	} while (1);
}
