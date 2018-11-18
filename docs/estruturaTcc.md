
# Capa
  - Logo
  - UFPE, DEE, ECA...
  - Título
  - TCC por ...
  - Orientador ...
  - Local e data

# Contracapa
  - Nome
  - Titulo
  - Monografia apresentada para ...
  - Orientador
  - Local e ano

# Agradecimento

# Resumo
  - Ex: Este trabalho tem como objetivo ...
  - Palavras-chave: 4 a 6

# Abstract

# Lista de figuras

# Lista de tabelas

# Sumário

# Introdução:
## Motivação
 - Remodelar o software embarcado do robô Zero Um, de forma a atender métricas de manutenibilidade, expansibilidade e reusabilidade de código.

## Objetivos
  - Apresentar o sistema embarcado e identificar possíveis expansões de funcionalidade.
  - Apresentar técnicas úteis na remodelagem do sistema embarcado. 
  - Sugerir uma arquitetura modular para o software embarcado.
  - Validar a estrutura básica da arquitetura de software sugerida.
   

# Revisão Bibliográfica
 -

# Desenvolvimento
### Descrição
## O Sistema Embarcado Utilizado
### Funcionalidades
### Hardware
### Restrições
### Expansões possíveis

## O Software Embarcado Proposto
### Descrição
  - Utilização de técnicas para atendimento das métricas, com uma arquitetura que possibilite expansão...

### Atendimento das Métricas de Projeto
#### Reusabilidade
  - Encapsulamento (definição de uma boa interface)
  - Estrutura em camadas

#### Expansibilidade
  - Fluxo de Execução do Sistema

#### Manutenibilidade
  - Encapsulamento (limitação de operação em módulos)
  - Boas Práticas


### Arquitetura Básica do Software
  - Diagrama básico da arquitetura do software em validação
  - Função dos módulos
  - Sugestão de arquitetura com funcionalidades


### Aplicação
#### Módulo Dio
  - Interface
  - Execução das funções

#### Módulo Task
  - Utilização do módulo de timer
  - Chaveamento de tarefas baseado no tempo
  - Adição de tarefa ao sistema

## Validação da Estrutura Básica
### Teste com chaveamento de tarefas
#### Descrição
  Trata-se de um teste do sistema onde duas tarefas serão chaveadas, cada uma delas piscará determinados leds em períodos diferentes.
#### Resultado Esperado
  O tempo de piscada dos dois grupos de leds não deve interferir no tempo de piscada do outro grupo, de forma que as tarefas funcionarão de forma independente.
#### Forma de Análise
  Visualmente e visualiação de sinais através de osciloscópio.
#### Resultado Obtido
  - Descrever resultado obtido

### Teste de Troca de Microcontrolador
#### Descrição
  Trata-se de um teste onde o sistema será transferido para um microcontrolador diferente. Funcionalidade do sistema será igual a do teste anterior.
#### Resultado Esperado
  - Apenas módulos da camada mais baixa, com exceção do módulo "mcu", devem ser alterados.  
  - Sistema deve manter sua funcionalidade intacta.
#### Forma de Análise
  - Comparação dos dois códigos
  - Verificação da funcionalidade do sistema, assim como no teste anterior.
#### Resultado Obtido
  - Descrever resultado obtido.


# Conclusão e Trabalhos Futuros
## Conclusão
  - Efetividade técnicas utilizadas (Análise do resultado dos testes)
  - Aplicabilidade no Sistema Embarcado
  - Possibilidades geradas
  - Pontos negativos

## Trabalhos Futuros
  - Expansão da Estrutura de Software para Alcançar Funcionalidades
  - Adição de Comunicação Sem Fio
  - Adição de Armazenamento Removível

# Referências

<!-- -->