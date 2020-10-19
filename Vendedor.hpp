#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  	public:
        const int MESES = 12;
        Vendedor (std::string nome, double salarioHora, double quota, double horas);
        double quotaTotalAnual();
        double getQuota (){
            return this -> quotaMensalVendas;
        }
        void setQuota (double quota){
            this -> quotaMensalVendas = quota;
        }
    private:
		double quotaMensalVendas;
};

#endif