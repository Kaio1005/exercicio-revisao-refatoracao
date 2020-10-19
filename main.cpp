#include "Engenheiro.hpp"
#include "Vendedor.hpp"

int main() {

  Engenheiro eng1("JoaoSnow", 35, 3, 9.5);
  std::cout << "Nome: " << eng1.getName() << std::endl;
  std::cout << "Salario Mes: " << eng1.salarioMes() << std::endl;
  std::cout << "Projetos: " << eng1.getProjects() << std::endl;
  std::cout << std::endl;
  
  Engenheiro eng2("Daniela Targaryen", 30, 1, 8);
  std::cout << "Nome: " << eng2.getName() << std::endl;
  std::cout << "Salario Mes: " << eng2.salarioMes() << std::endl;
  std::cout << "Projetos: " << eng2.getProjects() << std::endl;  
  std::cout << std::endl;
  
  Engenheiro eng3 ("Bruno Stark", 30, 2, 8);
  std::cout << "Nome: " << eng3.getName() << std::endl;
  std::cout << "Salario Mes: " << eng3.salarioMes() << std::endl;
  std::cout << "Projetos: " << eng3.getProjects() << std::endl;  
  std::cout << std::endl;
  
  
  Vendedor vend1 ("Tonho Lannister", 20, 5000, 6);
  
  std::cout << "Nome: " << vend1.getName() << std::endl;
  std::cout << "Salario Mes: " << vend1.salarioMes() << std::endl;  
  std::cout << "Quota vendas: " << vend1.quotaTotalAnual() << std::endl;
  std::cout << std::endl;
  
  Vendedor vend2 ("Jose Mormont", 25, 3000, 8);
  
  std::cout << "Nome: " << vend2.getName() << std::endl;
  std::cout << "Salario Mes: " << vend2.salarioMes() << std::endl;  
  std::cout << "Quota vendas: " << vend2.quotaTotalAnual() << std::endl; 
  std::cout << std::endl;  
	
  Vendedor vend3 ("Sonia Stark", 30, 4000, 8);
  
  std::cout << "Nome: " << vend3.getName() << std::endl;
  std::cout << "Salario Mes: " << vend3.salarioMes() << std::endl;  
  std::cout << "Quota vendas: " << vend3.quotaTotalAnual() << std::endl;  
  
  return 0;	
}