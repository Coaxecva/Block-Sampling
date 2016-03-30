#include "iostream"
#include "fstream"
using namespace std;

#define INPUT_FILE "input.txt"

void ReadInputFile(unsigned int& d, unsigned int* arrd, unsigned int* L)
{

  //Create an input file stream
  ifstream in(INPUT_FILE,ios::in);

  in >> d;
  arrd = new unsigned int[d];
  unsigned int t=1;
  unsigned int tmp=0;

  for(unsigned int i=0; i<d; i++)
  {
    in >> tmp;
    arrd[i] = 2 << (tmp-1);
    t *= arrd[i];    
  }

  L = new unsigned int[t];
  for(unsigned int i=0; i<t; i++)
  {
    in >> L[i];  
  }
  
  //Close an input file stream
  in.close();

}

int main () {
  unsigned int d;
  unsigned int* arrd;
  unsigned int *L;

  ReadInputFile(d, arrd, L);
  cout << d << endl;

  unsigned int t=1;

  for(unsigned int i=0; i<15; i++)
  {
    cout << arrd[i] << endl;    
    t *= arrd[i];
  }

  cout << "ttt == " << t << endl;

  for(unsigned int i=0; i<20; i++)
  {
    cout << L[i] << endl;
  }

  return 0;
}

