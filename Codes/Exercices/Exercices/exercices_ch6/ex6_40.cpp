int ff(int a, int b = 0, int c = 0);
//char *init(int ht = 24, int wd, char bckgrnd);
// OK bcuz declaration and not calls !!!

// ex 41 
char *init(int ht, int wd = 80, char bckgrnd = ' ');
// a do not work and c work but not to programmer's intent : the char is converted to a int and passed to wd
// 