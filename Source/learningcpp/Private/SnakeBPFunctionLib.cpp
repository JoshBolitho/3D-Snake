// Fill out your copyright notice in the Description page of Project Settings.


#include "SnakeBPFunctionLib.h"

float USnakeBPFunctionLib::SquareNumber(const float In) {
	return In * In;
}

float USnakeBPFunctionLib::NewJumpTime(const float In) {
	return In * 0.98f;
}