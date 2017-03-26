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
 * pressed_button 是傳入的參數，代表被按下的按鈕本身。
 * 一些能夠使用的函數範例：
 *
 * change_label_text(label, "yo");
 * 會將程式上方的標籤變為 "yo"，
 *
 * change_button_label(pressed_button, "yoo");
 * （在下方函數內呼叫）會將被按下的按鈕上的文字換為 "yoo"，
 *
 * get_button_label(button[1][2]);
 * 會得到位置為 [1][2] 的按鈕上的文字，回傳值為 char*。
 *
 * 提示：檢查得到的字串是否為空的方法：
 * char* s = get_button_label(pressed_button));
 * if(s[0] == '\0')
 * 或是
 * if(std::strcmp(s, "") != 0)（要 include<cstring>）
 */

static void when_button_clicked(GtkWidget *pressed_button, gpointer data) {
	// 請將答案寫在這裡
	// 範例（可以將下一行註解拿掉看執行結果）：
	//change_label_text(label, "Jinkela !");
}

