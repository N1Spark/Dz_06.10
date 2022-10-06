#include<iostream>
using namespace std;

class Transport
{
	string color;
	string type;
	int speed;
	int fuel;
	int passengers;
public: 
	Transport()
	{
		color = type = "";
		speed = fuel = passengers = 0;
	}
	Transport(string t, string c, int s, int f, int p)
	{
		color = c;
		type = t;
		speed = s;
		fuel = f;
		passengers = p;
	}
	void Show()
	{
		cout << "Transport: " << type << endl;
		cout << "Color: " << color << endl;
		cout << "Speed: " << speed << " km\\h" << endl;
		cout << "Fuel consumption: " << fuel << " L" << endl;
		cout << "Passengers: " << passengers << endl;
	}
};

class Plane : public Transport
{
	string company;
public:
	Plane()
	{
		company = "";
	}
	Plane(string t, string c, int s, int f, int p, string C) :Transport(t, c, s, f, p)
	{
		company = C;
	}
	void Show()
	{
		Transport::Show();
		cout << "Company: " << company << endl;
	}
};

class Bicycle :public Transport
{
	int gear;
public:
	Bicycle()
	{
		gear = 0;
	}
	Bicycle(string t, string c, int s, int f, int p, int g) :Transport(t, c, s, f, p)
	{
		gear = g;
	}
	void Show()
	{
		Transport::Show();
		cout << "Gear: " << gear << endl;
	}
};

class Jeep : public Transport
{
	string insurance;
public:
	Jeep()
	{
		insurance = "";
	}
	Jeep(string t, string c, int s, int f, int p, string i) :Transport(t, c, s, f, p)
	{
		insurance = i;
	}
	void Show()
	{
		Transport::Show();
		cout << "Insurance: " << insurance << endl;
	}
};

class Ship : public Transport
{
	int carrying;
public:
	Ship()
	{
		carrying = 0;
	}
	Ship(string t, string c, int s, int f, int p, int C) :Transport(t, c, s, f, p)
	{
		carrying = C;
	}
	void Show()
	{
		Transport::Show();
		cout << "Carrying: " << carrying << "t" << endl;
	}
};

class Truck : public Transport
{
	int power;
public:
	Truck()
	{
		power = 0;
	}
	Truck(string t, string c, int s, int f, int p, int P) :Transport(t, c, s, f, p)
	{
		power = P;
	}
	void Show()
	{
		Transport::Show();
		cout << "Power: " << power << " horsepower" << endl;
	}
};

int main()
{
	Plane obj1("plane", "purple", 444, 750, 500, "ukr-airlans");
	obj1.Show();
	cout << endl;
	Bicycle obj2("bicycle", "red", 20, 0, 1, 8);
	obj2.Show();
	cout << endl;
	Jeep obj3("jeep", "dark-green", 120, 15, 5, "yes");
	obj3.Show();
	cout << endl;
	Ship obj4("ship", "white", 40, 30, 500, 500);
	obj4.Show();
	cout << endl;
	Truck obj5("truck", "grey", 60, 3, 50, 300);
	obj5.Show();
}