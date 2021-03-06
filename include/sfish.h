#ifndef SFISH_H
#define SFISH_H

#define BUILTIN_ERROR  "sfish builtin error: %s\n"
#define SYNTAX_ERROR   "sfish syntax error: %s\n"
#define EXEC_ERROR     "sfish exec error: %s\n"

/* Format Strings */
#define EXEC_NOT_FOUND "sfish: %s: command not found\n"
#define JOBS_LIST_ITEM "[%d] %s\n"
#define STRFTIME_RPRMT "%a %b %e, %I:%M%p"

extern char* directory;
extern char* actualDirectory;
extern char* prevDirectory;
extern char* homeDirectory;
extern char* printBuf;
extern int prevSet;
extern int whichPip;
extern int pids[800];
extern int numPids;
#endif
