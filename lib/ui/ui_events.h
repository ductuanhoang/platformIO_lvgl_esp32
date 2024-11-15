// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#ifndef _UI_EVENTS_H
#define _UI_EVENTS_H

#ifdef __cplusplus
extern "C"
{
#endif

    void setting_repid_fire(lv_event_t *e);
    void setting_blower(lv_event_t *e);
    void setting_vacuum(lv_event_t *e);
    void setting_air_shot(lv_event_t *e);
    void load_to_shoot(lv_event_t *e);
    void ready_for_launch(lv_event_t *e);
    void launch_product(lv_event_t *e);
    void return_capsule(lv_event_t *e);

    void home_short_pass(lv_event_t *e);
    void home_cannon(lv_event_t *e);
    void home_butler_delivery(lv_event_t *e);
    void select_alcohol(lv_event_t *e);
    void select_non_alcohol(lv_event_t *e);
    void select_snack(lv_event_t *e);

    void selected_items(lv_event_t * e);
#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif