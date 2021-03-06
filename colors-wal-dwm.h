static const char norm_fg[] = "#f4ecc5";
static const char norm_bg[] = "#0a0007";
static const char norm_border[] = "#0a0007";

static const char sel_fg[] = "#f4ecc5";
static const char sel_bg[] = "#7a261c";
static const char sel_border[] = "#FFFFFF";

static const char urg_fg[] = "#f4ecc5";
static const char urg_bg[] = "#6e2f27";
static const char urg_border[] = "#6e2f27";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
