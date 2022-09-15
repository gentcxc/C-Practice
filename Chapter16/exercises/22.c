enum chess_pieces {KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN};
int piece_value[6] = {[0] = 200,[1] = 9,[2] 5,[3] = 3,[4] = 3,[5] = 1};
/**The above is designated intitalizers but I didnt do it how they wanted
 * me to, this is how they want you to do it.
 * */
int piece_value[6] = {[KING] = 200, [QUEEN] = 9, [ROOK] = 5, [BISHOP] = 3, 
[KNIGHT] = 3, [PAWN] = 1}};