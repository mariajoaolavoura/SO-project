#include "testtool.h"

#include "core.h"

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

using namespace sofs18;

/* ******************************************** */
/* print a prompt message */
void promptMsg(const char *fmt, ...)
{
    if (quiet > 0) return;
    /* print the message */
    fprintf(stdout, "\e[01;34m");
    va_list ap;
    va_start(ap, fmt);
    vfprintf(stdout, fmt, ap);
    va_end(ap);
    fprintf(stdout, "\e[0m");
    fflush(stdout);
}

/* ******************************************** */
/* print a result message */
void resultMsg(const char *fmt, ...)
{
    /* print the message */
    fprintf(stdout, "\e[01;34m");
    va_list ap;
    va_start(ap, fmt);
    vfprintf(stdout, fmt, ap);
    va_end(ap);
    fprintf(stdout, "\e[0m");
    fflush(stdout);
}

/* ******************************************** */
/* print an ERROR message */
void errorMsg(const char *fmt, ...)
{
    /* print the message */
    fprintf(stderr, "\e[01;31m");
    va_list ap;
    va_start(ap, fmt);
    vfprintf(stderr, fmt, ap);
    va_end(ap);
    fprintf(stderr, "\e[0m\n");
}

/* ******************************************** */
/* print an ERRNO message */
void errnoMsg(int en, const char *fmt, ...)
{
    /* print the message */
    fprintf(stderr, "\e[01;31m");
    va_list ap;
    va_start(ap, fmt);
    vfprintf(stderr, fmt, ap);
    va_end(ap);
    fprintf(stderr, "\e[0m\n");
}

/* ******************************************** */
/* purge remainder of line */
void fPurge(FILE* fin)
{
    fscanf(fin, "%*[^\n]");
    fscanf(fin, "%*c");
}

/* ******************************************** */
