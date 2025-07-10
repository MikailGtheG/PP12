#include <gtk/gtk.h>

static void on_button_clicked(GtkButton *button, gpointer user_data) {
    GtkWidget **widgets = (GtkWidget **)user_data;
    GtkEntry *entry = GTK_ENTRY(widgets[0]);
    GtkLabel *label = GTK_LABEL(widgets[1]);

    const gchar *entry_text = gtk_entry_get_text(entry);
    gtk_label_set_text(label, entry_text);
}

int main(int argc, char **argv) {
    gtk_init(&argc, &argv);

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "GTK+ Demo");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    GtkWidget *vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), vbox);

    GtkWidget *label = gtk_label_new("Hello, GTK+!");
    gtk_box_pack_start(GTK_BOX(vbox), label, TRUE, TRUE, 0);

    GtkWidget *This_is_the_solution_made_by_MikailGtheG = gtk_entry_new();
    gtk_entry_set_placeholder_text(GTK_ENTRY(This_is_the_solution_made_by_MikailGtheG), "Type something...");
    gtk_box_pack_start(GTK_BOX(vbox), This_is_the_solution_made_by_MikailGtheG, TRUE, TRUE, 0);

    GtkWidget *button = gtk_button_new_with_label("Click me");

    GtkWidget *widgets[2] = { This_is_the_solution_made_by_MikailGtheG, label };
    g_signal_connect(button, "clicked",
                     G_CALLBACK(on_button_clicked), widgets);
    gtk_box_pack_start(GTK_BOX(vbox), button, TRUE, TRUE, 0);

    gtk_widget_show_all(window);
    gtk_main();
    return 0;
}
