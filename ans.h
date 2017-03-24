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
 * 一些能夠使用的函數範例：
 *
 * change_label_text(label, "yo");
 * 會將程式上方的標籤變為 "yo"，
 *
 * change_button_label(widget, "yoo");
 * （在下方函數內呼叫）會將被按下的按鈕上的文字換為 "yoo"，
 *
 * get_button_label(button, 1, 1);
 * 會得到位置為 [1][1] 的按鈕上的文字，回傳值為 char*。
 */
static void when_button_clicked(GtkWidget *widget, gpointer data) {
	// 請將答案寫在這裡
}

