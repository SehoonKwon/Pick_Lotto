#include "Lotto.h"
#include "PRT.h"

int main() {
	
	PRT prt;
	Lotto lotto;

	int operCnt = prt.PrintInput();
	lotto.DoPickLotto(operCnt);
	prt.PrintCntAndRate(lotto);
	lotto.setResult();
	prt.PrintOutput(lotto);

	system("pause");
	return 0;
}