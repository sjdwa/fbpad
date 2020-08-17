/* framebuffer device */
#define FBDEV		"/dev/fb0"

/* list of tags */
#define TAGS		"123456789"
#define TAGS_SAVED	""

/* programs mapped to m-c, m-m, m-e */
#define SHELL		{"zsh"}
#define EDITOR		{"vim"}
#define MAIL		{"neomutt"}

/* TERM variable for launched programs */
#define TERM        "linux"

/* fbval_t should match framebuffer depth */
typedef unsigned int fbval_t;

/* tinyfont files for regular, italic, and bold fonts */
#define FR		"/usr/share/fbpad/font-r.tf"
#define FI		"/usr/share/fbpad/font-i.tf"
#define FB		"/usr/share/fbpad/font-b.tf"


/* alternative fonts */
#define FR0		"/usr/share/fbpad/font-emoji.tf"
#define FI0		NULL
#define FB0		NULL

/* foreground and background colors */
#define FGCOLOR         0x839496
#define BGCOLOR         0x002b36

/* where to write the screen shot */
#define SCRSHOT         "/tmp/scr"

/* lock command password; NULL disables locking */
#define PASS            "penis"

/* optimized version of fb_val() */
#define FB_VAL(r, g, b) fb_val((r), (g), (b))

/* brighten colors 0-7 for bold text */
#define BRIGHTEN        1

/* black */
#define COLOR0          0x073642
#define COLOR8          0x657b83
/* red */
#define COLOR1          0xdc322f
#define COLOR9          0x657b83
/* green */
#define COLOR2          0x859900
#define COLORA          0x586e75
/* yellow */
#define COLOR3          0xb58900
#define COLORB          0x657b83
/* blue */
#define COLOR4          0x268bd2
#define COLORC          0x839496
/* magenta */
#define COLOR5          0xd33682
#define COLORD          0x6c71c4
/* cyan */
#define COLOR6          0x2aa198
#define COLORE          0x93a1a1
/* white */
#define COLOR7          0xeee8d5
#define COLORF          0xfdf6e3
