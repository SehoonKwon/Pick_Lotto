#include "Lotto.h"
#include "PRT.h"

int main() {
	
	PRT prt;
	Lotto lotto;

	lotto.DoPickLotto(prt.PrintInput());
	prt.PrintCntAndRate(lotto);
	lotto.setResult();
	prt.PrintOutput(lotto);

	system("pause");
	return 0;
}