#include <iostream>
#include<string>
#include<Windows.h>
using namespace std;
class drob
{
private:
	//privat protected
	int x;
	int y;

public:

	void print()
	{
		cout << x << " / " << y << " = " << (double)x / y;
	}
	//setter модификатор
	void setY(int b)
	{
		if (b != 0)
			y = b;
		else
			y = 1;
	}
	void setX(int a)
	{
		x = a;
	}
	//getter
	int getX()
	{
		return x;
	}

};
class time
{
private:
	int hour;
	int minute;
	int second;
public:
	void print()
	{
		cout << hour << ":" << minute << ":" << second;
	}
	void setHour(int h)
	{
		if (h > 23)
		{
			hour = 0;
		}
		else
		{
			hour = h;
		}
	}
	void setMinute(int m)
	{
		if (m > 59)
		{
			minute = 0;
			hour++;
		}
		else
		{
			minute = m;
		}
	}
	void setSecond(int s)
	{
		if (s > 59)
		{
			second = 0;
			minute++;
		}
		else
		{
			second = s;
		}
	}
	int getHour()
	{
		return hour;
	}
	int getMinute()
	{
		return minute;
	}
	int getSecond()
	{
		return second;
	}
};
class time_
{
private:
	int *h=new int;
	int *m = new int;
	int *s = new int;
public:
	time_ ()
	{
		h = new int[3];
	}
	void setH(int a)
	{
		if (a > 23 || a < 0)
		{
			h[0] = 0;
		}
		else
		{
			h[0] = a;
		}
	}
	void setM(int b)
	{
		if (b > 59 || b < 0)
		{
			h[1] = 0;
		}
		else
		{
			h[1] = b;
		}
	}
	void setS(int c)
	{
		if (c > 59 || c < 0)
		{
			h[2] = 0;
		}
		else
		{
			h[2] = c;
		}
	}
	int getH() { return h; }
	int getM() { return m; }
	int getS() { return s; }
	void setTime(int a, int b, int c)
	{
		setH(a);
		setM(b);
		setS(c);
	}

	void printTime()
	{
		if (*h < 10)cout << "0";
		cout << h << ":";
		if (*m < 10) cout << "0";
		cout << m << ":";
		if (*s < 10) cout << "0";
		cout << s;
	}
	void addHour()
	{
		h++;
		if (*h == 24)
		{
			h = 0;
		}
	}
	void addMinute()
	{
		m++;
		if (*m == 60)
		{
			addHour();
			m = 0;
		}
	}
	void addSecond()
	{
		s++;
		if (*s == 60)
		{
			addMinute();
			s = 0;
		}
	}
};
void main()
{
	//drob d;	// 0/1
	//d.setX(3);
	//if (d.getX() == 3)
	//	d.setX(4);
	//d.setY(5);
	//d.print();

	time_ t;

	t.setTime(11, 35, 37);
	while (true)
	{
		t.printTime();
		Sleep(1000);
		t.addSecond();
		system("cls");
	}
	cout << endl;
	system("pause");
}