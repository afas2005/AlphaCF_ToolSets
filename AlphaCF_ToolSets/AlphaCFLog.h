#pragma once

#include <iostream>
#include <sstream>

namespace AlphaCF
{
	typedef void(*CallbackOut2Target)(const wchar_t* wstrOut);

	bool endl(void); //for symbol of flushing
	typedef bool (*ENDL)(void);

	class EasyLog
	{
	public:
		static CallbackOut2Target mst_callback4Output;
		static EasyLog eLog;
		
		EasyLog();
		~EasyLog();

		EasyLog& operator << (const ENDL tEndl);
		//the operation override function of stream for custom struct and class 
		//integer variables
		EasyLog& operator << (const char chVal);
		EasyLog& operator << (const unsigned char uchVal);
		//  EasyLog& operator << ( short shVal);
		//  EasyLog& operator << ( unsigned short ushVal);
		EasyLog& operator << (const int iVal);
		EasyLog& operator << (const unsigned int uiVal);
		EasyLog& operator << (const unsigned long uiVal);
		//float variables
		EasyLog& operator << (const _int64 i64Val);
		EasyLog& operator << (const unsigned _int64 ui64Val);
		EasyLog& operator << (const float fVal);
		EasyLog& operator << (const double dVal);
		//for string whose end char is NULL
		EasyLog& operator << (const char* string);
		EasyLog& operator << (const wchar_t* string);
		EasyLog& operator << (const bool bVal);

	private:
		static void Out2TargetDefault(const wchar_t* wstrOut);
		std::wostringstream m_out;
	};
}