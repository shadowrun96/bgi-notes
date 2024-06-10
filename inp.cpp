// getinp.cpp
// burried dreams 1995.

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
	      case '0': cout << "0 -- push value to stack" << endl;break;
	      case '1': cout << "1 -- push value to stack" << endl;break;
	      case '2': cout << "2 -- push value to stack" << endl;break;
	      case '3': cout << "3 -- push value to stack" << endl;break;
	      case '4': cout << "4 -- push value to stack" << endl;break;
	      case '5': cout << "5 -- push value to stack" << endl;break;
	      case '6': cout << "6 -- push value to stack" << endl;break;
	      case '7': cout << "7 -- push value to stack" << endl;break;
	      case '8': cout << "8 -- push value to stack" << endl;break;
	      case '9': cout << "9 -- push value to stack" << endl;break;
	      case '+': cout << "+ -- pop last two, add and push to stack" << endl;break;
	      case '-': cout << "- -- pop last two, subtract and push to stack" << endl;break;
	      case '*': cout << "* -- pop last two, multiply and push to stack" << endl;break;
	      case '/': cout << "/ -- pop last two, divide and push to stack" << endl;break;
	      case 's': cout << "s -- print stack" << endl;break;
	      case 'd': cout << "d -- duplicate last and push to stack " << endl;break;
	      case '@': cout << "@ -- pop last and print ASCII character" << endl;break;
	      case ':': cout << ": -- define new op" << endl;break;

	      case ' ': break; // do nothing.
	      default: cout << "Unknown op" << endl; errfound=1;break;
	    }
	  }
	}
}

