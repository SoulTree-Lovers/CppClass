#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main( )
{
  	string text;
  	fstream inputStream;
	

 	inputStream.open("player.txt");
	
	// inputStream >> text를 실행하면
	// 1. 읽어 올 데이터가 존재하면 text에 값을 넣어주고 true를 리턴한다.
	// 2. 읽어 올 데이터가 존재하지 않으면 false를 리턴한다.
 	while (inputStream >> text)
 	{
 		cout << text << endl;
 	}
	inputStream.close();

	return 0;
}
