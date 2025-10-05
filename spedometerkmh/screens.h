#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *main;
    lv_obj_t *panel_speedometer;
    lv_obj_t *scale0_to270;
    lv_obj_t *img_hovering_needle;
    lv_obj_t *arc_shadow_bg;
    lv_obj_t *scale_inside;
    lv_obj_t *spinner_inside;
    lv_obj_t *label_mph;
    lv_obj_t *label_milage_bg;
    lv_obj_t *label_milage_fg;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN = 1,
};

void create_screen_main();
void tick_screen_main();

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/