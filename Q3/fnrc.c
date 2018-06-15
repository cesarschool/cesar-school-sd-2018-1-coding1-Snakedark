#include <stdio.h>
/**
 * Escreva uma função que encontra a primeira letra que não se repete em uma
 * sentença.
 * Função: char firstNonRepeatingChar(char[] sentence, int length)
 * Input:
 * - sentence: array não nulo de letras, formado apenas por ASCII em minúsculo.
 * - length: tamanho do array - número de caracteres
 * Output: A primeira letra que não se repete, ou -1, caso todas se repitam.
 */
char firstNonRepeatingChar (char sentence[], int length)
{
    printf("\nfirstNonRepeatingChar::START: %s, %d\n", sentence, length);
    int count = 0;
    for (int i = 0; i < length; i++){
      count = 0;
      for (int t = i + 1; t < (length - 1); t++){
        if (sentence[i] == sentence[t]){
          count += 1;
          break;
        }
      }

      if (count == 0){
        printf("%c", sentence[i]);
        return sentence[i];
      }
    }


    printf("\nfirstNonRepeatingChar::END\n");


    return -1;
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");

    firstNonRepeatingChar("ovo", 3);
    firstNonRepeatingChar("cesar school", 12);
    firstNonRepeatingChar("sistemas digitais", 17);

    return 0;
}
