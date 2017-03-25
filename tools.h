#include<gtk/gtk.h>

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
