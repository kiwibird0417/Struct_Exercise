#pragma once
#include <iostream>
using namespace std;

struct Robot {
public:
	string name;
	int height;
	int weight;
	int magicpower;		//����(MAGIC POWER ���� mp�� �׳� ����.)

	void Set(string n, int h, int w, int mp) {
		name = n;
		height = h;
		weight = w;
		magicpower = mp;
	}

	void Print() {
		cout << "�̸�: " << name << endl;
		cout << "����: " << height << endl;
		cout << "����: " << weight << endl;
		cout << "����: " << magicpower << endl;
		cout << endl;
	}

};

void Avg(Robot robots[4]) {
	float totalHeight = 0.0, totalWeight = 0.0, totalMP = 0.0;
	float avgHeight = 0.0, avgWeight = 0.0, avgMP = 0.0;

	for (int i = 0; i < 4; ++i) {
		totalHeight += (float)robots[i].height;
		totalWeight += (float)robots[i].weight;
		totalMP += (float)robots[i].magicpower;
	}

	avgHeight = totalHeight / 4;
	avgWeight = totalWeight / 4;
	avgMP = totalMP / 4;

	cout << "�κ����� ��� ����: " << avgHeight << "m\n";
	cout << "�κ����� ��� ����: " << avgWeight << "T\n";
	cout << "�κ����� ��� ����: " << avgMP << "\n";
}



void StructRobo() {
	Robot robots[4];

	//(1)�κ� ��Ÿ���� ����ü ����
	robots[0].Set("�±Ǻ���", 18, 80, 3000);
	robots[1].Set("��¡��", 17, 70, 2500);
	robots[2].Set("��ĭ������", 20, 90, 3500);
	robots[3].Set("�׷�������", 22, 100, 5000);


	//(2)�κ� ��� Print
	for (int i = 0; i < 4; ++i) {
		robots[i].Print();
	}

	//(3) ��� ���
	Avg(robots);
}