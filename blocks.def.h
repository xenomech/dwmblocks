//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
	{"","sb-mymus",5,4},
	{"", "sb-memory", 30, 0},
	{"", "sb-pacpackages", 0, 8},
	{"📦 ", "pacman -Q | wc -l", 0, 8},
	// {"", "sb-cpu", 10, 18},
	{"", "sb-volume", 0, 10},
	{"", "sb-battery", 5, 3},
	{"", "sb-internet", 5, 4},
	{"", "sb-clock", 60, 1},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
