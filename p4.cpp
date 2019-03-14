#include <iostream>
#include <cmath>
using namespace std;
float FP[][3] = {
	3,  4,  6,
	4,  5,  7,
	3,  4,  6,
	7, 10, 15,
	5,  7, 10
};
int main() {
	float inp[5];
	int complex = 0;
	float ufp = 0, caf = 0;
	float influence[14];
	cout << "Enter inputs, outputs, enquiries, files, and external interfaces:\n";
	cin >> inp[0] >> inp[1] >> inp[2] >> inp[3] >> inp[4];
    cout << "Enter Complexity [0-low] [1-average] [2-high]:\n";
	cin >> complex;
	cout<<"Number of communication facilities to aid transfer or exchange of information with the application or system? ";cin>>influence[0];
	cout<<"How are distributed data and processing functions handled? ";cin>>influence[1];
	cout<<"Was response time or throughput required by the user? ";cin>>influence[2];
	cout<<"How heavily used is the current hardware platform where the application will be executed?";cin>>influence[3];
	cout<<"How frequently are transactions executed daily, weekly, monthly, etc.?";cin>>influence[4];
	cout<<"What percentage of the information is entered On-Line?";cin>>influence[5];
	cout<<"Was the application designed for end-user efficiency?";cin>>influence[6];
	cout<<"How many ILF's are updated by On-Line transaction?";cin>>influence[7];
	cout<<"Does the application have extensive logical or mathematical processing?";cin>>influence[8];
	cout<<"Was the application developed to meet one or many user's needs?";cin>>influence[9];
	cout<<"How difficult is conversion and installation?";cin>>influence[10];
	cout<<"How effective and/or automated are start-up, back-up, and recovery procedures?";cin>>influence[11];
	cout<<"Was the application specifically designed, developed, and supported to be installed at multiple sites for multiple organizations?";cin>>influence[12];
	cout<<"Was the application specifically designed, developed, and supported to facilitate change?";cin>>influence[13];
	for (int i = 0; i<5; i++) {
		ufp += FP[i][complex] * inp[i];
	}
	for (int i = 0; i<14; i++) {
		caf += influence[i];
	}
	caf *= 0.01;
	caf += 0.65;
	cout << "\nUFP = " << ufp << "\nCAF = " << caf << "\nFP = " << ufp*caf << std::endl;
	return 0;
}