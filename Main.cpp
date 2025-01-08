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
		printf("�̸�: %s, ����: %d, ����: %d, ����: %d\n", name.c_str(), height, weight, mp);
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
		// 60�� = 1��
		// 1�ð� = 60�� = 3600��
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

		printf("%d�� %d�� %d��\n", h, m, s);

	}
};

//=========================================================
int main() {
	//(1)~(2)
	CRobot robots[4];

	robots[0].Set("�±Ǻ���", 18, 80, 3000);
	robots[1].Set("��¡��", 17, 70, 2500);
	robots[2].Set("��ĭ������", 20, 90, 3500);
	robots[3].Set("�׷�������", 22, 100, 5000);
	
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
	cout << "�������� ������ �ʸ� �Է��ϼ���" << endl;

	int Elapsed;
	cin >> Elapsed;

	CTime t;
	t.SetElapsed(Elapsed);
	t.PrintTime();


	return 0;
}