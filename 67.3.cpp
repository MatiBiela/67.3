#include <fstream>
#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

class file
{
       	ofstream ofFile;
        public:
                file();
                ~file();
                void save();
};


file::file()
{		
		ofFile.open("wyniki.txt");

}

file::~file()
{
        ofFile.close();
}



unsigned long long fib(int n)
{
        if(n==0) return 0;
        if(n==1) return 1;
        long long temp1=0LL,temp2=1ll,temp3=0ll;
        for(int i=2;i<=n;i++)
        {
                temp3=temp1+temp2;
                temp1 = temp2;
                temp2 = temp3;
        }
        return temp2;
}
void file::save(){
	char ciag[300];
	int n=40;

	for(int i=1; i<=n; i++){
		itoa(fib(i), ciag, 2);
	for(int j=0; j<27-strlen(ciag); j++){	
		cout << "0";		
	}
	cout  << ciag << "\n";
	}
} 


int main()
{
        file f;
        f.save();
        return 0;
}
