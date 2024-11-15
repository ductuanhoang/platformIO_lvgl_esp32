// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"
#include "common_config.h"
#include "action/action.h"
#include "action/device_data.h"
/**
 * Retrieves the value from an action event.
 *
 * This function takes a pointer to an lv_event_t structure and returns the value associated with the action event.
 *
 * @param e Pointer to the lv_event_t structure representing the action event.
 * @return The value associated with the action event.
 */
static uint8_t get_vaue_from_action(lv_event_t *e)
{
	uint8_t value = 0;
	lv_obj_t *obj = lv_event_get_target(e);
	if (lv_obj_has_state(obj, LV_STATE_CHECKED))
		value = 1;
	return value;
}

void setting_repid_fire(lv_event_t *e)
{
	// Your code here
	uint8_t value = get_vaue_from_action(e);
	LOG_DEBUG("Setting Rapid Fire: %d", value);
}

void setting_blower(lv_event_t *e)
{
	// Your code here
	uint8_t value = get_vaue_from_action(e);
	LOG_DEBUG("Setting Blower: %d", value);
}

void setting_vacuum(lv_event_t *e)
{
	// Your code here
	uint8_t value = get_vaue_from_action(e);
	LOG_DEBUG("Setting Vacuum : %d", value);
}

void setting_air_shot(lv_event_t *e)
{
	// Your code here
	uint8_t value = get_vaue_from_action(e);
	LOG_DEBUG("Setting Air Shot: %d", value);
}

void load_to_shoot(lv_event_t *e)
{
	// Your code here
	uint8_t value = get_vaue_from_action(e);
	LOG_DEBUG("Load to Shoot: %d", value);
}

void ready_for_launch(lv_event_t *e)
{
	// Your code here
	uint8_t value = get_vaue_from_action(e);
	LOG_DEBUG("Ready for Launch: %d", value);
}

void launch_product(lv_event_t *e)
{
	// Your code here
	uint8_t value = get_vaue_from_action(e);
	LOG_DEBUG("Launch Product: %d", value);
}

void return_capsule(lv_event_t *e)
{
	// Your code here
	uint8_t value = get_vaue_from_action(e);
	LOG_DEBUG("Return Capsule: %d", value);
}
void cannon_button_selected(lv_event_t *e)
{
	// Your code here
	LOG_DEBUG("Cannon Button Selected");
}

void shotPass_button_selected(lv_event_t *e)
{
	// Your code here
	LOG_DEBUG("ShotPass Button Selected");
}

void butler_button_selected(lv_event_t *e)
{
	// Your code here
	LOG_DEBUG("Butler Button Selected");
}

void select_alcohol(lv_event_t *e)
{
	// Your code here
	LOG_DEBUG("Alcohol Selected");
}

void select_non_alcohol(lv_event_t *e)
{
	// Your code here
	LOG_DEBUG("Non-Alcohol Selected");
}

void select_snack(lv_event_t *e)
{
	// Your code here
	LOG_DEBUG("Snack Selected");
}

void home_short_pass(lv_event_t *e)
{
	// Your code here
	LOG_DEBUG("Home Short Pass");
	device_data_set_item_selected(E_ITEM_SHORT_PASS);
	// change to screen select items and change the title
	_ui_screen_change(&ui_PickItems, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_PickItems_screen_init);
	pick_items_set_title();
}

void home_cannon(lv_event_t *e)
{
	// Your code here
	LOG_DEBUG("Home Cannon");
	device_data_set_item_selected(E_ITEM_CANNON);
	// change to screen select items and change the title
	_ui_screen_change(&ui_PickItems, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_PickItems_screen_init);
	pick_items_set_title();
}

void home_butler_delivery(lv_event_t *e)
{
	// Your code here
	LOG_DEBUG("Home Butler Delivery");
	device_data_set_item_selected(E_ITEM_BUTLER_DELIVERY);
	// change to screen select items and change the title
	_ui_screen_change(&ui_PickItems, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_PickItems_screen_init);
	pick_items_set_title();
}

void selected_items(lv_event_t * e)
{
	// Your code here
	LOG_DEBUG("Selected Items");
	// change to screen step1 and change the title
	_ui_screen_change(&ui_step1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_step1_screen_init);
	step1_set_title();
}