/*  clearerr.c -- MiNTLib.
    Copyright (C) 2000 Guido Flohr <guido@freemint.de>

    This file is part of the MiNTLib project, and may only be used
    modified and distributed under the terms of the MiNTLib project
    license, COPYMINT.  By continuing to use, modify, or distribute
    this file you indicate that you have read the license and
    understand and accept it fully.
*/

#include <stdio.h>

/* Clear all EOF and error flags for STREAM.  */
void
clearerr (FILE* stream)
{
	__clearerr (stream);
}
weak_alias (clearerr, clearerr_unlocked)
