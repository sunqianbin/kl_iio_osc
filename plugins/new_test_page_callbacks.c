#include "new_test_page_callbacks.h"
#include <stdio.h>
#include <stdlib.h>

// // 勾选框回调函数
// void checkbox_toggled(GtkToggleButton *togglebutton, gpointer user_data) {
//     gboolean is_active = gtk_toggle_button_get_active(togglebutton);
//     const gchar *label = gtk_button_get_label(GTK_BUTTON(togglebutton));
//     g_print("%s 勾选状态: %s\n", label, is_active ? "已勾选" : "未勾选");
// }

// // 增加频率值回调函数
// void increase_value(GtkButton *button, gpointer user_data) {
//     GtkEntry *entry = GTK_ENTRY(user_data);
//     const gchar *text = gtk_entry_get_text(entry);
//     double value = atof(text);
//     if (value < 60000.0) {
//         value += 1.0;
//         gchar new_text[20];
//         g_snprintf(new_text, sizeof(new_text), "%.6f", value);
//         gtk_entry_set_text(entry, new_text);
//     }
// }

// // 减少频率值回调函数
// void decrease_value(GtkButton *button, gpointer user_data) {
//     GtkEntry *entry = GTK_ENTRY(user_data);
//     const gchar *text = gtk_entry_get_text(entry);
//     double value = atof(text);
//     if (value > 0.0) {
//         value -= 1.0;
//         gchar new_text[20];
//         g_snprintf(new_text, sizeof(new_text), "%.6f", value);
//         gtk_entry_set_text(entry, new_text);
//     }
// }

// // 一键测试按钮回调函数
// void one_key_test_clicked(GtkButton *button, gpointer user_data) {
//     // 这里可以添加一键测试的具体逻辑
//     g_print("一键测试按钮被点击\n");
// }

// // 停止测试按钮回调函数
// void stop_test_clicked(GtkButton *button, gpointer user_data) {
//     // 这里可以添加停止测试的具体逻辑
//     g_print("停止测试按钮被点击\n");
// }    