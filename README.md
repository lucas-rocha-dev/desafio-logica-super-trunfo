# Super Trunfo - Cidades 🏙️

Este projeto implementa uma versão do jogo **Super Trunfo** em linguagem C, onde duas cidades são cadastradas e comparadas usando **dois atributos escolhidos pelo jogador**.  
O programa utiliza menus dinâmicos, cálculos automáticos e exibe o resultado final da comparação.

---

## 📋 Descrição Geral

O programa permite:

- Cadastrar duas cartas de cidades  
- Calcular automaticamente:
  - **Densidade Populacional** (População / Área)
  - **PIB per Capita** (PIB / População)
- Escolher **2 atributos diferentes** para comparação
- Exibir o resultado de cada atributo individualmente
- Calcular e mostrar o **resultado final**, somando os **valores** dos atributos escolhidos para cada cidade

A comparação segue as regras do Super Trunfo, exceto no caso de densidade populacional, onde **vence o menor valor**.

---

## 🎮 Como Jogar

1. Execute o programa.
2. Preencha os dados da **primeira cidade**:
   - Estado  
   - Código  
   - Nome da cidade  
   - População  
   - Área  
   - PIB  
   - Pontos turísticos  
3. Preencha os dados da **segunda cidade** da mesma forma.  
4. Escolha o **primeiro atributo** para comparar.  
5. O menu do **segundo atributo será dinâmico**, removendo a opção já escolhida.  
6. O programa exibirá:
   - Resultado do primeiro atributo (quem venceu ou se houve empate)  
   - Resultado do segundo atributo (quem venceu ou se houve empate)  
   - **Soma dos valores** dos atributos para cada cidade  
   - A cidade vencedora com base na soma (ou mensagem de empate final)  

---

## 🎯 Atributos Disponíveis

Os mesmos atributos estão disponíveis para ambas as escolhas, exceto que o segundo menu remove o atributo já selecionado:

1. **População**  
   ✔ Maior vence  

2. **Área**  
   ✔ Maior vence  

3. **PIB**  
   ✔ Maior vence  

4. **Pontos Turísticos**  
   ✔ Maior vence  

5. **Densidade Populacional**  
   ✔ *Menor vence*  

6. **PIB per Capita**  
   ✔ Maior vence  

---

## 🔄 Como funciona a comparação de dois atributos (comportamento do código)

Após escolher os dois atributos, **o programa soma os valores numéricos** desses atributos para cada cidade e compara as somas:

- Para cada atributo escolhido, o valor daquele atributo é adicionado à soma respectiva da cidade (por exemplo, se o atributo for população, soma recebe o número de habitantes).
- **A cidade com a maior soma total vence**.
- Se as somas finais forem iguais, o programa exibe **"Empate!"**.

---

## ⚙️ Compilação e Execução

Para compilar e executar:

```bash
gcc logicaSuperTrunfo.c -o logicaSuperTrunfo
./logicaSuperTrunfo
