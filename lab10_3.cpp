#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<iomanip>
#include<cmath>
using namespace std;

int main (){
	ifstream source;
    string textline;
    int i=0;
    double sum=0,sum2=0;
	source.open("score.txt") ;
	
	while(getline(source,textline)){
        sum=sum+atof(textline.c_str());
        sum2=sum2+pow(atof(textline.c_str()),2);
		i++;
	}

    source.close();
    cout << "Number of data = " << i << "\n";
    cout << setprecision(3);
    cout << "Mean = " << sum/i << "\n";
    cout << "Standard deviation = " << sqrt(sum2/i-pow(sum/i,2));

	return 0;
}
