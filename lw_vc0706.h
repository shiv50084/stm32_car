#ifndef __LW_VC0706_H__
#define  __LW_VC0706_H__

#include <stdint.h>
#include <stdbool.h>

void lw_vc0706_init(void);
void lw_vc0706_param_init(void);

uint32_t lw_get_frame_len(void);
void lw_vc0706_recv(uint8_t val);
int32_t lw_cam_get_frame(void);
int32_t lw_cam_start_frame_(void);
int32_t lw_cam_stop_frame_(void);
bool lw_get_cam_data_to_gprs(uint8_t **buf, uint32_t *buflen);

#endif

