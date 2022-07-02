#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

#define endl "\n"

int Array[46];
struct point
{
	int idx;
	int val;
};
vector<point> v;

bool cmp(const point& u, const point& v)
{
	if (u.val > v.val)return true;
	else return false;
}

int main() {

	srand((unsigned int)time(NULL));
	cout << "���� Ƚ�� : ";
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int res = (rand() % 45) + 1;
		Array[res]++;
	}

	int sum = 0;
	for (int i = 1; i <= 45; i++)
	{
		double rate = double(Array[i]) * 100 / N;
		cout << "["<< i << "] Ƚ�� : " << Array[i] << "		Ȯ�� : " << rate << "%" <<endl;
		sum += Array[i];
		v.push_back({ i, Array[i] });
	}
	cout << "�� Ƚ�� : " << N << " / �˻� : " << sum << endl;;

	sort(v.begin(), v.end(), cmp);
	cout << "Ȯ�� �� ���� 6�� : ";
	for (int i = 0; i < 6; i++)
		cout << v[i].idx << " ";
	
	cout << endl;
	system("pause");
	return 0;
}