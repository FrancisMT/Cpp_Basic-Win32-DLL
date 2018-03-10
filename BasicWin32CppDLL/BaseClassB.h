#pragma once

namespace BasicWin32Dll
{
	class BaseClassB {
	private:
		int VarB;

	public:
		_declspec(dllexport) BaseClassB();
		_declspec(dllexport) ~BaseClassB() = default;

		// Getter
		_declspec(dllexport) inline int GerVarB() const {
			return VarB;
		}

		// Setter
		_declspec(dllexport) void SetVarB(int NewVar);
	};
}