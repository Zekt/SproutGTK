#include<cstdio>
#include"tools.h"

// HEIGHT 跟 WIDTH 決定了中間按鈕的格子數
#define HEIGHT 3
#define WIDTH 3

// INTERVAL 代表 called_every_interval 每多久會被呼叫一次（單位是毫秒(ms)，1s = 1000ms）
#define INTERVAL 1000

GtkWidget *window;
GtkWidget *button_q;
GtkWidget *table;
GtkWidget *vbox;


// label 是畫面上方的文字 GtkWidget *label;
GtkWidget *label;
// button 是代表畫面上九宮格（或更大）的陣列，每個元素為一個按鈕
GtkWidget *button[HEIGHT][WIDTH];


/*
 * 作業一：圈圈叉叉
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
 * if(std::strcmp(s, "") == 0)（要 include<cstring>）
 *
 * 3/27 新增（自由發揮使用）：
 * change_button_color 能夠改變按鈕的顏色，例如:
 * change_button_color(pressed_button, "red");
 * 能將被按下的按鈕顏色改成紅色，能用的顏色非常多，可以自己試試，
 * 或是也能用指定 RGB 的方式改變顏色，不知道 RGB 是什麼的可以上網查，例如：
 * for(int i = 0; i < HEIGHT; i++)
 *     for(int j = 0; j < WIDTH; j++)
 *         change_button_color(button[i][j], "#FFFFFF");
 * 這樣能將所有按鈕變成白色
 */
static void when_button_clicked(GtkWidget *pressed_button, gpointer data) {
	// 請將答案寫在這裡
	// 範例（可以將下一行註解拿掉看執行結果）：
	// change_label_text(label, "Jinkela !");
}

/*
 * 自由發揮使用：
 * in_every_interval 每 INTERVAL 毫秒（在此檔案最上方）會被呼叫一次
 * 呼叫 interval_count() 可以得到 in_every_interval 被呼叫了幾次，回傳值是 unsigned long long int
 */
void in_every_interval() {
	// 範例，可以拿掉註解試著編譯：
	/*
	char buf[10];
	std::sprintf(buf, "%d", interval_count());
	change_label_text(label, buf);
	*/
	// （要 include<cstdio>）
	// 這樣上方的 label 會從 0 開始每隔 INTERVAL 毫秒（預設是 1000 即一秒）增加 1
}
