#include "keymap_common.h"

/*
 * SpaceFN
 * http://geekhack.org/index.php?topic=51069.0
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer => HHKB ISO AZERTY
     * ,-----------------------------------------------------------.
     * |Esc|  &|  é|  "|  '|  (|  -|  è|  _|  ç|  à|  )|  =|Backsp |
     * |-----------------------------------------------------------|
     * |Tab  |  A|  Z|  E|  R|  T|  Y|  U|  I|  O|  P|  ^|  $|    *|
     * |-----------------------------------------------------------|
     * |Ctrl  |  Q|  S|  D|  F|  G|  H|  J|  K|  L|  M|  ù|Return  |
     * |-----------------------------------------------------------|
     * |Shift| <|  W|  X|  C|  V|  B|  N|  ,|  ;|  :|  !|Shift     |
     * |-----------------------------------------------------------|
     * |    |Gui |Alt |      Space                  |Alt |App |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP(
        ESC, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, MINS, EQL, BSPC,
        TAB, Q, W, E, R, T, Y, U, I, O, P, LBRC, RBRC, BSLS,
        LCTL, A, S, D, F, G, H, J, K, L, SCLN, QUOT, TRNS, ENT,
        LSFT, NUBS, Z, X, C, V, B, N, M, COMM, DOT, SLSH, TRNS, RSFT,
        TRNS, LGUI, LALT, FN0, TRNS, TRNS, RALT, APP, TRNS),

    /* Overlay 1: SpaceFN
     * ,-----------------------------------------------------------.
     * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Delete |
     * |-----------------------------------------------------------|
     * |    |   |MUTE|VOLD|VOLU|   |   |Hom|Up |End|Psc|Slk|Pau|Ins  |
     * |-----------------------------------------------------------|
     * |      |MSTP|MPLY|MPRV|MNXT|   |PgU|Lef|Dow|Rig|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |Spc|PgD|`  |~  |   |   |          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP(
        GRV, F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, DEL,
        TRNS, TRNS, MUTE, VOLD, VOLU, TRNS, TRNS, HOME, UP, END, PSCR, SLCK, PAUS, INS,
        CAPS, MSTP, MPLY, MPRV, MNXT, TRNS, PGUP, LEFT, DOWN, RGHT, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, SPC, PGDN, GRV, FN1, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS),
};

/*
 * Fn action definition
 */
const action_t PROGMEM fn_actions[] = {
        [0] = ACTION_LAYER_TAP_KEY(1, KC_SPACE),
        [1] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV), // tilde
};
