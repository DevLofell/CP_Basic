#include <iostream>

using namespace std;

int main()
{
	
	/*auto automation = 10;
	
	auto testt= new int(1);
	cout << automation;
	*/
	int arithmetic1 = 30;
	int arithmetic2 = 17;

	cout << arithmetic1 + arithmetic2 << endl;
	cout << arithmetic1 - arithmetic2 << endl;
	cout << arithmetic1 * arithmetic2 << endl;
	cout << arithmetic1 / arithmetic2 << endl;
	cout << arithmetic1 % arithmetic2 << endl;

	int Inc = 30;
	
	//Inc++
	cout << Inc; //처리 먼저하고
	Inc = Inc + 1; //더하기
	//Inc--
	cout << Inc; // 처리 먼저하고
	Inc = Inc - 1; // 빼기
	//++Inc 
	Inc = Inc + 1; // 먼저 더하고
	cout << Inc; // 처리
	//--Inc 
	Inc = Inc - 1;
	cout << Inc;
	

	

}