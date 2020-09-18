#pragma once

/*----------------------------------*/
/*		Project:	VANGUARD		*/
/*----------------------------------*/


namespace PFCU
{
	typedef unsigned long int PFCU_CALL;
	//namespace Pfloat		
		

		
		
	class FPC
	{
	friend class DPC;
	public:
	unsigned long int FP;
	FPC(unsigned long int P);
	
	//FPC();
		FPC add(const FPC& other); //const;
		FPC operator+(const FPC& other); //const;
		

	};

	class DPC
	{
	friend class FDC;
	public:
		unsigned long int DP;
		DPC(unsigned long int P);



	};	
}

