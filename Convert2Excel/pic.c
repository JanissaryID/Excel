
/******************************************************************************************************

          Project Name : PLD32V1852
          MCU Type  : MSD3663LWA
          Setting Version  : 3.4 (8 pic Mode)
          Modify by : Abdul Syakur
          Filename  : picture_setting_PLD32V1852.c
          7/12/2022 4:59:04 PM
          Note  : 


******************************************************************************************************/

/******************************************************************************************************

SETTING_ADC_GAIN_OFFSET

******************************************************************************************************/

#define SETTING_ADC_GAIN_OFFSET_VGA     { 5773, 5833, 5787, 0, 0, 0 } 
#define SETTING_ADC_GAIN_OFFSET_YPBPR_SD     { 4546, 4568, 4520, 2048, 256, 2048 } 
#define SETTING_ADC_GAIN_OFFSET_YPBPR_HD     { 4933, 4626, 4913, 2048, 256, 2048 } 

/******************************************************************************************************

SETTING_BACKLIGHT_NONLINEAR_CURVE

******************************************************************************************************/

#define SETTING_BACKLIGHT_NONLINEAR_CURVE     { 55, 66, 73, 80, 87, 95, 102, 109, 114, 118, 122 } 

#define CUSTOM_PWM0_PERIOD  0x8000
#define CUSTOM_INIT_PWM0_DUTY  0x4000
#define CUSTOM_PWM0_DIV  0

/******************************************************************************************************

SETTING PICTURE MODE
Note: { Contrast,   Brightness,   Color,  Sharpness,  Tint }

******************************************************************************************************/

//============>DTV<=====================
#define DTV_PICTURE_DIPE    75,50,85,50,50,50+50,10,1
#define DTV_PICTURE_STANDARD    75,48,60,40,50,50+25,7,0
#define DTV_PICTURE_SOFT_STANDARD    65,50,50,35,50,50+25,3,0
#define DTV_PICTURE_NATURAL    75,48,40,15,50,50+15,10,0
#define DTV_PICTURE_SOFT_NATURAL    75,50,40,15,50,50+15,3,0
#define DTV_PICTURE_CINEMA    50,50,40,20,50,50-50,2,0
#define DTV_PICTURE_ACTION    50,50,50,40,50,50+0,10,1
#define DTV_PICTURE_USER    75,50,85,50,50,50+50,10,1

//============>ATV<=====================
#define ATV_PICTURE_DIPE    75,50,85,50,50,50+50,10,1
#define ATV_PICTURE_STANDARD    75,48,60,40,50,50+25,7,0
#define ATV_PICTURE_SOFT_STANDARD    65,50,50,35,50,50+25,3,0
#define ATV_PICTURE_NATURAL    75,48,40,15,50,50+15,10,0
#define ATV_PICTURE_SOFT_NATURAL    75,50,40,15,50,50+15,3,0
#define ATV_PICTURE_CINEMA    50,50,40,20,50,50-50,2,0
#define ATV_PICTURE_ACTION    50,50,50,40,50,50+0,10,1
#define ATV_PICTURE_USER    75,50,85,50,50,50+50,10,1

//============>AV1<=====================
#define AV1_PICTURE_DIPE    75,50,85,50,50,50+50,10,1
#define AV1_PICTURE_STANDARD    75,48,60,40,50,50+25,7,0
#define AV1_PICTURE_SOFT_STANDARD    65,50,50,35,50,50+25,3,0
#define AV1_PICTURE_NATURAL    75,48,40,15,50,50+15,10,0
#define AV1_PICTURE_SOFT_NATURAL    75,50,40,15,50,50+15,3,0
#define AV1_PICTURE_CINEMA    50,50,40,20,50,50-50,2,0
#define AV1_PICTURE_ACTION    50,50,50,40,50,50+0,10,1
#define AV1_PICTURE_USER    75,50,85,50,50,50+50,10,1

//============>AV2<=====================
#define AV2_PICTURE_DIPE    75,50,85,50,50,50+50,10,1
#define AV2_PICTURE_STANDARD    75,48,60,40,50,50+25,7,0
#define AV2_PICTURE_SOFT_STANDARD    65,50,50,35,50,50+25,3,0
#define AV2_PICTURE_NATURAL    75,48,40,15,50,50+15,10,0
#define AV2_PICTURE_SOFT_NATURAL    75,50,40,15,50,50+15,3,0
#define AV2_PICTURE_CINEMA    50,50,40,20,50,50-50,2,0
#define AV2_PICTURE_ACTION    50,50,50,40,50,50+0,10,1
#define AV2_PICTURE_USER    75,50,85,50,50,50+50,10,1

//============>AV3<=====================
#define AV3_PICTURE_DIPE    75,50,85,50,50,50+50,10,1
#define AV3_PICTURE_STANDARD    75,48,60,40,50,50+25,7,0
#define AV3_PICTURE_SOFT_STANDARD    65,50,50,35,50,50+25,3,0
#define AV3_PICTURE_NATURAL    75,48,40,15,50,50+15,10,0
#define AV3_PICTURE_SOFT_NATURAL    75,50,40,15,50,50+15,3,0
#define AV3_PICTURE_CINEMA    50,50,40,20,50,50-50,2,0
#define AV3_PICTURE_ACTION    50,50,50,40,50,50+0,10,1
#define AV3_PICTURE_USER    75,50,85,50,50,50+50,10,1

//============>YPBPR1<=====================
#define YPBPR1_PICTURE_DIPE    75,50,85,50,50,50+50,10,1
#define YPBPR1_PICTURE_STANDARD    75,48,60,40,50,50+25,7,0
#define YPBPR1_PICTURE_SOFT_STANDARD    65,50,50,35,50,50+25,3,0
#define YPBPR1_PICTURE_NATURAL    75,48,40,15,50,50+15,10,0
#define YPBPR1_PICTURE_SOFT_NATURAL    75,50,40,15,50,50+15,3,0
#define YPBPR1_PICTURE_CINEMA    50,50,40,20,50,50-50,2,0
#define YPBPR1_PICTURE_ACTION    50,50,50,40,50,50+0,10,1
#define YPBPR1_PICTURE_USER    75,50,85,50,50,50+50,10,1

//============>YPBPR2<=====================
#define YPBPR2_PICTURE_DIPE    75,50,85,50,50,50+50,10,1
#define YPBPR2_PICTURE_STANDARD    75,48,60,40,50,50+25,7,0
#define YPBPR2_PICTURE_SOFT_STANDARD    65,50,50,35,50,50+25,3,0
#define YPBPR2_PICTURE_NATURAL    75,48,40,15,50,50+15,10,0
#define YPBPR2_PICTURE_SOFT_NATURAL    75,50,40,15,50,50+15,3,0
#define YPBPR2_PICTURE_CINEMA    50,50,40,20,50,50-50,2,0
#define YPBPR2_PICTURE_ACTION    50,50,50,40,50,50+0,10,1
#define YPBPR2_PICTURE_USER    75,50,85,50,50,50+50,10,1

//============>VGA<=====================
#define VGA_PICTURE_DIPE    75,50,85,65,50,50+50,10,0
#define VGA_PICTURE_STANDARD    75,48,60,50,50,50+25,7,0
#define VGA_PICTURE_SOFT_STANDARD    65,50,50,45,50,50+25,3,0
#define VGA_PICTURE_NATURAL    75,48,40,40,50,50+15,10,0
#define VGA_PICTURE_SOFT_NATURAL    75,50,40,40,50,50+15,3,0
#define VGA_PICTURE_CINEMA    50,50,40,45,50,50-50,2,0
#define VGA_PICTURE_ACTION    50,50,50,50,50,50+0,10,0
#define VGA_PICTURE_USER    75,50,85,65,50,50+50,10,0

//============>HDMI1<=====================
#define HDMI1_PICTURE_DIPE    75,50,85,50,50,50+50,10,1
#define HDMI1_PICTURE_STANDARD    75,48,60,40,50,50+25,7,0
#define HDMI1_PICTURE_SOFT_STANDARD    65,50,50,35,50,50+25,3,0
#define HDMI1_PICTURE_NATURAL    75,48,40,15,50,50+15,10,0
#define HDMI1_PICTURE_SOFT_NATURAL    75,50,40,15,50,50+15,3,0
#define HDMI1_PICTURE_CINEMA    50,50,40,20,50,50-50,2,0
#define HDMI1_PICTURE_ACTION    50,50,50,40,50,50+0,10,1
#define HDMI1_PICTURE_USER    75,50,85,50,50,50+50,10,1

//============>HDMI2<=====================
#define HDMI2_PICTURE_DIPE    75,50,85,50,50,50+50,10,1
#define HDMI2_PICTURE_STANDARD    75,48,60,40,50,50+25,7,0
#define HDMI2_PICTURE_SOFT_STANDARD    65,50,50,35,50,50+25,3,0
#define HDMI2_PICTURE_NATURAL    75,48,40,15,50,50+15,10,0
#define HDMI2_PICTURE_SOFT_NATURAL    75,50,40,15,50,50+15,3,0
#define HDMI2_PICTURE_CINEMA    50,50,40,20,50,50-50,2,0
#define HDMI2_PICTURE_ACTION    50,50,50,40,50,50+0,10,1
#define HDMI2_PICTURE_USER    75,50,85,50,50,50+50,10,1

//============>HDMI3<=====================
#define HDMI3_PICTURE_DIPE    75,50,85,50,50,50+50,10,1
#define HDMI3_PICTURE_STANDARD    75,48,60,40,50,50+25,7,0
#define HDMI3_PICTURE_SOFT_STANDARD    65,50,50,35,50,50+25,3,0
#define HDMI3_PICTURE_NATURAL    75,48,40,15,50,50+15,10,0
#define HDMI3_PICTURE_SOFT_NATURAL    75,50,40,15,50,50+15,3,0
#define HDMI3_PICTURE_CINEMA    50,50,40,20,50,50-50,2,0
#define HDMI3_PICTURE_ACTION    50,50,50,40,50,50+0,10,1
#define HDMI3_PICTURE_USER    75,50,85,50,50,50+50,10,1

//============>HDMI4<=====================
#define HDMI4_PICTURE_DIPE    75,50,85,50,50,50+50,10,1
#define HDMI4_PICTURE_STANDARD    75,48,60,40,50,50+25,7,0
#define HDMI4_PICTURE_SOFT_STANDARD    65,50,50,35,50,50+25,3,0
#define HDMI4_PICTURE_NATURAL    75,48,40,15,50,50+15,10,0
#define HDMI4_PICTURE_SOFT_NATURAL    75,50,40,15,50,50+15,3,0
#define HDMI4_PICTURE_CINEMA    50,50,40,20,50,50-50,2,0
#define HDMI4_PICTURE_ACTION    50,50,50,40,50,50+0,10,1
#define HDMI4_PICTURE_USER    75,50,85,50,50,50+50,10,1

//============>USB<=====================
#define USB_PICTURE_DIPE    75,50,85,65,50,50+50,10,0
#define USB_PICTURE_STANDARD    75,48,60,50,50,50+25,7,0
#define USB_PICTURE_SOFT_STANDARD    65,50,50,45,50,50+25,3,0
#define USB_PICTURE_NATURAL    75,48,40,40,50,50+15,10,0
#define USB_PICTURE_SOFT_NATURAL    75,50,40,40,50,50+15,3,0
#define USB_PICTURE_CINEMA    50,50,40,45,50,50-50,2,0
#define USB_PICTURE_ACTION    50,50,50,50,50,50+0,10,0
#define USB_PICTURE_USER    75,50,85,65,50,50+50,10,0

//============>STV<=====================
#define STV_PICTURE_DIPE    75,50,85,50,50,50+50,10,1
#define STV_PICTURE_STANDARD    75,48,60,40,50,50+25,7,0
#define STV_PICTURE_SOFT_STANDARD    65,50,50,35,50,50+25,3,0
#define STV_PICTURE_NATURAL    75,48,40,15,50,50+15,10,0
#define STV_PICTURE_SOFT_NATURAL    75,50,40,15,50,50+15,3,0
#define STV_PICTURE_CINEMA    50,50,40,20,50,50-50,2,0
#define STV_PICTURE_ACTION    50,50,50,40,50,50+0,10,1
#define STV_PICTURE_USER    75,50,85,50,50,50+50,10,1


/******************************************************************************************************

WHITE BALANCE


******************************************************************************************************/

//============>ALL<=====================
//-- NORMAL --
#define WB_ALL_NORMAL_RGB_GAIN   121,126,128
#define WB_ALL_NORMAL_RGB_OFFSET   COLOR_RGB_OFFSET+128,COLOR_RGB_OFFSET+128,COLOR_RGB_OFFSET+128
#define WB_ALL_NORMAL_RGB_SCALE    0x32,0x32,0x32
//-- WARM --
#define WB_ALL_WARM_RGB_GAIN   121+4,126-4,128-14
#define WB_ALL_WARM_RGB_OFFSET   COLOR_RGB_OFFSET+128+1,COLOR_RGB_OFFSET+128+0,COLOR_RGB_OFFSET+128+0
#define WB_ALL_WARM_RGB_SCALE    0x32,0x32,0x32
//-- COOL --
#define WB_ALL_COOL_RGB_GAIN   121-3,126+0,128+11
#define WB_ALL_COOL_RGB_OFFSET   COLOR_RGB_OFFSET+128-3,COLOR_RGB_OFFSET+128+0,COLOR_RGB_OFFSET+128-2
#define WB_ALL_COOL_RGB_SCALE    0x32,0x32,0x32

//============>PC<=====================
//-- NORMAL --
#define WB_PC_NORMAL_RGB_GAIN   121,126,128
#define WB_PC_NORMAL_RGB_OFFSET   COLOR_RGB_OFFSET+128,COLOR_RGB_OFFSET+128,COLOR_RGB_OFFSET+128
#define WB_PC_NORMAL_RGB_SCALE    0x32,0x32,0x32
//-- WARM --
#define WB_PC_WARM_RGB_GAIN   121+4,126-4,128-14
#define WB_PC_WARM_RGB_OFFSET   COLOR_RGB_OFFSET+128+1,COLOR_RGB_OFFSET+128+0,COLOR_RGB_OFFSET+128+0
#define WB_PC_WARM_RGB_SCALE    0x32,0x32,0x32
//-- COOL --
#define WB_PC_COOL_RGB_GAIN   121-3,126+0,128+11
#define WB_PC_COOL_RGB_OFFSET   COLOR_RGB_OFFSET+128-3,COLOR_RGB_OFFSET+128+0,COLOR_RGB_OFFSET+128-2
#define WB_PC_COOL_RGB_SCALE    0x32,0x32,0x32


/******************************************************************************************************

SETTING PICTURE NON LINEAR
Note: { 0SD 0,   0SD 25,   0SD 50,  0SD 75,  0SD 100 }

******************************************************************************************************/

//============>DTV<=====================
#define PICTURE_NONLINEAR_DTV_BRIGHTNESS   { 78,98,122,129,144 }
#define PICTURE_NONLINEAR_DTV_CONTRAST   { 3,120,145,154,195 }
#define PICTURE_NONLINEAR_DTV_COLOR   { 0,90,125,155,195 }
#define PICTURE_NONLINEAR_DTV_TINT   { 30,40,50,60,70 }
#define PICTURE_NONLINEAR_DTV_SHARPNESS   { 0,23,45,54,63 }

//============>TV<=====================
#define PICTURE_NONLINEAR_TV_BRIGHTNESS   { 77,94,119,123,136 }
#define PICTURE_NONLINEAR_TV_CONTRAST   { 3,129,145,154,204 }
#define PICTURE_NONLINEAR_TV_COLOR   { 0,96,133,165,200 }
#define PICTURE_NONLINEAR_TV_TINT   { 30,40,50,60,70 }
#define PICTURE_NONLINEAR_TV_SHARPNESS   { 0,15,31,45,63 }

//============>AV<=====================
#define PICTURE_NONLINEAR_AV_BRIGHTNESS   { 78,100,121,126,140 }
#define PICTURE_NONLINEAR_AV_CONTRAST   { 3,127,150,161,206 }
#define PICTURE_NONLINEAR_AV_COLOR   { 0,96,133,165,200 }
#define PICTURE_NONLINEAR_AV_TINT   { 30,40,50,60,70 }
#define PICTURE_NONLINEAR_AV_SHARPNESS   { 0,15,31,45,63 }

//============>YPBPR<=====================
#define PICTURE_NONLINEAR_YPBPR_BRIGHTNESS   { 78,97,119,128,143 }
#define PICTURE_NONLINEAR_YPBPR_CONTRAST   { 2,102,133,143,181 }
#define PICTURE_NONLINEAR_YPBPR_COLOR   { 0,96,133,165,200 }
#define PICTURE_NONLINEAR_YPBPR_TINT   { 30,40,50,60,70 }
#define PICTURE_NONLINEAR_YPBPR_SHARPNESS   { 0,15,31,45,63 }

//============>HDMI<=====================
#define PICTURE_NONLINEAR_HDMI_BRIGHTNESS   { 76,100,120,127,143 }
#define PICTURE_NONLINEAR_HDMI_CONTRAST   { 3,96,139,149,168 }
#define PICTURE_NONLINEAR_HDMI_COLOR   { 0,75,125,155,195 }
#define PICTURE_NONLINEAR_HDMI_TINT   { 30,40,50,60,70 }
#define PICTURE_NONLINEAR_HDMI_SHARPNESS   { 0,15,31,45,63 }

//============>HDMI2<=====================
#define PICTURE_NONLINEAR_HDMI2_BRIGHTNESS   { 76,100,120,127,143 }
#define PICTURE_NONLINEAR_HDMI2_CONTRAST   { 3,96,139,149,168 }
#define PICTURE_NONLINEAR_HDMI2_COLOR   { 0,75,125,155,195 }
#define PICTURE_NONLINEAR_HDMI2_TINT   { 30,40,50,60,70 }
#define PICTURE_NONLINEAR_HDMI2_SHARPNESS   { 0,15,31,45,63 }

//============>HDMI3<=====================
#define PICTURE_NONLINEAR_HDMI3_BRIGHTNESS   { 76,100,120,127,143 }
#define PICTURE_NONLINEAR_HDMI3_CONTRAST   { 3,96,139,149,168 }
#define PICTURE_NONLINEAR_HDMI3_COLOR   { 0,75,125,155,195 }
#define PICTURE_NONLINEAR_HDMI3_TINT   { 30,40,50,60,70 }
#define PICTURE_NONLINEAR_HDMI3_SHARPNESS   { 0,15,31,45,63 }

//============>HDMI4<=====================
#define PICTURE_NONLINEAR_HDMI4_BRIGHTNESS   { 76,100,120,127,143 }
#define PICTURE_NONLINEAR_HDMI4_CONTRAST   { 3,96,139,149,168 }
#define PICTURE_NONLINEAR_HDMI4_COLOR   { 0,75,125,155,195 }
#define PICTURE_NONLINEAR_HDMI4_TINT   { 30,40,50,60,70 }
#define PICTURE_NONLINEAR_HDMI4_SHARPNESS   { 0,15,31,45,63 }

//============>VGA<=====================
#define PICTURE_NONLINEAR_VGA_BRIGHTNESS   { 77,95,123,132,148 }
#define PICTURE_NONLINEAR_VGA_CONTRAST   { 4,135,160,170,202 }
#define PICTURE_NONLINEAR_VGA_COLOR   { 0,75,125,155,195 }
#define PICTURE_NONLINEAR_VGA_TINT   { 30,40,50,60,70 }
#define PICTURE_NONLINEAR_VGA_SHARPNESS   { 0,15,31,45,63 }

//============>USB<=====================
#define PICTURE_NONLINEAR_USB_BRIGHTNESS   { 78,98,123,132,143 }
#define PICTURE_NONLINEAR_USB_CONTRAST   { 4,135,160,170,201 }
#define PICTURE_NONLINEAR_USB_COLOR   { 0,75,125,155,195 }
#define PICTURE_NONLINEAR_USB_TINT   { 30,40,50,60,70 }
#define PICTURE_NONLINEAR_USB_SHARPNESS   { 0,15,31,45,63 }

//============>SV<=====================
#define PICTURE_NONLINEAR_SV_BRIGHTNESS   { 74,99,114,124,133 }
#define PICTURE_NONLINEAR_SV_CONTRAST   { 16,124,147,153,172 }
#define PICTURE_NONLINEAR_SV_COLOR   { 0,104,150,200,255 }
#define PICTURE_NONLINEAR_SV_TINT   { 30,40,50,60,70 }
#define PICTURE_NONLINEAR_SV_SHARPNESS   { 0,15,31,45,63 }

//============>STV<=====================
#define PICTURE_NONLINEAR_STV_BRIGHTNESS   { 78,98,122,129,144 }
#define PICTURE_NONLINEAR_STV_CONTRAST   { 3,120,145,154,195 }
#define PICTURE_NONLINEAR_STV_COLOR   { 0,90,125,155,195 }
#define PICTURE_NONLINEAR_STV_TINT   { 30,40,50,60,70 }
#define PICTURE_NONLINEAR_STV_SHARPNESS   { 0,15,31,45,63 }


