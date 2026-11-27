// player.c
#include "structures.h"

Conductor InitConductor(Conductor c, int bpm) {
    Conductor p = {0};
    c.bpm = bpm;
    c.offset = 0.5f;
    c.beat = 0;
    c.lastBeat = 0;
    c.nextBeat = false;
    c.crotchet = 60 / (float)bpm;
    return c;
}

void UpdateConductor(Conductor *c, float deltaTime, Music music) {
    c->songPos = GetMusicTimePlayed(music) + c->offset;
    c->beat = (int)(c->songPos / c->crotchet);
    if (c->lastBeat != c->beat) {
        c->lastBeat = c->beat;
        c->nextBeat = true;
    } else {
        c->nextBeat = false;
    }
}

void DrawMenu() {
    Vector2 pos = {100.0f, 200.0f};
    DrawCircleV(pos, 25.0f, GREEN);
    DrawText("This is not a button", 100, 200, 20, BLACK);
}