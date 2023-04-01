/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;
static int lines = 10;
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"operator mono medium:size=13"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#c7ccd1", "#1c2023" },
	[SchemeSel] = { "#1c2023", "#97aec7" },
	[SchemeSelHighlight] = { "#97aec7", "#1c2023" },
	[SchemeNormHighlight] = { "#97aec7", "#1c2023" },
	[SchemeOut] = { "#1c2023", "#00ffff" },
	[SchemeMid] = { "#c7ccd1", "#1c2023" },
	[SchemeHp] = { "#1c2023", "#ae97c7" }

};
static const char worddelimiters[] = " ";

static const unsigned int border_width = 3;
