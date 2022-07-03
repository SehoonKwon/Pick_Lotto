#include "Lotto.h"

Lotto::Lotto() {
	memset(m_aNumCnt, 0, sizeof(m_aNumCnt));
	m_vResNum.resize(PICK_COUNT);
	totalOperCnt = 0;
}

std::vector<numInfo> Lotto::GetNumVec() {
	return m_vResNum;
}

int Lotto::GetTotalOperCnt() {
	return totalOperCnt;
}

int Lotto::GetNumberCnt(int num) {
	return m_aNumCnt[num];
}

void Lotto::DoPickLotto(int cnt) {
	srand((unsigned int)time(NULL));

	while (cnt) {
		int res = (rand() % 45) + 1;
		m_aNumCnt[res]++;
		cnt--;
		IncTotalCnt();
	}
}

void Lotto::IncTotalCnt() {
	totalOperCnt++;
}

int Lotto::Calculate(int num) {
	double rate = double(m_aNumCnt[num]) * 100 / totalOperCnt;
	return (int)rate;
}

void Lotto::setResult() {
	for (int i = 1; i <= 45; i++)
		m_vResNum.push_back({ i, m_aNumCnt[i] });
	SortForPrint();
}

bool cmp(const numInfo& u, const numInfo& v) {
	if (u.cnt > v.cnt)	return true;
	else return false;
}

void Lotto::SortForPrint() {
	sort(m_vResNum.begin(), m_vResNum.end(), cmp);
}