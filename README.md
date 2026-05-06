# Estrutura de Dados — Lista de Exercícios (Aulas 2 e 3)

Exercícios básicos e de fixação em linguagem C, da disciplina de Estrutura de Dados do curso de ADS — Centro Universitário Jorge Amado (UNIJORGE). Professor: Sidney Doria.

---

## Como compilar

```bash
gcc exercicio.c -o exercicio -lm
./exercicio
```

> A flag `-lm` é necessária nos exercícios que usam `<math.h>` (sqrt, pow).

---

## Exercícios Básicos (1–29)

| # | Descrição |
|---|-----------|
| 1 | Imprime os 5 primeiros números naturais |
| 2 | Imprime os 5 primeiros números negativos |
| 3 | Lê dois números e imprime a soma |
| 4 | Lê dois números e imprime a multiplicação |
| 5 | Lê um número e imprime seu sucessor |
| 6 | Lê um número e imprime sua raiz quadrada |
| 7 | Lê um número e imprime seu quadrado |
| 8 | Lê dois inteiros e imprime A^B e B^A |
| 9 | Lê dois inteiros e imprime o resto da divisão |
| 10 | Lê dois inteiros e imprime o quociente inteiro |
| 11 | Lê 5 valores e conta positivos, negativos e zeros |
| 12 | Se o número for par, imprime os 10 próximos pares |
| 13 | Lê um número e imprime 5 sucessores |
| 14 | Algoritmo ECO: lê e imprime 5 números imediatamente |
| 15 | Calcula a média aritmética de 5 notas |
| 16 | Lê a idade de 3 pessoas e imprime a média |
| 17 | Lê os catetos de um triângulo e calcula a hipotenusa |
| 18 | Imprime a tabuada do 4 |
| 19 | Lê 5 números e conta quantos são positivos |
| 20 | Lê 10 números e conta pares e ímpares |
| 21 | Multiplica dois inteiros via soma sucessiva |
| 22 | Imprime tabuada de qualquer número com opção de continuar |
| 23 | Pesquisa de altura/sexo: maior, menor, média mulheres, percentual |
| 24 | Calcula o somatório S = 50/1 + 49/2 + ... + 1/50 |
| 25 | Calcula a área total de uma residência por cômodos |
| 26 | Desenha triângulo numérico até a n-ésima linha |
| 27 | Calcula raiz quadrada de quadrados perfeitos via ímpares consecutivos |
| 28 | Pesquisa com 50 pessoas: médias, percentuais por sexo e altura |
| 29 | Sistema de hotel com desconto por diárias e relatório de hóspedes |

---

## Exercícios de Fixação (30–52)

| # | Descrição |
|---|-----------|
| 30 | Tabuada de um número entre 0 e 9 |
| 31 | Gasto total de um fumante ao longo dos anos |
| 32 | Comprimento de um círculo dado o raio |
| 33 | Área de um círculo dado o raio |
| 34 | Volume de uma esfera dado o raio |
| 35 | Volume de um cilindro dado raio e altura |
| 36 | Quantidade de lâmpadas necessárias para iluminar um cômodo |
| 37 | Consumo e custo de viagem por odômetro e litros |
| 38 | Salário líquido de funcionário com horas e dependentes |
| 39 | Custo ao consumidor de um carro (distribuidor + impostos) |
| 40 | Calcula D = (R + S) / 2 onde R = (A+B)² e S = (B+C)² |
| 41 | Salário de vendedor com fixo + comissão por carro + % das vendas |
| 42 | Converte temperatura de Celsius para Fahrenheit |
| 43 | Converte temperatura de Fahrenheit para Celsius |
| 44 | Escala de 0°C a 50°C com equivalente em Fahrenheit |
| 45 | Soma dos elementos de uma PA (razão, primeiro e último termo) |
| 46 | Distância euclidiana entre dois pontos no plano |
| 47 | Salário de 1200 funcionários com comissão por faixa de produtos |
| 48 | Distância total e altura no n-ésimo salto de uma bola |
| 49 | Pesquisa de uso do restaurante universitário com percentuais |
| 50 | Jogo de adivinhação com 4 tentativas |
| 51 | Desenha retângulo de `*` com limites de 1 a 20 |
| 52 | Pesquisa salarial com IR, média de idade de acidentados e total líquido |

---

## Conceitos abordados

- Entrada e saída (`scanf`, `printf`)
- Estruturas de repetição (`for`, `while`, `do-while`)
- Estruturas de decisão (`if`, `else`)
- Operadores aritméticos e lógicos
- Funções matemáticas (`sqrt`, `pow`) via `<math.h>`
- Funções com parâmetros
- Acumuladores, contadores e flags
- Médias, percentuais e somatórios
