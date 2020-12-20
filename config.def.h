/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup"; // use "nobody" for arch

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
	[CAPS] =   "red",       /* CapsLock on */
	[BLOCKS] = "#ffffff",   /* key feedback block */
};

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "color0",       STRING,  &colorname[INIT] },
		{ "color4",       STRING,  &colorname[INPUT] },
		{ "color1",       STRING,  &colorname[FAILED] },
		{ "color3",       STRING,  &colorname[CAPS] },
};

/* lock screen opacity */
static const float alpha = 0.95;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* Enable blur */
#define BLUR
/* Set blur radius */
static const int blurRadius=10;
/* Enable Pixelation */
//#define PIXELATION
/* Set pixelation radius */
static const int pixelSize=10;



static short int blocks_enabled = 1; // 0 = don't show blocks
static const int blocks_width = 0; // 0 = full width
static const int blocks_height = 16;

// position
static const int blocks_x = 0;
static const int blocks_y = 0;

// Number of blocks
static const int blocks_count = 10;

/* default message */
static const char * message = "Enter password to unlock";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "9x15";


/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 4;
