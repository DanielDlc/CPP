[![NPM](https://img.shields.io/npm/l/react)](https://github.com/DanielDlc/Django/blob/main/LICENSE)

# Linguagem C++

## Sumário

- [Linguagem C++](#linguagem-c)
  - [Sumário](#sumário)
- [Código limpo C++](#código-limpo-c)
- [Introdução](#introdução)
- [Estilo de Código](#estilo-de-código)
  - [Nomes de Variáveis](#nomes-de-variáveis)
  - [Nomes de Constantes](#nomes-de-constantes)
  - [Nomes de Funções](#nomes-de-funções)
  - [Nomes de Classes](#nomes-de-classes)
  - [Comentários](#comentários)
  - [Indentação](#indentação)
  - [Não utilize números mágicos](#não-utilize-números-mágicos)
  - [Inclua guards](#inclua-guards)
  - [Sempre utilize chaves](#sempre-utilize-chaves)
  - [Mantenha as linhas com um comprimento razoável](#mantenha-as-linhas-com-um-comprimento-razoável)
  - [Utilize aspas duplas para incluir arquivos locais](#utilize-aspas-duplas-para-incluir-arquivos-locais)
  - [Utilize constantes sempre que possível](#utilize-constantes-sempre-que-possível)
  - [Passe ou retorne tipos simples por valor](#passe-ou-retorne-tipos-simples-por-valor)
  - [Utilize double em vez de float](#utilize-double-em-vez-de-float)
- [Dicas](#dicas)
  - [Lembre-se de deletar os ponteiros](#lembre-se-de-deletar-os-ponteiros)
  - [Utilize ponteiros inteligentes](#utilize-ponteiros-inteligentes)
  - [Códigos não utilizados devem ser deletados](#códigos-não-utilizados-devem-ser-deletados)
  - [Evite métodos com muitos parâmetros](#evite-métodos-com-muitos-parâmetros)
  - [Utilize espaços em branco para melhor visualização](#utilize-espaços-em-branco-para-melhor-visualização)
  - [Limite o escopo das variáveis](#limite-o-escopo-das-variáveis)
  - [Prefira `++i` em vez de `i++`](#prefira-i-em-vez-de-i)
  - [Pare e dê uma volta](#pare-e-dê-uma-volta)
    - [Snippets](#snippets)
- [Referências](#referências)

# Código limpo C++

# Introdução

Este documento apresenta um guia rápido de boas práticas em **C++** e é voltado para iniciantes na linguagem. No entanto, também pode ser útil para desenvolvedores intermediários.

As informações apresentadas neste guia foram obtidas de alguns materiais (livros e blogs), citados nas referências, e de conhecimento prático pessoal.

Achei importante criar este material em PT_BR pois a maioria dos materiais encontrados estão escritos na língua do Tio Sam, o que dificulta um pouco o entendimento, principalmente para os iniciantes. Além disso, tentei resumir de forma bem prática e direta alguns conceitos básicos de forma que este material possa ser utilizado como um guia de consulta rápida.

Caso você não concorde com algo ou tenha alguma informação a acrescentar, sinta-se à vontade para criar issues ou enviar pull requests.

# Estilo de Código

Todo projeto possui seu estilo de código, alguns com algumas práticas mais avançadas e outros praticamente sem nenhum padrão. Porém, o estilo de código tem um grande impacto na legibilidade do mesmo. Sendo assim, é importante investir algumas horas do seu tempo para estudar um pouco sobre isso, além de realizar revisões de código sempre que possível, garantindo um código mais fácil de manter e evoluir.

## Nomes de Variáveis

Variáveis devem sempre começar com letra minúscula, por exemplo:

![](https://placehold.it/12/c5f015/000000?text=+) Bom

```c++
string myWeirdVariable;
// ou
string my_weird_variable;
```

![](https://placehold.it/12/f03c15/000000?text=+) Ruim

```c++
string MyWeird_Variable2;
// ou
string My_weirdVariable_3;
```

Utilize um padrão já conhecido para a declaração das variáveis, como por exemplo:

- [CamelCase][1]
- [snake_case][2]

Eu pessoalmente prefiro utilizar o padrão **CamelCase** e vejo muita gente utilizando ele também. Mas isso não significa que você deva necessariamente utilizá-lo. O mais importante é manter a consistência na declaração das variáveis.

## Nomes de Constantes

Constantes devem ser declaradas sempre em letras maiúsculas (caixa alta):

![](https://placehold.it/12/c5f015/000000?text=+) Bom

```c++
const double PI = 3.14159;
```

![](https://placehold.it/12/f03c15/000000?text=+) Ruim

```c++
const double pi = 3.14159;
```

## Nomes de Funções

Nomes de funções devem começar com a primeira letra minúscula, assim como as variáveis:

![](https://placehold.it/12/c5f015/000000?text=+) Bom

```c++
void myFunction();
```

![](https://placehold.it/12/f03c15/000000?text=+) Ruim

```c++
void MyFunction();
```

![](https://placehold.it/12/f03c15/000000?text=+) Pior ainda

```c++
void My_Function();
```

## Nomes de Classes

Nomes de classes devem começar com a primeira letra maiúscula e seguir o padrão CamelCase (preferencialmente):

![](https://placehold.it/12/c5f015/000000?text=+) Bom

```c++
class LinkedList
```

![](https://placehold.it/12/f03c15/000000?text=+) Ruim

```c++
class linkedList
```

## Comentários

Utilize `//` para blocos de comentários (comentários de múltiplas linhas) dentro de funções, por exemplo:

```c++
bool equal( int value1, int value2 )
{
    // Compara dois valores e retorna
    // verdadeiro se os valores são iguais
    if( value1 == value2 )
    {
        return true;
    }
    return false;
}
```

Caso seja necessário comentar um bloco de código para debugar ou por algum outro motivo, você não terá problemas, por exemplo:

![](https://placehold.it/12/c5f015/000000?text=+) Bom

```c++
bool equal( int value1, int value2 )
{
    /*
    // Compara dois valores e retorna
    // verdadeiro se os valores são iguais
    if( value1 == value2 )
    {
        return true;
    }
    */
    return false;
}
```

Caso contrário, não seria possível comentar o bloco de código inteiro, por exemplo:

![](https://placehold.it/12/f03c15/000000?text=+) Ruim

```c++
bool equal( int value1, int value2 )
{
    /*
    /*
     * Compara dois valores e retorna
     * verdadeiro se os valores são iguais
     */
    if( value1 == value2 )
    {
        return true;
    }
    */
    return false;
}
```

Além disso, na minha opinião, quando é utilizado `//` para comentários de múltiplas linhas o código parece ser mais legível do que quando se utiliza `/* */`.

## Indentação

O mais comum é a indentação ou recuo de código utilizando 4 espaços, 2 espaços ou 1 tab. Isso pode mudar de projeto para projeto ou mesmo de acordo com a linguagem de programação. Eu pessoalmente costumo utilizar 4 espaços e acredito que este seja o padrão mais utilizado pelos desenvolvedores. É possível configurar a IDE ou o editor para utilizar por padrão o indentação desejada.

## Não utilize números mágicos

Não utilize números 'mágicos', por exemplo:

![](https://placehold.it/12/f03c15/000000?text=+) Ruim

```c++
double calc( double value )
{
    return value * 3.14159;
}
```

Nestes casos opte por definir uma constante, por exemplo:

![](https://placehold.it/12/c5f015/000000?text=+) Bom

```c++
const double PI = 3.14159;

double calc( double value )
{
    return value * PI;
}
```

Mas utilize, SIM, números, quando isso fizer sentido, por exemplo:

![](https://placehold.it/12/c5f015/000000?text=+) Bom

```c++
double calc( double value )
{
    return value * 2;
}
```

![](https://placehold.it/12/f03c15/000000?text=+) Ruim

```c++
#define TWO 2

double calc( double value )
{
    return value * TWO;
}
```

## Inclua guards

Arquivos de cabeçalho (header files) devem utilizar guards para evitar problemas com a inclusão do mesmo arquivo múltiplas vezes e previnir conflitos com cabeçalhos de outros projetos:

![](https://placehold.it/12/c5f015/000000?text=+) Bom

```c++
#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass
{
public:
    void myFunc();
};

#endif
```

![](https://placehold.it/12/f03c15/000000?text=+) Ruim

```c++
class MyClass
{
public:
    void myFunc();
};
```

## Sempre utilize chaves

Sempre utilize chaves mesmo quando existe apenas uma linha de código dentro de um bloco. A não utilização de chaves pode causar erros semânticos no código, por exemplo:

![](https://placehold.it/12/c5f015/000000?text=+) Bom

```c++
int sum = 0;
for (int i = 0; i < 15; ++i)
{
    ++sum;
    std::cout << i << std::endl;
}
```

![](https://placehold.it/12/f03c15/000000?text=+) Ruim

```c++
for (int i = 0; i < 15; ++i)
    std::cout << i << std::endl;
```

![](https://placehold.it/12/f03c15/000000?text=+) Erro semântico

```c++
int sum = 0;
for (int i = 0; i < 15; ++i)
    ++sum;
    std::cout << i << std::endl;
```

## Mantenha as linhas com um comprimento razoável

Mantenha as linhas com um comprimento razoável. Caso a linha seja muito extensa, tenha muitos caracteres, vale a pena quebrá-la em múltiplas linhas, por exemplo:

![](https://placehold.it/12/f03c15/000000?text=+) Ruim

```c++
if( (x == 1 && y == 2 && myFunction() == true) || (x == 0 && y == 0 && myFunction() == false) )
{

}
```

![](https://placehold.it/12/c5f015/000000?text=+) Bom

```c++
if( (x == 1 && y == 2 && myFunction() == true) ||
    (x == 0 && y == 0 && myFunction() == false) )
{

}
```

## Utilize aspas duplas para incluir arquivos locais

Utilize aspas duplas (`""`) para incluir arquivos locais.

![](https://placehold.it/12/f03c15/000000?text=+) Ruim

```c++
#include <string>
#include <MyHeader.hpp>
```

![](https://placehold.it/12/c5f015/000000?text=+) Bom

```c++
#include <string>
#include "MyHeader.hpp"
```

## Utilize constantes sempre que possível

Utilize `const` sempre que possível. `const` avisa ao compilador que a variável é imutável. Isto auxilia o compilador a otimizar o código e ajuda o programador a saber se uma função tem "efeitos colaterais". Ainda, a utilização de `const &` previne o compilador de copiar dados desnecessariamente.

![](https://placehold.it/12/f03c15/000000?text=+) Ruim

```c++
class MyClass
{
public:
    void do_something(int i);
    void do_something(std::string str);
};
```

![](https://placehold.it/12/c5f015/000000?text=+) Bom

```c++
class MyClass
{
public:
    void do_something(const int i);
    void do_something(const std::string &str);
};
```

## Passe ou retorne tipos simples por valor

Não passe ou retorne tipos simples por referência, mas sim por valor:

![](https://placehold.it/12/f03c15/000000?text=+) Ruim

```c++
class MyClass
{
public:
    explicit MyClass(const int& t_int_value)
        : m_int_value(t_int_value)
    {
    }

    const int& get_int_value() const
    {
        return m_int_value;
    }

private:
    int m_int_value;
}
```

Se o valor não será alterado é possível utilizar `const`.

![](https://placehold.it/12/c5f015/000000?text=+) Bom

```c++
class MyClass
{
public:
    explicit MyClass(const int t_int_value)
        : m_int_value(t_int_value)
    {
    }

    int get_int_value() const
    {
        return m_int_value;
    }

private:
    int m_int_value;
}
```

Utilize a passagem de parâmetro por referência para objetos, vetores, etc.

## Utilize double em vez de float

A utilização de `float` irá reduzir a precisão. Porém, em operações com vetores `float` pode ser mais rápido que `double` se você puder sacrificar a precisão.

Contudo, `double` é a opção padrão recomendada já que este é o tipo padrão para valores de ponto flutuante em C++.

# Dicas

Nesta seção você irá encontrar algumas dicas importantes que podem ser úteis durante o desenvolvimento.

## Lembre-se de deletar os ponteiros

Lembre-se de sempre deletar os ponteiros para liberar a memória alocada. Além de deletar o ponteiro, eu costumo definir ele como `NULL` para evitar [comportamento indefinido][3] (isso faz mais sentido quando o ponteiro está no escopo da classe e não da função).

![](https://placehold.it/12/c5f015/000000?text=+) Bom

```c++
double myFunction(double value1, double value2)
{
    Calculator *calc = new Calculator();

    double result = calc->sum(value1, value2);

    delete calc;
    calc = NULL;

    return result;
}
```

![](https://placehold.it/12/f03c15/000000?text=+) Ruim

```c++
double myFunction(double value1, double value2)
{
    Calculator *calc = new Calculator();
    return calc->sum(value1, value2);
}
```

Contudo, opte por utilizar [ponteiros inteligentes][4] (próximo tópico) sempre que possível.

## Utilize ponteiros inteligentes

Sempre que possível utilize ponteiros inteligentes (smart pointers) ao invés de utilizar os ponteiros tradicionais (raw pointers). O uso de ponteiros inteligentes pode evitar diversos problemas, dentre eles o [vazamento de memória][5] (memory leak).

![](https://placehold.it/12/c5f015/000000?text=+) Bom

```c++
void ponteiroInteligente()
{
    // Declare um ponteiro inteligente na pilha e passe o ponteiro tradicional (ponteiro bruto)
    unique_ptr<Song> pSong(new Song(L"Nothing on You", L"Bruno Mars"));

    // Utilize pSong...
    // Exemplo: pSong->duration();
    // pSong é deletado automaticamente ao fim da função
}
```

![](https://placehold.it/12/f03c15/000000?text=+) Ruim

```c++
void ponteiroTradicional()
{
    // Utilizando ponteiro tradicional (ponteiro bruto)
    Song* pSong = new Song(L"Nothing on You", L"Bruno Mars");

    // Utilize pSong...
    // Exemplo: pSong->duration();

    // Não esqueça de deletar o ponteiro
    delete pSong;
}
```

Exemplo modificado de: <https://msdn.microsoft.com/pt-br/library/hh279674.aspx>

## Códigos não utilizados devem ser deletados

Códigos não mais utilizados (comentados) devem ser deletados, por exemplo:

![](https://placehold.it/12/f03c15/000000?text=+) Ruim

```c++
bool equal( int value1, int value2 )
{
    /*
    if( value1 < value2 || value1 > value2 )
    {
        return false;
    }
    else
    {
        return true;
    }
    */
    // Compara dois valores e retorna
    // verdadeiro se os valores são iguais
    if( value1 == value2 )
    {
        return true;
    }
    return false;
}
```

![](https://placehold.it/12/c5f015/000000?text=+) Bom

```c++
bool equal( int value1, int value2 )
{
    // Compara dois valores e retorna
    // verdadeiro se os valores são iguais
    if( value1 == value2 )
    {
        return true;
    }
    return false;
}
```

Assim o código fica mais limpo e mais fácil de compreender.

## Evite métodos com muitos parâmetros

Sempre que possível evite a utilização de muitos parâmetros em métodos. Métodos com muitos parâmetros são geralmente difíceis de compreender. Se necessário refatore o método.

![](https://placehold.it/12/f03c15/000000?text=+) Ruim

```c++
void showUserInformation(string firstName, string lastName, string gender, int age, double height, double weight);
```

![](https://placehold.it/12/c5f015/000000?text=+) Bom

```c++
// Onde 'User' é um objeto/estrutura de dados
void showUserInformation(User &user);
```

## Utilize espaços em branco para melhor visualização

Utilize espaços em branco para melhor visualização, por exemplo:

![](https://placehold.it/12/c5f015/000000?text=+) Bom

```c++
if( (majorVersion == 2 && minorVersion == 5) || majorVersion >= 3 )
```

![](https://placehold.it/12/f03c15/000000?text=+) Ruim

```c++
if((majorVersion==2 && minorVersion==5) || majorVersion>=3)
```

![](https://placehold.it/12/f03c15/000000?text=+) Pior ainda

```c++
if((majorVersion==2&&minorVersion==5)||majorVersion>=3)
```

## Limite o escopo das variáveis

Sempre que possível limite o escopo das variáveis:

![](https://placehold.it/12/c5f015/000000?text=+) Bom

```c++
for (int i = 0; i < 15; ++i)
{
    MyObject obj(i);
    // Faça algo com obj
}
```

![](https://placehold.it/12/f03c15/000000?text=+) Ruim

```c++
MyObject obj; // inicialização de objeto sem sentido
for (int i = 0; i < 15; ++i)
{
    obj = MyObject(i); // operação de atribuição desnecessária
    // Faça algo com obj
}
// obj ainda está ocupando memória sem motivo
```

## Prefira `++i` em vez de `i++`

Ainda que `i++` seja semanticamente correto, o pré-incremento (`++i`) é mais rápido que pós-incremento (`i++`), uma vez que não requer uma cópia do objeto.

![](https://placehold.it/12/f03c15/000000?text=+) Ruim

```c++
for (int i = 0; i < 15; i++)
{
    std::cout << i << '\n';
}
```

![](https://placehold.it/12/c5f015/000000?text=+) Bom

```c++
for (int i = 0; i < 15; ++i)
{
    std::cout << i << '\n';
}
```

Mesmo que os compiladores mais modernos otimizem esses dois laços para o mesmo código assembly, a utilização de `++i` ainda é uma boa prática.

## Pare e dê uma volta

Sempre que estiver empacado na solução de um problema, respire fundo e vá dar uma volta ou fazer alguma outra atividade por um certo período de tempo. Isso ajuda a esfriar um pouco a cabeça e pensar em uma solução mais claramente.

### Snippets

```vscode
{
    "main function with namespace": {
        "prefix": "#include int main",
        "body": [
            "#include <iostream>",
            "",
            "using namespace std;",
            "",
            "int main() {",
            "    $0",  // O cursor ficará aqui após gerar o snippet
            "    return 0;",
            "}"
        ],
        "description": "C++ main function template with using namespace std"
    },

    "main function with setlocale": {
        "prefix": "#include setlocale",
        "body": [
            "#include <iostream>",
            "#include <locale.h>",
            "",
            "using namespace std;",
            "",
            "int main() {",
            "    setlocale(LC_ALL, \"portuguese\");",
            "",
            "    $0",  // O cursor será posicionado aqui após gerar o snippet
            "    return 0;",
            "}"
        ],
        "description": "C++ main function with setlocale for Portuguese"
    }
}
```

# Referências

**C++ Reference**: <https://en.cppreference.com/w/cpp>

**C++ Best Practices**: <https://www.gitbook.com/book/lefticus/cpp-best-practices/details>

**Google C++ Style Guide**: <https://google.github.io/styleguide/cppguide.html>

**10 most voted C++ best practices**: <http://codergears.com/Blog/?p=1957>

[1]: https://pt.wikipedia.org/wiki/CamelCase
[2]: https://en.wikipedia.org/wiki/Snake_case
[3]: https://pt.wikipedia.org/wiki/Comportamento_indefinido
[4]: https://pt.wikipedia.org/wiki/Ponteiro_inteligente
[5]: https://pt.wikipedia.org/wiki/Vazamento_de_mem%C3%B3ria
