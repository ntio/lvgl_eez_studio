#include <lvgl.h>

#include <stdio.h>//incluir
#include <string.h>
#include "actions.h"
#include "screens.h"
#include "ui.h"
char counter_info[256];//declara variable aqui va el valor convertido por snprintf
extern void action_spdvaluechanged(lv_event_t * e){
    
    snprintf(counter_info, sizeof(counter_info), "%d", lv_arc_get_value(objects.arc_shadow_bg));

   lv_label_set_text(objects.label_milage_fg, counter_info);
   //lv_arc_get_value(objects.arc_shadow_bg---obtengo el valor del arco
}

