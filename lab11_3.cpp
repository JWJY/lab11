#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int count = 0;
    float sum = 0, sum_standard=0 ,n;
    string textline;
    ifstream source("score.txt");
    while(getline(source, textline)){
        n = atof(textline.c_str());
        sum += n;
        sum_standard += pow(n,2);
        count++;
	}

    cout << "Number of data = " << count << '\n';
    cout << setprecision(3);
    cout << "Mean = " << sum/count << '\n';;
    cout << "Standard deviation = " << sqrt((sum_standard/count)-(pow((sum/count),2)));
}