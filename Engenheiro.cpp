#include "Engenheiro.hpp"
#include <string>

Engenheiro :: Engenheiro(std::string nome, double salarioHora, int projetos, double horas){
  this -> setProjects (projetos);
  this -> setName (nome);
  this -> setSalarioHora (salarioHora);
  this -> setHorasTrabalhadas (horas); 
}

