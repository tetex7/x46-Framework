#include "x46FW.h"

namespace x46
{

	//type definition for the Months
	//typedef const int Month;

	//type definition for the Comp year
	//typedef const int Year;



	//using s.tring = basic_string<char, char_traits<char>, allocator<char>>;



	/* a SMCEx codeName: Herbert*/
	class MemEX
	{
	public:
		MemEX();
		~MemEX();


		// a memory reader and writer. for the VCACHE location strat at call #248
		//to: 1=VCACHE.CLP 2=VCACHE.CMP 3=VCACHE.CHP

	private:

	};

	MemEX::MemEX()
	{return;}

	MemEX::~MemEX()
	{return;}


	
	class PFlC
	{
		public:
		PFlC();
		~PFlC();

		private:

	};

	PFlC::PFlC()
	{return;}

	PFlC::~PFlC()
	{return;}


		//codename: The Soviet Int DAT-TAB
		int _iCiLook(int in)
		{
			if (in < 100 && in != 100)
			{
				return 100;
			}
			else if (in < 1000 && in != 1000)
			{
				return 1000;
			}
			else if (in < 10000 && in != 10000)
			{
				return 10000;
			}
			else if (in < 100000 && in != 100000)
			{
				return 100000;
			}
			else if (in < 1000000 && in != 1000000)
			{
				return 1000000;
			}
			else if (in < 10000000 && in != 10000000)
			{
				return 10000000;
			}
			else if (in < 100000000 && in != 100000000)
			{
				return 100000000;
			}
			else
			{
				return NULL;
			}
		}

		//codename: The American Float DAT-TAB
		int _iCdLook(int in)
		{
			if (in < 0.100 && in != 0.100)
			{
				return 100;
			}
			else if (in < 0.1000 && in != 0.1000)
			{
				return 1000;
			}
			else if (in < 0.10000 && in != 0.10000)
			{
				return 10000;
			}
			else if (in < 0.100000 && in != 0.100000)
			{
				return 100000;
			}
			else if (in < 0.1000000 && in != 0.1000000)
			{
				return 1000000;
			}
			else if (in < 0.10000000 && in != 0.10000000)
			{
				return 10000000;
			}
			else if (in < 0.100000000 && in != 0.100000000)
			{
				return 100000000;
			}
			else
			{
				return NULL;
			}
		}
		

		// a integer limiter
		int iIntLi(int inval, int max)
		{
			int val;
			if (inval < 0)
			{val = -inval;}
			else { val = inval; }
			if (max > val)
			{
				if (inval < 0)
				{return -val;}
				else { return val; }
			}
			else
			{
				if (inval < 0)
				{return -max;}
				else { return max; }
			}
		}

		// a float limiter
		float iFloatLi(float inval, float max)
		{
			float val;
			if (inval < 0) {val = -inval;}
			else {val = inval;}
			if (max > val) 
			{
				if (inval < 0)
				{return -val;}
				else {return val;}
			}
			else 
			{
				if (inval < 0)
				{return -max;}
				else { return max; }
			}
		}

		// a Float To Integer Converter
		int iFltInt(float inVal_)
		{
			float inVal;
			if (inVal_ < 0)
			{inVal = -inVal_;}
			else { inVal = inVal_;}

			int outport;
			int Zer = inVal; float Rt = inVal - Zer;

			if (Rt >= 0.50) { outport = Zer + 1; }
			else { outport = Zer; } 
			if (inVal_ < 0) {return -outport;}
			else {return outport;}
		}

		//a Beta Function That Will Take The Value and Raise It To The Power of Another Variable WIP
		//static int inumPow(unsigned int val, unsigned int power)
		//{
		//	//unsigned int r = val;
		//	unsigned long int ps = power + 1;
		//	unsigned long int x = 0;
		//	for (sizet tc = 0; tc < ps; tc++)
		//	{
		//		x = x * val;
		//	}
		//	//std::cout << x;
		//	return x;
		//}

		//a random number generator
		int iRand(long int seed)
		{
			long int see = seed * seed * seed;
			const long int sed = 0xFAA3E71;
			int Reee = YcomDev;
			int preC = see * sed - Reee * IR_PI;
			long int potC = preC + sed * Reee;
			long int cracker = potC * see;
			if (cracker < 0)
			{return -cracker;}
			else{return cracker;}
		}

		double isqu(double inVal)
		{
			double x = inVal * inVal;
			if (x < 0)
			{ return -x; }
			else { return x; }
		}

		double icup(double inVal)
		{
			double x = inVal * inVal * inVal;
			if (x < 0)
			{return -x;}
			else {return x;}
		}

		static double iArpiC(float R)
		{
			double G = R * R / 4 + I_PI;
			double Z = I_PI * G;
			if (Z < 0)
			{ return -Z; }
			else { return Z; }
		}

		//a Beta Raw float to Integer Converter 
		int FCDP(float inVal)
		{
			float inval;
			if (inVal < 0) {inval = -inVal;}
			else {inval = inVal;}
			int zer = inval;
			float potezer = inval - zer;
			int Y = potezer * _iCdLook(potezer);
			if (inVal < 0) {return -Y;}
			else {return Y;}
		}

		//a Beta Raw Integer To Float Converter 
		float RFC(float inVal)
		{
			float inval;
			if (inVal < 0) { inval = -inVal; }
			else { inval = inVal; }
			float Y = inval / _iCiLook(inval);
			if (inVal < 0) { return -Y; }
			else { return Y; }
		}

}

#pragma warning(pop) // _UCRT_DISABLED_WARNINGS
