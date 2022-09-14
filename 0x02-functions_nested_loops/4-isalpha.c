#include "main.h"

/* _isalpha - function that checks for alohabetic characters
 * @c - input letters
 * Return: always success
 */

int _isalpha(int c)
{

if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))

return(1);

else

return(0);
}
