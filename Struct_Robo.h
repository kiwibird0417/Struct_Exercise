#pragma once
#include <iostream>
using namespace std;

struct Robot {
public:
	string name;
	int height;
	int weight;
	int magicpower;		//마력(MAGIC POWER 약어로 mp로 그냥 지정.)

	void Set(string n, int h, int w, int mp) {
		name = n;
		height = h;
		weight = w;
		magicpower = mp;
	}

	void Print() {
		cout << "이름: " << name << endl;
		cout << "신장: " << height << endl;
		cout << "무게: " << weight << endl;
		cout << "마력: " << magicpower << endl;
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

	cout << "로봇들의 평균 신장: " << avgHeight << "m\n";
	cout << "로봇들의 평균 무게: " << avgWeight << "T\n";
	cout << "로봇들의 평균 마력: " << avgMP << "\n";
}



void StructRobo() {
	Robot robots[4];

	//(1)로봇 나타내는 구조체 설계
	robots[0].Set("태권브이", 18, 80, 3000);
	robots[1].Set("마징가", 17, 70, 2500);
	robots[2].Set("메칸더브이", 20, 90, 3500);
	robots[3].Set("그랜다이져", 22, 100, 5000);


	//(2)로봇 출력 Print
	for (int i = 0; i < 4; ++i) {
		robots[i].Print();
	}

	//(3) 평균 출력
	Avg(robots);
}