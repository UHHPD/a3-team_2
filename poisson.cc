#include <iostream>
#include <fstream>
#include <vector>


double poisson(double mu, int k) {
  return 0;
}

int main() {
    using namespace std;
    
    ofstream fout("hist.txt"); 
    
    vector<int> zaehler(11);

    ifstream fin("datensumme.txt");
    int n_i;
    for(int i = 0 ; i < 234 ; ++i) {
        fin >> n_i;
        zaehler[n_i] += 1;
    }
    for (unsigned  int k = 0 ; k < zaehler.size() ; ++k)   
    { 
      fout << k << " " << zaehler[k] << std::endl;
    }

    fout.close();
}