#include<gtk/gtk.h>

int _COUNTER = 0;
extern void in_every_interval();

// 此函數能改變上方的文字
void change_label_text(GtkWidget *label, const char *s) {
	gtk_label_set_text(GTK_LABEL(label), s);
}

// 此函數能改變按鈕上的文字
void change_button_label(GtkWidget *widget, const char* s) {
	gtk_button_set_label(GTK_BUTTON(widget), s);
}

// 此函數能得知某個按鈕上的文字
char* get_button_label(GtkWidget *widget) {
	return (char*)gtk_button_get_label(GTK_BUTTON(widget));
}

void change_button_color(GtkWidget *widget, const char* c) {
	GdkColor color;
	gdk_color_parse (c, &color);
	GtkStyle *defstyle;
	GtkStyle *style;
	defstyle = gtk_widget_get_default_style ();
	style = gtk_style_copy (defstyle);
	for (int i = 0; i < 5; i++) {
		style->bg[i] = color;
	}
	gtk_widget_set_style(widget, style);
}

gboolean on_every_interval(gpointer data) {
	_COUNTER++;
	in_every_interval();
}

int count() {
	return _COUNTER;
}
