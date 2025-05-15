/* ******************************************************************** */
/*                                                                      */
/*                                                          #           */
/*   libch.h                                               ###          */
/*                                                        #####         */
/*   By: sefaertnc <sefaertnc@sgmail.com>                #######        */
/*                                                      #########       */
/*   Created: 2025/05/15 16:04:53 by sefaertnc         ###########      */
/*   Updated: 2025/05/15 16:04:53 by sefaertnc        #############     */
/*                                                                      */
/* ******************************************************************** */

#ifndef LIBCH_H
# define LIBCH_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <ctype.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdbool.h>
# include <time.h>
# include <errno.h>
# include <unistd.h>

char	*ch_strrev_inplace(char *str);
char	*ch_strrev_copy(char *str);
size_t	ch_strcount_substr(const char *str, const char *substr);
char	*ch_strreplace(const char *str, const char *old, const char *new);
#endif
