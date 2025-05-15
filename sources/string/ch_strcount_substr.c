/* ******************************************************************** */
/*                                                                      */
/*                                                          #           */
/*   ch_strcount_substr.c                                  ###          */
/*                                                        #####         */
/*   By: sefaertnc <sefaertnc@sgmail.com>                #######        */
/*                                                      #########       */
/*   Created: 2025/05/15 19:11:34 by sefaertnc         ###########      */
/*   Updated: 2025/05/15 19:11:34 by sefaertnc        #############     */
/*                                                                      */
/* ******************************************************************** */

#include "../../include/libch.h"

/**
 * ch_strcount_substr - Count non-overlapping occurrences of a substring.
 * @str: The main string to search within.
 * @substr: The substring to search for.
 *
 * This function counts how many times `substr` appears in `str`,
 * without overlapping. For example, in "aaaa", the substring "aa"
 * appears twice non-overlapping.
 *
 * Return: The number of non-overlapping occurrences of `substr` in `str`.
 *         Returns 0 if either input is NULL or if `substr` is an empty string.
 */

size_t	ch_strcount_substr(const char *str, const char *substr)
{
	char const	*temp;
	size_t		count;

	if (!str || !substr || !*substr)
		return (0);
	temp = str;
	count = 0;
	while (temp = strstr(temp, substr))
	{
		++count;
		temp += strlen(substr);
	}
	return (count);
}
