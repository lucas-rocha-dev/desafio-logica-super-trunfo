# Super Trunfo - Cidades 🏙️

Este é um jogo estilo Super Trunfo implementado em C que permite comparar cartas de cidades com base em diferentes atributos.

## 📋 Descrição

O jogo permite cadastrar duas cartas de cidades e compará-las usando diferentes atributos através de um menu interativo. Cada carta possui informações como população, área, PIB e pontos turísticos, além de calcular automaticamente a densidade populacional e o PIB per capita.

## 🎮 Como Jogar

1. Execute o programa
2. Cadastre as informações da primeira cidade:
   - Estado
   - Código
   - Nome da cidade
   - População
   - Área
   - PIB
   - Quantidade de pontos turísticos
3. Cadastre as informações da segunda cidade
4. Escolha um atributo para comparação através do menu
5. O programa mostrará qual cidade venceu na comparação

## 🎯 Atributos Disponíveis

1. População
   - Vence a cidade com maior população
2. Área
   - Vence a cidade com maior área
3. PIB
   - Vence a cidade com maior PIB
4. Pontos Turísticos
   - Vence a cidade com mais pontos turísticos
5. Densidade Populacional
   - Vence a cidade com menor densidade populacional
6. PIB Per Capita
   - Vence a cidade com maior PIB per capita

## ⚙️ Compilação e Execução

Para compilar e executar o programa, siga os passos abaixo:

```bash
# Compile o programa
gcc logicaSuperTrunfo.c -o logicaSuperTrunfo

# Execute o programa
./logicaSuperTrunfo
```

## 🔍 Exemplo de Uso

```
Digite o Estado da primeira carta:
S
Digite o código da primeira carta:
SP1
Digite a cidade da primeira carta:
SaoPaulo
Digite a população da primeira cidade:
12000000
Digite a area da primeira cidade:
1521
Digite o PIB da primeira cidade:
700000000
Digite a quantidade de pontos turisticos da primeira cidade:
50

[... cadastro da segunda cidade ...]

---> Selecione o atributo para comparar as cartas: <---
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Populacional
6 - PIB Per Capita

[Digite sua escolha]
```

## 🛠️ Requisitos do Sistema

- Compilador GCC
- Sistema operacional compatível com C (Windows, Linux, macOS)

## 📝 Notas

- O programa utiliza estruturas de controle switch para o menu interativo
- Implementa verificações de empate para todos os atributos
- A densidade populacional é calculada automaticamente (População/Área)
- O PIB per capita é calculado automaticamente (PIB/População)
- Inclui tratamento para opções inválidas no menu

## 👨‍💻 Desenvolvido por

Lucas Rocha
