#pragma once

namespace BasicWin32Dll
{
	class BaseClassA {
	
	private:
		int VarA;

	public:
		_declspec(dllexport) BaseClassA();
		_declspec(dllexport) ~BaseClassA() = default;

		// Getter
		_declspec(dllexport) inline int GerVarA() const {
			return VarA;
		}

		// Setter
		_declspec(dllexport) void SetVarA(int NewVar);
	};

}