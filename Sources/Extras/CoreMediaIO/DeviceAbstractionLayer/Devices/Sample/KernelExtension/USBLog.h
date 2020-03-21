//
//  USBLog.h
//  Sample
//
//  Created by z on 3/21/20.
//

static int USBLogLevel = INT_MAX;

static void SetUSBLogLevel(int level) {
	USBLogLevel = level;
}

static void USBLog(int level, const char *format, ...) {
	if (USBLogLevel < level) {
		return;
	}

	va_list args;
	va_start (args, format);
	vprintf(format, args);
	va_end (args);
}
