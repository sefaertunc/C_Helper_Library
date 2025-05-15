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

int	check_trims(const char *str, const char *trim)
{
	size_t	is_start;
	size_t	count;
	size_t	i;
	size_t	j;

	if (!str || !trim)
		return (0);
	i = 0;
	j = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == trim[j])
		{
			is_start = 1;
			++j;
		}
		else
		{
			if (!trim[j] && is_start)
				++count;
			j = 0;
			is_start = 0;
		}
		if (!trim[j])
			j = 0;
		++i;
	}
	return(count);
}

char	*ch_strreplace(const char *str, const char *trim, char *new)
{
	size_t	trim_len;
	size_t	str_len;
	size_t	i;
	size_t	j;

	trim_len = strlen(trim);
	str_len = strlen(str);

	return ((char *)str);
}

int main(int argc, char const *argv[])
{
	(void) argc;
	ch_strreplace(argv[1], argv[2],"sefa");
	printf("count: %d",ch_strcount_substr(argv[1], argv[2]));
	return 0;
}
