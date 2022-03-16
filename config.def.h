/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"operator mono medium:size=13"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#1e1e2e" },
	[SchemeSel] = { "#1e1e2e", "#f28fad" },
	[SchemeSelHighlight] = { "#0ee9af", "#1e1e2e" },
	[SchemeNormHighlight] = { "#0ee9af", "#1e1e2e" },
	[SchemeOut] = { "#000000", "#00ffff" },
	[SchemeMid] = { "#f3f4f5", "#1e1e2e" },
	[SchemeHp] = { "#1e1e2e", "#bc7cf7" }

};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;


/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 5;
