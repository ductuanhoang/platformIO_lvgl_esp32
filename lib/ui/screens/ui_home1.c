// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: gui2

#include "../ui.h"

void ui_home1_screen_init(void)
{
    ui_home1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_home1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label2 = lv_label_create(ui_home1);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, 27);
    lv_obj_set_y(ui_Label2, 44);
    lv_label_set_text(ui_Label2, "Pick a Mode");
    lv_obj_set_style_text_align(ui_Label2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label3 = lv_label_create(ui_home1);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, 27);
    lv_obj_set_y(ui_Label3, 26);
    lv_label_set_text(ui_Label3, "Step 1");
    lv_obj_set_style_text_color(ui_Label3, lv_color_hex(0xF23A00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Container1 = lv_obj_create(ui_home1);
    lv_obj_remove_style_all(ui_Container1);
    lv_obj_set_width(ui_Container1, 316);
    lv_obj_set_height(ui_Container1, 312);
    lv_obj_set_x(ui_Container1, 4);
    lv_obj_set_y(ui_Container1, 94);
    lv_obj_set_flex_flow(ui_Container1, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Container1, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_Container1, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_pad_row(ui_Container1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_Container1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button201 = lv_btn_create(ui_Container1);
    lv_obj_set_width(ui_Button201, 200);
    lv_obj_set_height(ui_Button201, 280);
    lv_obj_set_align(ui_Button201, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button201, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button201, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button201, lv_color_hex(0xFFF8F0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button201, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image10 = lv_img_create(ui_Button201);
    lv_img_set_src(ui_Image10, &ui_img_short_pass_png);
    lv_obj_set_width(ui_Image10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image10, 3);
    lv_obj_set_y(ui_Image10, -31);
    lv_obj_set_align(ui_Image10, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image10, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image10, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label15 = lv_label_create(ui_Button201);
    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label15, 75);
    lv_obj_set_y(ui_Label15, 250);
    lv_label_set_text(ui_Label15, "20 items");
    lv_obj_set_style_text_color(ui_Label15, lv_color_hex(0x630600), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label15, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label15, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label5 = lv_label_create(ui_Button201);
    lv_obj_set_height(ui_Label5, 25);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_Label5, 41);
    lv_obj_set_y(ui_Label5, 213);
    lv_label_set_text(ui_Label5, "Short Pass");
    lv_obj_set_style_text_color(ui_Label5, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label5, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button202 = lv_btn_create(ui_Container1);
    lv_obj_set_width(ui_Button202, 200);
    lv_obj_set_height(ui_Button202, 280);
    lv_obj_set_align(ui_Button202, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button202, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button202, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button202, lv_color_hex(0xFFF8F0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button202, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image1 = lv_img_create(ui_Button202);
    lv_img_set_src(ui_Image1, &ui_img_image_17_png);
    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image1, 3);
    lv_obj_set_y(ui_Image1, -31);
    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label4 = lv_label_create(ui_Button202);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, 75);
    lv_obj_set_y(ui_Label4, 250);
    lv_label_set_text(ui_Label4, "20 items");
    lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0x630600), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label4, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label28 = lv_label_create(ui_Button202);
    lv_obj_set_height(ui_Label28, 25);
    lv_obj_set_width(ui_Label28, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_Label28, 41);
    lv_obj_set_y(ui_Label28, 213);
    lv_label_set_text(ui_Label28, "Cannon");
    lv_obj_set_style_text_color(ui_Label28, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label28, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label28, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button203 = lv_btn_create(ui_Container1);
    lv_obj_set_width(ui_Button203, 200);
    lv_obj_set_height(ui_Button203, 280);
    lv_obj_set_x(ui_Button203, -1);
    lv_obj_set_y(ui_Button203, 1);
    lv_obj_set_align(ui_Button203, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button203, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button203, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button203, lv_color_hex(0xFFF8F0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button203, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image13 = lv_img_create(ui_Button203);
    lv_img_set_src(ui_Image13, &ui_img_butler_delivery_png);
    lv_obj_set_width(ui_Image13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image13, -36);
    lv_obj_set_y(ui_Image13, -28);
    lv_obj_set_align(ui_Image13, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image13, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image13, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label29 = lv_label_create(ui_Button203);
    lv_obj_set_width(ui_Label29, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label29, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label29, 75);
    lv_obj_set_y(ui_Label29, 250);
    lv_label_set_text(ui_Label29, "20 items");
    lv_obj_set_style_text_color(ui_Label29, lv_color_hex(0x630600), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label29, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label29, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label29, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label30 = lv_label_create(ui_Button203);
    lv_obj_set_height(ui_Label30, 25);
    lv_obj_set_width(ui_Label30, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_Label30, 10);
    lv_obj_set_y(ui_Label30, 217);
    lv_label_set_text(ui_Label30, "Butler Delivery");
    lv_obj_set_style_text_color(ui_Label30, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label30, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label30, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button101 = lv_btn_create(ui_home1);
    lv_obj_set_width(ui_Button101, 60);
    lv_obj_set_height(ui_Button101, 22);
    lv_obj_set_x(ui_Button101, 243);
    lv_obj_set_y(ui_Button101, 0);
    lv_obj_add_flag(ui_Button101, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button101, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Button101, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button101, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button101, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Container11 = lv_obj_create(ui_Button101);
    lv_obj_remove_style_all(ui_Container11);
    lv_obj_set_width(ui_Container11, 46);
    lv_obj_set_height(ui_Container11, 22);
    lv_obj_set_x(ui_Container11, 0);
    lv_obj_set_y(ui_Container11, -2);
    lv_obj_set_align(ui_Container11, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container11, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label27 = lv_label_create(ui_Container11);
    lv_obj_set_width(ui_Label27, LV_SIZE_CONTENT);   /// 21
    lv_obj_set_height(ui_Label27, LV_SIZE_CONTENT);    /// 14
    lv_obj_set_x(ui_Label27, 20);
    lv_obj_set_y(ui_Label27, 6);
    lv_label_set_text(ui_Label27, "settings");
    lv_obj_set_style_text_font(ui_Label27, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image12 = lv_img_create(ui_Container11);
    lv_img_set_src(ui_Image12, &ui_img_vector_png);
    lv_obj_set_width(ui_Image12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image12, 5);
    lv_obj_set_y(ui_Image12, 7);
    lv_obj_add_flag(ui_Image12, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image12, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Scrolldots = lv_obj_create(ui_home1);
    lv_obj_remove_style_all(ui_Scrolldots);
    lv_obj_set_width(ui_Scrolldots, 100);
    lv_obj_set_height(ui_Scrolldots, 15);
    lv_obj_set_x(ui_Scrolldots, 102);
    lv_obj_set_y(ui_Scrolldots, 431);
    lv_obj_set_flex_flow(ui_Scrolldots, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Scrolldots, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_Scrolldots, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_pad_row(ui_Scrolldots, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_Scrolldots, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel1 = lv_obj_create(ui_Scrolldots);
    lv_obj_set_width(ui_Panel1, 15);
    lv_obj_set_height(ui_Panel1, 15);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel1, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0x0D4DCF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel2 = lv_obj_create(ui_Scrolldots);
    lv_obj_set_width(ui_Panel2, 8);
    lv_obj_set_height(ui_Panel2, 8);
    lv_obj_set_align(ui_Panel2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel2, lv_color_hex(0xEEDFDF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel3 = lv_obj_create(ui_Scrolldots);
    lv_obj_set_width(ui_Panel3, 8);
    lv_obj_set_height(ui_Panel3, 8);
    lv_obj_set_align(ui_Panel3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel3, lv_color_hex(0xEEDFDF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Button201, ui_event_Button201, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button202, ui_event_Button202, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button203, ui_event_Button203, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button101, ui_event_Button101, LV_EVENT_ALL, NULL);

}
