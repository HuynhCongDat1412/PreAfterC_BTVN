/*
 * nutnhan.c
 *
 *  Created on: Feb 14, 2024
 *      Author: hdat8
 */

#include "nutnhan.h"
//------------------------------var button



__weak void xuly_led_tat()
{

}
__weak void xuly_led_blink1Hz()
{

}
__weak void xuly_led_blink5Hz()
{

}
__weak void xuly_led()
{

}
__weak void nut_nhan(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
{
}
__weak void nut_nha()
{

}




void xulynutnhan(nut_nhan_TypeDef_t *ButtonX)
{
	uint8_t trangthai = HAL_GPIO_ReadPin(ButtonX->GPIOx, ButtonX->GPIO_Pin);
	if (trangthai != ButtonX->filter)
	{
		ButtonX->filter = trangthai;
		ButtonX->is_thaydoi = 1;
		ButtonX->tg_loc_nhieu= HAL_GetTick();
	}
	if ((ButtonX->is_thaydoi) && (HAL_GetTick()-ButtonX->tg_loc_nhieu >=15))
	{
		ButtonX->trangthai_cuoi = ButtonX->filter;
		ButtonX->is_thaydoi =0;
	}

	if ((ButtonX->trangthai_cuoi) != (ButtonX->trangthai_last))
	{
		if (ButtonX->trangthai_cuoi == 0) // nhan nut
		{
			nut_nhan(ButtonX->GPIOx,ButtonX->GPIO_Pin);
		}
		if (ButtonX->trangthai_cuoi == 1) // nha nut
		{
			nut_nha();
		}
		ButtonX->trangthai_last = ButtonX->trangthai_cuoi;
	}
}

void nutnhan_init (nut_nhan_TypeDef_t *ButtonX, GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
{
	ButtonX->GPIOx = GPIOx;
	ButtonX->GPIO_Pin = GPIO_Pin;
}





