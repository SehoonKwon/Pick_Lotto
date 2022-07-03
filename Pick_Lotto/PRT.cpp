#include "PRT.h"
#include "Lotto.h"

int PRT::PrintInput() {
	using namespace std;
	cout << "���� Ƚ�� : ";
	
	int operCnt;
	cin >> operCnt;

	return operCnt;
}

void PRT::PrintOutput(Lotto lotto) {
	using namespace std;
	std::vector<numInfo> m_vResNum = lotto.GetNumVec();

	cout << "�� Ƚ�� : " << lotto.GetTotalOperCnt() << endl;

	cout << "Ȯ�� �� ���� 6�� : ";
	for (int i = 0; i < 6; i++)
		cout << m_vResNum[i].number << " ";

	cout << endl;
}

void PRT::PrintCntAndRate(Lotto lotto) {
	using namespace std;

	for (int i = 1; i <= 45; i++)
	{
		int rate = lotto.Calculate(i);
		cout << "[" << i << "] Ƚ�� : " << lotto.GetNumberCnt(i) << "		Ȯ�� : " << rate << "%" << endl;
	}
}