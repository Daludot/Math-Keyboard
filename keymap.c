#include QMK_KEYBOARD_H
#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4
#define _LAYER5 5
#define _LAYER6 6
#define _LAYER7 7
#define _LAYER8 8
#define _LAYER9 9
#define _LAYER10 10

enum unicode_names {
    SAL,
    SAU,
    SBL,
    SBU,
    SCL,
    SCU,
    SDL,
    SDU,
    SEL,
    SEU,
    SFL,
    SFU,
    SGL,
    SGU,
    SHL,
    SHU,
    SIL,
    SIU,
    SJL,
    SJU,
    SKL,
    SKU,
    SLL,
    SLU,
    SML,
    SMU,
    SNL,
    SNU,
    SOL,
    SOU,
    SPPL,
    SPU,
    SQL,
    SQU,
    SRL,
    SRU,
    SSL,
    SSU,
    STL,
    STU,
    SUL,
    SUU,
    SVL,
    SVU,
    SWL,
    SWU,
    SXL,
    SXU,
    SYL,
    SYU,
    SZL,
    SZU,
    THEL,
    THEU,
    STHEL,
    STHEU,
    OMEL,
    OMEU,
    SOMEL,
    SOMEU,
    PSIL,
    PSIU,
    SPSIL,
    SPSIU,
    UPSL,
    UPSU,
    SUPSL,
    SUPSU,
    DINT,
    SINT,
    TINT,
    VINT,
    PIEL,
    PIEU,
    SPIEL,
    SIGL,
    SIGU,
    SSIGL,
    DELL,
    DELU,
    SDELL,
    SDELU,
    PHIL,
    PHIU,
    SPHIL,
    SPHIU,
    GAML,
    GAMU,
    SGAML,
    SGAMU,
    NINT,
    CINT,
    LAML,
    LAMU,
    SLAML,
    SLAMU,
    XIEL,
    XIEU,
    SXIEL,
    SXIEU,
    NABL,
    NABU,
    SNABL,
    SNABU,
    EPSL,
    SEPSL,
    RHOL,
    SRHOL,
    TAUL,
    STAUL,
    ALPL,
    SALPL,
    ETAL,
    SETAL,
    KAPL,
    SKAPL,
    ZETL,
    SZETL,
    CHIL,
    SCHIL,
    BETL,
    SBETL,
    NUEL,
    SNUEL,
    MUEL,
    SMUEL,
    CROS,
    DOTP,
    RADI,
    OUTP,
    DEGR,
    LANG,
    RANG,
    APRX,
    MINU,
    NEQL,
    LEQL,
    GEQL,
    INFI,
    MLES,
    MGRT,
    ELPS,
    RARW,
    TILD,
    MIPL,
    PLMI,
    SUP1,
    SUP2,
    SUP3,
    SUP4,
    SUP5,
    SUP6,
    SUP7,
    SUP8,
    SUP9,
    SUP0,
    SUPM,
    SUPE,
    SUPL,
    SUPR,
    SUPP,
    SUB1,
    SUB2,
    SUB3,
    SUB4,
    SUB5,
    SUB6,
    SUB7,
    SUB8,
    SUB9,
    SUB0,
    SUBM,
    SUBE,
    SUBL,
    SUBR,
    SUBP
};

const uint32_t PROGMEM unicode_map[] = {
    [SAL] = 0x1D44E,
    [SAU] = 0x1D434,
    [SBL] = 0x1D44F,
    [SBU] = 0x1D435,
    [SCL] = 0x1D450,
    [SCU] = 0x1D436,
    [SDL] = 0x1D451,
    [SDU] = 0x1D437,
    [SEL] = 0x1D452,
    [SEU] = 0x1D438,
    [SFL] = 0x1D453,
    [SFU] = 0x2131,
    [SGL] = 0x1D454,
    [SGU] = 0x1D43A,
    [SHL] = 0x210E,
    [SHU] = 0x1D43B,
    [SIL] = 0x1D456,
    [SIU] = 0x1D43C,
    [SJL] = 0x1D457,
    [SJU] = 0x1D43D,
    [SKL] = 0x1D458,
    [SKU] = 0x1D43E,
    [SLL] = 0x1D459,
    [SLU] = 0x2112,
    [SML] = 0x1D45A,
    [SMU] = 0x1D440,
    [SNL] = 0x1D45B,
    [SNU] = 0x1D441,
    [SOL] = 0x1D45C,
    [SOU] = 0x1D4AA,
    [SPPL] = 0x1D45D,
    [SPU] = 0x1D443,
    [SQL] = 0x1D45E,
    [SQU] = 0x1D444,
    [SRL] = 0x1D45F,
    [SRU] = 0x211D,
    [SSL] = 0x1D460,
    [SSU] = 0x1D446,
    [STL] = 0x1D461,
    [STU] = 0x1D447,
    [SUL] = 0x1D462,
    [SUU] = 0x1D448,
    [SVL] = 0x1D463,
    [SVU] = 0x1D449,
    [SWL] = 0x1D464,
    [SWU] = 0x1D44A,
    [SXL] = 0x1D465,
    [SXU] = 0x1D44B,
    [SYL] = 0x1D466,
    [SYU] = 0x1D44C,
    [SZL] = 0x1D467,
    [SZU] = 0x1D44D,
    [THEL] = 0x03B8,
    [THEU] = 0x0398,
    [STHEL] = 0x1D703,
    [STHEU] = 0x1D6E9,
    [OMEL] = 0x03C9,
    [OMEU] = 0x03A9,
    [SOMEL] = 0x1D714,
    [SOMEU] = 0x1D6FA,
    [PSIL] = 0x03C8,
    [PSIU] = 0x03A8,
    [SPSIL] = 0x1D713,
    [SPSIU] = 0x1D6F9,
    [UPSL] = 0x03C5,
    [UPSU] = 0x03A5,
    [SUPSL] = 0x1D710,
    [SUPSU] = 0x1D6F6,
    [DINT] = 0x222C,
    [SINT] = 0x222F,
    [TINT] = 0x222D,
    [VINT] = 0x2230,
    [PIEL] = 0x03C0,
    [PIEU] = 0x220F,
    [SPIEL] = 0x1D70B,
    [SIGL] = 0x03C3,
    [SIGU] = 0x2211,
    [SSIGL] = 0x1D70E,
    [DELL] = 0x03B4,
    [DELU] = 0x0394,
    [SDELL] = 0x1D6FF,
    [SDELU] = 0x1D6E5,
    [PHIL] = 0x03C6,
    [PHIU] = 0x03A6,
    [SPHIL] = 0x1D719,
    [SPHIU] = 0x1D6F7,
    [GAML] = 0x03B3,
    [GAMU] = 0x0393,
    [SGAML] = 0x1D6FE,
    [SGAMU] = 0x1D6E4,
    [NINT] = 0x222B,
    [CINT] = 0x222E,
    [LAML] = 0x03BB,
    [LAMU] = 0x039B,
    [SLAML] = 0x1D706,
    [SLAMU] = 0x1D6EC,
    [XIEL] = 0x03BE,
    [XIEU] = 0x039E,
    [SXIEL] = 0x1D709,
    [SXIEU] = 0x1D6EF,
    [NABL] = 0x2202,
    [NABU] = 0x2207,
    [SNABL] = 0x1D715,
    [SNABU] = 0x1D6C1,
    [EPSL] = 0x03B5,
    [SEPSL] = 0x1D700,
    [RHOL] = 0x03C1,
    [SRHOL] = 0x1D70C,
    [TAUL] = 0x03C4,
    [STAUL] = 0x1D70F,
    [ALPL] = 0x03B1,
    [SALPL] = 0x1D6FC,
    [ETAL] = 0x03B7,
    [SETAL] = 0x1D702,
    [KAPL] = 0x03BA,
    [SKAPL] = 0x1D705,
    [ZETL] = 0x03B6,
    [SZETL] = 0x1D701,
    [CHIL] = 0x03C7,
    [SCHIL] = 0x1D712,
    [BETL] = 0x03B2,
    [SBETL] = 0x1D6FD,
    [NUEL] = 0x03BD,
    [SNUEL] = 0x1D708,
    [MUEL] = 0x03BC,
    [SMUEL] = 0x1D707,
    [CROS] = 0x00D7,
    [DOTP] = 0x22C5,
    [RADI] = 0x221A,
    [OUTP] = 0x2297,
    [DEGR] = 0x00B0,
    [LANG] = 0x27E8,
    [RANG] = 0x27E9,
    [APRX] = 0x2248,
    [MINU] = 0x2212,
    [NEQL] = 0x2260,
    [LEQL] = 0x2264,
    [GEQL] = 0x2265,
    [INFI] = 0x221E,
    [MLES] = 0x226A,
    [MGRT] = 0x226B,
    [ELPS] = 0x22EF,
    [RARW] = 0x2192,
    [MIPL] = 0x2213,
    [PLMI] = 0x00B1,
    [SUP1] = 0x00B9,
    [SUP2] = 0x00B2,
    [SUP3] = 0x00B3,
    [SUP4] = 0x2074,
    [SUP5] = 0x2075,
    [SUP6] = 0x2076,
    [SUP7] = 0x2077,
    [SUP8] = 0x2078,
    [SUP9] = 0x2079,
    [SUP0] = 0x2070,
    [SUPM] = 0x207B,
    [SUPE] = 0x207C,
    [SUPL] = 0x207D,
    [SUPR] = 0x207E,
    [SUPP] = 0x207A,
    [SUB1] = 0x2081,
    [SUB2] = 0x2082,
    [SUB3] = 0x2083,
    [SUB4] = 0x2084,
    [SUB5] = 0x2085,
    [SUB6] = 0x2086,
    [SUB7] = 0x2087,
    [SUB8] = 0x2088,
    [SUB9] = 0x2089,
    [SUB0] = 0x2080,
    [SUBM] = 0x208B,
    [SUBE] = 0x208C,
    [SUBL] = 0x208D,
    [SUBR] = 0x208E,
    [SUBP] = 0x208A,
};

void rgb_matrix_indicators_kb(void) {
    if(IS_LAYER_ON(_LAYER1)) {
        rgb_matrix_set_color_all(50,6,1);
    } else {
        rgb_matrix_set_color_all(6,22,14);
    }
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
		[_LAYER0] = LAYOUT_65_ansi_blocker( /* Base */
			KC_GESC,       KC_1,     KC_2,     KC_3,  KC_4,  KC_5,  KC_6,    KC_7,  KC_8,    KC_9,     KC_0,     KC_MINS,  KC_EQL,  KC_BSPC,   KC_DEL,\
		    KC_TAB,        KC_Q,     KC_W,     KC_E,  KC_R,  KC_T,  KC_Y,    KC_U,  KC_I,    KC_O,     KC_P,     KC_LBRC,  KC_RBRC, KC_BSLASH, UC_M_MA,\
			KC_CAPS,KC_A,     KC_S,     KC_D,  KC_F,  KC_G,  KC_H,    KC_J,  KC_K,    KC_L,     KC_SCLN,  KC_QUOT,           KC_ENT,    UC_M_LN,\
		    KC_LSFT,       KC_Z,     KC_X,     KC_C,  KC_V,  KC_B,  KC_N,    KC_M,  KC_COMM, KC_DOT,   KC_SLSH,  MO(7),           KC_UP,     UC_M_WC,\
		    KC_LCTL,       MO(_LAYER3),  LM(9,MOD_LALT),                KC_SPC,                TG(1),           MO(_LAYER5),    KC_LEFT,           KC_DOWN,   KC_RIGHT),

		[_LAYER1] = LAYOUT_65_ansi_blocker( /* MATH */
			_______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  X(MINU),  X(NEQL),  _______,  _______,\
		    _______,  XP(THEL,THEU),  XP(OMEL,OMEU), X(EPSL),  X(RHOL),  X(TAUL),  XP(PSIL,PSIU),  XP(UPSL,UPSU),  XP(DINT,SINT),  XP(TINT,VINT),  XP(PIEL,PIEU),  X(LANG),  X(RANG),  X(APRX),  _______,\
			_______,  X(ALPL),  XP(SIGL,SIGU),  XP(DELL,DELU),  XP(PHIL,PHIU),  XP(GAML,GAMU),  X(ETAL),  XP(NINT,CINT),  X(KAPL),  XP(LAML,LAMU),  X(OUTP),  X(DEGR),  _______,  _______,\
		    LM(2,MOD_LSFT),  X(ZETL),  XP(XIEL,XIEU),  X(CHIL),  XP(NABL,NABU),  X(BETL),  X(NUEL),  X(MUEL),  X(CROS), X(DOTP),  X(RADI),  MO(8),  _______,  _______,\
		    _______,  _______,  _______,  _______,  _______, _______, _______, _______,  _______),

		[_LAYER2] = LAYOUT_65_ansi_blocker( /* SYMB */
			_______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  X(MIPL),  X(PLMI),  _______,  _______,\
		    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  X(ELPS),  X(RARW),  KC_TILDE,  _______,\
			_______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  X(MLES),  X(MGRT),  _______,  _______,\
		    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  X(LEQL), X(GEQL),  X(INFI),  _______,  _______,  _______,\
		    _______,  _______,  _______,  _______,  _______, _______, _______, _______,  _______),
    
        [_LAYER3] = LAYOUT_65_ansi_blocker( /* SUP */
            _______,  X(SUP1),  X(SUP2),  X(SUP3),  X(SUP4),  X(SUP5),  X(SUP6),  X(SUP7),  X(SUP8),  X(SUP9),  X(SUP0),  X(SUPM),  X(SUPE),  _______,  _______,\
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,\
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,\
            LM(4,MOD_LSFT),  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,  _______,  _______,  _______,  _______,\
            _______,  _______,  _______,  _______,  _______, _______, _______, _______,  _______),
    
        [_LAYER4] = LAYOUT_65_ansi_blocker( /* SUP SHIFT */
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  X(SUPL),  X(SUPR),  _______,  X(SUPP),  _______,  _______,\
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,\
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,\
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,  _______,  _______,  _______,  _______,\
            _______,  _______,  _______,  _______,  _______, _______, _______, _______,  _______),
    
        [_LAYER5] = LAYOUT_65_ansi_blocker( /* SUB */
            _______,  X(SUB1),  X(SUB2),  X(SUB3),  X(SUB4),  X(SUB5),  X(SUB6),  X(SUB7),  X(SUB8),  X(SUB9),  X(SUB0),  X(SUBM),  X(SUBE),  _______,  _______,\
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,\
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,\
            LM(6,MOD_LSFT),  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,  _______,  _______,  _______,  _______,\
            _______,  _______,  _______,  _______,  _______, _______, _______, _______,  _______),

        [_LAYER6] = LAYOUT_65_ansi_blocker( /* SUB SHIFT */
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  X(SUBL),  X(SUBR),  _______,  X(SUBP),  _______,  _______,\
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,\
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,\
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,  _______,  _______,  _______,  _______,\
            _______,  _______,  _______,  _______,  _______, _______, _______, _______,  _______),
    
        [_LAYER7] = LAYOUT_65_ansi_blocker( /* ALPHA STYLE */
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,\
            _______,  XP(SQL,SQU),  XP(SWL,SWU), XP(SEL,SEU),  XP(SRL,SRU),  XP(STL,STU),  XP(SYL,SYU),  XP(SUL,SUU),  XP(SIL,SIU),  XP(SOL,SOU),  XP(SPPL,SPU),  _______,  _______,  _______,  _______,\
            _______,  XP(SAL,SAU),  XP(SSL,SSU),  XP(SDL,SDU),  XP(SFL,SFU),  XP(SGL,SGU),  XP(SHL,SHU),  XP(SJL,SJU),  XP(SKL,SKU),  XP(SLL,SLU),  _______,  _______,  _______,  _______,\
            _______,  XP(SZL,SZU),  XP(SXL,SXU),  XP(SCL,SCU),  XP(SVL,SVU),  XP(SBL,SBU),  XP(SNL,SNU),  XP(SML,SMU),  _______, _______,  _______,  _______,  _______,  _______,\
            _______,  _______,  _______,  _______,  _______, _______, _______, _______,  _______),
    
        [_LAYER8] = LAYOUT_65_ansi_blocker( /* GREEK STYLE */
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,\
            _______,  XP(STHEL,STHEU),  XP(SOMEL,SOMEU), X(SEPSL),  X(SRHOL),  X(STAUL),  XP(SPSIL,SPSIU),  XP(SUPSL,SUPSU),  _______,  _______,  XP(SPIEL,PIEU),  _______,  _______,  _______,  _______,\
            _______,  X(SALPL),  XP(SSIGL,SIGU),  XP(SDELL,SDELU),  XP(SPHIL,SPHIU),  XP(SGAML,SGAMU),  X(SETAL),  _______,  X(SKAPL),  XP(SLAML,SLAMU),  _______,  _______,  _______,  _______,\
            _______,  X(SZETL),  XP(SXIEL,SXIEU),  X(SCHIL),  XP(SNABL,SNABU),  X(SBETL),  X(SNUEL),  X(SMUEL),  _______, _______,  _______,  _______,  _______,  _______,\
            _______,  _______,  _______,  _______,  _______, _______, _______, _______,  _______),

        [_LAYER9] = LAYOUT_65_ansi_blocker( /* ALT */
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,\
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  TG(10),\
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,\
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,  _______,  _______,  _______,  _______,\
            _______,  _______,  _______,  _______,  _______, _______, _______, _______,  _______),
    
        [_LAYER10] = LAYOUT_65_ansi_blocker( /* CMD */
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,\
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,\
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,\
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,  _______,  _______,  _______,  _______,\
            KC_LCMD,  _______,  _______,  _______,  _______, _______, _______, _______,  _______),
        };
