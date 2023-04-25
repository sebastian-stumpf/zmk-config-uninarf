#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

// r1
#define DE_GRAVE GRAVE // ¸ (dead)
#define DE_N1 N1      // 1
#define DE_N2 N2      // 2
#define DE_N3 N3      // 3
#define DE_N4 N4      // 4
#define DE_N5 N5      // 5
#define DE_N6 N6      // 6
#define DE_N7 N7      // 7
#define DE_N8 N8      // 8
#define DE_N9 N9      // 9
#define DE_N0 N0      // 0
#define DE_SS MINUS   // ß
#define DE_ACUT EQUAL // `

// r2
#define DE_Q Q       // Q
#define DE_W W       // W
#define DE_E E       // E
#define DE_R R       // R
#define DE_T T       // T
#define DE_Z Y       // Z
#define DE_U U       // U
#define DE_I I       // I
#define DE_O O       // O
#define DE_P P       // P
#define DE_UDIA LBKT // ü
#define DE_PLUS RBKT // +

// r3
#define DE_A A       // A
#define DE_S S       // S
#define DE_D D       // D
#define DE_F F       // F
#define DE_G G       // G
#define DE_H H       // H
#define DE_J J       // J
#define DE_K K       // K
#define DE_L L       // L
#define DE_ODIA SEMI // ö
#define DE_ADIA SQT  // ä
#define DE_HASH NON_US_HASH // #

// r4
#define DE_LT NON_US_BACKSLASH     // <
#define DE_Y Z         // Y
#define DE_X X         // X
#define DE_C C         // C
#define DE_V V         // V
#define DE_B B         // B
#define DE_N N         // N
#define DE_M M         // M
#define DE_COMMA COMMA // ,
#define DE_DOT DOT     // .
#define DE_MINUS FSLH  // -

// shifted rows
// r1
#define DE_DEG LS(DE_CEDL)    // °
#define DE_EXCL LS(DE_N1)    // !
#define DE_DQT LS(DE_N2)     // "
#define DE_SECT LS(DE_N3)    // §
#define DE_DLLR LS(DE_N4)    // $
#define DE_PRCNT LS(DE_N5)   // %
#define DE_AMPS LS(DE_N6)    // &
#define DE_FSLH LS(DE_N7)    // /
#define DE_LPAR LS(DE_N8)    // (
#define DE_RPAR LS(DE_N9)    // )
#define DE_EQUAL LS(DE_N0)   // =
#define DE_QMARK LS(DE_SS)   // ?
#define DE_GRV LS(DE_ACUT) // ` (dead)

// r2
#define DE_ASTRK LS(DE_PLUS) // *

// r3
#define DE_QUOT LS(DE_HASH) // '

// r4
#define DE_RT LS(DE_LT) // >
#define DE_SEMI LS(DE_COMMA) // ;
#define DE_COLON LS(DE_DOT)  // :
#define DE_UNDS LS(DE_MINUS) // _

// alt rows
// r1
#define DE_SUP2 RA(DE_N2)    // ²
#define DE_SUP3 RA(DE_N3)    // ³
#define DE_LCBR RA(DE_N7)    // {
#define DE_LBRC RA(DE_N8)    // [
#define DE_RBRC RA(DE_N9)    // ]
#define DE_RCBR RA(DE_N0)    // }
#define DE_BSLS RA(DE_SS)   // (backslash)
// Row 2
#define DE_AT   RA(DE_Q)    // @
#define DE_EURO RA(DE_E)    // €
#define DE_TILD RA(DE_PLUS) // ~
// Row 4
#define DE_PIPE RA(DE_LT)   // |
#define DE_MICR RA(DE_M)    // µ
