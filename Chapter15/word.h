#ifndef WORD_H  
#define WORD_H
/*
read word: Reads the next word from the input and stores it in word.
Makes word empty if no word could be read because of EOF. Truncates
the word if its lenth exceeds len.
*/
void read_word(char *word, int len);

#endif