#include <gtk/gtk.h>

#include <string.h>
#include <stdlib.h>

#include "utf8.h"

int main(int argc, char *argv[]) {

  GtkWidget *window, *vbox, *label_str;

  gtk_init(&argc, &argv);

  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_position    (GTK_WINDOW(window), GTK_WIN_POS_CENTER);
  gtk_window_set_default_size(GTK_WINDOW(window), 300, 300);
  gtk_window_set_title       (GTK_WINDOW(window), "exercício");
  gtk_window_set_resizable   (GTK_WINDOW(window), FALSE);
  g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);

  label_str = gtk_label_new(NULL);
  gtk_widget_set_size_request(label_str, 300, 200);


  gtk_widget_show_all(window);

  gtk_main();
  return 0;
}
