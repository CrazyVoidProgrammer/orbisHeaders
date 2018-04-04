#ifndef _RTC_H_
#define _RTC_H_

#include <stdint.h>

typedef struct RealTick {
	uint64_t mytick;
} RealTick;

typedef struct TimeTable {
	unsigned short year;
	unsigned short month;
	unsigned short day;
	unsigned short hour;
	unsigned short minute;
	unsigned short second;
	unsigned short microsecond;
} TimeTable;

// Verify if datetime is correct?
void sceRtcCheckValid(TimeTable *input);

// Get tick of rtc clock
void sceRtcGetTick(const TimeTable *outTimeTable, RealTick *outTick);

// Used to set rtc to tick
void sceRtcSetTick(TimeTable *inputTimeTable, RealTick *inputTick);

// Adds Days to RTC Clock
void sceRtcTickAddDays(TimeTable *inputTimeTable, RealTick *inputTick, int days);

// Adds hours to RTC Clock
void sceRtcTickAddHours(TimeTable *inputTimeTable, RealTick *inputTick, int hours);

// Add Micro Seconds to RTC Clock
void sceRtcTickAddMicroseconds(TimeTable *inputTimeTable, RealTick *inputTick, int64_t msecs);

// Add Minutes to RTC Clock
void sceRtcTickAddMinutes(TimeTable *inputTimeTable, RealTick *inputTick, int mins);

// Add Months to RTC Clock
void sceRtcTickAddMonths(TimeTable *inputTimeTable, RealTick *inputTick, int months);

// Add seconds to RTC Clock
void sceRtcTickAddSeconds(TimeTable *inputTimeTable, RealTick *inputTick, int64_t seconds);

// Add ticks to RTC Clock
void sceRtcTickAddTicks(TimeTable *inputTimeTable, RealTick *inputTick, int64_t ticks);

// Add weaks to RTC Clock
void sceRtcTickAddWeeks(TimeTable *inputTimeTable, RealTick *inputTick, int weeks);

// Add years to RTC Clock
void sceRtcTickAddYears(TimeTable *inputTimeTable, RealTick *inputTick, int years);

// Unused Functions ? will remain commented for now!
//void sceRtcInit();
// Unused Function? will remain commented for now
//void sceRtcEnd();

// All functions below need reversed and prototypes and comments filled in.
// As of right now these functions might react unexpected until reversed and documented

// Empty Comment
void sceRtcCompareTick();

// Empty Comment
void sceRtcConvertLocalTimeToUtc();

// Empty Comment
void sceRtcConvertUtcToLocalTime();

// Empty Comment
void sceRtcFormatRFC2822();

// Empty Comment
void sceRtcFormatRFC2822LocalTime();

// Empty Comment
void sceRtcFormatRFC3339();

// Empty Comment
void sceRtcFormatRFC3339LocalTime();

// Empty Comment
void sceRtcGetCurrentAdNetworkTick();

// Empty Comment
void sceRtcGetCurrentClock();

// Empty Comment
void sceRtcGetCurrentClockLocalTime();

// Empty Comment
void sceRtcGetCurrentDebugNetworkTick();

// Empty Comment
void sceRtcGetCurrentNetworkTick();

// Empty Comment
void sceRtcGetCurrentTick();

// Empty Comment
void sceRtcGetDayOfWeek();

// Empty Comment
void sceRtcGetDaysInMonth();

// Empty Comment
void sceRtcGetDosTime();

// Empty Comment
void sceRtcGetTickResolution();

// Empty Comment
void sceRtcGetTime_t();

// Empty Comment
void sceRtcGetWin32FileTime();

// Empty Comment
void sceRtcIsLeapYear();

// Empty Comment
void sceRtcParseDateTime();

// Empty Comment
void sceRtcParseRFC3339();

// Empty Comment
void sceRtcSetConf();

// Empty Comment
void sceRtcSetCurrentTick();

// Empty Comment
void sceRtcSetDosTime();

// Empty Comment
void sceRtcSetTime_t();

// Empty Comment
void sceRtcSetWin32FileTime();


#endif