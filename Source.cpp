#include <iostream>
#include <Windows.h>
#include <string>
#pragma comment(lib, "winmm.lib")

using namespace std;

int main() {
	cout << "Xin chao ban" << endl;
	cout << "Minh la may tinh" << endl;
	int Dap;
	cout << "Ban muon nghe nhac khong (Y/N)" << endl;
	cin >> Dap;
	if (Dap = 'Y') {
		
		PlaySound("F:\Oneagains.wav", NULL, SND_FILENAME);
}
	
	return 0;



}