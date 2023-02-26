/**
 * This file includes custom keycodes for the german input language setting.
 * If you only type in english, you can delete this file and it's import.
 * If you wish to replace this file with your preferred language, use
 * the qmk version as reference:
 * https://github.com/qmk/qmk_firmware/tree/master/quantum/keymap_extras
*/


/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ^ │   │   │   │   │   │   │   │   │   │   │ ß │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │ z │   │   │   │   │ ü │ + │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ ö │ ä │ # │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ y │   │   │   │   │   │   │   │   │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DE_CARET GRAVE           // ^
#define DE_SZ MINUS              // ß
#define DE_ACU EQUAL             // ´
// Row 2
#define DE_Z Y                   // z
#define DE_UUML LBKT             // ü
#define DE_PLUS RBKT             // +
// Row 3
#define DE_OUML SEMI             // ö
#define DE_AUML APOS             // ä
#define DE_HASH NUHS             // #
// Row 4
#define DE_LT NUBS               // <
#define DE_Y Z                   // y
#define DE_MINUS SLASH           // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ° │ ! │ " │ § │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │ Z │   │   │   │   │ Ü │ * │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ Ö │ Ä │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │ Y │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DE_DEG LS(GRAVE)         // °
#define DE_EXCL LS(N1)           // !
#define DE_DQT LS(N2)            // "
#define DE_SECT LS(N3)           // §
#define DE_DLLR LS(N4)           // $
#define DE_PRCNT LS(N5)          // %
#define DE_AMPS LS(N6)           // &
#define DE_SLASH LS(N7)          // /
#define DE_LPAR LS(N8)           // (
#define DE_RPAR LS(N9)           // )
#define DE_EQUAL LS(N0)          // =
#define DE_QMARK LS(MINUS)       // ?
#define DE_GRAVE LS(EQUAL)       // `
// Row 2
#define DE_CUUML LS(LBKT)        // Ü
#define DE_ASTRK LS(RBKT)        // *
// Row 3
#define DE_COUML LS(SEMI)        // Ö
#define DE_CAUML LS(APOS)        // Ä
#define DE_APOS LS(NUHS)         // '
// Row 4
#define DE_GT LS(NUBS)           // >
#define DE_UNDER LS(SLASH)       // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ ² │ ³ │   │   │   │ { │ [ │ ] │ } │ \ │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ @ │   │ € │   │   │   │   │   │   │   │   │ ~ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ | │   │   │   │   │   │   │ µ │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DE_SQRD RA(N2)           // ²
#define DE_QBD RA(N3)            // ³
#define DE_LBRC RA(N7)           // {
#define DE_LBKT RA(N8)           // [
#define DE_RBKT RA(N9)           // ]
#define DE_RBRC RA(N0)           // }
#define DE_BSLH RA(MINUS)        // \
// Row 2
#define DE_AT RA(Q)              // @
#define DE_EUR RA(E)             // €
#define DE_TILDE RA(RBKT)        // ~

// Row 4
#define DE_PIPE RA(NUBS)         // |
#define DE_MY RA(M)              // µ
