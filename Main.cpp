#include <iostream>
using namespace std;

class CRobot {
private:
	string name;
	int height;
	int weight;
	int mp;

public:
	void Set(string n, int h, int w, int m) {
		name = n;
		height = h;
		weight = w;
		mp = m;
	}

	void Print() {
		printf("이름: %s, 신장: %d, 무게: %d, 마력: %d\n", name.c_str(), height, weight, mp);
	}
};

class CTest {
private:
	int s_Value;

public:
	void Set(int g_Value) {
		s_Value = g_Value;
	}
	void Print_S() {
		printf("%d\n", s_Value);
	}
};

class CTime {
private:
	int seconds;
public:
	void SetElapsed(int e) {
		seconds = e;
	}
	void PrintTime() {
		// 60초 = 1분
		// 1시간 = 60분 = 3600초
		int h= 0, m=0, s=0;

		if (seconds >= 3600) {
			h = seconds / 3600;
			m = (seconds - 3600) / 60;
			s = seconds % 60;
		}
		else if (seconds >= 60) {
			m = seconds / 60;
			s = seconds % 60;
		}
		else {
			s = seconds;
		}

		printf("%d시 %d분 %d초\n", h, m, s);

	}
};

//=========================================================
int main() {
	//(1)~(2)
	CRobot robots[4];

	robots[0].Set("태권브이", 18, 80, 3000);
	robots[1].Set("마징가", 17, 70, 2500);
	robots[2].Set("메칸더브이", 20, 90, 3500);
	robots[3].Set("그랜다이져", 22, 100, 5000);
	
	robots[0].Print();
	robots[1].Print();
	robots[2].Print();
	robots[3].Print();
	//=================================================
	//(3)
	CTest test;
	test.Set(1);
	test.Print_S();

	//=================================================
	//(4)
	cout << "자정부터 지나간 초를 입력하세요" << endl;

	int Elapsed;
	cin >> Elapsed;

	CTime t;
	t.SetElapsed(Elapsed);
	t.PrintTime();


	return 0;
}