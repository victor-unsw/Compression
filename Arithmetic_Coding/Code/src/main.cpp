#include<iostream>
#include<cmath>
#include<string>
#include<limits>
#include<fstream>
#include<iostream>
using namespace std;

string file_name="";

class model{
  private:
    unsigned short ASCII_START = 32;
    unsigned short ASCII_END   = 125;
    double unique_probability  = 1.0/(ASCII_END-ASCII_START);
  
  public:
    model(){
        cout << "unique prob: " << unique_probability << endl;
    }

  std::pair<double,double> getProbability(char c){
    if(c >= ASCII_START && c <= ASCII_END)
      return std::make_pair((c - ASCII_START)*unique_probability , (c-ASCII_START)*unique_probability + unique_probability);
    else
      throw "character out of range";
  }

};

int main(int argc,char** argv){

  ifstream input(file_name);
  model m;

  unsigned x = 0xFFFFFFFFU; 
  unsigned y = 0;
  unsigned z = 0x80000000U;
  cout << "x : " << (x-y+1) << endl;
  cout << "z : " << z << endl;

  return 0;
}
