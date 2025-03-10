#include <iostream>
#include <vector>

struct Usuario {
    std::string nome;
    int idade;
};

int main() {
    std::vector<Usuario> usuarios;
    int opcao;
    
    do {
        std::cout << "1 - Cadastrar usuario\n2 - Listar usuarios\n3 - Sair\nOpcao: ";
        std::cin >> opcao;
        
        if (opcao == 1) {
            Usuario u;
            std::cout << "Nome: "; std::cin >> u.nome;
            std::cout << "Idade: "; std::cin >> u.idade;
            usuarios.push_back(u);
        } else if (opcao == 2) {
            for (const auto &u : usuarios)
                std::cout << u.nome << " - " << u.idade << " anos\n";
        }
    } while (opcao != 3);

    return 0;
}