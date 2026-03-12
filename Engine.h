#pragma once

#ifndef __ENGINE_H__
#define __ENGINE_H__  

extern int Map[10][10];

struct FVector2i
{
	int X;
	int Y;
};

extern FVector2i PlayerPosition;

int Input();

void Tick(int KeyCode);

void Render();

void Gotoxy(int x, int y);

void Clear();

void AddPlayerOffset(FVector2i DeltaPosition);

void AddPlayerOffset(int DeltaX, int DeltaY);


#endif //__ENGINE_H__