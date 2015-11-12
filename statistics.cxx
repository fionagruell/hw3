#include <cmath>
#include <iostream>
#include <cstdlib> 

using namespace std;

void f(double* x, const int N){ 
  for(int i=0; i<N; i++){
    double ran= rand();
    x[i]=ran/double(RAND_MAX);//create random numbers and normalize them
  }
}
void g(double* x,double& mean, double& var,const int N){
  mean=0;
  var=0;
  for(int i=0; i<N; i++){
    mean+=x[i];
  }
   mean=mean/N; //normalize mean by number of summands
  for(int i=0; i<N; i++){
    var+=pow((mean-x[i]),2);
  }
  var=var/N;
}

int main(){
   const int N = 100;
   double p[N];
   double mean, var;
 f(p,N);	//create random numbers 
 g(p,mean,var,N); // calculate var and mean


   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}
