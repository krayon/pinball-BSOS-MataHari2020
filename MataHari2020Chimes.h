/**************************************************************************
 *     This file is part of MataHari2020.

    I, Dick Hamill, the author of this program disclaim all copyright
    in order to make this program freely available in perpetuity to
    anyone who would like to use it. Dick Hamill, 6/1/2020

    MataHari2020 is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    MataHari2020 is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    See <https://www.gnu.org/licenses/>.
 */

#define MATAHARI2020_NUM_CHIMES

//Sketch uses 20166 bytes (65%) of program storage space. Maximum is 30720 bytes.
//Global variables use 948 bytes (46%) of dynamic memory, leaving 1100 bytes for local variables. Maximum is 2048 bytes.


struct ChimeEntry {
  byte SoundEffectNum;
  byte SolNumber;
  byte TimeOffset;
};

struct ChimeEntry MataHariSFXLowPriorityLevel1[] = {
  {SOUND_EFFECT_BONUS_COUNT, SOL_CHIME_1000, 0},
  {SOUND_EFFECT_2X_BONUS_COUNT, SOL_CHIME_1000, 0},
  {SOUND_EFFECT_3X_BONUS_COUNT, SOL_CHIME_1000, 2},
  {SOUND_EFFECT_INLANE_UNLIT, SOL_CHIME_10, 0},
  {SOUND_EFFECT_INLANE_UNLIT, SOL_CHIME_100, 2},
  {SOUND_EFFECT_OUTLANE_UNLIT, SOL_CHIME_100, 0},
  {SOUND_EFFECT_OUTLANE_UNLIT, SOL_CHIME_10, 2},
  {SOUND_EFFECT_INLANE_LIT, SOL_CHIME_10, 0},
  {SOUND_EFFECT_INLANE_LIT, SOL_CHIME_100, 2},
  {SOUND_EFFECT_OUTLANE_LIT, SOL_CHIME_100, 0},
  {SOUND_EFFECT_OUTLANE_LIT, SOL_CHIME_10, 2},
  {SOUND_EFFECT_OUTLANE_LIT, SOL_CHIME_100, 4},
  {SOUND_EFFECT_SKILL_SHOT, SOL_CHIME_10, 0},
  {SOUND_EFFECT_SKILL_SHOT, SOL_CHIME_100, 2},
  {SOUND_EFFECT_EXTRA_BALL, SOL_CHIME_10000, 0},
  {SOUND_EFFECT_DROP_TARGET, SOL_CHIME_10, 0},
  {SOUND_EFFECT_TILT_WARNING, SOL_CHIME_100, 0},
  {SOUND_EFFECT_TILT_WARNING, SOL_CHIME_10, 2},
  {SOUND_EFFECT_WIZARD_SCORE, SOL_CHIME_10000, 0},
  {SOUND_EFFECT_WIZARD_SCORE, SOL_CHIME_10000, 4},
  {SOUND_EFFECT_WIZARD_SCORE, SOL_CHIME_10000, 8},
  {SOUND_EFFECT_BUMPER_HIT, SOL_CHIME_100, 0},
  {SOUND_EFFECT_WIZARD_TIMER, SOL_CHIME_100, 0},
  {SOUND_EFFECT_10PT_SWITCH, SOL_CHIME_10, 0},
  {SOUND_EFFECT_SLING_SHOT, SOL_CHIME_10, 0}
};


struct ChimeEntry MataHariSFXLowPriorityLevel2[] = {
  {SOUND_EFFECT_2X_BONUS_COUNT, SOL_CHIME_10000, 2},
  {SOUND_EFFECT_3X_BONUS_COUNT, SOL_CHIME_100, 0},
  {SOUND_EFFECT_3X_BONUS_COUNT, SOL_CHIME_10000, 4},
  {SOUND_EFFECT_INLANE_LIT, SOL_CHIME_1000, 6},
  {SOUND_EFFECT_INLANE_LIT, SOL_CHIME_1000, 9},
  {SOUND_EFFECT_INLANE_LIT, SOL_CHIME_1000, 12},
  {SOUND_EFFECT_INLANE_LIT, SOL_CHIME_1000, 15},
  {SOUND_EFFECT_INLANE_LIT, SOL_CHIME_1000, 18},
  {SOUND_EFFECT_SKILL_SHOT, SOL_CHIME_10, 4},
  {SOUND_EFFECT_SKILL_SHOT, SOL_CHIME_1000, 6},
  {SOUND_EFFECT_SKILL_SHOT, SOL_CHIME_1000, 7},
  {SOUND_EFFECT_SKILL_SHOT, SOL_CHIME_1000, 8},
  {SOUND_EFFECT_SKILL_SHOT, SOL_CHIME_1000, 9},
  {SOUND_EFFECT_SKILL_SHOT, SOL_CHIME_1000, 10},
  {SOUND_EFFECT_SKILL_SHOT, SOL_CHIME_1000, 11},
  {SOUND_EFFECT_EXTRA_BALL, SOL_CHIME_10000, 2},
  {SOUND_EFFECT_EXTRA_BALL, SOL_CHIME_10000, 4},
  {SOUND_EFFECT_EXTRA_BALL, SOL_CHIME_10000, 6},
  {SOUND_EFFECT_EXTRA_BALL, SOL_CHIME_10000, 8},
  {SOUND_EFFECT_DROP_TARGET, SOL_CHIME_10, 4},
  {SOUND_EFFECT_DROP_TARGET, SOL_CHIME_10, 8},
  {SOUND_EFFECT_DROP_TARGET, SOL_CHIME_10, 12},
  {SOUND_EFFECT_DROP_TARGET, SOL_CHIME_10, 16},
  {SOUND_EFFECT_TILT_WARNING, SOL_CHIME_100, 4},
  {SOUND_EFFECT_TILT_WARNING, SOL_CHIME_10, 6}
};


struct ChimeEntry MataHariSFXHighPriorityLevel1[] = {
  {SOUND_EFFECT_ADD_CREDIT, SOL_CHIME_10, 0},
  {SOUND_EFFECT_ADD_CREDIT, SOL_CHIME_100, 1},
  {SOUND_EFFECT_ADD_CREDIT, SOL_CHIME_1000, 3},
  {SOUND_EFFECT_ADD_CREDIT, SOL_CHIME_10000, 5},
  {SOUND_EFFECT_ADD_PLAYER, SOL_CHIME_10, 0},
  {SOUND_EFFECT_ADD_PLAYER, SOL_CHIME_10000, 0},
  {SOUND_EFFECT_ADD_PLAYER, SOL_CHIME_1000, 4},
  {SOUND_EFFECT_PLAYER_UP, SOL_CHIME_10, 0},
  {SOUND_EFFECT_PLAYER_UP, SOL_CHIME_100, 0},
  {SOUND_EFFECT_PLAYER_UP, SOL_CHIME_100, 3},
  {SOUND_EFFECT_PLAYER_UP, SOL_CHIME_1000, 3},
  {SOUND_EFFECT_BALL_OVER, SOL_CHIME_10, 0},
  {SOUND_EFFECT_BALL_OVER, SOL_CHIME_10, 3},
  {SOUND_EFFECT_GAME_OVER, SOL_CHIME_10, 0},
  {SOUND_EFFECT_GAME_OVER, SOL_CHIME_10, 3},
  {SOUND_EFFECT_MACHINE_START, SOL_CHIME_10, 0},
  {SOUND_EFFECT_MACHINE_START, SOL_CHIME_10, 3},
  {SOUND_EFFECT_MACHINE_START, SOL_CHIME_100, 6}
};


struct ChimeEntry MataHariSFXHighPriorityLevel2[] = {
  {SOUND_EFFECT_ADD_PLAYER, SOL_CHIME_100, 6},
  {SOUND_EFFECT_ADD_PLAYER, SOL_CHIME_1000, 9},
  {SOUND_EFFECT_ADD_PLAYER, SOL_CHIME_100, 11},
  {SOUND_EFFECT_PLAYER_UP, SOL_CHIME_1000, 6},
  {SOUND_EFFECT_PLAYER_UP, SOL_CHIME_10000, 6},
  {SOUND_EFFECT_BALL_OVER, SOL_CHIME_100, 5},
  {SOUND_EFFECT_BALL_OVER, SOL_CHIME_100, 10},
  {SOUND_EFFECT_BALL_OVER, SOL_CHIME_100, 15},
  {SOUND_EFFECT_BALL_OVER, SOL_CHIME_10, 20},
  {SOUND_EFFECT_BALL_OVER, SOL_CHIME_100, 23},
  {SOUND_EFFECT_BALL_OVER, SOL_CHIME_1000, 25},
  {SOUND_EFFECT_GAME_OVER, SOL_CHIME_10000, 5},
  {SOUND_EFFECT_GAME_OVER, SOL_CHIME_1000, 10},
  {SOUND_EFFECT_GAME_OVER, SOL_CHIME_100, 12},
  {SOUND_EFFECT_GAME_OVER, SOL_CHIME_10, 15},
  {SOUND_EFFECT_MACHINE_START, SOL_CHIME_10, 9},
  {SOUND_EFFECT_MACHINE_START, SOL_CHIME_100, 12},
  {SOUND_EFFECT_MACHINE_START, SOL_CHIME_1000, 15},
  {SOUND_EFFECT_MACHINE_START, SOL_CHIME_100, 18},
  {SOUND_EFFECT_MACHINE_START, SOL_CHIME_100, 25},
  {SOUND_EFFECT_MACHINE_START, SOL_CHIME_100, 28},
  {SOUND_EFFECT_MACHINE_START, SOL_CHIME_1000, 31},
  {SOUND_EFFECT_MACHINE_START, SOL_CHIME_100, 34},
  {SOUND_EFFECT_MACHINE_START, SOL_CHIME_1000, 37},
  {SOUND_EFFECT_MACHINE_START, SOL_CHIME_10000, 40},
  {SOUND_EFFECT_MACHINE_START, SOL_CHIME_100, 43}
};
