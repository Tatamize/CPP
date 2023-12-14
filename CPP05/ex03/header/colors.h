#ifndef COLORS_H
# define COLORS_H
# define PRINT 1
# define MEMO 0

void	call_red();
void	call_green();
void	call_blue();
void	call_white();
void	reset_color();
void	colornote( bool printable, int color, std::string text, std::string called);

#endif