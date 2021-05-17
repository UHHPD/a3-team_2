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

double prob(std::vector<int> daten, double mu) {
  double prob = 1;
  for (int k : daten) {
    prob *= poisson(mu, k);
  }
  return prob;
}


int main() {
    using namespace std;
    
    std::vector<int> daten;
    
    ifstream fin("datensumme.txt");
    ofstream gout("likelihood.txt");
    ofstream tout("nll.txt");
    
    int n_i;
    double log(double a);
    double mu;

    for(int i = 0 ; i < 234 ; ++i) {
        fin >> n_i;
        daten.push_back(n_i);
    }
    std::cout << prob(daten, 3.11538) << std::endl;
    
    for (int j=0; j<60; ++j)
    {
      mu += 0.1; 
      gout << mu << " " << prob(daten, mu) << std::endl;
      tout << mu << " " << -2*log(prob(daten, mu)) << std::endl;
    }
    
    fin.close();
    gout.close();
    tout.close();

}