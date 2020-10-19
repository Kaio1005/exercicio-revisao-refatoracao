#include "Empregado.hpp"

double Empregado :: salarioMes () const{
    double salario = 0;
    salario = this -> horasTrabalhadas * this -> salarioHora;
    //Cálculo de hora extra (+50% se horasTrabalhadas > Horas por dia)
    if (this -> horasTrabalhadas > HORAS_POR_DIA) {
        double horasExtras = this -> horasTrabalhadas - HORAS_POR_DIA;
        salario = horasExtras * (salarioHora / 2);
    }
    return salario;
}
