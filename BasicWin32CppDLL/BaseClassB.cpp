#include "BaseClassB.h"

namespace BasicWin32Dll
{
	BaseClassB::BaseClassB()
		: VarB(0) {}

	void BaseClassB::SetVarB(int NewVar) {
		VarB = NewVar;
	}
}