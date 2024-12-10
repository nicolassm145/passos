# Caminhada Aleatória

## Descrição

Este programa é uma simulação em C que calcula a distância média percorrida em uma caminhada aleatória bidimensional, com diferentes números de passos. A partir de simulações repetidas, os resultados são exportados para um arquivo CSV, permitindo análise gráfica ou estatística.

## Estrutura do Código

O código é organizado em duas funções principais:
1. **`DistanciaCaminhada`**: Simula uma caminhada aleatória de um ponto inicial (0, 0), calculando a distância euclidiana do ponto final até a origem após um número fixo de passos.
2. **`mediaDistanciaCaminhada`**: Realiza múltiplas simulações de caminhadas para calcular a distância média percorrida.

A simulação executa diferentes números de passos, de 1 até 100, e salva as distâncias médias em um arquivo CSV para análise posterior.

## Como Executar

1. **Clone o repositório** para sua máquina local:
   ```bash
   git clone https://github.com/nicolassm145/random-walk.git
   cd random-walk
   ```

2. **Compile o código-fonte**:
   ```bash
   gcc random_walk.c -o random_walk -lm
   ```

3. **Execute a simulação**:
   ```bash
   ./random_walk
   ```

4. **Análise dos Resultados**:
   - O programa gera um arquivo chamado `distancias.csv` contendo duas colunas:
     - **Passos**: Número de passos realizados.
     - **Distancia Media**: Distância média da origem calculada após múltiplas simulações.
   - O arquivo pode ser importado para ferramentas como Excel, Python (pandas), ou R para visualização gráfica e análise.

## Funcionalidades

- **Simulação de Caminhadas**: Caminhadas aleatórias bidimensionais com direções igualmente prováveis.
- **Cálculo de Distância Euclidiana**: Determina a distância entre o ponto final da caminhada e a origem.
- **Repetições para Precisão**: Realiza múltiplas simulações para obter uma média estatisticamente confiável.
- **Exportação de Dados**: Salva os resultados em formato CSV para análise externa.

## Créditos
Este projeto foi desenvolvido por:

<table>
  <tr>
    <td align="center">
      <a href="https://github.com/nicolassm145">
        <img src="https://avatars.githubusercontent.com/u/131420329?v=4" alt="Nícolas de Souza Moreira" style="width: 150px"><br>
        <p><strong>Nícolas de Souza Moreira</strong></p>
      </a>
    </td>
    <td align="center">
      <a href="https://github.com/flp-gregorio">
        <img src="https://avatars.githubusercontent.com/u/113314823?v=4" alt="Felipe Alves Gregorio" style="width: 150px"><br>
        <p><strong>Felipe Alves Gregorio</strong></p>
      </a>
    </td>
  </tr>
</table>

## Considerações Finais

Este programa demonstra o conceito de caminhadas aleatórias de forma prática, com possibilidades de expansão para diferentes dimensões ou probabilidades de direção. Contribuições e melhorias são bem-vindas!
