# Sistema de Cadastro de Pessoas

Este projeto em C++ implementa um sistema de cadastro de diferentes tipos de pessoas:

- Aluno
- Professor
- Coordenador
- Técnico Administrativo

O sistema usa orientação a objetos e permite cadastrar, armazenar e exibir dados dessas pessoas usando `std::vector`.

## Funcionalidades

- Cadastro e exibição de alunos com cálculo de média
- Cadastro de professores com disciplina e turma
- Cadastro de coordenadores com disciplina e curso
- Cadastro de técnicos administrativos com setor

## Como executar

Compile com `g++`:

```bash
g++ main.cpp Aluno.cpp Professor.cpp coordenador.cpp tecnicoadmstrativo.cpp -o sistema
