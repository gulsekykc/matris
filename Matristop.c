#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define SAT 5
#define SUT 4



void matris_yazdir(short[][SUT], short[][SUT]);

int main()
{

    short matrisA[SAT][SUT], matrisB[SAT][SUT], matrisT[SAT][SUT];

    matris_yazdir(matrisA, matrisB);

for (int i = 0; i < SAT; i++)
{
    for (int j  = 0; j < SUT; j++)
    {
     
    matrisT[i][j] = matrisA[i][j] + matrisB[i][j];   

    }
    
}

printf("T matrisi \n");
for ( int i = 0; i < SAT; i++)
{
    for (int j = 0; j < SUT; j++)
    {
    
    
     printf("%d ", matrisT[i][j]);






    }
    printf("\n");
    
}



    return 0;
}









void matris_yazdir(short MatrisA[][SUT], short MatrisB[][SUT]) // 0-100 arasında sayılarla matris yazdıran fonksiyon
{

srand(time(NULL));

for ( int i = 0; i < SAT; i++)
{
    for (int j = 0; j < SUT; j++)
    {
      MatrisA[i][j] = rand() % 100 + 1 ;
      MatrisB[i][j] = rand() % 100 + 1 ;

    }
    
    
}

printf("A matrisi \n");
for ( int i = 0; i < SAT; i++)
{
    for (int j = 0; j < SUT; j++)
    {
    
    
     printf("%d ", MatrisA[i][j]);






    }
    printf("\n");
    
}
    printf("\n");
printf("B matrisi \n");
for ( int i = 0; i < SAT; i++)
{
    for (int j = 0; j < SUT; j++)
    {
    
    
     printf("%d ", MatrisB[i][j]);






    }
    printf("\n");
    
}




}