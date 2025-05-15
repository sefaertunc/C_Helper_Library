/* ******************************************************************** */
/*                                                                      */
/*                                                          #           */
/*   ch_strreplace.c                                       ###          */
/*                                                        #####         */
/*   By: sefaertnc <sefaertnc@sgmail.com>                #######        */
/*                                                      #########       */
/*   Created: 2025/05/15 17:27:16 by sefaertnc         ###########      */
/*   Updated: 2025/05/15 17:27:16 by sefaertnc        #############     */
/*                                                                      */
/* ******************************************************************** */

#include "../../include/libch.h"

/**
 * ch_strreplace - Replace all non-overlapping substrings in a string.
 * @str: The original string.
 * @trim: The substring to be replaced.
 * @new: The substring to insert in place of @trim.
 *
 * This function creates and returns a newly allocated string where
 * every non-overlapping occurrence of `trim` in `str` is replaced
 * by `new`. If `trim` is NULL or empty, or `new` is NULL, a duplicate
 * of `str` is returned unchanged.
 *
 * Return: A pointer to the newly allocated string with replacements,
 *         or NULL if memory allocation fails.
 */

char	*ch_strreplace(const char *str, const char *trim, const char *new)
{
	char	*rt_ptr;
	size_t	trim_len;
	size_t	new_len;
	size_t	total_len;
	size_t	count;
	size_t	i;
	size_t	j;

	if (!str)
		return (NULL);
	if (!trim || !new)
		return (strdup(str));
	if (!*trim)
		return (strdup(str));
	trim_len = strlen(trim);
	new_len = strlen(new);
	count = ch_strcount_substr(str, trim);
	total_len = strlen(str) - (count * trim_len) + (count * new_len);
	rt_ptr = (char *)malloc(total_len + 1);
	if (!rt_ptr)
		return (NULL);
	j = 0;
	i = 0;
	while (str[i])
	{
		if (!strncmp(str + i, trim, trim_len))
		{
			memcpy(&rt_ptr[j], new, new_len);
			j += new_len;
			i += trim_len;
		}
		else
		{
			rt_ptr[j++] = str[i++];
		}
	}
	rt_ptr[total_len] = '\0';
	return (rt_ptr);
}
