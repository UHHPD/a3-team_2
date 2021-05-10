#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>


double poisson(double mu, int k) {
  double exp(double x);
  double tgamma(double x);
  double pow(double x, double k);
  
  return (pow(mu, k) * exp(-mu))/tgamma(k+1);
}

int main() {
    using namespace std;
    
    double poisson(double mu, int k);
    
    
    ofstream fout("hist.txt"); 
    ofstream gout("histpoi.txt");
    
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
      gout << k << " " << zaehler[k] << " " << 234 * poisson(3.11538, k) << std::endl;
    }

    fout.close();
    gout.close();
}