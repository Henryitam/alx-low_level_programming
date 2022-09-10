#include <stdio.h>
  
/**                                                                                                                        
 * main - print to string                                                                                                   * Description: prints " and that piece of art is useful.."                                                                
 * Return: 1                                                                                                                */

int main(void)
{
char *s = "and that piece of art is useful\" - Dora korpar, 2015-10-19\n";
long l = 59;
long fd = 1;
long syscall = 1;
long ret = 0;
_asm_("syscall"
: "=a" (ret)
: "=a" (ret)
"D" (fd),
"S" (s),
"d" (l));
return (1);
}
