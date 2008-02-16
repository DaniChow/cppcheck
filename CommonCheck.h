//---------------------------------------------------------------------------
#ifndef CommonCheckH
#define CommonCheckH
//---------------------------------------------------------------------------

#include <string>
#include <sstream>

struct TOKEN;

std::string FileLine(TOKEN *tok);

void ReportErr(const std::string errmsg);
extern std::ostringstream errout;


bool IsName(const char str[]);
bool IsNumber(const char str[]);

bool IsStandardType(const char str[]);

//---------------------------------------------------------------------------
#endif
