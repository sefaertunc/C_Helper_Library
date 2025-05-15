/* ******************************************************************** */
/*                                                                      */
/*                                                          #           */
/*   ch_strrev_copy.c                                      ###          */
/*                                                        #####         */
/*   By: sefaertnc <sefaertnc@sgmail.com>                #######        */
/*                                                      #########       */
/*   Created: 2025/05/15 15:56:57 by sefaertnc         ###########      */
/*   Updated: 2025/05/15 15:56:57 by sefaertnc        #############     */
/*                                                                      */
/* ******************************************************************** */

#include "../../include/libch.h"

/**
 * ch_strrev_copy - Returns a reversed copy of a string.
 * @str: The input string to reverse (const safe).
 *
 * This function creates and returns a new string with the characters
 * of the input string in reverse order. The original string remains unchanged.
 *
 * Return: A pointer to the newly allocated reversed string.
 *         Returns NULL if the input is NULL or memory allocation fails.
 *         The caller is responsible for freeing the returned string.
 */

char	*ch_strrev_copy(char *str)
{
	char	*rt_ptr;
	size_t	str_len;
	size_t	i;

	if (!str)
		return (NULL);
	str_len = strlen(str);
	rt_ptr = (char *)malloc(str_len + 1);
	if (!rt_ptr)
		return (NULL);
	i = 0;
	while (str_len)
		rt_ptr[i++] = str[--str_len];
	rt_ptr[i] = '\0';
	return (rt_ptr);
}
