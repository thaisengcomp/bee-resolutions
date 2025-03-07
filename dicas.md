# Dicas
Alguns erros comuns podem causar comportamentos inesperados. Aqui estão algumas dicas para solucionar os problemas mais simples.

## Gerais
+ Verifique se as bibliotecas foram inseridas corretamente, bem como ponto e vírgulas, parênteses e chaves.
+ Variáveis não inicializadas contêm lixo de memória, o que pode levar ao comportamento inesperado de um programa. Inicialize-os corretamente (atenção especial aos códigos com **estruturas de repetição**).
+ A utilização do `&` é essencial na leitura de alguns tipos de dados, enquanto na saída é necessário em apenas alguns casos (como acessar o **endereço de memória** de uma variável). Saídas inesperadas podem estar relacionadas a isso.

## Laços de Repetição
+ Verificar se a condição de parada foi desenvolvida corretamente, caso contrário pode levar a loops infinitos.
+ Se você souber a quantidade de casos de teste, o melhor a se usar pode ser o `for`; caso contrário, o `while` deve funcionar.
+ Em casos de operações com variáveis, lembre-se de zerar ou somar o conteúdo do teste anterior, dependendo do que foi pedido.

## Arrays e matrizes
+ Se certifique de que não haja lixo de memória nos vetores. 
+ Acesso a índices inexistentes causam problemas na execução do programa.

## Strings
+ Uso de `getchar()` em lugar indevido. Com a leitura de caracteres simples seguidos de texto (strings), é necessário limpar o buffer de entrada no lugar correto - como, por exemplo, dentro de um laço de repetição que lê textos depois de um determinado caractere. A utilização incorreta pode levar a comportamentos indeterminados (como interromper a entrada de dados no programa).

## Time Limit Exceeded
+ Em casos de TLE em exercícios de `while` (geralmente com a condição de parada sendo `EOF`), o problema pode ser o `scanf` do lado de fora do laço. Se esse for o caso, experimente inverter a ordem:
Ao invés de (exemplo):
```
scanf("%d", &n_pal);

    while(n_pal != EOF){}
```
experimente colocar:
```
while(scanf("%d", &n_pal) != EOF){}
```
> resolução do problema "Navegador Web": [Beecrowd 2635](https://judge.beecrowd.com/pt/problems/view/2635) [[Solução](ini-codes/2635.c)]
Também pode ocorrer com a situação contrária, sendo o erro o `scanf` no interior do `while`.

## Runtime Error
+ Geralmente ocorre por acessos indevidos a índices do vetor, sendo ele unidimensional ou matriz, como em exercícios de Fibbonacci. Se precisa interagir um índice com o próximo, lembre-se de que a última posição do vetor não poderá ser somada ao sucessor, já que ele não existe. O mesmo vale quando deve-se interagir com a posição anterior, em que o <ins>primeiro índice</ins> não possui antecessor. 