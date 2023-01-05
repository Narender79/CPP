#include <iostream>
#include<string>
using namespace std;


string larg(string text)
{
	string tang;
	string lang;
	int i;
	for(i=0;i<text.length();i++)
	{
		if (text[i] !=' ' && (int (text[i])>=65 && int (text[i])<=90) || (int (text[i])>=97 && int (text[i])<=122) || (int (text[i]>=48 && int (text[i])<=57)))
		{
			tang.push_back(text[i]);
		}
		else
		{
			break;
		}
	}

	for(i=0;i<text.length();i++)
	{
		if (text[i] !=' ' && (int (text[i])>=65&& int (text[i])<=90) || (int (text[i])>=97 && int (text[i])<=122) || (int (text[i]>=48 && int (text[i])<=57)))
		{
			lang.push_back(text[i]);
		if (i+1==text.length()&&lang.length()>tang.length())
		{
			tang=lang;
		}
		}
		else
		{
			if (lang.length()>tang.length())
			{
				tang=lang;
			}
			tang.clear();
		}
	}
	return tang;
}

int main()
{
	cout<<larg("Today i talk to my girlfriend now she is in bad mood")<<"\n";
	cout<<larg("Hi this narender-yadav nice to meet you its my plearsure meeting you ")<<"\n";
}