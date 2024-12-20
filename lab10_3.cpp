#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    float sum_square = 0;

    string textline;
    ifstream source("score.txt");
    while(getline(source,textline))
    {
        sum += atof(textline.c_str());
        sum_square += pow(atof(textline.c_str()),2);
        count++;
    }

    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/count << endl;
    cout << "Standard deviation = " << sqrt((sum_square/count)-pow(sum/count,2));

    return 0;
}