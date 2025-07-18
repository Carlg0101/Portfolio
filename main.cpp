#include <iostream>
#include "Aluno.h"
#include "Professor.h"
#include "IPessoa.h"
#include "coordenador.h"
#include "tecnicoadmstrativo.h"
#include <vector> 

      // todas as novas sub classes preccisam estar aqui no 
            // main.cpp como acima 
using namespace std;









int main() {
    
    vector<Aluno> alunos;
vector<Professor> professores;
vector<coordenador> coordenadores;
vector<tecnicoadmstrativo> tecnicos;

     
     
    int opcao;

    do {
        cout << "\n=== MENU ===\n";
        cout << "1 - Cadastrar Aluno\n";
        cout << "2 - Exibir Aluno\n";
        cout << "3 - Cadastrar Professor\n";
        cout << "4 - Exibir Professor\n";
        cout << "5 - Cadastrar Coordenador\n";
        cout << "6 - Exibir Coordenador\n";
        cout << "7 - Cadastrar Técnico Administrativo\n";
        cout << "8 - Exibir Técnico Administrativo\n";
        cout << "0 - Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                Aluno novoaluno;
                string nome;
                int matricula;
                float nota;

                cout << "Digite o nome do aluno: ";
                cin.ignore();
                getline(cin, nome);
                novoaluno.set_nome(nome);

                cout << "Digite a matrícula: ";
                cin >> matricula;
                novoaluno.set_matricula(matricula);

                cout << "Digite três notas:\n";
                for (int i = 0; i < 3; i++) {
                    cout << "Nota " << i + 1 << ": ";
                    cin >> nota;
                    novoaluno.adicionarNota(nota);
                }
                    alunos.push_back(novoaluno);

                
                break;
            }
            case 2:
                for (size_t i = 0; i < alunos.size(); ++i) {
                cout << "\nAluno " << i + 1 << ":\n";
                alunos[i].print();
                }
                if (alunos.empty()) cout << "Nenhum aluno cadastrado.\n";
              
                break;
            case 3:{
                Professor profes;
            string nome;
            int codprofessor;
            string materia;
            string turma;
              
              
                 cout<<"Digite o nome do professor";
                 cin.ignore();
                 getline(cin,nome);
                 profes.set_nome(nome);
                 
                 cout<<"Digite o CODigo do professor";
                 cin >> codprofessor;
                 profes.set_codprofessor(codprofessor);
            
                 cout<<"Digite o materia do professor";
                 cin.ignore();
                 getline(cin,materia);
                 profes.set_materia(materia);
            
                 cout<<"Digite o Turma do professor";
                 cin.ignore();
                 getline(cin,turma);
                 profes.set_turma(turma);
                 
                 
                 
                 professores.push_back(profes);
            break;
            }
            
            case 4:
                for (size_t i = 0; i < professores.size(); ++i) {
                cout << "\nAluno " << i + 1 << ":\n";
                professores[i].print();
                }
                if (professores.empty()) cout << "Nenhum aluno cadastrado.\n";
            break;
            case 5:{
                coordenador coorden;
            string nome;
            string disciplina;
            string curso;
            
                 cout<<"Digite o nome do Coordenador";
                 cin.ignore();
                 getline(cin,nome);
                 coorden.set_nome(nome);
                 
                 
                 cout<<"Digite a dsiciplina do Coordenador";
                 cin.ignore();
                 getline(cin,disciplina);
                 coorden.set_disciplina(disciplina);
                 
                 
                 cout<<"Digite o Curso do Coordenador";
                 cin.ignore();
                 getline(cin,curso);
                 coorden.set_curso(curso);
                 
                 coordenadores.push_back(coorden);
            break;
            }
            case 6 :
                for (size_t i = 0; i < coordenadores.size(); ++i) {
                cout << "\nAluno " << i + 1 << ":\n";
                coordenadores[i].print();
                }
                if (coordenadores.empty()) cout << "Nenhum aluno cadastrado.\n";
               break;
               
               
            case 7:{
                tecnicoadmstrativo Tecnico;
            string nome;
            string setor;
            
            
                 cout<<"Digite o nome do Tecnico Admstrativo";
                 cin.ignore();
                 getline(cin,nome);
                 Tecnico.set_nome(nome);
                 
                 
                 cout<<"Digite o Setor do Tecnico Admstrativo";
                 cin.ignore();
                 getline(cin,setor);
                 Tecnico.set_setor(setor);
                 
                 tecnicos.push_back(Tecnico);
            }
                 
            case 8:
                for (size_t i = 0; i < tecnicos.size(); ++i) {
                cout << "\nAluno " << i + 1 << ":\n";
                tecnicos[i].print();
                }
                if (tecnicos.empty()) cout << "Nenhum aluno cadastrado.\n";
            break;
            
            
            case 0:
                cout << "Saindo...\n";
                break;

            default:
                cout << "Opção inválida!\n";
        }

    } while (opcao != 0);
     
     
    return 0;
}

