
#include <lvgl.h>

#include "actions.h"
#include "screens.h"
#include "images.h"
#include "ui.h"

void action_rolerchange(lv_event_t * e) {
    LV_LOG_USER("roler value changed");
  
  int rolerOption = lv_roller_get_selected(objects.roler_team_names);

 
  switch (rolerOption) {
    case 0:
      lv_label_set_text_fmt(objects.txtestadio, "Emirates stadium");
      lv_label_set_text(objects.txtfacup, "14");
      lv_label_set_text(objects.txteflcup, "2");
      lv_label_set_text(objects.txtflfd, "13");
      lv_label_set_text(objects.txtdesde, "1886");
      lv_img_set_src(objects.imagen, &img_arsenal);
        
      break;
    case 1:
      lv_label_set_text_fmt(objects.txtestadio, "Everton Stadium");
      lv_label_set_text(objects.txtfacup, "5");
      lv_label_set_text(objects.txteflcup, "-");
      lv_label_set_text(objects.txtflfd, "9");
      lv_label_set_text(objects.txtdesde, "1878");
      lv_img_set_src(objects.imagen, &img_everton);
      break;
    case 2:
      lv_label_set_text_fmt(objects.txtestadio, "Stamford bridge");
      lv_label_set_text(objects.txtfacup, "8");
      lv_label_set_text(objects.txteflcup, "5");
      lv_label_set_text(objects.txtflfd, "6");
      lv_label_set_text(objects.txtdesde, "1907");
      lv_img_set_src(objects.imagen, &img_chelsea);
      break;
    case 3:
      lv_label_set_text_fmt(objects.txtestadio, "Anfield");
      lv_label_set_text(objects.txtfacup, "8");
      lv_label_set_text(objects.txteflcup, "10");
      lv_label_set_text(objects.txtflfd, "20");
      lv_label_set_text(objects.txtdesde, "1892");
      lv_img_set_src(objects.imagen, &img_liverpool);
      break;
    case 4: 
      lv_label_set_text_fmt(objects.txtestadio, "fulham");
      lv_label_set_text(objects.txtfacup, "-");
      lv_label_set_text(objects.txteflcup, "-");
      lv_label_set_text(objects.txtflfd, "-");
      lv_label_set_text(objects.txtdesde, "1879");
     lv_img_set_src(objects.imagen, &img_fulham);

       break;
    default:
      break;
  }

     
}
