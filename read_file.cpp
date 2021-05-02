#include <iostream>
#include <fstream>

#include <vector>

using namespace std;

int main(){
    ifstream f{"citis_map.txt"};
    string in;
    string color;
    vector<string> citis;
    vector<string> colors;
    char c;
    while(f.good()){
        c = f.get();
        while(c != ' '){
            in += c;
            c = f.get();
        }
        citis.insert(citis.end(),in);
        while(c != ' '){
            color += c;
            c = f.get();
        }
        while(c != '\n'){
            in += c;
            c = f.get();
        }





    }


}
