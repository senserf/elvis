/* version.h */
/* Copyright 1996-2001 by Steve Kirkendall */

/* Some other places where the version number resides:
 *	Makefile.in, search for "VERSION="
 *	README.html, search for the actual version number
 */

#define VERSION	"2.2.0 (PG200209A)"
#define COPY0 "Copyright (c) 1995-2003 by Steve Kirkendall"
#define	COPY1 "Adapted to PicOS/PIP by Pawel Gburzynski, 2011-2020"
#if 1
# define COPY2 "Permission is granted to redistribute the source or binaries under the terms of"
# define COPY3 "of the Perl `Clarified Artistic License', as described in the doc/license.html"
# define COPY4 "file.  In particular, unmodified versions can be freely redistributed."
# define COPY5 "Elvis is offered with no warranty, to the extent permitted by law."
#else
# define COPY2 "This version of elvis is intended to be used only by its developers"
#endif
