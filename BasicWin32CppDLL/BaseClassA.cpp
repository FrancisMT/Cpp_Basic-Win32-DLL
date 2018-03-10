#include "BaseClassA.h"

namespace BasicWin32Dll
{
	BaseClassA::BaseClassA()
		: VarA(0) {}

	void BasicWin32Dll::BaseClassA::SetVarA(int NewVar) {
		VarA = NewVar;
	}
}
