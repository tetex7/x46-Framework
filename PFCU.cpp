#include <iostream>
#include "x46FW.h"
#include "PFCU.h"

using namespace PFCU;
namespace PFCU
{

	FPC::FPC(unsigned long int P)
		: FP(P) {}


	FPC FPC::add(const FPC& other)
	{
		FP + 1;
		return NULL; //FPC(FP + other.FP);
	}

	FPC FPC::operator+(const FPC& other)
	{
		return add(other);
	}

	DPC::DPC(unsigned long int P)
		: DP(P) {}
}
