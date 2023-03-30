#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc, char *argv[]){
    if(argc > 1){
    float sum = 0;
    cout << "---------------------------------\n";
    for(int i = 1; i < argc; i++){
        sum += atoi(argv[i]);
    }
    cout << "Average of " << argc - 1 << " numbers = " << sum/(argc-1);
    cout << "\n---------------------------------";
    }
    else cout << "Please input numbers to find average.";
}


