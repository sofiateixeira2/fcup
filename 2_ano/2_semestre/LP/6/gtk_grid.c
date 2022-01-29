#include<gtk/gtk.h>

int main (int argc, char *argv[]) {
  GtkWidget *window;
  GtkWidget *grid;
  GtkWidget *button;

  gchar *values[16] = { "7", "8", "9", "/",
                        "4", "5", "6", "*",
                        "1", "2", "3", "-",
                        "0", ".", "=", "+"};

  gtk_init(&argc, &argv);

  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
  gtk_window_set_default_size(GTK_WINDOW(window), 250, 180);
  gtk_window_set_title(GTK_WINDOW(window), "GtkGrid");

  gtk_container_set_border_width(GTK_CONTAINER(window), 5);

  grid = gtk_grid_new();
  gtk_grid_set_row_spacing(GTK_GRID(grid), 2);
  gtk_grid_set_column_spacing(GTK_GRID(grid), 2);

  int i = 0;
  int j = 0;
  int pos = 0;

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      button = gtk_button_new_with_label(values[pos]);
      gtk_grid_attach(GTK_GRID(grid), button, j, i, 1, 1);
      pos++;
    }
  }

  gtk_container_add(GTK_CONTAINER(window), grid);

  g_signal_connect(G_OBJECT(window), "destroy",G_CALLBACK(gtk_main_quit), NULL);

  gtk_widget_show_all(window);

  gtk_main();
  return 0;
}
