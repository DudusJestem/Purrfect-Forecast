const unsigned char epd_bitmap_day[] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x03, 0xc0, 0x00, 0x00,
	0x00, 0x00, 0x03, 0xc0, 0x00, 0x00,
	0x00, 0x00, 0x03, 0xc0, 0x00, 0x00,
	0x00, 0x00, 0x03, 0xc0, 0x00, 0x00,
	0x00, 0x00, 0x03, 0xc0, 0x00, 0x00,
	0x00, 0x40, 0x03, 0xc0, 0x02, 0x00,
	0x00, 0xe0, 0x03, 0xc0, 0x07, 0x00,
	0x01, 0xf0, 0x03, 0xc0, 0x0f, 0x80,
	0x00, 0xf8, 0x00, 0x00, 0x1f, 0x00,
	0x00, 0x7c, 0x00, 0x00, 0x3e, 0x00,
	0x00, 0x3e, 0x1f, 0xf8, 0x7c, 0x00,
	0x00, 0x1e, 0x3f, 0xfc, 0x78, 0x00,
	0x00, 0x0c, 0xff, 0xff, 0x30, 0x00,
	0x00, 0x01, 0xff, 0xff, 0x80, 0x00,
	0x00, 0x03, 0xff, 0xff, 0xc0, 0x00,
	0x00, 0x03, 0xff, 0xff, 0xc0, 0x00,
	0x00, 0x07, 0xff, 0xff, 0xe0, 0x00,
	0x00, 0x0f, 0xff, 0xff, 0xf0, 0x00,
	0x00, 0x0f, 0xff, 0xff, 0xf0, 0x00,
	0x00, 0x0f, 0xff, 0xff, 0xf0, 0x00,
	0x3f, 0xcf, 0xff, 0xff, 0xf3, 0xfc,
	0x3f, 0xcf, 0xff, 0xff, 0xf3, 0xfc,
	0x3f, 0xcf, 0xff, 0xff, 0xf3, 0xfc,
	0x3f, 0xcf, 0xff, 0xff, 0xf3, 0xfc,
	0x00, 0x0f, 0xff, 0xff, 0xf0, 0x00,
	0x00, 0x0f, 0xff, 0xff, 0xf0, 0x00,
	0x00, 0x0f, 0xff, 0xff, 0xf0, 0x00,
	0x00, 0x07, 0xff, 0xff, 0xe0, 0x00,
	0x00, 0x03, 0xff, 0xff, 0xe0, 0x00,
	0x00, 0x03, 0xff, 0xff, 0xc0, 0x00,
	0x00, 0x01, 0xff, 0xff, 0x80, 0x00,
	0x00, 0x0c, 0xff, 0xff, 0x30, 0x00,
	0x00, 0x1e, 0x3f, 0xfe, 0x78, 0x00,
	0x00, 0x3e, 0x1f, 0xf8, 0x7c, 0x00,
	0x00, 0x7c, 0x00, 0x00, 0x3e, 0x00,
	0x00, 0xf8, 0x00, 0x00, 0x1f, 0x00,
	0x01, 0xf0, 0x03, 0xc0, 0x0f, 0x80,
	0x00, 0xe0, 0x03, 0xc0, 0x07, 0x00,
	0x00, 0x40, 0x03, 0xc0, 0x02, 0x00,
	0x00, 0x00, 0x03, 0xc0, 0x00, 0x00,
	0x00, 0x00, 0x03, 0xc0, 0x00, 0x00,
	0x00, 0x00, 0x03, 0xc0, 0x00, 0x00,
	0x00, 0x00, 0x03, 0xc0, 0x00, 0x00,
	0x00, 0x00, 0x03, 0xc0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 13376)
const int epd_bitmap_allArray_LEN = 44;
const unsigned char* epd_bitmap_allArray[44] = {
	epd_bitmap_day
};

enum Bitmap {
	DAY,
	NIGHT,
	CLOUDY,
	BROKEN_CLOUDS,
	FOGGY,
	RAINY,
	SNOWY,
	THUNDERSTORM,
	WEATHER_MIX,

	BATTERY_0,
	BATTERY_1,
	BATTERY_2,
	BATTERY_3,
	BATTERY_4,
	BATTERY_5,
	BATTERY_6,
	BATTERY_7,

	CHARGING,
	CITY,
	COORDINATES,
	DATE,
	TIME,
	INTERNET,
	NO_INTERNET,
	NO_WIFI,
	WIFI_0,
	WIFI_1,
	WIFI_2,
	WIFI_3,
	WIFI_4,
	SLEEP,
	SYNC,
	SYNC_ERROR,

	THERMOMETER,
	SNOWFLAKE,
	FLAME,
	DEW_POINT,
	FEELS_LIKE_TEMPERATURE,
	GROUND_LEVEL,
	SEA_LEVEL,
	HUMIDITY,
	PRESSURE,
	WIND_SPEED_GUST,
	VISIBILITY,
};

//==============================================================
//	Functions
//==============================================================

const unsigned char* getBitmap(Bitmap bitmap) {
	return epd_bitmap_allArray[bitmap];
}

//==============================================================
//	Functions
//==============================================================