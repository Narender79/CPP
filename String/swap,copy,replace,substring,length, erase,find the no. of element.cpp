
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1 = "geeksforgeeks is for geeks";
	string str2("geeksforgeeks rocks");
	
	cout<<"the length of the str1 is: "<<str1.length()<<"\n";
	
	//find
	cout<<"the no. of the ro in the statement is: "<<str2.find("ro")<<"\n";
	
	//replace

	cout<<"the word after replace is: "<<str1.replace(5,3,"FOR")<<"\n";
	
	//substring

	cout<<"the word after substring is: "<<str2.substr(13, 5)<<"\n";
	
	//erase

	cout<<"the word after erase is:"<<str1.erase(13)<<"\n";
	

	char ch[75];

	//copy

	str2.copy(ch, 20);
	cout << "The new copied character array is : "<<ch<<"\n";
	cout << "The 1st string before copy is : "<<str1<<"\n";
	cout << "The 2nd string before copy is : "<<str2<<"\n";

	//swap

	str1.swap(str2);
	cout << "The 1st string after swapping is : "<<str1<<"\n";
	cout << "The 2nd string after swapping is : "<<str2<<"\n";

	//push back

	str1.push_back(str2[13]);
	cout<<"after the push_back: "<<str1<<"\n";

	return 0;
}