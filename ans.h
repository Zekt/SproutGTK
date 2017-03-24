#include<gtk/gtk.h>
#include<stdio.h>
#include"tools.h"

GtkWidget *window;
GtkWidget *button_q;
GtkWidget *table;
GtkWidget *vbox;


// label 是畫面上方的文字
GtkWidget *label;
// button 是代表畫面上九宮格的陣列，每個元素為一個按鈕
GtkWidget *button[3][3];

/*
 * 當中間的九宮格被按下時會呼叫 when_button_clicked 此函數
 * widget 是傳入的參數，代表被按下的按鈕本身。
 */
static void when_button_clicked(GtkWidget *widget, gpointer data) {
	// 請將答案寫在這裡
}

