#include <iostream>
#include <iomanip>
#include<cmath>
#include<cstdlib>
#include<fstream>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    string num;
    double n;
    double total;
    double totalfordev;
    while(getline(source,num)){
        total += stod(num);
        totalfordev += pow(stod(num),2);
        n++;
    }
    double Mean = total/n;
    double deviation = sqrt((totalfordev/n)-(pow(Mean,2)));
    cout << "Number of data = " << n << endl;
    cout << setprecision(3) ;
    cout << "Mean = " << Mean << endl;
    cout << "Standard deviation = "<< deviation << endl;


    source.close();
    return 0;
}