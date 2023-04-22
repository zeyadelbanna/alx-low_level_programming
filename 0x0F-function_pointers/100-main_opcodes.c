#include <stdio.h>

/**
* main - prints the opcodes of its own main function
* @argc: number of arguments passed to the function
* @argv: array of pointers to arguments
*
* Return: always O
*/

int main(int argc, char *argv[])
{
  unsigned char *f;

   if (argc != 2)
   {
       printf("Error\n");
       exit(1);
   }
   n = atoi(argv[1]);
   if (n < 0)
   {
       printf("Error\n");
       exit(2);
   }
   f = unsigned char *) main;
   for (int i = 0; i < n; i++)
   {
       printf("%02x", *(f+i));
       if (i != n - 1)
           printf(" ");
   }
   printf("\n");
   
   return (0);
}
