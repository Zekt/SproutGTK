#include"ans.h"

static void quit( GtkWidget *widget, gpointer data ) {
	g_print ("Quit.\n");
}


static gboolean delete_event( GtkWidget *widget, GdkEvent *event, gpointer data ) {
	g_print ("delete event occurred\n");
	return FALSE;
}

/* Another callback */
static void destroy( GtkWidget *widget, gpointer data ) {
	gtk_main_quit ();
}

void create_button(GtkWidget *table, GtkWidget *butt, int l, int t, int r, int d) {
	butt = gtk_button_new_with_label("");
	gtk_widget_set_size_request(butt, 50, 50);
	gtk_table_attach_defaults(GTK_TABLE(table), butt, l, t, r, d);
	g_signal_connect (butt, "clicked",
			G_CALLBACK (when_button_clicked), NULL);
	button[r][l] = g_object_ref(butt);
}

void init(int argc, char *argv[]) {

	gtk_init (&argc, &argv);

	window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
	g_signal_connect (window, "delete-event",
			G_CALLBACK (delete_event), NULL);
	g_signal_connect (window, "destroy",
			G_CALLBACK (destroy), NULL);

	vbox = gtk_vbox_new(TRUE, 20);

	gtk_container_set_border_width (GTK_CONTAINER (window), 100); 

	label = gtk_label_new("Game Start!");
	gtk_box_pack_start(GTK_BOX(vbox), label, FALSE, FALSE, 5);


	table = gtk_table_new(3,3,TRUE);
	for(int i = 0; i < 3; ++i) 
		for(int j = 0; j < 3; ++j) {
			create_button(table, button[i][j], j, j+1, i, i+1);
		}
	gtk_box_pack_start(GTK_BOX(vbox), table, TRUE, TRUE, 5);


	button_q = gtk_button_new_with_label ("Quit");
	g_signal_connect (button_q, "clicked",
			G_CALLBACK (quit), NULL);
	g_signal_connect_swapped (button_q, "clicked",
			G_CALLBACK (gtk_widget_destroy), window);
	gtk_box_pack_start(GTK_BOX(vbox), button_q, FALSE, FALSE, 5);
}

void run() {
	gtk_container_add (GTK_CONTAINER (window), vbox);
	gtk_widget_show_all (window);
	gtk_main ();
}

int main( int argc, char *argv[] ) {
	init(argc, argv);
	run();
	return 0;
}
