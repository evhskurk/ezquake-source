/*
	Settings page module
	$Id: settings_page.h,v 1.3 2007-01-12 17:09:14 johnnycz Exp $
*/

/** Guide to create settings page:
	1) make new variables:
		a) array of 'setting' elements, use macros from settings.h to do this
		b) 'settings_tab' variable
	2) in some Init function:
		a) assign array address from (1.a) to set_tab structure entry from (1.b)
		b) put set_count to 'sizeof(a1)/sizeof(setting)' where 'a1' is array from step (1.a)
	3) place calls of following two functions to appropriate places
 */

#define Settings_Page_Init(settings, set_page) Settings_Init(&set_page, settings, sizeof(settings) / sizeof(setting))

// initializes the main structure
void Settings_Init(settings_page *tab, setting *arr, size_t size); 

// draw request handler
void Settings_Draw(int x, int y, int w, int h, settings_page* page);

// key press handler
qbool Settings_Key(settings_page* page, int key);
