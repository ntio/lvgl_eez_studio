
#include <lvgl.h>

#include "actions.h"
#include "screens.h"
#include "images.h"
#include "ui.h"

uint32_t currentPic = 0;
uint32_t totalNumberOfImages = 10;  //Number of images (After adding 10 bitmap image I started seeing memory issues)

void action_siguienteclick(lv_event_t * e){
     LV_LOG_USER("siguiente value changed");
     lv_event_code_t code = lv_event_get_code(e);         //Get the event code
     lv_obj_t *btn = (lv_obj_t *)lv_event_get_target(e);  //Switch that generated the event
  // lv_obj_t *image = (lv_obj_t *)lv_event_get_user_data(e);  //Label or other UI elements we want to update (Optional)

      if (code == LV_EVENT_CLICKED) {
	if (currentPic >= 0 && currentPic < totalNumberOfImages) {
    
	  lv_image_set_src(objects.img_logo, NULL);
	  setNewImage(currentPic);
    
	  //Set to next image
	  currentPic++;
	} else {
	  //Set it to the first picture again
	  currentPic = 0;
	  setNewImage(currentPic);
	}
      }
	
    }


void action_anteriorclick(lv_event_t * e){
     LV_LOG_USER("anterior value changed");
     lv_event_code_t code = lv_event_get_code(e);         //Get the event code
     lv_obj_t *btn = (lv_obj_t *)lv_event_get_target(e);  //Switch that generated the event
  // lv_obj_t *image = (lv_obj_t *)lv_event_get_user_data(e);  //Label or other UI elements we want to update (Optional)

      if (code == LV_EVENT_CLICKED) {
	if (currentPic >= 0 && currentPic < totalNumberOfImages) {
	  lv_image_set_src(objects.img_logo, NULL);
	  setNewImage(currentPic);
	  //Set to next image
	  currentPic--;
	} else {
	  //Set it to the last picture picture again
	  currentPic = 9;
	  setNewImage(currentPic);
	}
      }
	
	
    }
    
void setNewImage(uint8_t currentPic) {
      if (currentPic == 0) {
	lv_image_set_src(objects.img_logo, &img_liverpool);
      } else if (currentPic == 1) {
	lv_image_set_src(objects.img_logo, &img_man_city);
      } else if (currentPic == 2) {
	lv_image_set_src(objects.img_logo, &img_arsenal);
      } else if (currentPic == 3) {
	lv_image_set_src(objects.img_logo, &img_chelsea);
      } else if (currentPic == 4) {
	lv_image_set_src(objects.img_logo, &img_aston_villa);
      } else if (currentPic == 5) {
	lv_image_set_src(objects.img_logo, &img_newcastle);
      } else if (currentPic == 6) {
	lv_image_set_src(objects.img_logo, &img_fulham);
      } else if (currentPic == 7) {
	lv_image_set_src(objects.img_logo, &img_tottenham);
      } else if (currentPic == 8) {
	lv_image_set_src(objects.img_logo, &img_brentford);
      } else if (currentPic == 9) {
	lv_image_set_src(objects.img_logo, &img_brighton);
      }
}

