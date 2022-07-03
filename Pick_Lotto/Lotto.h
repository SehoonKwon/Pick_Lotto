#pragma once
#include <algorithm>
#include <functional>
#include <vector>
#include <cstring>
#include <ctime>
#include <cstdlib>

#define PICK_COUNT 6

struct numInfo {
	int number;
	int cnt;
};

class Lotto {
private:
	int totalOperCnt;
	int m_aNumCnt[46];
	std::vector<numInfo> m_vResNum;
	friend class PRT;

public:
	Lotto();
	~Lotto() {};
	std::vector<numInfo> GetNumVec();
	int GetTotalOperCnt();
	int GetNumberCnt(int num);
	void DoPickLotto(int cnt);
	void IncTotalCnt();
	void SortForPrint();
	int Calculate(int num);
	void setResult();
};