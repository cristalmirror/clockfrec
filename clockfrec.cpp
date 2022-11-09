#include<iostream>

using namespace std;

/*class to construct the system to measure diferents
 forms of eficiency*/
class CPUfrec{
 private:
      //measure the frecuency of the cpu
      void frecuency();

      //measuere the time that a program needed to execute
      void prog_time_exec();

      //measyere the numbre of cicles that a program needed to execute 
      void num_ciclo_exec();
      
 public:

      //constructor of the sistem
      CPUfrec(int data);
      

};

//measure the frecuency of the cpu
void CPUfrec::frecuency(){

}

//measuere the time that a program needed to execute
void CPUfrec::prog_time_exec(){

}

//measyere the numbre of cicles that a program needed to execute 
void CPUfrec::num_ciclo_exec(){

}
      

CPUfrec::CPUfrec(int data){


      
      
}


/*main function*/
int main(int argc,char *argv[]){

      int opc_atrib = static_cast<int>(argv[1]);

      
      
      cout << opc_atrib <<endl;
      

      
      
      return 0;
}
