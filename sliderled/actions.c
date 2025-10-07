#include <lvgl.h>

#include "screens.h"
#include "actions.h"
#include "ui.h"
int brillo;
void action_slider1change(lv_event_t * e){
  brillo = lv_slider_get_value(objects.slider1);

  lv_led_set_brightness(objects.led1, brillo);


}
