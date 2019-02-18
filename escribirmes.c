#include <stdio.h>

int main ()
{
  int Num;
  printf("EScribe el numero del mes: ");
  scanf("%d", &Num);
  switch (Num)
  {
    case 1:
     printf("Es enero\n");
     break;
    case 2: 
     printf("Es febrero\n");
     break;
    case 3:
     printf("Es marzo\n");
     break;
    case 4:
     printf("Es abril\n");
     break;
    case 5: 
     printf("Es mayo\n");
     break;
    case 6:
     printf("Es junio\n");
     break;
    case 7:
     printf("Es julio\n");
     break;
    case 8: 
     printf("Es agosto\n");
     break;
    case 9:
     printf("Es septiembre\n");
     break;
    case 10:
     printf("Es octubre\n");
     break;
    case 11: 
     printf("Es noviembre\n");
     break;
    case 12:
     printf("Es diciembre\n");
     break;
    default: 
     printf("Ese mes no existe\n");
   }
  return 0;
}
