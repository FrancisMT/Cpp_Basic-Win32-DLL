#include<iostream>
#include<memory>

#include "BaseClassA.h"
#include "BaseClassB.h"

int main() {

	std::cout << "Basic Win32 App linking with Base Win32 Cpp Dll.\n";

	std::unique_ptr<BasicWin32Dll::BaseClassA> ObjA = std::make_unique<BasicWin32Dll::BaseClassA>();
	std::unique_ptr<BasicWin32Dll::BaseClassB> ObjB = std::make_unique<BasicWin32Dll::BaseClassB>();


	auto VarA = ObjA->GerVarA();
	auto VarB = ObjB->GerVarB();

	for (uint_fast8_t Steps = 0; Steps < 2; ++Steps) {
		
		std::cout << "Current Value A in Dll: " << VarA << "\n";
		std::cout << "Current Value B in Dll: " << VarB << "\n";

		ObjA->SetVarA(++VarA);
		ObjB->SetVarB(++VarB);
	}
}


/** Start of Implementation Notes

->		When we add the path to the header files in our application project,
	we are just telling the compiler to locate the header files we are using from that location.
		But when we add reference to our DLL project from our application project,
	we are basically telling the Linker to link the header files of the actual implementation of our Win32 DLL.

->		 C++ DLL built from different compilers may not be consumed by a C++ Application/other C++ DLL directly
	because C++ compilers have different "name mangling" specifications.
		This is why we need to compile the source of a C++ DLL project along with our C++ application
	to ensure they are built using the same compiler.

End of Implementation Notes **/