#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *main;
    lv_obj_t *txtflfd;
    lv_obj_t *lbldesde;
    lv_obj_t *lblestadio;
    lv_obj_t *lblfacup;
    lv_obj_t *lbleflcup;
    lv_obj_t *lblflfd;
    lv_obj_t *txtdesde;
    lv_obj_t *txtestadio;
    lv_obj_t *txtfacup;
    lv_obj_t *txteflcup;
    lv_obj_t *roler_team_names;
    lv_obj_t *imagen;
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