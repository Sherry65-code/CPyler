#include<iostream>
#include<string>
#include<fstream>
using namespace std;

string openFile(string filename, char wor){
    string rs;
    string waitstr = "";
    int x = 0;
    if (wor == 'w'){
        ofstream file1;
        file1.open(filename);
        file1 << rs;
    }
    else if (wor == 'r'){
        ifstream file1;
        file1.open(filename);
        while (file1) {
            file1 >> rs;
            if (rs.at(rs.length()-1) == ';')
            {
                waitstr += rs + " ";
                waitstr += "\n";
            }
            else{
                waitstr += rs + " ";
            }
        }
    }
    else{
        cout << "Internal Error. Wrong Syntax!";
    }
    return waitstr;
}

int main(){
    cout << openFile("test.cpyler",'r') << endl;
}