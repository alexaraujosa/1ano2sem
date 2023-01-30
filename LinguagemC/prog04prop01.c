/*
* 1. Verdadeiras: 1.1 | 1.3 | 1.5 | 1.6 | 1.10 | 1.12 | 1.13 | 1.14 | 1.17 | 1.19 | 1.20   
* 1. Falsas: 1.2 | 1.4 | 1.7 | 1.8 | 1.9 | 1.11 | 1.15 | 1.16 | 1.18 
* 2. 
   condição = Verdade;
   while (condição)
     instrução;
* 3. 
   inic;
   while (condição)
   { instrução;
     pós-instrução;
   }
* 4. 
   for( ; condição ; )
        instrução;
* 5. Nenhuma, o ciclo simplesmente acaba e o programa prossegue para a instrução seguinte.
* 6. while -> É necessário atualizar as variáveis de controlo do ciclo antes de utilizar a instrução continue, sendo que esta termina a instrução
* 6. do ciclo, passando a execução para a avaliação da condição.
* 6. for -> Termina a execução da instrução, sendo em seguida executada a componente pós-instrução do ciclo
* 7. while (i <= 20)
    { if i == 10 
                continue;
            else
                printf("%d", i);
    i++;
    }

* 13. Em x = ++i, a variável x assume logo o valor de i incrementado. Por outro lado, x = i++, apensa depois de realizar a instrução seguinte é que
* 13. será incrementada o valor da variável.
* 14. Sim, dado que se trata de uma variável isolada.
* 15. Não, estes operadores só podem ser utilizados em variáveis.
* 16. a= -2 significa que a variável a tem valor -2, enquanto que a -=2 equivale a: a = a - 2
* 17. Trata-se de um ciclo infinito, cujo output será ... ... ... (...)
* 18. No extracto da esquerda, a variável é incrementada após a primeira instrução, apesar de não existir qualquer output, enquanto que no da direita, 
* 18. a variável é escrita com o seu valor já incrementado.
* 19. Escreve o valor de i = 201, dado que a instrução do ciclo é vazia (note-se o espaço a seguir há pós-instrução)
* 20. Ciclo 1: 20 vezes || Ciclo 2: 10 vezes || Ciclo 3: 41 vezes || Ciclo 4: 50 vezes
* 21. 6  10  7
      5  90  8
      6  0   8
      6  -1  -1
      6  -1  0
      6  -1  0
      6  -1  6
*/