// Copyright 2018 Espressif Systems (Shanghai) PTE LTD
// All rights reserved.

#include "led_olimex.h"
#include "va_led.h"
/*
 * Format for this is BRG
 */

const va_led_specs_t led_lyrat_ww_active[] = {
    {100, {0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF}, 0},
};

const va_led_specs_t led_lyrat_ww_ongoing[] = {
    {100, {0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF}, 0},
};

const va_led_specs_t led_lyrat_speaking[] = {
    {50, {0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F}, 1},
    {50, {0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F}, 1},
    {50, {0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00001F}, 1},
    {50, {0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F}, 1},
    {50, {0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F}, 1},
    {50, {0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F}, 1},
    {50, {0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F}, 1},
    {50, {0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F}, 1},
    {50, {0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F}, 1},
    {50, {0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F}, 1},
    {50, {0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF}, 1},
    {50, {0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF}, 1},
    {50, {0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF}, 1},
    {50, {0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF}, 1},
    {50, {0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF}, 1},
    {50, {0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF}, 1},
    {50, {0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF}, 1},
    {50, {0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF}, 1},
    {50, {0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF}, 1},
    {50, {0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF}, 1},
    {50, {0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF}, 1},
    {50, {0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F}, 1},
    {50, {0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F}, 1},
    {50, {0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F}, 1},
    {50, {0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F}, 1},
    {50, {0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F}, 1},
    {50, {0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F}, 1},
    {50, {0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F}, 1},
    {50, {0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00001F}, 1},
    {50, {0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F}, 1},
};

const va_led_specs_t led_lyrat_mic_off_end[] = {
    {11, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 0},
};

const va_led_specs_t led_lyrat_mic_off_on[] = {
    {66, {0x00FF00,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 0},
};

const va_led_specs_t led_lyrat_mic_off_start[] = {
    {33, {0x00FF00,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 0},
};

const va_led_specs_t led_lyrat_ww_deactive[] = {
    {33, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 0},
};

const va_led_specs_t led_lyrat_error[] = {
    {66, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 1},
};

const va_led_specs_t led_lyrat_btconnect[] = {
    {75, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 0},
};

const va_led_specs_t led_lyrat_btdisconnect[] = {
    {75, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 0},
};

const va_led_specs_t led_lyrat_ntf_queued[] = {
    {60, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 1},
};

const va_led_specs_t led_lyrat_ntf_incoming[] = {
    {50, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 0},
};

const va_led_specs_t led_lyrat_thinking[] = {
    {10, {0x00001F,0x00003F,0x00005F,0x00007F,0x00009F,0x0000BF,0x0000DF,0x0000FF,0x000000,0x000000,0x000000,0x000000}, 1},
};

const va_led_specs_t led_lyrat_alrt_short[] = {
    {100, {0x0000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 1},

};

const va_led_specs_t led_lyrat_alrt[] = {
    {50, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 1},
};

const va_led_specs_t led_lyrat_bootup_1[] = {
    {70, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 0},
    {70, {0x000F0F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F}, 0},
    {70, {0x001F1F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F}, 0},
    {70, {0x003F3F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F}, 0},
    {70, {0x005F5F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F}, 0},
    {70, {0x007F7F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F}, 0},
    {70, {0x009F9F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F}, 0},
    {70, {0x00BFBF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF}, 0},
    {70, {0x00DFDF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF}, 0},  
};

const va_led_specs_t led_lyrat_bootup_2[] = {
    {33, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 1},
    {33, {0x00FFFF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF}, 1},
};

const va_led_specs_t led_lyrat_speaker_mute[] = {
    {22, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 0},
};

const va_led_specs_t led_lyrat_speaker_vol[] = {
    {11, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 0},
};

const va_led_specs_t led_lyrat_off[] = {
    {10, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 0},
};

const va_led_specs_t led_lyrat_factory_rst[] = {
    {233, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}, 1},
    {233, {0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF}, 1},
};

va_led_config_t led_lyrat_pattern_conf[VA_LED_PATTERN_MAX];

void led_lyrat_pattern_init(va_led_config_t **va_led_lyrat_pat)
{
    led_lyrat_pattern_conf[VA_LED_BOOTUP_1].va_led_state_sz = sizeof(led_lyrat_bootup_1) / sizeof(led_lyrat_bootup_1[0]);
    led_lyrat_pattern_conf[VA_LED_BOOTUP_1].va_led_state_st = (va_led_specs_t *)led_lyrat_bootup_1;

    led_lyrat_pattern_conf[VA_LED_BOOTUP_2].va_led_state_sz = sizeof(led_lyrat_bootup_2) / sizeof(led_lyrat_bootup_2[0]);
    led_lyrat_pattern_conf[VA_LED_BOOTUP_2].va_led_state_st = (va_led_specs_t *)led_lyrat_bootup_2;

    led_lyrat_pattern_conf[VA_LED_WW_ACTIVE].va_led_state_sz = sizeof(led_lyrat_ww_active) / sizeof(led_lyrat_ww_active[0]);
    led_lyrat_pattern_conf[VA_LED_WW_ACTIVE].va_led_state_st = (va_led_specs_t *)led_lyrat_ww_active;

    led_lyrat_pattern_conf[VA_LED_WW_ONGOING].va_led_state_sz = sizeof(led_lyrat_ww_ongoing) / sizeof(led_lyrat_ww_ongoing[0]);
    led_lyrat_pattern_conf[VA_LED_WW_ONGOING].va_led_state_st = (va_led_specs_t *)led_lyrat_ww_ongoing;

    led_lyrat_pattern_conf[VA_LED_WW_DEACTIVATE].va_led_state_sz = sizeof(led_lyrat_ww_deactive) / sizeof(led_lyrat_ww_deactive[0]);
    led_lyrat_pattern_conf[VA_LED_WW_DEACTIVATE].va_led_state_st = (va_led_specs_t *)led_lyrat_ww_deactive;

    led_lyrat_pattern_conf[VA_LED_SPEAKER_VOL].va_led_state_sz = sizeof(led_lyrat_speaker_vol) / sizeof(led_lyrat_speaker_vol[0]);
    led_lyrat_pattern_conf[VA_LED_SPEAKER_VOL].va_led_state_st = (va_led_specs_t *)led_lyrat_speaker_vol;

    led_lyrat_pattern_conf[VA_LED_SPEAKER_MUTE].va_led_state_sz = sizeof(led_lyrat_speaker_mute) / sizeof(led_lyrat_speaker_mute[0]);
    led_lyrat_pattern_conf[VA_LED_SPEAKER_MUTE].va_led_state_st = (va_led_specs_t *)led_lyrat_speaker_mute;

    led_lyrat_pattern_conf[VA_LED_SPEAKING].va_led_state_sz = sizeof(led_lyrat_speaking) / sizeof(led_lyrat_speaking[0]);
    led_lyrat_pattern_conf[VA_LED_SPEAKING].va_led_state_st = (va_led_specs_t *)led_lyrat_speaking;

    led_lyrat_pattern_conf[VA_LED_MIC_OFF_END].va_led_state_sz = sizeof(led_lyrat_mic_off_end) / sizeof(led_lyrat_mic_off_end[0]);
    led_lyrat_pattern_conf[VA_LED_MIC_OFF_END].va_led_state_st = (va_led_specs_t *)led_lyrat_mic_off_end;

    led_lyrat_pattern_conf[VA_LED_MIC_OFF_ON].va_led_state_sz = sizeof(led_lyrat_mic_off_on) / sizeof(led_lyrat_mic_off_on[0]);
    led_lyrat_pattern_conf[VA_LED_MIC_OFF_ON].va_led_state_st = (va_led_specs_t *)led_lyrat_mic_off_on;

    led_lyrat_pattern_conf[VA_LED_MIC_OFF_START].va_led_state_sz = sizeof(led_lyrat_mic_off_start) / sizeof(led_lyrat_mic_off_start[0]);
    led_lyrat_pattern_conf[VA_LED_MIC_OFF_START].va_led_state_st = (va_led_specs_t *)led_lyrat_mic_off_start;

    led_lyrat_pattern_conf[VA_LED_ERROR].va_led_state_sz = sizeof(led_lyrat_error) / sizeof(led_lyrat_error[0]);
    led_lyrat_pattern_conf[VA_LED_ERROR].va_led_state_st = (va_led_specs_t *)led_lyrat_error;

    led_lyrat_pattern_conf[VA_LED_BTCONNECT].va_led_state_sz = sizeof(led_lyrat_btconnect) / sizeof(led_lyrat_btconnect[0]);
    led_lyrat_pattern_conf[VA_LED_BTCONNECT].va_led_state_st = (va_led_specs_t *)led_lyrat_btconnect;

    led_lyrat_pattern_conf[VA_LED_BTDISCONNECT].va_led_state_sz = sizeof(led_lyrat_btdisconnect) / sizeof(led_lyrat_btdisconnect[0]);
    led_lyrat_pattern_conf[VA_LED_BTDISCONNECT].va_led_state_st = (va_led_specs_t *)led_lyrat_btdisconnect;

    led_lyrat_pattern_conf[VA_LED_NTF_QUEUED].va_led_state_sz = sizeof(led_lyrat_ntf_queued) / sizeof(led_lyrat_ntf_queued[0]);
    led_lyrat_pattern_conf[VA_LED_NTF_QUEUED].va_led_state_st = (va_led_specs_t *)led_lyrat_ntf_queued;

    led_lyrat_pattern_conf[VA_LED_NTF_INCOMING].va_led_state_sz = sizeof(led_lyrat_ntf_incoming) / sizeof(led_lyrat_ntf_incoming[0]);
    led_lyrat_pattern_conf[VA_LED_NTF_INCOMING].va_led_state_st = (va_led_specs_t *)led_lyrat_ntf_incoming;

    led_lyrat_pattern_conf[VA_LED_THINKING].va_led_state_sz = sizeof(led_lyrat_thinking) / sizeof(led_lyrat_thinking[0]);
    led_lyrat_pattern_conf[VA_LED_THINKING].va_led_state_st = (va_led_specs_t *)led_lyrat_thinking;

    led_lyrat_pattern_conf[VA_LED_ALERT_SHORT].va_led_state_sz = sizeof(led_lyrat_alrt_short) / sizeof(led_lyrat_alrt_short[0]);
    led_lyrat_pattern_conf[VA_LED_ALERT_SHORT].va_led_state_st = (va_led_specs_t *)led_lyrat_alrt_short;

    led_lyrat_pattern_conf[VA_LED_ALERT].va_led_state_sz = sizeof(led_lyrat_alrt) / sizeof(led_lyrat_alrt[0]);
    led_lyrat_pattern_conf[VA_LED_ALERT].va_led_state_st = (va_led_specs_t *)led_lyrat_alrt;

    led_lyrat_pattern_conf[VA_LED_FACTORY_RESET].va_led_state_sz = sizeof(led_lyrat_factory_rst) / sizeof(led_lyrat_factory_rst[0]);
    led_lyrat_pattern_conf[VA_LED_FACTORY_RESET].va_led_state_st = (va_led_specs_t *)led_lyrat_factory_rst;

    led_lyrat_pattern_conf[VA_LED_OFF].va_led_state_sz = sizeof(led_lyrat_off) / sizeof(led_lyrat_off[0]);
    led_lyrat_pattern_conf[VA_LED_OFF].va_led_state_st = (va_led_specs_t *)led_lyrat_off;

    (*va_led_lyrat_pat) = led_lyrat_pattern_conf;
}
