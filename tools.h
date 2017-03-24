#include<gtk/gtk.h>

void change_text_of_label(GtkWidget *label, const char *s) {
	gtk_label_set_text(GTK_LABEL(label), s);
}

void change_button_label(GtkWidget *widget, const char* s) {
	gtk_button_set_label(GTK_BUTTON(widget), s);
}

const char* get_button_label(GtkWidget *widgets[3][3], int x, int y) {
	return gtk_button_get_label(GTK_BUTTON(widgets[x][y]));
}
