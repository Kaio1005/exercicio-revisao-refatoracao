#include <string>
#include "Vendedor.hpp"

Vendedor :: Vendedor (std::string nome, double salarioHora, double quota, double horas){
  this -> setQuota (quota);
  this -> setName (nome);
  this -> setSalarioHora (salarioHora);
  this -> setHorasTrabalhadas (horas);
}

double Vendedor :: quotaTotalAnual(){
	return this -> quotaMensalVendas * MESES;
}
