// ConsoleApplication19.cpp : Defines the entry point for the console application.
//


/*

Продолжаем делать игру))) 

*/

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include<stdio.h>  
#include<math.h> 
#define pi 3.142857 
#include "graphics.h"
#include <iostream>
#include <conio.h>
#include <time.h>
const int KEY_ARROW_CHAR1 = 224;
const int KEY_ARROW_UP = 72;
const int KEY_ARROW_DOWN = 80;
const int KEY_ARROW_LEFT = 75;
const int KEY_ARROW_RIGHT = 77;

class Star {
	//рисуете звезду ГДЕ ТО 
	//Она там висит до тех пор  пока шарик её не коснется
};

class Ball {
private:
	int x;
	int y;
	int d;
	int speed_x;
	int speed_y;
public:
	Ball(int x, int y, int speed_x, int speed_y) {
		this->x = x;
		this->y = y;
		this->speed_x = speed_x;
		this->speed_y = speed_y;
		this->d = 50;
	}
	void draw() {
		setcolor(rand() % 16);
		circle(x, y, d);
	}

	int getX() {
		return x;
	}

	int getY() {
		return y;
	}


	void setX(int x) {
		this->x = x;
	}


	void setY(int y) {
		this->y = y;
	}

	int getSpeedX() {
		return speed_x;
	}

	int getSpeedY() {
		return speed_y;
	}

	void setSpeedX(int speed_x) {
		this->speed_x = speed_x;
	}

	void setSpeedY(int speed_y) {
		this->speed_y = speed_y;
	}
};





bool getInput(char *c)
{
	if (_kbhit())
	{
		*c = _getch();
		return true; // Key Was Hit
	}
	return false; // No keys were pressed
}


int platform_x = 50;

Ball ball(500, 100, 5, 2);

void draw() {
	setcolor(255);
	for (int i = 0; i < 1400; i++)
		line(i, 0, i, 1000);
	setcolor(0);
	rectangle(platform_x, 900, platform_x + 200, 920);
	ball.draw();
}

void main() {
	srand(time(NULL));
	initgraph();
	setcolorRGB(0, 0, 0);
	char key = ' ';
	
	while (true)
	{
		while (!getInput(&key))
		{

			if (ball.getY() <= 0)
				ball.setSpeedY(5);

			if (ball.getY() > 1000)
				ball.setY(200);
			

			if (ball.getY() + 25 >= 900 && ball.getX() >= platform_x && ball.getX() <= platform_x + 200) {
				ball.setSpeedY(-5);
				ball.setSpeedX(-5 + rand() % 10);
			}
			
			if (ball.getX() < 0 || ball.getX() > 900)
				ball.setSpeedX(-ball.getSpeedX());
			
			if (rand() % 300 == 1) {
				ball.setY(ball.getY() + ball.getSpeedY());
				ball.setX(ball.getX() + ball.getSpeedX());
				draw();
			}
		}
		switch (key)
		{
		case KEY_ARROW_LEFT:
			platform_x -= 25;
			draw();
			break;
		case KEY_ARROW_RIGHT:
			platform_x += 25;
			draw();
			break;
		}
		
	}
}




void mainsadfds() {
	srand(time(NULL));
	int R = 50;
	int r = 50;
	int a = 200;
	int b = 200;
	int x = 100;
	int y = 100;
	initgraph();
	

	while (true) {
		setcolorRGB(255, 0, 0);
		circle(x, y, R);
		setcolorRGB(0, 0, 0);
		circle(a, b, r);
		unsigned  char ch1 = _getch();
		if (ch1 == KEY_ARROW_CHAR1)
		{
			// Some Arrow key was pressed, determine which?
			unsigned char ch2 = _getch();
			switch (ch2)
			{
			case KEY_ARROW_UP:
				// code for arrow up
				y -= 5;
				break;
			case KEY_ARROW_DOWN:
				// code for arrow down
				y += 5;
				break;
			case KEY_ARROW_LEFT:
				// code for arrow right
				x -= 5;
				break;
			case KEY_ARROW_RIGHT:
				// code for arrow left
				x += 5;
				break;
			}
		}

		int k1 = abs(a - x);
		int k2 = abs(b - y);
		int  l = sqrt(k1 * k1 + k2 * k2);
		if (l <= r/2 + R/2) {
			setcolorRGB(255, 255, 255);
			circle(a, b, r);
			a = rand() % 1000;
			b = rand() % 1000;
			R = sqrt(R*R + r*r);
			r = rand() % 150;
		}
		else {	
			a += rand() % 30 - 15;
			b += rand() % 30 - 15;
		}


	}
}



void go(void(*find)(int, int), void(*move)()) {
	find(1, 4);
	move();
}

void find1() {
	cout << "shop" << endl;
}

void find2(int a, int b) {
	cout << "fix price" << endl;
}

void run() {
	cout << "run" << endl;
}

void sleep() {
	cout << "sleep" << endl;
}


void mainываыфваыва() {
	go(find2, sleep);
}




class Good {
private:
	static double price;
	string title;


};

class Math {
private:
	Math() {}
public:
	static int pow(int x, int y) {
		int m = x;
		while (y-- > 0) {
			x = x * m;
		}
		return x;
	}

};




class  figura2d {
	const static double PII;

};

const double figura2d::PII = 3.14;










class Cat {
private:
	int age = 0;
	static int aaaaa;
	static int count;
public:

	Cat(int age) {
		this->age = age;
		Cat::count++;
	}
	int getAge() {
		return this->age;
	}

	void static setAaaaa(int a) {
		aaaaa = a;
	}

	int static getAaaaa() {
		return aaaaa;
	}
};

int Cat::aaaaa = 0;
int Cat::count = 0;

void mainasdfasdfasdfasdf() {

	Cat::setAaaaa(100);

	Cat a(10);

	cout << a.getAaaaa() << endl;
	cout << Cat::getAaaaa() << endl;



}





