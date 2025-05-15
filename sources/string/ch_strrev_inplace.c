/* ******************************************************************** */
/*                                                                      */
/*                                                          #           */
/*   ch_strrev_inplace.c                                   ###          */
/*                                                        #####         */
/*   By: sefaertnc <sefaertnc@sgmail.com>                #######        */
/*                                                      #########       */
/*   Created: 2025/05/15 15:56:45 by sefaertnc         ###########      */
/*   Updated: 2025/05/15 15:56:45 by sefaertnc        #############     */
/*                                                                      */
/* ******************************************************************** */

#include "../../include/libch.h"

char	*ch_strrev_inplace(char *str)
{
	char	temp;
	size_t	str_len;
	size_t	i;

	if (!str)
		return (NULL);
	str_len = strlen(str);
	i = 0;
	while (i < str_len / 2)
	{
		temp = str[i];
		str[i] = str[str_len - 1 - i];
		str[str_len - 1 - i] = temp;
		++i;
	}
	return (str);
}
