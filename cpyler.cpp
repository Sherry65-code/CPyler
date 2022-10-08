#include<iostream>
#include<string>
#include<fstream>
using namespace std;


void read(string input){
    string output = "";
    int pointer = 0;
    string temp;
    ifstream filef;




    string StringforTemp = "";
    int counter1 = 0;
    bool isQuoted = false;




    
    filef.open(input);
    do
    {
            filef >> temp;



            // Main Functioning

            
            if (temp == "print"){
                isQuoted = true;
            }
            else if (isQuoted){
                if (temp.at(temp.length()-1) == ';'){
                    StringforTemp += " ";
                    isQuoted = false;
                    while (counter1 < temp.length()-1){
                        StringforTemp += temp.at(counter1);
                        counter1+=1;
                    }
                    StringforTemp += "\n";
                    cout << StringforTemp << endl;
                }
                else{
                    StringforTemp += " "+temp;
                }
            }
    output += " "+temp;        

    } while (filef.good());
}

int main(int argc, char** argv)
{
    read(argv[1]);
    return 0;
}