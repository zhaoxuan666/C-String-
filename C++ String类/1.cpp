#include<iostream>
#include <assert.h>
using namespace std;
//class String
//{
//public:
//	String()
//		:_str(new char[1])
//	{
//		_str='\0';
//	}
//	String(char *str="")
//		:_str(new char[strlen(str)+1])
//	{
//		strcpy(_str,str);
//	}
//	String(const String &s)
//		:_str(new char[strlen(s._str)+1])
//	{
//		strcpy(_str,s._str);
//	}
//	String& operator=(const String &s)
//	{
//		if (this!=&s)
//		{
//			char *tmp=new char[strlen(s._str)+1];
//			delete[]_str;
//			strcpy(tmp,s._str);
//			_str=tmp;
//		}
//		return *this;
//	}
//	~String()
//	{
//		if (_str!=nullptr)
//		{
//			delete[]_str;
//		}
//	}
//	char *c_str()
//	{
//		return _str;
//	}
//private:
//	char *_str;
//};

class String
{
public:
	String(char *str="")
		:_str(new char[strlen(str)+1])
	{
		strcpy(_str,str);
	}
	String(const String &s)
		:_str(NULL)
	{
		String tmp(s._str);
		swap(_str,tmp._str);
	}
	String& operator=(const String & s)  
	{  
		 
			String tmp(s);  
			swap(_str, tmp._str);  
		  
		return  *this;  
	}  
	char *c_str()
	{
		return _str;
	}
	~String()
	{
		if (_str!=NULL)
		{
			delete[] _str;
		}
	}
private:
	char *_str;
};
int main()
{
	//String s();
	String s1("123123");
	String s2("1");
	s1=s2;
	cout<<s1.c_str()<<endl;
	getchar();
}