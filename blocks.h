//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" Mem:", "free -h | awk '/^Mem/ { print $3 }' | sed s/i//g",	30,		0},
    {"", "dwmblocks_getInternet", 5, 0},
    {"", "dwmblocks_getBattery", 5, 0},
    {"", "dwmblocks_getVolume", 0, 1},
    {"🔆 ", "dwmblocks_getBrightness", 0, 2},
	{"🕰 ", "date '+%b %d (%a) %H:%M'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "::";
static unsigned int delimLen = 3;
