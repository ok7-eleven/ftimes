/*-
 ***********************************************************************
 *
 * $Id: all-includes.h,v 1.8 2014/07/18 06:40:44 mavrik Exp $
 *
 ***********************************************************************
 *
 * Copyright 2009-2014 The FTimes Project, All Rights Reserved.
 *
 ***********************************************************************
 */
#if defined(UNIX) || defined(MINGW32)
#include "config.h"
#endif

#include <ctype.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef WIN32
#include <tchar.h>
#include <windows.h>
#endif

#include "ftimes-cat.h"

#ifdef WIN32
#define snprintf _snprintf
#endif

