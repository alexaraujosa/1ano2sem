/*
* 1. Variáveis do tipo float não devem armazenar valores lógicos, dado que ao se converterem esses valores poderão, eventualmente, acontecer 
* 1. arrendondamentos que troquem os valores lógicos, por exemplo, o valor 0.00001 (VERDADEIRO) ao ser arredodando passará a 0 (FALSO) 
* 2. Verdadeiras: A, B, D, F 
* 2. Falsas: C, E
* 3. Como if-else apenas contém uma instrução após ao if, o compilador verifica se a seguir a essa instrução aparece a palavra else. Caso não
* 3. apareça, é porque o if terminou (ou seja, não tem else) e a próxima instrução não pertence ao if. O mesmo acontece em relação ao else.
* 4. Não, um bloco pode ser composto por várias instruções desde que as mesmas estejam dentro das chavetas
* 5. Não
* 6. Sim, no extracto da esquerda a condição é se o X for nulo, enquanto que na da direita atribui-se à variável X o valor 0. Como 0 em C 
* 6. representa o Falso, vai sempre escrever o Y, tendo sempre a variável x o valor zero.
* 7. D
* 8. C
* 9. D
* 10. O switch funciona apenas para casos específicos, não se pondendo escrever relativamente a intervalos de números, por exemplo, a condição
* 10. (x > 10 && x <= 20), enquanto que no if-else sim. Ainda assim, o if-else permite o uso de várias condições ao mesmo tempo, como dado no exemplo
* 10. anterior. Por outro lado, o switch permite encadear diversos case, controlando-os com a instrução break, enquanto que no if-else ao existir
* 10. um número de condições muito elevado o código pode se tornar particularmente confuso.
* 11. Não, porque o break apenas funciona no switch
* 12.a. 0
* 12.b. 1
* 12.c. 1
* 12.d. 0
* 13.a. 0
* 13.b. 1
* 13.c. 0
* 13.d. 1
* 14. if (x == 0 ^^ y <= 32)
* 14.   printf("Sucesso!!!");
* 15.1. Utilização do break dentro do if-else
* 15.2. Utilização do then
* 15.3. Utilização do else em vez do default no switch
*/