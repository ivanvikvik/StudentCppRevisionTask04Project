﻿#include "tasks.h"

/*	Task 02. The Digital Watch [электронные часы]
*
*	Электронные часы показывают время в формате h:mm:ss (от 0:00:00 до 23:59:59),
*	т.е. сначала записывается количество часов, потом обязательно двузначное количество минут,
*	затем обязательно двузначное количество секунд.
*	Количество минут и секунд при необходимости дополняются до двузначного числа нулями.
*	С начала суток прошло N секунд. Выведите, что покажут часы.
*
*	Формат входных данных [input]
*	На вход функция получает число N в диапазоне типа int.
*
*	Формат выходных данных
*	Функция должна возвратить строку - ответ на задачу 
*	или строку "error" - если пользовать передал ошибочные данные.
*
*	[ input 1]: 3602
*	[output 1]: 1:00:02
*
*	[ input 2]: 129700
*	[output 2]: 12:01:40
*
*	[ input 3]: 0
*	[output 3]: 0:00:00
*
*	[ input 4]: -1
*	[output 4]: "error"
*
*	[ input 5]: 86399
*	[output 5]: 23:59:59
*/

string task02(int number) {
	return "error";
}