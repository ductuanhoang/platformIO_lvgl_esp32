SET(SOURCES 
    # action set label
    action.c
    home_set_label.c
    # screens
    screens/ui_home1.c
    screens/ui_home2.c
    screens/ui_home3.c
    screens/ui_PickItems.c
    screens/ui_setting.c
    screens/ui_step1.c
    screens/ui_step3.c
    screens/ui_step4.c
    screens/ui_success.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    images/ui_img_back_png.c
    images/ui_img_home_png.c
    images/ui_img_beer_corona_png.c
    images/ui_img_vector_png.c
    images/ui_img_checked_png.c
    images/ui_img_corect_png.c
    images/ui_img_beer_corona_mini_png.c
    images/ui_img_lauch_btn_png.c
    images/ui_img_warning_png.c
    images/ui_img_image_17_png.c
    images/ui_img_rectangle_7_png.c)

add_library(ui ${SOURCES})
