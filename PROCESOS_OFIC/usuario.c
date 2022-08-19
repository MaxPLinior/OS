#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
 
int main()
{
   pid_t id_proceso_padre;
  
   puts("\n==== ESTE PROGRAMA MUESTRA EL IDENTIFICADOR DE UN PROCESO Y USUARIO ====\n");
 
   id_proceso_padre = getppid();
  
   printf("Identificador del proceso padre : %d\n", id_proceso_padre);
   printf("Identificador del usuario : %s\n", getlogin());
 
   return 0;
 
}
