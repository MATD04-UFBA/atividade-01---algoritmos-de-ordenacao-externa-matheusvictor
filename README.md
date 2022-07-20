# **Atividade 01 - Algoritmos de Ordenação Externa**

## **Sobre este repositório:**

Este repositório é dedicado ao exercício de simulação de ordenação externa. Essa atividade faz parte do componente de Estruturas de Dados (MATD04) durante o semestre 2022.1, na UFBA.

-----
## **Motivação:**

Em diversas situações do mundo real, a quantidade de dados a ser analisada e processada pode não caber na memória principal do computador. Nesses casos, se faz necessário o uso de algoritmos que utilizem memória externa para o processamento. A capacidade de armazenamento de dispositivos de memória externa supera a capacidade da memória principal em algumas ordem de grandeza. 

-----
## **Algoritmos de Ordenação:**

Em computação, é comum lidarmos com dados desordenados, quando na verdade, preferíamos que tais dados apresentassem algum critério de ordenação (ordenados de forma crescente ou decrescente, por exemplo), pois isso pode facilitar a manipulação e pesqquisa dos mesmos. Em outras palavras, a ordenação de dados pode facilitar e acelerar o processo de pesquisas de informações contidas em um conjunto de dados.

É importante pontuar que existem diversos algoritmos cujo o intuito é ordenar um conjunto de informações, sendo alguns deles:

- por troca;
- por seleleção;
- por inserção.

Cada algoritmo de ordenação possui seu mérito, mas a depender a situação, cada um deles pode apresentar diferentes graus de eficiência. É comum avaliarmos da seguinte forma: pensar em que velocidade ele pode ordenar as informações no casos médios, piores e melhores. 

***Observação:*** em algoritmos de ordenação, consideramos que: 

- Comparação: ocorre quando um elemento da matriz, por exemplo, é comparado a outro;
- Troca: ocorre quando dois elementos na martiz ocupam um o lugar do outro.

### **Complexidades de algoritmos de ordenação:**

Esse gráfico representa as comparações de eficiência entre diferentes algoritmos de complexidade. Como vimos na seção anterior, o Merge Sort apresenta complexidade O(n∗logn); o que apresenta uma considerável melhora se comparado aos algoritmos de complexidade quadrática.

![Complexidade dos algoritmos de ordenação](https://res.cloudinary.com/practicaldev/image/fetch/s--u5FI10Fg--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://thepracticaldev.s3.amazonaws.com/i/9f7ruqkkz9xl0937b1nf.png)
###### Fonte: https://dev.to/danielle8farias/complexidade-de-algoritmos-notacao-big-o-26al
### **Algoritmo de ordenação utilizado: Merge Sort**

Merge Sort é um algoritmo eficiente de ordenação por **divisão e conquista**. Isto é, a estratégia adotada consiste em dividir o conjunto a ser ordenado em N partes até que cada uma das N partes corresponda a cojuntos unitários e, portanto, ordenados. Feito isso, é comparado cada um desses conjuntos unitários entrei si para que cada um seja inserido na posição correta, conforme Figura 1.

![Complexidade dos algoritmos de ordenação](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e6/Merge_sort_algorithm_diagram.svg/300px-Merge_sort_algorithm_diagram.svg.png) 
###### Figura 1. Representação do Merge Sort em diagrama. Fonte: Wikipédia. Disponível em: <<https://en.wikipedia.org/wiki/Merge_sort>>


De acordo com [3]:

> No caso do Merge Sort, uma característica importante é que sua eficiência é n∗logn para o melhor, pior e para o caso médio. Ou seja, ele não é somente Ω(n∗logn), mas é Θ(n∗logn). Isso nos dá uma garantia de que, independente da disposição dos dados em um array, a ordenação será eficiente."

Considerando o que foi dito, nesta atividade, o algoritmo adotado para simulação da ordenação o Merge, justamente por não sabermos a quantidade de itens a serem ordenados (neste caso, elementos de um arranjo).

Seu repositório deve conter um arquivo README  com a documentação da solução adotada, destacando a complexidade do seu algoritmo e os resultados de alguns experimentos com variações nos parâmetros do algoritmo e no conjunto de dados

-----
## ***(WIP)*** **Estratégia adotada para solucionar a atividade:**

Para simular o problema proposto, a ideia consistiu em gerar um arranjo (``vector``) com N elementos, sendo este maior que a constante `CAPACIDADE_MEMORIA`, onde esta última representaria a quantidade de informações (neste caso, números inteiros) que poderiam ser processadas por vez.

A divisão do número de elementos com `CAPACIDADE_MEMORIA` representaria, por sua vez, a quantidade de "blocos de processamento" onde o Merge Sort (algoritmo de ordenação adotado) seria aplicado.

-----
## **Materiais consultados para desenvolver a solução:**

#### Para entender um pouco mais sobre Classes:

- [1] [Definição e uso de classes](https://homepages.dcc.ufmg.br/~rodolfo/aedsi-2-10/Classes/classe.html) (Vídeo no YouTube)

#### Para entender um pouco melhor sobre modularização e Classes em arquivos separados:

- [2] [#17 Introdução ao C++ / Classes em Arquivos Separados](https://www.youtube.com/watch?v=jrhofSNMalY&list=PLrOyM49ctTx9ZSF7W5y14ikyiZjLqWvx5&index=66) (Vídeo no YouTube)

#### Para entender um pouco melhor sobre o *Merge Sort*:

- [3] [Estruturas de Dados e Algoritmos: Ordenação por Comparação: Merge Sort](https://joaoarthurbm.github.io/eda/posts/merge-sort/)
- [4] [C++ Merge Sort Vector](https://slaystudy.com/c-merge-sort-vector/) (Material em inglês)
- [5] [Merge Sort In C++ With Examples](https://www.softwaretestinghelp.com/merge-sort/) (Material em inglês)
- [6] [Merge Sort | Geeks for Geeks](https://www.geeksforgeeks.org/merge-sort/) (Material em inglês)
- [7] [Merge Sort Algorithm](https://www.programiz.com/dsa/merge-sort) (Material em inglês)
- [8] [Como fazer Merge Sort em Java - Canal do Código](https://www.youtube.com/watch?v=yj8igr9DjeY)
- [9] [Complexidade de algoritmos - Notação Big O](https://dev.to/danielle8farias/complexidade-de-algoritmos-notacao-big-o-26al)

#### Para saber mais sobre manipulação de arquivos de texto externos:

- [10] [Curso de C++ #50 - Operações com arquivos (ofstream) - Parte 1](https://www.youtube.com/watch?v=0ciLhd1oZc0) (Vídeo no YouTube)
- [11] [Curso de C++ #51 - Operações com arquivos (ifstream) - Parte 2](https://www.youtube.com/watch?v=Tczymt0OkYo)
- [12] [Converting an int to std::string](https://stackoverflow.com/questions/4668760/converting-an-int-to-stdstring)

-------

[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=7648401&assignment_repo_type=AssignmentRepo)