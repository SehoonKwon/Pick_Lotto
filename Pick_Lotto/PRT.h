#pragma once
#include <iostream>
#include "PRT.h"
#include "Lotto.h"

#define endl "\n"

class PRT {	
public:
	PRT() {};
	~PRT() {};
	int PrintInput();
	void PrintOutput(Lotto lotto);
	void PrintCntAndRate(Lotto lotto);
};