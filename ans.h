#include<stdio.h>
#include"tools.h"

GtkWidget *window;
GtkWidget *button_q;
GtkWidget *table;
GtkWidget *vbox;


GtkWidget *label;
GtkWidget *button[3][3];

bool clicked[3][3];
bool finish = 0;
int click_count = 0;
int cnt[2][3][3] = {};
// 0: O 1: X
// 0: row 1: column 2: cross

static void when_button_clicked(GtkWidget *pressed_button, gpointer data) {
	int r, c;
	for(int i = 0; i < 3;i++)
		for(int j = 0; j < 3; j++)
			if(button[i][j] == pressed_button) {
				r = i;
				c = j;
			}
	if(clicked[r][c] || click_count == 9 || finish)
		return;
	clicked[r][c] = 1;
	bool isX = click_count%2;
	if(isX)
		change_button_label(pressed_button, "X");
	else
		change_button_label(pressed_button, "O");
	cnt[isX][0][r]++;
	cnt[isX][1][c]++;
	if(r == c)
		cnt[isX][2][0]++;
	if(r+c == 2)
		cnt[isX][2][1]++;
	click_count++;
	if(click_count == 9)
		change_label_text(label, "Draw!");
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			if(cnt[isX][i][j] == 3) {
				if(isX)
					change_label_text(label, "X win!");
				else
					change_label_text(label, "O win!");
				finish = 1;
	}
}
