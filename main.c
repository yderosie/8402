#include <ncurses.h>

void	draw_borders(WINDOW *screen);

int		main(int argc, char *argv[])
{
	int parent_x;
	int parent_y;
	int new_x;
	int new_y;

	initscr();
	getmaxyx(stdscr, parent_y, parent_x);
	WINDOW *field = newwin(parent_y, parent_x, 0, 0);
	draw_borders(field);
	while(1)
	{
		getmaxyx(stdscr, new_y, new_x);
		if (new_y != parent_y || new_x != parent_x)
		{
			parent_x = new_x;
			parent_y = new_y;
			wresize(field, new_y, new_x);
			wclear(stdscr);
			wclear(field);
			draw_borders(field);
		}
		wrefresh(field);
	}
	delwin(field);
	endwin();
	return (0);
}
