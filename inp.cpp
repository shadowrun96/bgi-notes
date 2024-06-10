// getinp.cpp

#include <iostream.h>
#include <iomanip.h>

void main() {
	char inp[255];
	int inplen = 0;

	int tokenfound = 0;
	int spcfound = 0;
	int errfound = 0;
	for (int k=0;k<254;k++) inp[k]=0;

	cin.get(inp, 255);

	for (int l=0;l<254;l++) {
	   if (inp[l] !=0 ) { inplen++;}
	}

	cout << "buffer:" << inp << endl;
	cout << "length:" << inplen << endl;

	// check to see if there are tokens separated by space
	// larger than one character. If found, exit with error.

	for (int t=0;t<254;t++)
	{
	  if (inp[t]==0) { break;}
	  if (inp[t]!=' ' && tokenfound==0)
	       {cout << t << "token found" << endl;
		tokenfound=1;continue;}
	  if (inp[t]!=' ' && tokenfound==1)
	       {cout << t << "token>1 found" << endl;
		errfound=1;break;}
	  if (inp[t]==' ')
	       {cout << t << "spc found" << endl;
		tokenfound=0;spcfound=1;continue;}
	}

	if (!errfound) {
	  for (int p=0;p<inplen;p++)
	  {
	    switch (inp[p])
	    {
	      case '0': cout << "0 defined op "; break;
	      case '1': cout << "1 defined op "; break;
	      case '2': cout << "2 defined op "; break;
	      case '3': cout << "3 defined op "; break;
	      case '4': cout << "4 defined op "; break;
	      case '5': cout << "5 defined op "; break;
	      case '6': cout << "6 defined op "; break;
	      case '7': cout << "7 defined op "; break;
	      case '8': cout << "8 defined op "; break;
	      case '9': cout << "9 defined op "; break;
	      case '+': cout << "+ defined op "; break;
	      case '-': cout << "- defined op "; break;
	      case '*': cout << "* defined op "; break;
	      case '/': cout << "/ defined op "; break;
	      case 's': cout << "s defined op "; break;
	      case 'd': cout << "d defined op "; break;
	      case ' ': break; // do nothing.
	      default: cout << "Unknown op";break;
	    }
	  }
	}
}
