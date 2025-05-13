#include <iostream>
#include <string>
using namespace std;

// Estrutura da carta
struct CartaPais {
    string nome;
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
};

// Função para comparar as cartas
void compararCartas(CartaPais c1, CartaPais c2, int escolha) {
    cout << "\nComparando: " << c1.nome << " vs " << c2.nome << "\n" << endl;

    switch (escolha) {
        case 1:
            cout << "Atributo: População" << endl;
            cout << c1.nome << ": " << c1.populacao << " habitantes" << endl;
            cout << c2.nome << ": " << c2.populacao << " habitantes" << endl;
            if (c1.populacao > c2.populacao)
                cout << "Vencedor: " << c1.nome << endl;
            else if (c2.populacao > c1.populacao)
                cout << "Vencedor: " << c2.nome << endl;
            else
                cout << "Empate!" << endl;
            break;

        case 2:
            cout << "Atributo: Área" << endl;
            cout << c1.nome << ": " << c1.area << " km²" << endl;
            cout << c2.nome << ": " << c2.area << " km²" << endl;
            if (c1.area > c2.area)
                cout << "Vencedor: " << c1.nome << endl;
            else if (c2.area > c1.area)
                cout << "Vencedor: " << c2.nome << endl;
            else
                cout << "Empate!" << endl;
            break;

        case 3:
            cout << "Atributo: PIB" << endl;
            cout << c1.nome << ": " << c1.pib << " trilhões USD" << endl;
            cout << c2.nome << ": " << c2.pib << " trilhões USD" << endl;
            if (c1.pib > c2.pib)
                cout << "Vencedor: " << c1.nome << endl;
            else if (c2.pib > c1.pib)
                cout << "Vencedor: " << c2.nome << endl;
            else
                cout << "Empate!" << endl;
            break;

        case 4:
            cout << "Atributo: Pontos Turísticos" << endl;
            cout << c1.nome << ": " << c1.pontos_turisticos << " pontos" << endl;
            cout << c2.nome << ": " << c2.pontos_turisticos << " pontos" << endl;
            if (c1.pontos_turisticos > c2.pontos_turisticos)
                cout << "Vencedor: " << c1.nome << endl;
            else if (c2.pontos_turisticos > c1.pontos_turisticos)
                cout << "Vencedor: " << c2.nome << endl;
            else
                cout << "Empate!" << endl;
            break;

        case 5:
            cout << "Atributo: Densidade Demográfica" << endl;
            cout << c1.nome << ": " << c1.densidade_demografica << " hab/km²" << endl;
            cout << c2.nome << ": " << c2.densidade_demografica << " hab/km²" << endl;
            if (c1.densidade_demografica < c2.densidade_demografica)
                cout << "Vencedor: " << c1.nome << " (menor densidade vence)" << endl;
            else if (c2.densidade_demografica < c1.densidade_demografica)
                cout << "Vencedor: " << c2.nome << " (menor densidade vence)" << endl;
            else
                cout << "Empate!" << endl;
            break;

        default:
            cout << "Opção inválida!" << endl;
    }
}

int main() {
    // Duas cartas de exemplo
    CartaPais brasil = {"Brasil", 212559417, 8515767.0, 2.05, 21, 24.96};
    CartaPais argentina = {"Argentina", 44938712, 2780400.0, 0.45, 11, 16.15};

    int escolha;

    cout << "=== SUPER TRUNFO - CARTAS DE PAISES ===" << endl;
    cout << "Escolha o atributo para comparar:" << endl;
    cout << "1 - População" << endl;
    cout << "2 - Área" << endl;
    cout << "3 - PIB" << endl;
    cout << "4 - Pontos Turísticos" << endl;
    cout << "5 - Densidade Demográfica (MENOR vence!)" << endl;
    cout << "Digite sua escolha (1-5): ";
    cin >> escolha;

    compararCartas(brasil, argentina, escolha);

    return 0;
}

