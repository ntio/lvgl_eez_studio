#include <string.h>

#include "screens.h"
#include "images.h"
#include "fonts.h"
#include "actions.h"
#include "vars.h"
#include "styles.h"
#include "ui.h"

#include <string.h>

objects_t objects;
lv_obj_t *tick_value_change_obj;
uint32_t active_theme_index = 0;

void create_screen_main() {
    lv_obj_t *obj = lv_obj_create(0);
    objects.main = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 320, 240);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            // txtflfd
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.txtflfd = obj;
            lv_obj_set_pos(obj, 75, 89);
            lv_obj_set_size(obj, 54, 30);
            lv_obj_set_style_text_font(obj, &ui_font_orbitron_17, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xfff3ff00), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, " ");
        }
        {
            // lbldesde
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.lbldesde = obj;
            lv_obj_set_pos(obj, 0, 28);
            lv_obj_set_size(obj, 75, 25);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xfffe0000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "Desde: ");
        }
        {
            // lblestadio
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.lblestadio = obj;
            lv_obj_set_pos(obj, 0, 6);
            lv_obj_set_size(obj, 75, 25);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffff0000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "Estadio: ");
        }
        {
            // lblfacup
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.lblfacup = obj;
            lv_obj_set_pos(obj, 0, 48);
            lv_obj_set_size(obj, 75, 25);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffff0000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "FA Cup: ");
        }
        {
            // lbleflcup
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.lbleflcup = obj;
            lv_obj_set_pos(obj, 0, 70);
            lv_obj_set_size(obj, 75, 25);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffff0000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "EFL Cup: ");
        }
        {
            // lblflfd
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.lblflfd = obj;
            lv_obj_set_pos(obj, 0, 91);
            lv_obj_set_size(obj, 75, 25);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffff0000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "FLFD: ");
        }
        {
            // txtdesde
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.txtdesde = obj;
            lv_obj_set_pos(obj, 75, 26);
            lv_obj_set_size(obj, 54, 30);
            lv_obj_set_style_text_font(obj, &ui_font_orbitron_17, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffeeff00), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, " ");
        }
        {
            // txtestadio
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.txtestadio = obj;
            lv_obj_set_pos(obj, 75, 2);
            lv_obj_set_size(obj, 240, 30);
            lv_obj_set_style_text_font(obj, &ui_font_orbitron_17, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff00f5ff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, " ");
        }
        {
            // txtfacup
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.txtfacup = obj;
            lv_obj_set_pos(obj, 75, 46);
            lv_obj_set_size(obj, 54, 30);
            lv_obj_set_style_text_font(obj, &ui_font_orbitron_17, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff079100), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, " ");
        }
        {
            // txteflcup
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.txteflcup = obj;
            lv_obj_set_pos(obj, 75, 68);
            lv_obj_set_size(obj, 54, 30);
            lv_obj_set_style_text_font(obj, &ui_font_orbitron_17, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffb77900), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, " ");
        }
        {
            // rolerTeamNames
            lv_obj_t *obj = lv_roller_create(parent_obj);
            objects.roler_team_names = obj;
            lv_obj_set_pos(obj, 0, 149);
            lv_obj_set_size(obj, 129, 88);
            lv_roller_set_options(obj, "Arsenal\nEverton\nChelsea\nLiverpool\nFulham", LV_ROLLER_MODE_INFINITE);
            lv_obj_add_event_cb(obj, action_rolerchange, LV_EVENT_VALUE_CHANGED, (void *)0);
        }
        {
            // imagen
            lv_obj_t *obj = lv_image_create(parent_obj);
            objects.imagen = obj;
            lv_obj_set_pos(obj, 187, 104);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_image_set_src(obj, &img_arsenal);
        }
    }
    
    tick_screen_main();
}

void tick_screen_main() {
}



typedef void (*tick_screen_func_t)();
tick_screen_func_t tick_screen_funcs[] = {
    tick_screen_main,
};
void tick_screen(int screen_index) {
    tick_screen_funcs[screen_index]();
}
void tick_screen_by_id(enum ScreensEnum screenId) {
    tick_screen_funcs[screenId - 1]();
}

void create_screens() {
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    
    create_screen_main();
}
