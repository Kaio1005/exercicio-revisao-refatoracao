#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
  protected:
    double salarioHora;  
    std::string nome;
    double horasTrabalhadas;

  public: 
    const double HORAS_POR_DIA = 8;

    std::string getName (){
      return this -> nome;
    }
    void setName(std::string name){
      this -> nome = name;
    }
    double getSalarioHora (){
      return this -> salarioHora; 
    }
    void setSalarioHora (double salario){
      this -> salarioHora = salario;
    }
    double getHorasTrabalhadas (){
      return this -> horasTrabalhadas; 
    }
    void setHorasTrabalhadas (double horas){
      this -> horasTrabalhadas = horas;
    }
    virtual double salarioMes() const;

    virtual ~Empregado(){};
};

#endif