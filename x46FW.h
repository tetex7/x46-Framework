//x46FW.hpp (x46-FW, R,05.00) (written Compiled & Debugged) by (REDACTED) AKA Tetex7 or Tete.ISO
#pragma once

#ifndef x46FW
#define x46FW
#endif // !x46FW

#ifndef __cplusplus
#error a C++ Compiler is Required!
#endif




#define _TETE_DISABLED_WARNINGS 4324

#pragma warning(push)
#pragma warning(disable: _TETE_DISABLED_WARNINGS)
//_TETE_DISABLED_WARNINGS

#define __X46_G
#define hSTD

#define TRUE true
#define FALSE false



#ifndef _TETE_MATH_DEFINES_
#define _TETE_MATH_DEFINES_
#define I_PI       3.1415926535897   // pi
#define IR_PI       3141592653  // Rpi
#define NULL       0
#define NA        0
#endif //_TETE_MATH_DEFINES_

//#include "PFCU.hpp"



//__STDC__;
//__cplusplus

namespace x46
{
	//1 BYTE = 4 1OR0
	typedef unsigned char BYTE;

	//1 BYTE = 4 1OR0
	typedef unsigned short int iBYTE;

	typedef double var;
	typedef unsigned int   sizet;
	typedef const int     mID;

	//Number InterWeav With Other Modules
	typedef const int     mIW;

	//number of module dependencies AKA InterWeav
	typedef const  int     mIN;

	//bool flag
	typedef bool    flag;
	// const bool cflag
	typedef const bool    cflag;
	//a int flag
	typedef int intFlag;

	typedef int* intP;

	//only for clock or time ⨍
	typedef void    clock;

	//var CACHE
	typedef unsigned char CACHE;

	//type definition for the Months
	//typedef const int Month;
#define YcomDev 2020
#define January 1
#define Febuary 2
#define March 3
#define April 4
#define May 5
#define June 6
#define July 7
#define August 8
#define September 9
#define October 10
#define November 11
#define December 12

	//type definition for the Comp year
	//typedef const int Year;
#define sIntL = 0x7FFFFFFF
#define usIntL 0xFFFFFFFF

	class varEx
	{

	private:

		//codename: The Soviet Int DAT-TAB
		static int _iCiLook(int in);
		

		//codename: The American Float DAT-TAB
		static int _iCdLook(int in);
		

	public:
		varEx();
		~varEx();

		// a integer limiter
		static int iIntLi(int inval, int max);

		// a float limiter
		static float iFloatLi(float inval, float max);
		

		// a Float To Integer Converter
		static int iFltInt(float inVal_);

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
		static int iRand(long int seed);

		static double isqu(double inVal);

		static double icup(double inVal);

		static double iArpiC(float R);

			//a Beta Raw float to Integer Converter
			static int FCDP(float inVal);

		//a Beta Raw Integer To Float Converter 
		static float RFC(float inVal);
	};

}
