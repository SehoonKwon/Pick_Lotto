#include "PRT.h"
#include "Lotto.h"

int PRT::PrintInput() {
	using namespace std;
	cout << "µ¹¸± È½¼ö : ";
	
	int operCnt;
	cin >> operCnt;

	return operCnt;
}

void PRT::PrintOutput(Lotto lotto) {
	using namespace std;
	std::vector<numInfo> m_vResNum = lotto.GetNumVec();

	cout << "ÃÑ È½¼ö : " << lotto.GetTotalOperCnt() << endl;

	cout << "È®·ü ¼ø Á¤·Ä 6°³ : ";
	for (int i = 0; i < 6; i++)
		cout << m_vResNum[i].number << " ";

	cout << endl;
}

void PRT::PrintCntAndRate(Lotto lotto) {
	using namespace std;

	for (int i = 1; i <= 45; i++)
	{
		int rate = lotto.Calculate(i);
		cout << "[" << i << "] È½¼ö : " << lotto.GetNumberCnt(i) << "		È®·ü : " << rate << "%" << endl;
	}
}