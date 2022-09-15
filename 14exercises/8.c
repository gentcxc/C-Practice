#define Line_File (printf("Line" #(__LINE__) "of file" #(__FILE__)));
//this is wrong
#__line__ expands to the string line and not its numeric value

williams correct answer

#define stringize(x) #x
#define EXPAND_MACRO(x)  stringize(X)
#define line_file (printf("Line" EXPAND_MACRO(__LINE__)"of file" __FILE__))