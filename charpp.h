#pragma once


#ifndef x46_STRINPP_H
#define x46_STRINPP_H

namespace x46_addon
{
	class stringpp
	{
	private:
		char* m_Buff;
		unsigned int m_size;
	public:
		stringpp(const char* string);
		stringpp(const stringpp& oo);
		~stringpp();
		char& operator[](unsigned int indx);
		friend std::ostream& operator<<(std::ostream& gfh, const stringpp& ind);
	};

	using xstring = class stringpp;
	void printpp(xstring tpo);
}

#endif //x46_STRINPP_H

