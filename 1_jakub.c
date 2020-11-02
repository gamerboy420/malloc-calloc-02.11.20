#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MIN 0
#define MAX (10+90)



void print(const size_t N,const int *const tab)
{
  for(int i = 0; i < N;i++)
  {
    printf("%d%c",tab[i],i==N-1 ? '\n' : '\t');
  }
}
void rand_fill(const size_t N,int tab[])
{
  for(int i=0;i<N;i++)
  {
    tab[i] = MIN + rand()/((RAND_MAX + 1u)/(MAX-MIN+1));;
  }
}
bool read(const unsigned int *value)
{
  return scanf ( "%u" , value ) == 1;
}
int main()
{
  unsigned int seed;
  if(!read(&seed))
    return EXIT_FAILURE;
  srand(seed);



  unsigned int N ;
  if ( !read ( &N ))
    return EXIT_FAILURE ;



  int *tab;
  tab = (int*) calloc( N,sizeof(*tab) );
  if(tab == NULL)
    return EXIT_FAILURE ;



  print(N,tab);
  rand_fill(N,tab);



  print(N, tab);



  free ( tab );




}
