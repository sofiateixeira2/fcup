#include<gtk/gtk.h>

int main (int argc, char *argv[]) {
  GtkWidget *window;
  GtkWidget *vbox;

  GtkWidget *one;
  GtkWidget *two;
  GtkWidget *three;

  gtk_init(&argc, &argv);
  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
  gtk_window_set_default_size(GTK_WINDOW(window), 230, 250);
  gtk_window_set_title(GTK_WINDOW(window), "GtkBox");
  gtk_container_set_border_width(GTK_CONTAINER(window), 5);

  vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 1);
  gtk_container_add(GTK_CONTAINER(window), vbox);

  one = gtk_button_new_with_label("1");
  two = gtk_button_new_with_label("2");
  three = gtk_button_new_with_label("3");

  gtk_box_pack_start(GTK_BOX(vbox), one, TRUE, TRUE, 0);
  gtk_box_pack_start(GTK_BOX(vbox), two, TRUE, TRUE, 0);
  gtk_box_pack_start(GTK_BOX(vbox), three, TRUE, TRUE, 0);

  g_signal_connect(G_OBJECT(window), "destroy",G_CALLBACK(gtk_main_quit), G_OBJECT(window));

  gtk_widget_show_all(window);

  gtk_main();
  return 0;
}
