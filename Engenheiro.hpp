#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

    public:
    Engenheiro (std::string nome, double salarioHora, int projetos, double horas);
    int getProjects (){
        return this -> projetos;
    }
    void setProjects (int projects){
        this -> projetos = projects;
    }
    private:  
        int projetos;

};

#endif