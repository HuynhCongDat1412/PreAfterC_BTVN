/*
 * nutnhan.h
 *
 *  Created on: Feb 14, 2024
 *      Author: hdat8
 */

#ifndef NUTNHAN_H_
#define NUTNHAN_H_

#include "main.h"


void xuly_led_tat();
void xuly_led_blink1Hz();
void xuly_led_blink5Hz();
void xuly_led();
void nut_nha();
void nut_nhan(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
typedef struct
{
	uint8_t filter;	// do tro keo len nen nut nhan A1 ban dau bang 1
	uint8_t is_thaydoi;
	uint32_t tg_loc_nhieu;
	uint8_t trangthai_cuoi;
	uint8_t trangthai_last;
	uint8_t test;
	GPIO_TypeDef *GPIOx;
	uint16_t GPIO_Pin;
}nut_nhan_TypeDef_t;
void xulynutnhan(nut_nhan_TypeDef_t *ButtonX);
void nutnhan_init(nut_nhan_TypeDef_t *ButtonX,GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
#endif /* NUTNHAN_H_ */


