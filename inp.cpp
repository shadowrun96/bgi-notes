#include <iostream.h>
#include <iomanip.h>

void main() {
	char inp[255];
	int inplen = 0;

	for (int k=0;k<254;k++) inp[k]=0;
	cin.get(inp, 255);

	for (int l=0;l<254;l++) {
	   if (inp[l] !=0 ) { inplen++;}
	}

	cout << "buffer:" << inp << endl;
	cout << "length:" << inplen << endl;

}
