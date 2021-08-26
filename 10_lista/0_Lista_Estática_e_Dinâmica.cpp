                    // - Lista Estática -
/* 

Lista Estática será utilizada arrays como base!
contruída em cima de um array
[][][][][][][]
0 1 2 3 4 5 6

 precisaremos de duas struct
 1° contruir o controlador
 2° guardar o elemento 

 Também precisaremos de funções para controlar inserção, remoção e busca.

 uma lista com sete elementos, caso tenha mais um produto, precisa ser inserido
 na posição Zero.
 exemplo:
 produtos ->    [ultimo elemento][][][][1°][2°][3°][4°] não posso criar outro [].
 posição  ->        0            1 2 3  4   5   6   7
 O controlador é responsável pela posição. exemplo acima foi de um array circular.

*/


                    // - Lista Dinâmica -
/*

Lista Dinâmica será utilizado ponteiros como base!

Contruída em cima de ponteiro
precisaremos de duas struct
1° controlador
2° elemento

    Lista Dinâmica pode ser:
Encadeada              ->   [] -> [] -> []  O elemento sabe o próximo e o próximo sabe o próximo. 

Duplamente Encadeada   ->  [] -> <- [] -> <- []
Duplamente Encadeada   ->  O elemento sabe o próximo e o anterior. sabe ir para frente e para tràs.

Struct Elemento, vai precisar de um ou dois ponteiros, para guardar o outro elemento da lista.
Struct Elemento vai precisar ter,
Elemento: com nome "Produto"
String:   para guardar o nome
Inteiro:  para guardar a quantidade
ponteiro: produto para falar o próximo
ponteiro: outro produto para falar anterior

*/