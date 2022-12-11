#include <gtk/gtk.h>
#include <gdk/gdkx.h>

static void activate() {
  GdkCursor* cursor = gdk_cursor_new_for_display(gdk_display_get_default(), GDK_LEFT_PTR);
  GdkScreen* screen = gdk_display_get_default_screen(gdk_display_get_default());
  gdk_window_set_cursor(gdk_screen_get_root_window(screen), cursor);
  g_object_unref(cursor);
}

int main(int argc, char **argv) {
  GtkApplication *app = gtk_application_new("xcm.window", G_APPLICATION_DEFAULT_FLAGS);
  g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
  int status = g_application_run(G_APPLICATION(app), argc, argv);
  g_object_unref(app);
  return status;
}
