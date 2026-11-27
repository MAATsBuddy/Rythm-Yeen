

// struct.h
#ifndef PLAYER_H
#define PLAYER_H

#include "raylib.h" // Needed for Vector2, Color, etc.

typedef struct Conductor {
    int bpm;
    float crotchet;
    float songPos;
    float offset;
    int beat;
    int lastBeat;
    bool nextBeat;
} Conductor;

// Function declarations
Conductor InitConductor(Conductor c, int bpm);
void UpdateConductor(Conductor *c, float deltaTime, Music music);
void DrawMenu();

#endif // struct h