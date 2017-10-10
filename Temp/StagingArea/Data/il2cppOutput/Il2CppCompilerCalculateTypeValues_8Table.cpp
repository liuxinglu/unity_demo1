﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Threading.Thread
struct Thread_t1302990584;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t4230008276;
// System.Char[]
struct CharU5BU5D_t1416547787;
// System.UInt64
struct UInt64_t700752848;
// System.Int32
struct Int32_t3094976451;
// System.Char
struct Char_t2413941374;
// System.Int64
struct Int64_t1333226099;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t3688179000;
// System.Reflection.Assembly
struct Assembly_t2855126329;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3389176118;
// System.Boolean[]
struct BooleanU5BU5D_t906109085;
// System.IntPtr[]
struct IntPtrU5BU5D_t1759434796;
// System.Collections.IDictionary
struct IDictionary_t694026646;
// System.Void
struct Void_t40196489;
// System.Globalization.CompareInfo
struct CompareInfo_t2392956747;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t784841536;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2091040235;
// System.Collections.Hashtable
struct Hashtable_t1456928900;
// System.Globalization.DaylightTime
struct DaylightTime_t2037047829;
// System.Version
struct Version_t75757620;
// System.Type[]
struct TypeU5BU5D_t2362283017;
// System.Reflection.MemberFilter
struct MemberFilter_t1969215007;
// System.Byte[]
struct ByteU5BU5D_t1390853353;
// Mono.Math.BigInteger
struct BigInteger_t1073394340;
// System.IAsyncResult
struct IAsyncResult_t344304265;
// System.AsyncCallback
struct AsyncCallback_t1985414158;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t746382225;
// System.MonoTypeInfo
struct MonoTypeInfo_t4102765205;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t2924085182;
// System.String[]
struct StringU5BU5D_t2718098452;
// System.AssemblyLoadEventArgs
struct AssemblyLoadEventArgs_t3324343297;
// System.EventArgs
struct EventArgs_t2957260612;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.ResolveEventArgs
struct ResolveEventArgs_t3180588390;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef EVENTARGS_T2957260612_H
#define EVENTARGS_T2957260612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t2957260612  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t2957260612_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t2957260612 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t2957260612_StaticFields, ___Empty_0)); }
	inline EventArgs_t2957260612 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t2957260612 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t2957260612 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T2957260612_H
#ifndef TIMEZONE_T3385619321_H
#define TIMEZONE_T3385619321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZone
struct  TimeZone_t3385619321  : public RuntimeObject
{
public:

public:
};

struct TimeZone_t3385619321_StaticFields
{
public:
	// System.TimeZone System.TimeZone::currentTimeZone
	TimeZone_t3385619321 * ___currentTimeZone_0;
	// System.Object System.TimeZone::tz_lock
	RuntimeObject * ___tz_lock_1;
	// System.Int64 System.TimeZone::timezone_check
	int64_t ___timezone_check_2;

public:
	inline static int32_t get_offset_of_currentTimeZone_0() { return static_cast<int32_t>(offsetof(TimeZone_t3385619321_StaticFields, ___currentTimeZone_0)); }
	inline TimeZone_t3385619321 * get_currentTimeZone_0() const { return ___currentTimeZone_0; }
	inline TimeZone_t3385619321 ** get_address_of_currentTimeZone_0() { return &___currentTimeZone_0; }
	inline void set_currentTimeZone_0(TimeZone_t3385619321 * value)
	{
		___currentTimeZone_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentTimeZone_0), value);
	}

	inline static int32_t get_offset_of_tz_lock_1() { return static_cast<int32_t>(offsetof(TimeZone_t3385619321_StaticFields, ___tz_lock_1)); }
	inline RuntimeObject * get_tz_lock_1() const { return ___tz_lock_1; }
	inline RuntimeObject ** get_address_of_tz_lock_1() { return &___tz_lock_1; }
	inline void set_tz_lock_1(RuntimeObject * value)
	{
		___tz_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___tz_lock_1), value);
	}

	inline static int32_t get_offset_of_timezone_check_2() { return static_cast<int32_t>(offsetof(TimeZone_t3385619321_StaticFields, ___timezone_check_2)); }
	inline int64_t get_timezone_check_2() const { return ___timezone_check_2; }
	inline int64_t* get_address_of_timezone_check_2() { return &___timezone_check_2; }
	inline void set_timezone_check_2(int64_t value)
	{
		___timezone_check_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEZONE_T3385619321_H
#ifndef STRINGCOMPARER_T578076063_H
#define STRINGCOMPARER_T578076063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparer
struct  StringComparer_t578076063  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t578076063_StaticFields
{
public:
	// System.StringComparer System.StringComparer::invariantCultureIgnoreCase
	StringComparer_t578076063 * ___invariantCultureIgnoreCase_0;
	// System.StringComparer System.StringComparer::invariantCulture
	StringComparer_t578076063 * ___invariantCulture_1;
	// System.StringComparer System.StringComparer::ordinalIgnoreCase
	StringComparer_t578076063 * ___ordinalIgnoreCase_2;
	// System.StringComparer System.StringComparer::ordinal
	StringComparer_t578076063 * ___ordinal_3;

public:
	inline static int32_t get_offset_of_invariantCultureIgnoreCase_0() { return static_cast<int32_t>(offsetof(StringComparer_t578076063_StaticFields, ___invariantCultureIgnoreCase_0)); }
	inline StringComparer_t578076063 * get_invariantCultureIgnoreCase_0() const { return ___invariantCultureIgnoreCase_0; }
	inline StringComparer_t578076063 ** get_address_of_invariantCultureIgnoreCase_0() { return &___invariantCultureIgnoreCase_0; }
	inline void set_invariantCultureIgnoreCase_0(StringComparer_t578076063 * value)
	{
		___invariantCultureIgnoreCase_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCultureIgnoreCase_0), value);
	}

	inline static int32_t get_offset_of_invariantCulture_1() { return static_cast<int32_t>(offsetof(StringComparer_t578076063_StaticFields, ___invariantCulture_1)); }
	inline StringComparer_t578076063 * get_invariantCulture_1() const { return ___invariantCulture_1; }
	inline StringComparer_t578076063 ** get_address_of_invariantCulture_1() { return &___invariantCulture_1; }
	inline void set_invariantCulture_1(StringComparer_t578076063 * value)
	{
		___invariantCulture_1 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCulture_1), value);
	}

	inline static int32_t get_offset_of_ordinalIgnoreCase_2() { return static_cast<int32_t>(offsetof(StringComparer_t578076063_StaticFields, ___ordinalIgnoreCase_2)); }
	inline StringComparer_t578076063 * get_ordinalIgnoreCase_2() const { return ___ordinalIgnoreCase_2; }
	inline StringComparer_t578076063 ** get_address_of_ordinalIgnoreCase_2() { return &___ordinalIgnoreCase_2; }
	inline void set_ordinalIgnoreCase_2(StringComparer_t578076063 * value)
	{
		___ordinalIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___ordinalIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_ordinal_3() { return static_cast<int32_t>(offsetof(StringComparer_t578076063_StaticFields, ___ordinal_3)); }
	inline StringComparer_t578076063 * get_ordinal_3() const { return ___ordinal_3; }
	inline StringComparer_t578076063 ** get_address_of_ordinal_3() { return &___ordinal_3; }
	inline void set_ordinal_3(StringComparer_t578076063 * value)
	{
		___ordinal_3 = value;
		Il2CppCodeGenWriteBarrier((&___ordinal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARER_T578076063_H
#ifndef VERSION_T75757620_H
#define VERSION_T75757620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_t75757620  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_1;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_2;
	// System.Int32 System.Version::_Build
	int32_t ____Build_3;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_4;

public:
	inline static int32_t get_offset_of__Major_1() { return static_cast<int32_t>(offsetof(Version_t75757620, ____Major_1)); }
	inline int32_t get__Major_1() const { return ____Major_1; }
	inline int32_t* get_address_of__Major_1() { return &____Major_1; }
	inline void set__Major_1(int32_t value)
	{
		____Major_1 = value;
	}

	inline static int32_t get_offset_of__Minor_2() { return static_cast<int32_t>(offsetof(Version_t75757620, ____Minor_2)); }
	inline int32_t get__Minor_2() const { return ____Minor_2; }
	inline int32_t* get_address_of__Minor_2() { return &____Minor_2; }
	inline void set__Minor_2(int32_t value)
	{
		____Minor_2 = value;
	}

	inline static int32_t get_offset_of__Build_3() { return static_cast<int32_t>(offsetof(Version_t75757620, ____Build_3)); }
	inline int32_t get__Build_3() const { return ____Build_3; }
	inline int32_t* get_address_of__Build_3() { return &____Build_3; }
	inline void set__Build_3(int32_t value)
	{
		____Build_3 = value;
	}

	inline static int32_t get_offset_of__Revision_4() { return static_cast<int32_t>(offsetof(Version_t75757620, ____Revision_4)); }
	inline int32_t get__Revision_4() const { return ____Revision_4; }
	inline int32_t* get_address_of__Revision_4() { return &____Revision_4; }
	inline void set__Revision_4(int32_t value)
	{
		____Revision_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T75757620_H
#ifndef CUSTOMINFO_T626617653_H
#define CUSTOMINFO_T626617653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NumberFormatter/CustomInfo
struct  CustomInfo_t626617653  : public RuntimeObject
{
public:
	// System.Boolean System.NumberFormatter/CustomInfo::UseGroup
	bool ___UseGroup_0;
	// System.Int32 System.NumberFormatter/CustomInfo::DecimalDigits
	int32_t ___DecimalDigits_1;
	// System.Int32 System.NumberFormatter/CustomInfo::DecimalPointPos
	int32_t ___DecimalPointPos_2;
	// System.Int32 System.NumberFormatter/CustomInfo::DecimalTailSharpDigits
	int32_t ___DecimalTailSharpDigits_3;
	// System.Int32 System.NumberFormatter/CustomInfo::IntegerDigits
	int32_t ___IntegerDigits_4;
	// System.Int32 System.NumberFormatter/CustomInfo::IntegerHeadSharpDigits
	int32_t ___IntegerHeadSharpDigits_5;
	// System.Int32 System.NumberFormatter/CustomInfo::IntegerHeadPos
	int32_t ___IntegerHeadPos_6;
	// System.Boolean System.NumberFormatter/CustomInfo::UseExponent
	bool ___UseExponent_7;
	// System.Int32 System.NumberFormatter/CustomInfo::ExponentDigits
	int32_t ___ExponentDigits_8;
	// System.Int32 System.NumberFormatter/CustomInfo::ExponentTailSharpDigits
	int32_t ___ExponentTailSharpDigits_9;
	// System.Boolean System.NumberFormatter/CustomInfo::ExponentNegativeSignOnly
	bool ___ExponentNegativeSignOnly_10;
	// System.Int32 System.NumberFormatter/CustomInfo::DividePlaces
	int32_t ___DividePlaces_11;
	// System.Int32 System.NumberFormatter/CustomInfo::Percents
	int32_t ___Percents_12;
	// System.Int32 System.NumberFormatter/CustomInfo::Permilles
	int32_t ___Permilles_13;

public:
	inline static int32_t get_offset_of_UseGroup_0() { return static_cast<int32_t>(offsetof(CustomInfo_t626617653, ___UseGroup_0)); }
	inline bool get_UseGroup_0() const { return ___UseGroup_0; }
	inline bool* get_address_of_UseGroup_0() { return &___UseGroup_0; }
	inline void set_UseGroup_0(bool value)
	{
		___UseGroup_0 = value;
	}

	inline static int32_t get_offset_of_DecimalDigits_1() { return static_cast<int32_t>(offsetof(CustomInfo_t626617653, ___DecimalDigits_1)); }
	inline int32_t get_DecimalDigits_1() const { return ___DecimalDigits_1; }
	inline int32_t* get_address_of_DecimalDigits_1() { return &___DecimalDigits_1; }
	inline void set_DecimalDigits_1(int32_t value)
	{
		___DecimalDigits_1 = value;
	}

	inline static int32_t get_offset_of_DecimalPointPos_2() { return static_cast<int32_t>(offsetof(CustomInfo_t626617653, ___DecimalPointPos_2)); }
	inline int32_t get_DecimalPointPos_2() const { return ___DecimalPointPos_2; }
	inline int32_t* get_address_of_DecimalPointPos_2() { return &___DecimalPointPos_2; }
	inline void set_DecimalPointPos_2(int32_t value)
	{
		___DecimalPointPos_2 = value;
	}

	inline static int32_t get_offset_of_DecimalTailSharpDigits_3() { return static_cast<int32_t>(offsetof(CustomInfo_t626617653, ___DecimalTailSharpDigits_3)); }
	inline int32_t get_DecimalTailSharpDigits_3() const { return ___DecimalTailSharpDigits_3; }
	inline int32_t* get_address_of_DecimalTailSharpDigits_3() { return &___DecimalTailSharpDigits_3; }
	inline void set_DecimalTailSharpDigits_3(int32_t value)
	{
		___DecimalTailSharpDigits_3 = value;
	}

	inline static int32_t get_offset_of_IntegerDigits_4() { return static_cast<int32_t>(offsetof(CustomInfo_t626617653, ___IntegerDigits_4)); }
	inline int32_t get_IntegerDigits_4() const { return ___IntegerDigits_4; }
	inline int32_t* get_address_of_IntegerDigits_4() { return &___IntegerDigits_4; }
	inline void set_IntegerDigits_4(int32_t value)
	{
		___IntegerDigits_4 = value;
	}

	inline static int32_t get_offset_of_IntegerHeadSharpDigits_5() { return static_cast<int32_t>(offsetof(CustomInfo_t626617653, ___IntegerHeadSharpDigits_5)); }
	inline int32_t get_IntegerHeadSharpDigits_5() const { return ___IntegerHeadSharpDigits_5; }
	inline int32_t* get_address_of_IntegerHeadSharpDigits_5() { return &___IntegerHeadSharpDigits_5; }
	inline void set_IntegerHeadSharpDigits_5(int32_t value)
	{
		___IntegerHeadSharpDigits_5 = value;
	}

	inline static int32_t get_offset_of_IntegerHeadPos_6() { return static_cast<int32_t>(offsetof(CustomInfo_t626617653, ___IntegerHeadPos_6)); }
	inline int32_t get_IntegerHeadPos_6() const { return ___IntegerHeadPos_6; }
	inline int32_t* get_address_of_IntegerHeadPos_6() { return &___IntegerHeadPos_6; }
	inline void set_IntegerHeadPos_6(int32_t value)
	{
		___IntegerHeadPos_6 = value;
	}

	inline static int32_t get_offset_of_UseExponent_7() { return static_cast<int32_t>(offsetof(CustomInfo_t626617653, ___UseExponent_7)); }
	inline bool get_UseExponent_7() const { return ___UseExponent_7; }
	inline bool* get_address_of_UseExponent_7() { return &___UseExponent_7; }
	inline void set_UseExponent_7(bool value)
	{
		___UseExponent_7 = value;
	}

	inline static int32_t get_offset_of_ExponentDigits_8() { return static_cast<int32_t>(offsetof(CustomInfo_t626617653, ___ExponentDigits_8)); }
	inline int32_t get_ExponentDigits_8() const { return ___ExponentDigits_8; }
	inline int32_t* get_address_of_ExponentDigits_8() { return &___ExponentDigits_8; }
	inline void set_ExponentDigits_8(int32_t value)
	{
		___ExponentDigits_8 = value;
	}

	inline static int32_t get_offset_of_ExponentTailSharpDigits_9() { return static_cast<int32_t>(offsetof(CustomInfo_t626617653, ___ExponentTailSharpDigits_9)); }
	inline int32_t get_ExponentTailSharpDigits_9() const { return ___ExponentTailSharpDigits_9; }
	inline int32_t* get_address_of_ExponentTailSharpDigits_9() { return &___ExponentTailSharpDigits_9; }
	inline void set_ExponentTailSharpDigits_9(int32_t value)
	{
		___ExponentTailSharpDigits_9 = value;
	}

	inline static int32_t get_offset_of_ExponentNegativeSignOnly_10() { return static_cast<int32_t>(offsetof(CustomInfo_t626617653, ___ExponentNegativeSignOnly_10)); }
	inline bool get_ExponentNegativeSignOnly_10() const { return ___ExponentNegativeSignOnly_10; }
	inline bool* get_address_of_ExponentNegativeSignOnly_10() { return &___ExponentNegativeSignOnly_10; }
	inline void set_ExponentNegativeSignOnly_10(bool value)
	{
		___ExponentNegativeSignOnly_10 = value;
	}

	inline static int32_t get_offset_of_DividePlaces_11() { return static_cast<int32_t>(offsetof(CustomInfo_t626617653, ___DividePlaces_11)); }
	inline int32_t get_DividePlaces_11() const { return ___DividePlaces_11; }
	inline int32_t* get_address_of_DividePlaces_11() { return &___DividePlaces_11; }
	inline void set_DividePlaces_11(int32_t value)
	{
		___DividePlaces_11 = value;
	}

	inline static int32_t get_offset_of_Percents_12() { return static_cast<int32_t>(offsetof(CustomInfo_t626617653, ___Percents_12)); }
	inline int32_t get_Percents_12() const { return ___Percents_12; }
	inline int32_t* get_address_of_Percents_12() { return &___Percents_12; }
	inline void set_Percents_12(int32_t value)
	{
		___Percents_12 = value;
	}

	inline static int32_t get_offset_of_Permilles_13() { return static_cast<int32_t>(offsetof(CustomInfo_t626617653, ___Permilles_13)); }
	inline int32_t get_Permilles_13() const { return ___Permilles_13; }
	inline int32_t* get_address_of_Permilles_13() { return &___Permilles_13; }
	inline void set_Permilles_13(int32_t value)
	{
		___Permilles_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMINFO_T626617653_H
#ifndef NUMBERFORMATTER_T3453388345_H
#define NUMBERFORMATTER_T3453388345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NumberFormatter
struct  NumberFormatter_t3453388345  : public RuntimeObject
{
public:
	// System.Threading.Thread System.NumberFormatter::_thread
	Thread_t1302990584 * ____thread_6;
	// System.Globalization.NumberFormatInfo System.NumberFormatter::_nfi
	NumberFormatInfo_t4230008276 * ____nfi_7;
	// System.Boolean System.NumberFormatter::_NaN
	bool ____NaN_8;
	// System.Boolean System.NumberFormatter::_infinity
	bool ____infinity_9;
	// System.Boolean System.NumberFormatter::_isCustomFormat
	bool ____isCustomFormat_10;
	// System.Boolean System.NumberFormatter::_specifierIsUpper
	bool ____specifierIsUpper_11;
	// System.Boolean System.NumberFormatter::_positive
	bool ____positive_12;
	// System.Char System.NumberFormatter::_specifier
	Il2CppChar ____specifier_13;
	// System.Int32 System.NumberFormatter::_precision
	int32_t ____precision_14;
	// System.Int32 System.NumberFormatter::_defPrecision
	int32_t ____defPrecision_15;
	// System.Int32 System.NumberFormatter::_digitsLen
	int32_t ____digitsLen_16;
	// System.Int32 System.NumberFormatter::_offset
	int32_t ____offset_17;
	// System.Int32 System.NumberFormatter::_decPointPos
	int32_t ____decPointPos_18;
	// System.UInt32 System.NumberFormatter::_val1
	uint32_t ____val1_19;
	// System.UInt32 System.NumberFormatter::_val2
	uint32_t ____val2_20;
	// System.UInt32 System.NumberFormatter::_val3
	uint32_t ____val3_21;
	// System.UInt32 System.NumberFormatter::_val4
	uint32_t ____val4_22;
	// System.Char[] System.NumberFormatter::_cbuf
	CharU5BU5D_t1416547787* ____cbuf_23;
	// System.Int32 System.NumberFormatter::_ind
	int32_t ____ind_24;

public:
	inline static int32_t get_offset_of__thread_6() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345, ____thread_6)); }
	inline Thread_t1302990584 * get__thread_6() const { return ____thread_6; }
	inline Thread_t1302990584 ** get_address_of__thread_6() { return &____thread_6; }
	inline void set__thread_6(Thread_t1302990584 * value)
	{
		____thread_6 = value;
		Il2CppCodeGenWriteBarrier((&____thread_6), value);
	}

	inline static int32_t get_offset_of__nfi_7() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345, ____nfi_7)); }
	inline NumberFormatInfo_t4230008276 * get__nfi_7() const { return ____nfi_7; }
	inline NumberFormatInfo_t4230008276 ** get_address_of__nfi_7() { return &____nfi_7; }
	inline void set__nfi_7(NumberFormatInfo_t4230008276 * value)
	{
		____nfi_7 = value;
		Il2CppCodeGenWriteBarrier((&____nfi_7), value);
	}

	inline static int32_t get_offset_of__NaN_8() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345, ____NaN_8)); }
	inline bool get__NaN_8() const { return ____NaN_8; }
	inline bool* get_address_of__NaN_8() { return &____NaN_8; }
	inline void set__NaN_8(bool value)
	{
		____NaN_8 = value;
	}

	inline static int32_t get_offset_of__infinity_9() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345, ____infinity_9)); }
	inline bool get__infinity_9() const { return ____infinity_9; }
	inline bool* get_address_of__infinity_9() { return &____infinity_9; }
	inline void set__infinity_9(bool value)
	{
		____infinity_9 = value;
	}

	inline static int32_t get_offset_of__isCustomFormat_10() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345, ____isCustomFormat_10)); }
	inline bool get__isCustomFormat_10() const { return ____isCustomFormat_10; }
	inline bool* get_address_of__isCustomFormat_10() { return &____isCustomFormat_10; }
	inline void set__isCustomFormat_10(bool value)
	{
		____isCustomFormat_10 = value;
	}

	inline static int32_t get_offset_of__specifierIsUpper_11() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345, ____specifierIsUpper_11)); }
	inline bool get__specifierIsUpper_11() const { return ____specifierIsUpper_11; }
	inline bool* get_address_of__specifierIsUpper_11() { return &____specifierIsUpper_11; }
	inline void set__specifierIsUpper_11(bool value)
	{
		____specifierIsUpper_11 = value;
	}

	inline static int32_t get_offset_of__positive_12() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345, ____positive_12)); }
	inline bool get__positive_12() const { return ____positive_12; }
	inline bool* get_address_of__positive_12() { return &____positive_12; }
	inline void set__positive_12(bool value)
	{
		____positive_12 = value;
	}

	inline static int32_t get_offset_of__specifier_13() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345, ____specifier_13)); }
	inline Il2CppChar get__specifier_13() const { return ____specifier_13; }
	inline Il2CppChar* get_address_of__specifier_13() { return &____specifier_13; }
	inline void set__specifier_13(Il2CppChar value)
	{
		____specifier_13 = value;
	}

	inline static int32_t get_offset_of__precision_14() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345, ____precision_14)); }
	inline int32_t get__precision_14() const { return ____precision_14; }
	inline int32_t* get_address_of__precision_14() { return &____precision_14; }
	inline void set__precision_14(int32_t value)
	{
		____precision_14 = value;
	}

	inline static int32_t get_offset_of__defPrecision_15() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345, ____defPrecision_15)); }
	inline int32_t get__defPrecision_15() const { return ____defPrecision_15; }
	inline int32_t* get_address_of__defPrecision_15() { return &____defPrecision_15; }
	inline void set__defPrecision_15(int32_t value)
	{
		____defPrecision_15 = value;
	}

	inline static int32_t get_offset_of__digitsLen_16() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345, ____digitsLen_16)); }
	inline int32_t get__digitsLen_16() const { return ____digitsLen_16; }
	inline int32_t* get_address_of__digitsLen_16() { return &____digitsLen_16; }
	inline void set__digitsLen_16(int32_t value)
	{
		____digitsLen_16 = value;
	}

	inline static int32_t get_offset_of__offset_17() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345, ____offset_17)); }
	inline int32_t get__offset_17() const { return ____offset_17; }
	inline int32_t* get_address_of__offset_17() { return &____offset_17; }
	inline void set__offset_17(int32_t value)
	{
		____offset_17 = value;
	}

	inline static int32_t get_offset_of__decPointPos_18() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345, ____decPointPos_18)); }
	inline int32_t get__decPointPos_18() const { return ____decPointPos_18; }
	inline int32_t* get_address_of__decPointPos_18() { return &____decPointPos_18; }
	inline void set__decPointPos_18(int32_t value)
	{
		____decPointPos_18 = value;
	}

	inline static int32_t get_offset_of__val1_19() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345, ____val1_19)); }
	inline uint32_t get__val1_19() const { return ____val1_19; }
	inline uint32_t* get_address_of__val1_19() { return &____val1_19; }
	inline void set__val1_19(uint32_t value)
	{
		____val1_19 = value;
	}

	inline static int32_t get_offset_of__val2_20() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345, ____val2_20)); }
	inline uint32_t get__val2_20() const { return ____val2_20; }
	inline uint32_t* get_address_of__val2_20() { return &____val2_20; }
	inline void set__val2_20(uint32_t value)
	{
		____val2_20 = value;
	}

	inline static int32_t get_offset_of__val3_21() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345, ____val3_21)); }
	inline uint32_t get__val3_21() const { return ____val3_21; }
	inline uint32_t* get_address_of__val3_21() { return &____val3_21; }
	inline void set__val3_21(uint32_t value)
	{
		____val3_21 = value;
	}

	inline static int32_t get_offset_of__val4_22() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345, ____val4_22)); }
	inline uint32_t get__val4_22() const { return ____val4_22; }
	inline uint32_t* get_address_of__val4_22() { return &____val4_22; }
	inline void set__val4_22(uint32_t value)
	{
		____val4_22 = value;
	}

	inline static int32_t get_offset_of__cbuf_23() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345, ____cbuf_23)); }
	inline CharU5BU5D_t1416547787* get__cbuf_23() const { return ____cbuf_23; }
	inline CharU5BU5D_t1416547787** get_address_of__cbuf_23() { return &____cbuf_23; }
	inline void set__cbuf_23(CharU5BU5D_t1416547787* value)
	{
		____cbuf_23 = value;
		Il2CppCodeGenWriteBarrier((&____cbuf_23), value);
	}

	inline static int32_t get_offset_of__ind_24() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345, ____ind_24)); }
	inline int32_t get__ind_24() const { return ____ind_24; }
	inline int32_t* get_address_of__ind_24() { return &____ind_24; }
	inline void set__ind_24(int32_t value)
	{
		____ind_24 = value;
	}
};

struct NumberFormatter_t3453388345_StaticFields
{
public:
	// System.UInt64* System.NumberFormatter::MantissaBitsTable
	uint64_t* ___MantissaBitsTable_0;
	// System.Int32* System.NumberFormatter::TensExponentTable
	int32_t* ___TensExponentTable_1;
	// System.Char* System.NumberFormatter::DigitLowerTable
	Il2CppChar* ___DigitLowerTable_2;
	// System.Char* System.NumberFormatter::DigitUpperTable
	Il2CppChar* ___DigitUpperTable_3;
	// System.Int64* System.NumberFormatter::TenPowersList
	int64_t* ___TenPowersList_4;
	// System.Int32* System.NumberFormatter::DecHexDigits
	int32_t* ___DecHexDigits_5;

public:
	inline static int32_t get_offset_of_MantissaBitsTable_0() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345_StaticFields, ___MantissaBitsTable_0)); }
	inline uint64_t* get_MantissaBitsTable_0() const { return ___MantissaBitsTable_0; }
	inline uint64_t** get_address_of_MantissaBitsTable_0() { return &___MantissaBitsTable_0; }
	inline void set_MantissaBitsTable_0(uint64_t* value)
	{
		___MantissaBitsTable_0 = value;
	}

	inline static int32_t get_offset_of_TensExponentTable_1() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345_StaticFields, ___TensExponentTable_1)); }
	inline int32_t* get_TensExponentTable_1() const { return ___TensExponentTable_1; }
	inline int32_t** get_address_of_TensExponentTable_1() { return &___TensExponentTable_1; }
	inline void set_TensExponentTable_1(int32_t* value)
	{
		___TensExponentTable_1 = value;
	}

	inline static int32_t get_offset_of_DigitLowerTable_2() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345_StaticFields, ___DigitLowerTable_2)); }
	inline Il2CppChar* get_DigitLowerTable_2() const { return ___DigitLowerTable_2; }
	inline Il2CppChar** get_address_of_DigitLowerTable_2() { return &___DigitLowerTable_2; }
	inline void set_DigitLowerTable_2(Il2CppChar* value)
	{
		___DigitLowerTable_2 = value;
	}

	inline static int32_t get_offset_of_DigitUpperTable_3() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345_StaticFields, ___DigitUpperTable_3)); }
	inline Il2CppChar* get_DigitUpperTable_3() const { return ___DigitUpperTable_3; }
	inline Il2CppChar** get_address_of_DigitUpperTable_3() { return &___DigitUpperTable_3; }
	inline void set_DigitUpperTable_3(Il2CppChar* value)
	{
		___DigitUpperTable_3 = value;
	}

	inline static int32_t get_offset_of_TenPowersList_4() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345_StaticFields, ___TenPowersList_4)); }
	inline int64_t* get_TenPowersList_4() const { return ___TenPowersList_4; }
	inline int64_t** get_address_of_TenPowersList_4() { return &___TenPowersList_4; }
	inline void set_TenPowersList_4(int64_t* value)
	{
		___TenPowersList_4 = value;
	}

	inline static int32_t get_offset_of_DecHexDigits_5() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345_StaticFields, ___DecHexDigits_5)); }
	inline int32_t* get_DecHexDigits_5() const { return ___DecHexDigits_5; }
	inline int32_t** get_address_of_DecHexDigits_5() { return &___DecHexDigits_5; }
	inline void set_DecHexDigits_5(int32_t* value)
	{
		___DecHexDigits_5 = value;
	}
};

struct NumberFormatter_t3453388345_ThreadStaticFields
{
public:
	// System.NumberFormatter System.NumberFormatter::threadNumberFormatter
	NumberFormatter_t3453388345 * ___threadNumberFormatter_25;

public:
	inline static int32_t get_offset_of_threadNumberFormatter_25() { return static_cast<int32_t>(offsetof(NumberFormatter_t3453388345_ThreadStaticFields, ___threadNumberFormatter_25)); }
	inline NumberFormatter_t3453388345 * get_threadNumberFormatter_25() const { return ___threadNumberFormatter_25; }
	inline NumberFormatter_t3453388345 ** get_address_of_threadNumberFormatter_25() { return &___threadNumberFormatter_25; }
	inline void set_threadNumberFormatter_25(NumberFormatter_t3453388345 * value)
	{
		___threadNumberFormatter_25 = value;
		Il2CppCodeGenWriteBarrier((&___threadNumberFormatter_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERFORMATTER_T3453388345_H
#ifndef MONOTOUCHAOTHELPER_T1344711673_H
#define MONOTOUCHAOTHELPER_T1344711673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTouchAOTHelper
struct  MonoTouchAOTHelper_t1344711673  : public RuntimeObject
{
public:

public:
};

struct MonoTouchAOTHelper_t1344711673_StaticFields
{
public:
	// System.Boolean System.MonoTouchAOTHelper::FalseFlag
	bool ___FalseFlag_0;

public:
	inline static int32_t get_offset_of_FalseFlag_0() { return static_cast<int32_t>(offsetof(MonoTouchAOTHelper_t1344711673_StaticFields, ___FalseFlag_0)); }
	inline bool get_FalseFlag_0() const { return ___FalseFlag_0; }
	inline bool* get_address_of_FalseFlag_0() { return &___FalseFlag_0; }
	inline void set_FalseFlag_0(bool value)
	{
		___FalseFlag_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTOUCHAOTHELPER_T1344711673_H
#ifndef ATTRIBUTEINFO_T1278389190_H
#define ATTRIBUTEINFO_T1278389190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoCustomAttrs/AttributeInfo
struct  AttributeInfo_t1278389190  : public RuntimeObject
{
public:
	// System.AttributeUsageAttribute System.MonoCustomAttrs/AttributeInfo::_usage
	AttributeUsageAttribute_t3688179000 * ____usage_0;
	// System.Int32 System.MonoCustomAttrs/AttributeInfo::_inheritanceLevel
	int32_t ____inheritanceLevel_1;

public:
	inline static int32_t get_offset_of__usage_0() { return static_cast<int32_t>(offsetof(AttributeInfo_t1278389190, ____usage_0)); }
	inline AttributeUsageAttribute_t3688179000 * get__usage_0() const { return ____usage_0; }
	inline AttributeUsageAttribute_t3688179000 ** get_address_of__usage_0() { return &____usage_0; }
	inline void set__usage_0(AttributeUsageAttribute_t3688179000 * value)
	{
		____usage_0 = value;
		Il2CppCodeGenWriteBarrier((&____usage_0), value);
	}

	inline static int32_t get_offset_of__inheritanceLevel_1() { return static_cast<int32_t>(offsetof(AttributeInfo_t1278389190, ____inheritanceLevel_1)); }
	inline int32_t get__inheritanceLevel_1() const { return ____inheritanceLevel_1; }
	inline int32_t* get_address_of__inheritanceLevel_1() { return &____inheritanceLevel_1; }
	inline void set__inheritanceLevel_1(int32_t value)
	{
		____inheritanceLevel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEINFO_T1278389190_H
#ifndef MONOCUSTOMATTRS_T3592029779_H
#define MONOCUSTOMATTRS_T3592029779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoCustomAttrs
struct  MonoCustomAttrs_t3592029779  : public RuntimeObject
{
public:

public:
};

struct MonoCustomAttrs_t3592029779_StaticFields
{
public:
	// System.Reflection.Assembly System.MonoCustomAttrs::corlib
	Assembly_t2855126329 * ___corlib_0;
	// System.Type System.MonoCustomAttrs::AttributeUsageType
	Type_t * ___AttributeUsageType_1;
	// System.AttributeUsageAttribute System.MonoCustomAttrs::DefaultAttributeUsage
	AttributeUsageAttribute_t3688179000 * ___DefaultAttributeUsage_2;

public:
	inline static int32_t get_offset_of_corlib_0() { return static_cast<int32_t>(offsetof(MonoCustomAttrs_t3592029779_StaticFields, ___corlib_0)); }
	inline Assembly_t2855126329 * get_corlib_0() const { return ___corlib_0; }
	inline Assembly_t2855126329 ** get_address_of_corlib_0() { return &___corlib_0; }
	inline void set_corlib_0(Assembly_t2855126329 * value)
	{
		___corlib_0 = value;
		Il2CppCodeGenWriteBarrier((&___corlib_0), value);
	}

	inline static int32_t get_offset_of_AttributeUsageType_1() { return static_cast<int32_t>(offsetof(MonoCustomAttrs_t3592029779_StaticFields, ___AttributeUsageType_1)); }
	inline Type_t * get_AttributeUsageType_1() const { return ___AttributeUsageType_1; }
	inline Type_t ** get_address_of_AttributeUsageType_1() { return &___AttributeUsageType_1; }
	inline void set_AttributeUsageType_1(Type_t * value)
	{
		___AttributeUsageType_1 = value;
		Il2CppCodeGenWriteBarrier((&___AttributeUsageType_1), value);
	}

	inline static int32_t get_offset_of_DefaultAttributeUsage_2() { return static_cast<int32_t>(offsetof(MonoCustomAttrs_t3592029779_StaticFields, ___DefaultAttributeUsage_2)); }
	inline AttributeUsageAttribute_t3688179000 * get_DefaultAttributeUsage_2() const { return ___DefaultAttributeUsage_2; }
	inline AttributeUsageAttribute_t3688179000 ** get_address_of_DefaultAttributeUsage_2() { return &___DefaultAttributeUsage_2; }
	inline void set_DefaultAttributeUsage_2(AttributeUsageAttribute_t3688179000 * value)
	{
		___DefaultAttributeUsage_2 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultAttributeUsage_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOCUSTOMATTRS_T3592029779_H
#ifndef ATTRIBUTE_T1871342998_H
#define ATTRIBUTE_T1871342998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t1871342998  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T1871342998_H
#ifndef VALUETYPE_T198531619_H
#define VALUETYPE_T198531619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t198531619  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t198531619_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t198531619_marshaled_com
{
};
#endif // VALUETYPE_T198531619_H
#ifndef MATH_T4134494189_H
#define MATH_T4134494189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Math
struct  Math_t4134494189  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATH_T4134494189_H
#ifndef MONOTYPEINFO_T4102765205_H
#define MONOTYPEINFO_T4102765205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTypeInfo
struct  MonoTypeInfo_t4102765205  : public RuntimeObject
{
public:
	// System.String System.MonoTypeInfo::full_name
	String_t* ___full_name_0;
	// System.Reflection.ConstructorInfo System.MonoTypeInfo::default_ctor
	ConstructorInfo_t3389176118 * ___default_ctor_1;

public:
	inline static int32_t get_offset_of_full_name_0() { return static_cast<int32_t>(offsetof(MonoTypeInfo_t4102765205, ___full_name_0)); }
	inline String_t* get_full_name_0() const { return ___full_name_0; }
	inline String_t** get_address_of_full_name_0() { return &___full_name_0; }
	inline void set_full_name_0(String_t* value)
	{
		___full_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___full_name_0), value);
	}

	inline static int32_t get_offset_of_default_ctor_1() { return static_cast<int32_t>(offsetof(MonoTypeInfo_t4102765205, ___default_ctor_1)); }
	inline ConstructorInfo_t3389176118 * get_default_ctor_1() const { return ___default_ctor_1; }
	inline ConstructorInfo_t3389176118 ** get_address_of_default_ctor_1() { return &___default_ctor_1; }
	inline void set_default_ctor_1(ConstructorInfo_t3389176118 * value)
	{
		___default_ctor_1 = value;
		Il2CppCodeGenWriteBarrier((&___default_ctor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTYPEINFO_T4102765205_H
#ifndef GC_T550184022_H
#define GC_T550184022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.GC
struct  GC_t550184022  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GC_T550184022_H
#ifndef GUIDPARSER_T3445609525_H
#define GUIDPARSER_T3445609525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid/GuidParser
struct  GuidParser_t3445609525  : public RuntimeObject
{
public:
	// System.String System.Guid/GuidParser::_src
	String_t* ____src_0;
	// System.Int32 System.Guid/GuidParser::_length
	int32_t ____length_1;
	// System.Int32 System.Guid/GuidParser::_cur
	int32_t ____cur_2;

public:
	inline static int32_t get_offset_of__src_0() { return static_cast<int32_t>(offsetof(GuidParser_t3445609525, ____src_0)); }
	inline String_t* get__src_0() const { return ____src_0; }
	inline String_t** get_address_of__src_0() { return &____src_0; }
	inline void set__src_0(String_t* value)
	{
		____src_0 = value;
		Il2CppCodeGenWriteBarrier((&____src_0), value);
	}

	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(GuidParser_t3445609525, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__cur_2() { return static_cast<int32_t>(offsetof(GuidParser_t3445609525, ____cur_2)); }
	inline int32_t get__cur_2() const { return ____cur_2; }
	inline int32_t* get_address_of__cur_2() { return &____cur_2; }
	inline void set__cur_2(int32_t value)
	{
		____cur_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDPARSER_T3445609525_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef LOCALDATASTORESLOT_T2080020751_H
#define LOCALDATASTORESLOT_T2080020751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LocalDataStoreSlot
struct  LocalDataStoreSlot_t2080020751  : public RuntimeObject
{
public:
	// System.Int32 System.LocalDataStoreSlot::slot
	int32_t ___slot_0;
	// System.Boolean System.LocalDataStoreSlot::thread_local
	bool ___thread_local_1;

public:
	inline static int32_t get_offset_of_slot_0() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t2080020751, ___slot_0)); }
	inline int32_t get_slot_0() const { return ___slot_0; }
	inline int32_t* get_address_of_slot_0() { return &___slot_0; }
	inline void set_slot_0(int32_t value)
	{
		___slot_0 = value;
	}

	inline static int32_t get_offset_of_thread_local_1() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t2080020751, ___thread_local_1)); }
	inline bool get_thread_local_1() const { return ___thread_local_1; }
	inline bool* get_address_of_thread_local_1() { return &___thread_local_1; }
	inline void set_thread_local_1(bool value)
	{
		___thread_local_1 = value;
	}
};

struct LocalDataStoreSlot_t2080020751_StaticFields
{
public:
	// System.Object System.LocalDataStoreSlot::lock_obj
	RuntimeObject * ___lock_obj_2;
	// System.Boolean[] System.LocalDataStoreSlot::slot_bitmap_thread
	BooleanU5BU5D_t906109085* ___slot_bitmap_thread_3;
	// System.Boolean[] System.LocalDataStoreSlot::slot_bitmap_context
	BooleanU5BU5D_t906109085* ___slot_bitmap_context_4;

public:
	inline static int32_t get_offset_of_lock_obj_2() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t2080020751_StaticFields, ___lock_obj_2)); }
	inline RuntimeObject * get_lock_obj_2() const { return ___lock_obj_2; }
	inline RuntimeObject ** get_address_of_lock_obj_2() { return &___lock_obj_2; }
	inline void set_lock_obj_2(RuntimeObject * value)
	{
		___lock_obj_2 = value;
		Il2CppCodeGenWriteBarrier((&___lock_obj_2), value);
	}

	inline static int32_t get_offset_of_slot_bitmap_thread_3() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t2080020751_StaticFields, ___slot_bitmap_thread_3)); }
	inline BooleanU5BU5D_t906109085* get_slot_bitmap_thread_3() const { return ___slot_bitmap_thread_3; }
	inline BooleanU5BU5D_t906109085** get_address_of_slot_bitmap_thread_3() { return &___slot_bitmap_thread_3; }
	inline void set_slot_bitmap_thread_3(BooleanU5BU5D_t906109085* value)
	{
		___slot_bitmap_thread_3 = value;
		Il2CppCodeGenWriteBarrier((&___slot_bitmap_thread_3), value);
	}

	inline static int32_t get_offset_of_slot_bitmap_context_4() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t2080020751_StaticFields, ___slot_bitmap_context_4)); }
	inline BooleanU5BU5D_t906109085* get_slot_bitmap_context_4() const { return ___slot_bitmap_context_4; }
	inline BooleanU5BU5D_t906109085** get_address_of_slot_bitmap_context_4() { return &___slot_bitmap_context_4; }
	inline void set_slot_bitmap_context_4(BooleanU5BU5D_t906109085* value)
	{
		___slot_bitmap_context_4 = value;
		Il2CppCodeGenWriteBarrier((&___slot_bitmap_context_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALDATASTORESLOT_T2080020751_H
#ifndef EXCEPTION_T2947728349_H
#define EXCEPTION_T2947728349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t2947728349  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t1759434796* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t2947728349 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t2947728349, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t1759434796* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t1759434796** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t1759434796* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t2947728349, ___inner_exception_1)); }
	inline Exception_t2947728349 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t2947728349 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t2947728349 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t2947728349, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t2947728349, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t2947728349, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t2947728349, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t2947728349, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t2947728349, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t2947728349, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t2947728349, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t2947728349, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T2947728349_H
#ifndef U24ARRAYTYPEU2452_T2279902549_H
#define U24ARRAYTYPEU2452_T2279902549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$52
struct  U24ArrayTypeU2452_t2279902549 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2452_t2279902549__padding[52];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2452_T2279902549_H
#ifndef U24ARRAYTYPEU24128_T2497070420_H
#define U24ARRAYTYPEU24128_T2497070420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$128
struct  U24ArrayTypeU24128_t2497070420 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24128_t2497070420__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24128_T2497070420_H
#ifndef U24ARRAYTYPEU2456_T1543429825_H
#define U24ARRAYTYPEU2456_T1543429825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$56
struct  U24ArrayTypeU2456_t1543429825 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2456_t1543429825__padding[56];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2456_T1543429825_H
#ifndef TIMESPAN_T3567112609_H
#define TIMESPAN_T3567112609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t3567112609 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t3567112609, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t3567112609_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t3567112609  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t3567112609  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t3567112609  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t3567112609_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t3567112609  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t3567112609 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t3567112609  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t3567112609_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t3567112609  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t3567112609 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t3567112609  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t3567112609_StaticFields, ___Zero_2)); }
	inline TimeSpan_t3567112609  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t3567112609 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t3567112609  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T3567112609_H
#ifndef U24ARRAYTYPEU2464_T2033706348_H
#define U24ARRAYTYPEU2464_T2033706348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$64
struct  U24ArrayTypeU2464_t2033706348 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2464_t2033706348__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2464_T2033706348_H
#ifndef U24ARRAYTYPEU2416_T70776454_H
#define U24ARRAYTYPEU2416_T70776454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$16
struct  U24ArrayTypeU2416_t70776454 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2416_t70776454__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2416_T70776454_H
#ifndef U24ARRAYTYPEU24120_T958999923_H
#define U24ARRAYTYPEU24120_T958999923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$120
struct  U24ArrayTypeU24120_t958999923 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24120_t958999923__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24120_T958999923_H
#ifndef U24ARRAYTYPEU243132_T2832538681_H
#define U24ARRAYTYPEU243132_T2832538681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$3132
struct  U24ArrayTypeU243132_t2832538681 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU243132_t2832538681__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU243132_T2832538681_H
#ifndef U24ARRAYTYPEU2420_T3778103746_H
#define U24ARRAYTYPEU2420_T3778103746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$20
struct  U24ArrayTypeU2420_t3778103746 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2420_t3778103746__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2420_T3778103746_H
#ifndef U24ARRAYTYPEU2432_T3804456112_H
#define U24ARRAYTYPEU2432_T3804456112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$32
struct  U24ArrayTypeU2432_t3804456112 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2432_t3804456112__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2432_T3804456112_H
#ifndef U24ARRAYTYPEU2448_T1068404676_H
#define U24ARRAYTYPEU2448_T1068404676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$48
struct  U24ArrayTypeU2448_t1068404676 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2448_t1068404676__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2448_T1068404676_H
#ifndef U24ARRAYTYPEU2424_T770301086_H
#define U24ARRAYTYPEU2424_T770301086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$24
struct  U24ArrayTypeU2424_t770301086 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2424_t770301086__padding[24];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2424_T770301086_H
#ifndef ENUM_T355449373_H
#define ENUM_T355449373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t355449373  : public ValueType_t198531619
{
public:

public:
};

struct Enum_t355449373_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1416547787* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t355449373_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1416547787* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1416547787** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1416547787* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t355449373_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t355449373_marshaled_com
{
};
#endif // ENUM_T355449373_H
#ifndef U24ARRAYTYPEU2412_T2214411420_H
#define U24ARRAYTYPEU2412_T2214411420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t2214411420 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2412_t2214411420__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T2214411420_H
#ifndef U24ARRAYTYPEU24136_T2045787120_H
#define U24ARRAYTYPEU24136_T2045787120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t2045787120 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24136_t2045787120__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T2045787120_H
#ifndef U24ARRAYTYPEU248_T3549862496_H
#define U24ARRAYTYPEU248_T3549862496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$8
struct  U24ArrayTypeU248_t3549862496 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU248_t3549862496__padding[8];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU248_T3549862496_H
#ifndef U24ARRAYTYPEU2472_T118347367_H
#define U24ARRAYTYPEU2472_T118347367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$72
struct  U24ArrayTypeU2472_t118347367 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2472_t118347367__padding[72];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2472_T118347367_H
#ifndef U24ARRAYTYPEU24124_T4214951589_H
#define U24ARRAYTYPEU24124_T4214951589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$124
struct  U24ArrayTypeU24124_t4214951589 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24124_t4214951589__padding[124];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24124_T4214951589_H
#ifndef U24ARRAYTYPEU2496_T4000210986_H
#define U24ARRAYTYPEU2496_T4000210986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$96
struct  U24ArrayTypeU2496_t4000210986 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2496_t4000210986__padding[96];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2496_T4000210986_H
#ifndef THREADSTATICATTRIBUTE_T2875227927_H
#define THREADSTATICATTRIBUTE_T2875227927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ThreadStaticAttribute
struct  ThreadStaticAttribute_t2875227927  : public Attribute_t1871342998
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATICATTRIBUTE_T2875227927_H
#ifndef VOID_T40196489_H
#define VOID_T40196489_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t40196489 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T40196489_H
#ifndef GCHANDLE_T3183665968_H
#define GCHANDLE_T3183665968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3183665968 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3183665968, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3183665968_H
#ifndef U24ARRAYTYPEU242048_T1147011002_H
#define U24ARRAYTYPEU242048_T1147011002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$2048
struct  U24ArrayTypeU242048_t1147011002 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU242048_t1147011002__padding[2048];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU242048_T1147011002_H
#ifndef U24ARRAYTYPEU24256_T2510773725_H
#define U24ARRAYTYPEU24256_T2510773725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t2510773725 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24256_t2510773725__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T2510773725_H
#ifndef U24ARRAYTYPEU241024_T2151015563_H
#define U24ARRAYTYPEU241024_T2151015563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t2151015563 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU241024_t2151015563__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T2151015563_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef U24ARRAYTYPEU24640_T3774379137_H
#define U24ARRAYTYPEU24640_T3774379137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$640
struct  U24ArrayTypeU24640_t3774379137 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24640_t3774379137__padding[640];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24640_T3774379137_H
#ifndef SYSTEMEXCEPTION_T82066692_H
#define SYSTEMEXCEPTION_T82066692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t82066692  : public Exception_t2947728349
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T82066692_H
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T746382225_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T746382225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t746382225  : public EventArgs_t2957260612
{
public:
	// System.Object System.UnhandledExceptionEventArgs::exception
	RuntimeObject * ___exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::m_isTerminating
	bool ___m_isTerminating_2;

public:
	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t746382225, ___exception_1)); }
	inline RuntimeObject * get_exception_1() const { return ___exception_1; }
	inline RuntimeObject ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(RuntimeObject * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___exception_1), value);
	}

	inline static int32_t get_offset_of_m_isTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t746382225, ___m_isTerminating_2)); }
	inline bool get_m_isTerminating_2() const { return ___m_isTerminating_2; }
	inline bool* get_address_of_m_isTerminating_2() { return &___m_isTerminating_2; }
	inline void set_m_isTerminating_2(bool value)
	{
		___m_isTerminating_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T746382225_H
#ifndef ORDINALCOMPARER_T736870908_H
#define ORDINALCOMPARER_T736870908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OrdinalComparer
struct  OrdinalComparer_t736870908  : public StringComparer_t578076063
{
public:
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(OrdinalComparer_t736870908, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDINALCOMPARER_T736870908_H
#ifndef CULTUREAWARECOMPARER_T3809122731_H
#define CULTUREAWARECOMPARER_T3809122731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CultureAwareComparer
struct  CultureAwareComparer_t3809122731  : public StringComparer_t578076063
{
public:
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t2392956747 * ____compareInfo_5;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t3809122731, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}

	inline static int32_t get_offset_of__compareInfo_5() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t3809122731, ____compareInfo_5)); }
	inline CompareInfo_t2392956747 * get__compareInfo_5() const { return ____compareInfo_5; }
	inline CompareInfo_t2392956747 ** get_address_of__compareInfo_5() { return &____compareInfo_5; }
	inline void set__compareInfo_5(CompareInfo_t2392956747 * value)
	{
		____compareInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&____compareInfo_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREAWARECOMPARER_T3809122731_H
#ifndef RESOLVEEVENTARGS_T3180588390_H
#define RESOLVEEVENTARGS_T3180588390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventArgs
struct  ResolveEventArgs_t3180588390  : public EventArgs_t2957260612
{
public:
	// System.String System.ResolveEventArgs::m_Name
	String_t* ___m_Name_1;

public:
	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(ResolveEventArgs_t3180588390, ___m_Name_1)); }
	inline String_t* get_m_Name_1() const { return ___m_Name_1; }
	inline String_t** get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(String_t* value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTARGS_T3180588390_H
#ifndef FLAGSATTRIBUTE_T3663229599_H
#define FLAGSATTRIBUTE_T3663229599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FlagsAttribute
struct  FlagsAttribute_t3663229599  : public Attribute_t1871342998
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGSATTRIBUTE_T3663229599_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t784841536 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t784841536 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t784841536 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t784841536 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t784841536 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t784841536 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t784841536 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t784841536 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef NONSERIALIZEDATTRIBUTE_T2183942278_H
#define NONSERIALIZEDATTRIBUTE_T2183942278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NonSerializedAttribute
struct  NonSerializedAttribute_t2183942278  : public Attribute_t1871342998
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONSERIALIZEDATTRIBUTE_T2183942278_H
#ifndef STRINGCOMPARISON_T2615625859_H
#define STRINGCOMPARISON_T2615625859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t2615625859 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringComparison_t2615625859, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARISON_T2615625859_H
#ifndef RANKEXCEPTION_T1254030116_H
#define RANKEXCEPTION_T1254030116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RankException
struct  RankException_t1254030116  : public SystemException_t82066692
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANKEXCEPTION_T1254030116_H
#ifndef STRINGSPLITOPTIONS_T3837118665_H
#define STRINGSPLITOPTIONS_T3837118665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringSplitOptions
struct  StringSplitOptions_t3837118665 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringSplitOptions_t3837118665, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGSPLITOPTIONS_T3837118665_H
#ifndef OUTOFMEMORYEXCEPTION_T620329179_H
#define OUTOFMEMORYEXCEPTION_T620329179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OutOfMemoryException
struct  OutOfMemoryException_t620329179  : public SystemException_t82066692
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTOFMEMORYEXCEPTION_T620329179_H
#ifndef NULLREFERENCEEXCEPTION_T3620155142_H
#define NULLREFERENCEEXCEPTION_T3620155142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NullReferenceException
struct  NullReferenceException_t3620155142  : public SystemException_t82066692
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLREFERENCEEXCEPTION_T3620155142_H
#ifndef NOTSUPPORTEDEXCEPTION_T3838488019_H
#define NOTSUPPORTEDEXCEPTION_T3838488019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t3838488019  : public SystemException_t82066692
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T3838488019_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T224927754_H
#define NOTIMPLEMENTEDEXCEPTION_T224927754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t224927754  : public SystemException_t82066692
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T224927754_H
#ifndef MULTICASTNOTSUPPORTEDEXCEPTION_T3016540688_H
#define MULTICASTNOTSUPPORTEDEXCEPTION_T3016540688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastNotSupportedException
struct  MulticastNotSupportedException_t3016540688  : public SystemException_t82066692
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTNOTSUPPORTEDEXCEPTION_T3016540688_H
#ifndef MONOASYNCCALL_T298858217_H
#define MONOASYNCCALL_T298858217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoAsyncCall
struct  MonoAsyncCall_t298858217  : public RuntimeObject
{
public:
	// System.Object System.MonoAsyncCall::msg
	RuntimeObject * ___msg_0;
	// System.IntPtr System.MonoAsyncCall::cb_method
	IntPtr_t ___cb_method_1;
	// System.Object System.MonoAsyncCall::cb_target
	RuntimeObject * ___cb_target_2;
	// System.Object System.MonoAsyncCall::state
	RuntimeObject * ___state_3;
	// System.Object System.MonoAsyncCall::res
	RuntimeObject * ___res_4;
	// System.Object System.MonoAsyncCall::out_args
	RuntimeObject * ___out_args_5;
	// System.Int64 System.MonoAsyncCall::wait_event
	int64_t ___wait_event_6;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t298858217, ___msg_0)); }
	inline RuntimeObject * get_msg_0() const { return ___msg_0; }
	inline RuntimeObject ** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(RuntimeObject * value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier((&___msg_0), value);
	}

	inline static int32_t get_offset_of_cb_method_1() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t298858217, ___cb_method_1)); }
	inline IntPtr_t get_cb_method_1() const { return ___cb_method_1; }
	inline IntPtr_t* get_address_of_cb_method_1() { return &___cb_method_1; }
	inline void set_cb_method_1(IntPtr_t value)
	{
		___cb_method_1 = value;
	}

	inline static int32_t get_offset_of_cb_target_2() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t298858217, ___cb_target_2)); }
	inline RuntimeObject * get_cb_target_2() const { return ___cb_target_2; }
	inline RuntimeObject ** get_address_of_cb_target_2() { return &___cb_target_2; }
	inline void set_cb_target_2(RuntimeObject * value)
	{
		___cb_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___cb_target_2), value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t298858217, ___state_3)); }
	inline RuntimeObject * get_state_3() const { return ___state_3; }
	inline RuntimeObject ** get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(RuntimeObject * value)
	{
		___state_3 = value;
		Il2CppCodeGenWriteBarrier((&___state_3), value);
	}

	inline static int32_t get_offset_of_res_4() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t298858217, ___res_4)); }
	inline RuntimeObject * get_res_4() const { return ___res_4; }
	inline RuntimeObject ** get_address_of_res_4() { return &___res_4; }
	inline void set_res_4(RuntimeObject * value)
	{
		___res_4 = value;
		Il2CppCodeGenWriteBarrier((&___res_4), value);
	}

	inline static int32_t get_offset_of_out_args_5() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t298858217, ___out_args_5)); }
	inline RuntimeObject * get_out_args_5() const { return ___out_args_5; }
	inline RuntimeObject ** get_address_of_out_args_5() { return &___out_args_5; }
	inline void set_out_args_5(RuntimeObject * value)
	{
		___out_args_5 = value;
		Il2CppCodeGenWriteBarrier((&___out_args_5), value);
	}

	inline static int32_t get_offset_of_wait_event_6() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t298858217, ___wait_event_6)); }
	inline int64_t get_wait_event_6() const { return ___wait_event_6; }
	inline int64_t* get_address_of_wait_event_6() { return &___wait_event_6; }
	inline void set_wait_event_6(int64_t value)
	{
		___wait_event_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOASYNCCALL_T298858217_H
#ifndef LOADEROPTIMIZATION_T2737350648_H
#define LOADEROPTIMIZATION_T2737350648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LoaderOptimization
struct  LoaderOptimization_t2737350648 
{
public:
	// System.Int32 System.LoaderOptimization::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoaderOptimization_t2737350648, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADEROPTIMIZATION_T2737350648_H
#ifndef RUNTIMEMETHODHANDLE_T3094749374_H
#define RUNTIMEMETHODHANDLE_T3094749374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeMethodHandle
struct  RuntimeMethodHandle_t3094749374 
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t3094749374, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEMETHODHANDLE_T3094749374_H
#ifndef INVALIDOPERATIONEXCEPTION_T1874512906_H
#define INVALIDOPERATIONEXCEPTION_T1874512906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t1874512906  : public SystemException_t82066692
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T1874512906_H
#ifndef ARITHMETICEXCEPTION_T320423534_H
#define ARITHMETICEXCEPTION_T320423534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t320423534  : public SystemException_t82066692
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T320423534_H
#ifndef INVALIDCASTEXCEPTION_T1648559118_H
#define INVALIDCASTEXCEPTION_T1648559118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidCastException
struct  InvalidCastException_t1648559118  : public SystemException_t82066692
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCASTEXCEPTION_T1648559118_H
#ifndef INDEXOUTOFRANGEEXCEPTION_T2809213135_H
#define INDEXOUTOFRANGEEXCEPTION_T2809213135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_t2809213135  : public SystemException_t82066692
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_T2809213135_H
#ifndef CONFIDENCEFACTOR_T3875741302_H
#define CONFIDENCEFACTOR_T3875741302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t3875741302 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t3875741302, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIDENCEFACTOR_T3875741302_H
#ifndef FORMATEXCEPTION_T337572198_H
#define FORMATEXCEPTION_T337572198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t337572198  : public SystemException_t82066692
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T337572198_H
#ifndef EXECUTIONENGINEEXCEPTION_T274056588_H
#define EXECUTIONENGINEEXCEPTION_T274056588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ExecutionEngineException
struct  ExecutionEngineException_t274056588  : public SystemException_t82066692
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTIONENGINEEXCEPTION_T274056588_H
#ifndef BINDINGFLAGS_T2615901672_H
#define BINDINGFLAGS_T2615901672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2615901672 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2615901672, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2615901672_H
#ifndef MEMBERACCESSEXCEPTION_T2404015039_H
#define MEMBERACCESSEXCEPTION_T2404015039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MemberAccessException
struct  MemberAccessException_t2404015039  : public SystemException_t82066692
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERACCESSEXCEPTION_T2404015039_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1006692956_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1006692956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t1006692956  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU2456_t1543429825  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU2424_t770301086  ___U24U24fieldU2D1_1;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU2424_t770301086  ___U24U24fieldU2D2_2;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU2424_t770301086  ___U24U24fieldU2D3_3;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU2424_t770301086  ___U24U24fieldU2D4_4;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU2416_t70776454  ___U24U24fieldU2D5_5;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU2416_t70776454  ___U24U24fieldU2D6_6;
	// <PrivateImplementationDetails>/$ArrayType$3132 <PrivateImplementationDetails>::$$field-15
	U24ArrayTypeU243132_t2832538681  ___U24U24fieldU2D15_7;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-16
	U24ArrayTypeU2420_t3778103746  ___U24U24fieldU2D16_8;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-17
	U24ArrayTypeU2432_t3804456112  ___U24U24fieldU2D17_9;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-18
	U24ArrayTypeU2448_t1068404676  ___U24U24fieldU2D18_10;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-19
	U24ArrayTypeU2464_t2033706348  ___U24U24fieldU2D19_11;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-20
	U24ArrayTypeU2464_t2033706348  ___U24U24fieldU2D20_12;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-21
	U24ArrayTypeU2464_t2033706348  ___U24U24fieldU2D21_13;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-22
	U24ArrayTypeU2464_t2033706348  ___U24U24fieldU2D22_14;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-23
	U24ArrayTypeU2412_t2214411420  ___U24U24fieldU2D23_15;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-24
	U24ArrayTypeU2412_t2214411420  ___U24U24fieldU2D24_16;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-25
	U24ArrayTypeU2412_t2214411420  ___U24U24fieldU2D25_17;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-26
	U24ArrayTypeU2416_t70776454  ___U24U24fieldU2D26_18;
	// <PrivateImplementationDetails>/$ArrayType$136 <PrivateImplementationDetails>::$$field-27
	U24ArrayTypeU24136_t2045787120  ___U24U24fieldU2D27_19;
	// <PrivateImplementationDetails>/$ArrayType$72 <PrivateImplementationDetails>::$$field-30
	U24ArrayTypeU2472_t118347367  ___U24U24fieldU2D30_20;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-31
	U24ArrayTypeU248_t3549862496  ___U24U24fieldU2D31_21;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-32
	U24ArrayTypeU2420_t3778103746  ___U24U24fieldU2D32_22;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-33
	U24ArrayTypeU2464_t2033706348  ___U24U24fieldU2D33_23;
	// <PrivateImplementationDetails>/$ArrayType$124 <PrivateImplementationDetails>::$$field-34
	U24ArrayTypeU24124_t4214951589  ___U24U24fieldU2D34_24;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-35
	U24ArrayTypeU2432_t3804456112  ___U24U24fieldU2D35_25;
	// <PrivateImplementationDetails>/$ArrayType$96 <PrivateImplementationDetails>::$$field-36
	U24ArrayTypeU2496_t4000210986  ___U24U24fieldU2D36_26;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-37
	U24ArrayTypeU242048_t1147011002  ___U24U24fieldU2D37_27;
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-38
	U24ArrayTypeU2456_t1543429825  ___U24U24fieldU2D38_28;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-39
	U24ArrayTypeU2416_t70776454  ___U24U24fieldU2D39_29;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-40
	U24ArrayTypeU2448_t1068404676  ___U24U24fieldU2D40_30;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-41
	U24ArrayTypeU242048_t1147011002  ___U24U24fieldU2D41_31;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-42
	U24ArrayTypeU242048_t1147011002  ___U24U24fieldU2D42_32;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-43
	U24ArrayTypeU24256_t2510773725  ___U24U24fieldU2D43_33;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-44
	U24ArrayTypeU24256_t2510773725  ___U24U24fieldU2D44_34;
	// <PrivateImplementationDetails>/$ArrayType$120 <PrivateImplementationDetails>::$$field-45
	U24ArrayTypeU24120_t958999923  ___U24U24fieldU2D45_35;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-46
	U24ArrayTypeU24256_t2510773725  ___U24U24fieldU2D46_36;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-47
	U24ArrayTypeU24256_t2510773725  ___U24U24fieldU2D47_37;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-48
	U24ArrayTypeU241024_t2151015563  ___U24U24fieldU2D48_38;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-49
	U24ArrayTypeU241024_t2151015563  ___U24U24fieldU2D49_39;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-50
	U24ArrayTypeU241024_t2151015563  ___U24U24fieldU2D50_40;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-51
	U24ArrayTypeU241024_t2151015563  ___U24U24fieldU2D51_41;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-52
	U24ArrayTypeU241024_t2151015563  ___U24U24fieldU2D52_42;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-53
	U24ArrayTypeU241024_t2151015563  ___U24U24fieldU2D53_43;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-54
	U24ArrayTypeU241024_t2151015563  ___U24U24fieldU2D54_44;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-55
	U24ArrayTypeU241024_t2151015563  ___U24U24fieldU2D55_45;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-56
	U24ArrayTypeU24256_t2510773725  ___U24U24fieldU2D56_46;
	// <PrivateImplementationDetails>/$ArrayType$640 <PrivateImplementationDetails>::$$field-57
	U24ArrayTypeU24640_t3774379137  ___U24U24fieldU2D57_47;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-60
	U24ArrayTypeU2412_t2214411420  ___U24U24fieldU2D60_48;
	// <PrivateImplementationDetails>/$ArrayType$128 <PrivateImplementationDetails>::$$field-62
	U24ArrayTypeU24128_t2497070420  ___U24U24fieldU2D62_49;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-63
	U24ArrayTypeU24256_t2510773725  ___U24U24fieldU2D63_50;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-64
	U24ArrayTypeU2452_t2279902549  ___U24U24fieldU2D64_51;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-65
	U24ArrayTypeU2452_t2279902549  ___U24U24fieldU2D65_52;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU2456_t1543429825  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU2456_t1543429825 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU2456_t1543429825  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D1_1)); }
	inline U24ArrayTypeU2424_t770301086  get_U24U24fieldU2D1_1() const { return ___U24U24fieldU2D1_1; }
	inline U24ArrayTypeU2424_t770301086 * get_address_of_U24U24fieldU2D1_1() { return &___U24U24fieldU2D1_1; }
	inline void set_U24U24fieldU2D1_1(U24ArrayTypeU2424_t770301086  value)
	{
		___U24U24fieldU2D1_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D2_2)); }
	inline U24ArrayTypeU2424_t770301086  get_U24U24fieldU2D2_2() const { return ___U24U24fieldU2D2_2; }
	inline U24ArrayTypeU2424_t770301086 * get_address_of_U24U24fieldU2D2_2() { return &___U24U24fieldU2D2_2; }
	inline void set_U24U24fieldU2D2_2(U24ArrayTypeU2424_t770301086  value)
	{
		___U24U24fieldU2D2_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D3_3)); }
	inline U24ArrayTypeU2424_t770301086  get_U24U24fieldU2D3_3() const { return ___U24U24fieldU2D3_3; }
	inline U24ArrayTypeU2424_t770301086 * get_address_of_U24U24fieldU2D3_3() { return &___U24U24fieldU2D3_3; }
	inline void set_U24U24fieldU2D3_3(U24ArrayTypeU2424_t770301086  value)
	{
		___U24U24fieldU2D3_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D4_4)); }
	inline U24ArrayTypeU2424_t770301086  get_U24U24fieldU2D4_4() const { return ___U24U24fieldU2D4_4; }
	inline U24ArrayTypeU2424_t770301086 * get_address_of_U24U24fieldU2D4_4() { return &___U24U24fieldU2D4_4; }
	inline void set_U24U24fieldU2D4_4(U24ArrayTypeU2424_t770301086  value)
	{
		___U24U24fieldU2D4_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D5_5)); }
	inline U24ArrayTypeU2416_t70776454  get_U24U24fieldU2D5_5() const { return ___U24U24fieldU2D5_5; }
	inline U24ArrayTypeU2416_t70776454 * get_address_of_U24U24fieldU2D5_5() { return &___U24U24fieldU2D5_5; }
	inline void set_U24U24fieldU2D5_5(U24ArrayTypeU2416_t70776454  value)
	{
		___U24U24fieldU2D5_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D6_6)); }
	inline U24ArrayTypeU2416_t70776454  get_U24U24fieldU2D6_6() const { return ___U24U24fieldU2D6_6; }
	inline U24ArrayTypeU2416_t70776454 * get_address_of_U24U24fieldU2D6_6() { return &___U24U24fieldU2D6_6; }
	inline void set_U24U24fieldU2D6_6(U24ArrayTypeU2416_t70776454  value)
	{
		___U24U24fieldU2D6_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D15_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D15_7)); }
	inline U24ArrayTypeU243132_t2832538681  get_U24U24fieldU2D15_7() const { return ___U24U24fieldU2D15_7; }
	inline U24ArrayTypeU243132_t2832538681 * get_address_of_U24U24fieldU2D15_7() { return &___U24U24fieldU2D15_7; }
	inline void set_U24U24fieldU2D15_7(U24ArrayTypeU243132_t2832538681  value)
	{
		___U24U24fieldU2D15_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D16_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D16_8)); }
	inline U24ArrayTypeU2420_t3778103746  get_U24U24fieldU2D16_8() const { return ___U24U24fieldU2D16_8; }
	inline U24ArrayTypeU2420_t3778103746 * get_address_of_U24U24fieldU2D16_8() { return &___U24U24fieldU2D16_8; }
	inline void set_U24U24fieldU2D16_8(U24ArrayTypeU2420_t3778103746  value)
	{
		___U24U24fieldU2D16_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D17_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D17_9)); }
	inline U24ArrayTypeU2432_t3804456112  get_U24U24fieldU2D17_9() const { return ___U24U24fieldU2D17_9; }
	inline U24ArrayTypeU2432_t3804456112 * get_address_of_U24U24fieldU2D17_9() { return &___U24U24fieldU2D17_9; }
	inline void set_U24U24fieldU2D17_9(U24ArrayTypeU2432_t3804456112  value)
	{
		___U24U24fieldU2D17_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D18_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D18_10)); }
	inline U24ArrayTypeU2448_t1068404676  get_U24U24fieldU2D18_10() const { return ___U24U24fieldU2D18_10; }
	inline U24ArrayTypeU2448_t1068404676 * get_address_of_U24U24fieldU2D18_10() { return &___U24U24fieldU2D18_10; }
	inline void set_U24U24fieldU2D18_10(U24ArrayTypeU2448_t1068404676  value)
	{
		___U24U24fieldU2D18_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D19_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D19_11)); }
	inline U24ArrayTypeU2464_t2033706348  get_U24U24fieldU2D19_11() const { return ___U24U24fieldU2D19_11; }
	inline U24ArrayTypeU2464_t2033706348 * get_address_of_U24U24fieldU2D19_11() { return &___U24U24fieldU2D19_11; }
	inline void set_U24U24fieldU2D19_11(U24ArrayTypeU2464_t2033706348  value)
	{
		___U24U24fieldU2D19_11 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D20_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D20_12)); }
	inline U24ArrayTypeU2464_t2033706348  get_U24U24fieldU2D20_12() const { return ___U24U24fieldU2D20_12; }
	inline U24ArrayTypeU2464_t2033706348 * get_address_of_U24U24fieldU2D20_12() { return &___U24U24fieldU2D20_12; }
	inline void set_U24U24fieldU2D20_12(U24ArrayTypeU2464_t2033706348  value)
	{
		___U24U24fieldU2D20_12 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D21_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D21_13)); }
	inline U24ArrayTypeU2464_t2033706348  get_U24U24fieldU2D21_13() const { return ___U24U24fieldU2D21_13; }
	inline U24ArrayTypeU2464_t2033706348 * get_address_of_U24U24fieldU2D21_13() { return &___U24U24fieldU2D21_13; }
	inline void set_U24U24fieldU2D21_13(U24ArrayTypeU2464_t2033706348  value)
	{
		___U24U24fieldU2D21_13 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D22_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D22_14)); }
	inline U24ArrayTypeU2464_t2033706348  get_U24U24fieldU2D22_14() const { return ___U24U24fieldU2D22_14; }
	inline U24ArrayTypeU2464_t2033706348 * get_address_of_U24U24fieldU2D22_14() { return &___U24U24fieldU2D22_14; }
	inline void set_U24U24fieldU2D22_14(U24ArrayTypeU2464_t2033706348  value)
	{
		___U24U24fieldU2D22_14 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D23_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D23_15)); }
	inline U24ArrayTypeU2412_t2214411420  get_U24U24fieldU2D23_15() const { return ___U24U24fieldU2D23_15; }
	inline U24ArrayTypeU2412_t2214411420 * get_address_of_U24U24fieldU2D23_15() { return &___U24U24fieldU2D23_15; }
	inline void set_U24U24fieldU2D23_15(U24ArrayTypeU2412_t2214411420  value)
	{
		___U24U24fieldU2D23_15 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D24_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D24_16)); }
	inline U24ArrayTypeU2412_t2214411420  get_U24U24fieldU2D24_16() const { return ___U24U24fieldU2D24_16; }
	inline U24ArrayTypeU2412_t2214411420 * get_address_of_U24U24fieldU2D24_16() { return &___U24U24fieldU2D24_16; }
	inline void set_U24U24fieldU2D24_16(U24ArrayTypeU2412_t2214411420  value)
	{
		___U24U24fieldU2D24_16 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D25_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D25_17)); }
	inline U24ArrayTypeU2412_t2214411420  get_U24U24fieldU2D25_17() const { return ___U24U24fieldU2D25_17; }
	inline U24ArrayTypeU2412_t2214411420 * get_address_of_U24U24fieldU2D25_17() { return &___U24U24fieldU2D25_17; }
	inline void set_U24U24fieldU2D25_17(U24ArrayTypeU2412_t2214411420  value)
	{
		___U24U24fieldU2D25_17 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D26_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D26_18)); }
	inline U24ArrayTypeU2416_t70776454  get_U24U24fieldU2D26_18() const { return ___U24U24fieldU2D26_18; }
	inline U24ArrayTypeU2416_t70776454 * get_address_of_U24U24fieldU2D26_18() { return &___U24U24fieldU2D26_18; }
	inline void set_U24U24fieldU2D26_18(U24ArrayTypeU2416_t70776454  value)
	{
		___U24U24fieldU2D26_18 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D27_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D27_19)); }
	inline U24ArrayTypeU24136_t2045787120  get_U24U24fieldU2D27_19() const { return ___U24U24fieldU2D27_19; }
	inline U24ArrayTypeU24136_t2045787120 * get_address_of_U24U24fieldU2D27_19() { return &___U24U24fieldU2D27_19; }
	inline void set_U24U24fieldU2D27_19(U24ArrayTypeU24136_t2045787120  value)
	{
		___U24U24fieldU2D27_19 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D30_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D30_20)); }
	inline U24ArrayTypeU2472_t118347367  get_U24U24fieldU2D30_20() const { return ___U24U24fieldU2D30_20; }
	inline U24ArrayTypeU2472_t118347367 * get_address_of_U24U24fieldU2D30_20() { return &___U24U24fieldU2D30_20; }
	inline void set_U24U24fieldU2D30_20(U24ArrayTypeU2472_t118347367  value)
	{
		___U24U24fieldU2D30_20 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D31_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D31_21)); }
	inline U24ArrayTypeU248_t3549862496  get_U24U24fieldU2D31_21() const { return ___U24U24fieldU2D31_21; }
	inline U24ArrayTypeU248_t3549862496 * get_address_of_U24U24fieldU2D31_21() { return &___U24U24fieldU2D31_21; }
	inline void set_U24U24fieldU2D31_21(U24ArrayTypeU248_t3549862496  value)
	{
		___U24U24fieldU2D31_21 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D32_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D32_22)); }
	inline U24ArrayTypeU2420_t3778103746  get_U24U24fieldU2D32_22() const { return ___U24U24fieldU2D32_22; }
	inline U24ArrayTypeU2420_t3778103746 * get_address_of_U24U24fieldU2D32_22() { return &___U24U24fieldU2D32_22; }
	inline void set_U24U24fieldU2D32_22(U24ArrayTypeU2420_t3778103746  value)
	{
		___U24U24fieldU2D32_22 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D33_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D33_23)); }
	inline U24ArrayTypeU2464_t2033706348  get_U24U24fieldU2D33_23() const { return ___U24U24fieldU2D33_23; }
	inline U24ArrayTypeU2464_t2033706348 * get_address_of_U24U24fieldU2D33_23() { return &___U24U24fieldU2D33_23; }
	inline void set_U24U24fieldU2D33_23(U24ArrayTypeU2464_t2033706348  value)
	{
		___U24U24fieldU2D33_23 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D34_24() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D34_24)); }
	inline U24ArrayTypeU24124_t4214951589  get_U24U24fieldU2D34_24() const { return ___U24U24fieldU2D34_24; }
	inline U24ArrayTypeU24124_t4214951589 * get_address_of_U24U24fieldU2D34_24() { return &___U24U24fieldU2D34_24; }
	inline void set_U24U24fieldU2D34_24(U24ArrayTypeU24124_t4214951589  value)
	{
		___U24U24fieldU2D34_24 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D35_25() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D35_25)); }
	inline U24ArrayTypeU2432_t3804456112  get_U24U24fieldU2D35_25() const { return ___U24U24fieldU2D35_25; }
	inline U24ArrayTypeU2432_t3804456112 * get_address_of_U24U24fieldU2D35_25() { return &___U24U24fieldU2D35_25; }
	inline void set_U24U24fieldU2D35_25(U24ArrayTypeU2432_t3804456112  value)
	{
		___U24U24fieldU2D35_25 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D36_26() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D36_26)); }
	inline U24ArrayTypeU2496_t4000210986  get_U24U24fieldU2D36_26() const { return ___U24U24fieldU2D36_26; }
	inline U24ArrayTypeU2496_t4000210986 * get_address_of_U24U24fieldU2D36_26() { return &___U24U24fieldU2D36_26; }
	inline void set_U24U24fieldU2D36_26(U24ArrayTypeU2496_t4000210986  value)
	{
		___U24U24fieldU2D36_26 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D37_27() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D37_27)); }
	inline U24ArrayTypeU242048_t1147011002  get_U24U24fieldU2D37_27() const { return ___U24U24fieldU2D37_27; }
	inline U24ArrayTypeU242048_t1147011002 * get_address_of_U24U24fieldU2D37_27() { return &___U24U24fieldU2D37_27; }
	inline void set_U24U24fieldU2D37_27(U24ArrayTypeU242048_t1147011002  value)
	{
		___U24U24fieldU2D37_27 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D38_28() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D38_28)); }
	inline U24ArrayTypeU2456_t1543429825  get_U24U24fieldU2D38_28() const { return ___U24U24fieldU2D38_28; }
	inline U24ArrayTypeU2456_t1543429825 * get_address_of_U24U24fieldU2D38_28() { return &___U24U24fieldU2D38_28; }
	inline void set_U24U24fieldU2D38_28(U24ArrayTypeU2456_t1543429825  value)
	{
		___U24U24fieldU2D38_28 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D39_29() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D39_29)); }
	inline U24ArrayTypeU2416_t70776454  get_U24U24fieldU2D39_29() const { return ___U24U24fieldU2D39_29; }
	inline U24ArrayTypeU2416_t70776454 * get_address_of_U24U24fieldU2D39_29() { return &___U24U24fieldU2D39_29; }
	inline void set_U24U24fieldU2D39_29(U24ArrayTypeU2416_t70776454  value)
	{
		___U24U24fieldU2D39_29 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D40_30() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D40_30)); }
	inline U24ArrayTypeU2448_t1068404676  get_U24U24fieldU2D40_30() const { return ___U24U24fieldU2D40_30; }
	inline U24ArrayTypeU2448_t1068404676 * get_address_of_U24U24fieldU2D40_30() { return &___U24U24fieldU2D40_30; }
	inline void set_U24U24fieldU2D40_30(U24ArrayTypeU2448_t1068404676  value)
	{
		___U24U24fieldU2D40_30 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D41_31() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D41_31)); }
	inline U24ArrayTypeU242048_t1147011002  get_U24U24fieldU2D41_31() const { return ___U24U24fieldU2D41_31; }
	inline U24ArrayTypeU242048_t1147011002 * get_address_of_U24U24fieldU2D41_31() { return &___U24U24fieldU2D41_31; }
	inline void set_U24U24fieldU2D41_31(U24ArrayTypeU242048_t1147011002  value)
	{
		___U24U24fieldU2D41_31 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D42_32() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D42_32)); }
	inline U24ArrayTypeU242048_t1147011002  get_U24U24fieldU2D42_32() const { return ___U24U24fieldU2D42_32; }
	inline U24ArrayTypeU242048_t1147011002 * get_address_of_U24U24fieldU2D42_32() { return &___U24U24fieldU2D42_32; }
	inline void set_U24U24fieldU2D42_32(U24ArrayTypeU242048_t1147011002  value)
	{
		___U24U24fieldU2D42_32 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D43_33() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D43_33)); }
	inline U24ArrayTypeU24256_t2510773725  get_U24U24fieldU2D43_33() const { return ___U24U24fieldU2D43_33; }
	inline U24ArrayTypeU24256_t2510773725 * get_address_of_U24U24fieldU2D43_33() { return &___U24U24fieldU2D43_33; }
	inline void set_U24U24fieldU2D43_33(U24ArrayTypeU24256_t2510773725  value)
	{
		___U24U24fieldU2D43_33 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D44_34() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D44_34)); }
	inline U24ArrayTypeU24256_t2510773725  get_U24U24fieldU2D44_34() const { return ___U24U24fieldU2D44_34; }
	inline U24ArrayTypeU24256_t2510773725 * get_address_of_U24U24fieldU2D44_34() { return &___U24U24fieldU2D44_34; }
	inline void set_U24U24fieldU2D44_34(U24ArrayTypeU24256_t2510773725  value)
	{
		___U24U24fieldU2D44_34 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D45_35() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D45_35)); }
	inline U24ArrayTypeU24120_t958999923  get_U24U24fieldU2D45_35() const { return ___U24U24fieldU2D45_35; }
	inline U24ArrayTypeU24120_t958999923 * get_address_of_U24U24fieldU2D45_35() { return &___U24U24fieldU2D45_35; }
	inline void set_U24U24fieldU2D45_35(U24ArrayTypeU24120_t958999923  value)
	{
		___U24U24fieldU2D45_35 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D46_36() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D46_36)); }
	inline U24ArrayTypeU24256_t2510773725  get_U24U24fieldU2D46_36() const { return ___U24U24fieldU2D46_36; }
	inline U24ArrayTypeU24256_t2510773725 * get_address_of_U24U24fieldU2D46_36() { return &___U24U24fieldU2D46_36; }
	inline void set_U24U24fieldU2D46_36(U24ArrayTypeU24256_t2510773725  value)
	{
		___U24U24fieldU2D46_36 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D47_37() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D47_37)); }
	inline U24ArrayTypeU24256_t2510773725  get_U24U24fieldU2D47_37() const { return ___U24U24fieldU2D47_37; }
	inline U24ArrayTypeU24256_t2510773725 * get_address_of_U24U24fieldU2D47_37() { return &___U24U24fieldU2D47_37; }
	inline void set_U24U24fieldU2D47_37(U24ArrayTypeU24256_t2510773725  value)
	{
		___U24U24fieldU2D47_37 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D48_38() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D48_38)); }
	inline U24ArrayTypeU241024_t2151015563  get_U24U24fieldU2D48_38() const { return ___U24U24fieldU2D48_38; }
	inline U24ArrayTypeU241024_t2151015563 * get_address_of_U24U24fieldU2D48_38() { return &___U24U24fieldU2D48_38; }
	inline void set_U24U24fieldU2D48_38(U24ArrayTypeU241024_t2151015563  value)
	{
		___U24U24fieldU2D48_38 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D49_39() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D49_39)); }
	inline U24ArrayTypeU241024_t2151015563  get_U24U24fieldU2D49_39() const { return ___U24U24fieldU2D49_39; }
	inline U24ArrayTypeU241024_t2151015563 * get_address_of_U24U24fieldU2D49_39() { return &___U24U24fieldU2D49_39; }
	inline void set_U24U24fieldU2D49_39(U24ArrayTypeU241024_t2151015563  value)
	{
		___U24U24fieldU2D49_39 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D50_40() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D50_40)); }
	inline U24ArrayTypeU241024_t2151015563  get_U24U24fieldU2D50_40() const { return ___U24U24fieldU2D50_40; }
	inline U24ArrayTypeU241024_t2151015563 * get_address_of_U24U24fieldU2D50_40() { return &___U24U24fieldU2D50_40; }
	inline void set_U24U24fieldU2D50_40(U24ArrayTypeU241024_t2151015563  value)
	{
		___U24U24fieldU2D50_40 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D51_41() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D51_41)); }
	inline U24ArrayTypeU241024_t2151015563  get_U24U24fieldU2D51_41() const { return ___U24U24fieldU2D51_41; }
	inline U24ArrayTypeU241024_t2151015563 * get_address_of_U24U24fieldU2D51_41() { return &___U24U24fieldU2D51_41; }
	inline void set_U24U24fieldU2D51_41(U24ArrayTypeU241024_t2151015563  value)
	{
		___U24U24fieldU2D51_41 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D52_42() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D52_42)); }
	inline U24ArrayTypeU241024_t2151015563  get_U24U24fieldU2D52_42() const { return ___U24U24fieldU2D52_42; }
	inline U24ArrayTypeU241024_t2151015563 * get_address_of_U24U24fieldU2D52_42() { return &___U24U24fieldU2D52_42; }
	inline void set_U24U24fieldU2D52_42(U24ArrayTypeU241024_t2151015563  value)
	{
		___U24U24fieldU2D52_42 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D53_43() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D53_43)); }
	inline U24ArrayTypeU241024_t2151015563  get_U24U24fieldU2D53_43() const { return ___U24U24fieldU2D53_43; }
	inline U24ArrayTypeU241024_t2151015563 * get_address_of_U24U24fieldU2D53_43() { return &___U24U24fieldU2D53_43; }
	inline void set_U24U24fieldU2D53_43(U24ArrayTypeU241024_t2151015563  value)
	{
		___U24U24fieldU2D53_43 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D54_44() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D54_44)); }
	inline U24ArrayTypeU241024_t2151015563  get_U24U24fieldU2D54_44() const { return ___U24U24fieldU2D54_44; }
	inline U24ArrayTypeU241024_t2151015563 * get_address_of_U24U24fieldU2D54_44() { return &___U24U24fieldU2D54_44; }
	inline void set_U24U24fieldU2D54_44(U24ArrayTypeU241024_t2151015563  value)
	{
		___U24U24fieldU2D54_44 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D55_45() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D55_45)); }
	inline U24ArrayTypeU241024_t2151015563  get_U24U24fieldU2D55_45() const { return ___U24U24fieldU2D55_45; }
	inline U24ArrayTypeU241024_t2151015563 * get_address_of_U24U24fieldU2D55_45() { return &___U24U24fieldU2D55_45; }
	inline void set_U24U24fieldU2D55_45(U24ArrayTypeU241024_t2151015563  value)
	{
		___U24U24fieldU2D55_45 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D56_46() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D56_46)); }
	inline U24ArrayTypeU24256_t2510773725  get_U24U24fieldU2D56_46() const { return ___U24U24fieldU2D56_46; }
	inline U24ArrayTypeU24256_t2510773725 * get_address_of_U24U24fieldU2D56_46() { return &___U24U24fieldU2D56_46; }
	inline void set_U24U24fieldU2D56_46(U24ArrayTypeU24256_t2510773725  value)
	{
		___U24U24fieldU2D56_46 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D57_47() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D57_47)); }
	inline U24ArrayTypeU24640_t3774379137  get_U24U24fieldU2D57_47() const { return ___U24U24fieldU2D57_47; }
	inline U24ArrayTypeU24640_t3774379137 * get_address_of_U24U24fieldU2D57_47() { return &___U24U24fieldU2D57_47; }
	inline void set_U24U24fieldU2D57_47(U24ArrayTypeU24640_t3774379137  value)
	{
		___U24U24fieldU2D57_47 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D60_48() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D60_48)); }
	inline U24ArrayTypeU2412_t2214411420  get_U24U24fieldU2D60_48() const { return ___U24U24fieldU2D60_48; }
	inline U24ArrayTypeU2412_t2214411420 * get_address_of_U24U24fieldU2D60_48() { return &___U24U24fieldU2D60_48; }
	inline void set_U24U24fieldU2D60_48(U24ArrayTypeU2412_t2214411420  value)
	{
		___U24U24fieldU2D60_48 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D62_49() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D62_49)); }
	inline U24ArrayTypeU24128_t2497070420  get_U24U24fieldU2D62_49() const { return ___U24U24fieldU2D62_49; }
	inline U24ArrayTypeU24128_t2497070420 * get_address_of_U24U24fieldU2D62_49() { return &___U24U24fieldU2D62_49; }
	inline void set_U24U24fieldU2D62_49(U24ArrayTypeU24128_t2497070420  value)
	{
		___U24U24fieldU2D62_49 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D63_50() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D63_50)); }
	inline U24ArrayTypeU24256_t2510773725  get_U24U24fieldU2D63_50() const { return ___U24U24fieldU2D63_50; }
	inline U24ArrayTypeU24256_t2510773725 * get_address_of_U24U24fieldU2D63_50() { return &___U24U24fieldU2D63_50; }
	inline void set_U24U24fieldU2D63_50(U24ArrayTypeU24256_t2510773725  value)
	{
		___U24U24fieldU2D63_50 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D64_51() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D64_51)); }
	inline U24ArrayTypeU2452_t2279902549  get_U24U24fieldU2D64_51() const { return ___U24U24fieldU2D64_51; }
	inline U24ArrayTypeU2452_t2279902549 * get_address_of_U24U24fieldU2D64_51() { return &___U24U24fieldU2D64_51; }
	inline void set_U24U24fieldU2D64_51(U24ArrayTypeU2452_t2279902549  value)
	{
		___U24U24fieldU2D64_51 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D65_52() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields, ___U24U24fieldU2D65_52)); }
	inline U24ArrayTypeU2452_t2279902549  get_U24U24fieldU2D65_52() const { return ___U24U24fieldU2D65_52; }
	inline U24ArrayTypeU2452_t2279902549 * get_address_of_U24U24fieldU2D65_52() { return &___U24U24fieldU2D65_52; }
	inline void set_U24U24fieldU2D65_52(U24ArrayTypeU2452_t2279902549  value)
	{
		___U24U24fieldU2D65_52 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1006692956_H
#ifndef PLATFORMID_T4249670298_H
#define PLATFORMID_T4249670298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformID
struct  PlatformID_t4249670298 
{
public:
	// System.Int32 System.PlatformID::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlatformID_t4249670298, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMID_T4249670298_H
#ifndef DELEGATE_T1354372097_H
#define DELEGATE_T1354372097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1354372097  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t2091040235 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1354372097, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1354372097, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1354372097, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1354372097, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1354372097, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1354372097, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1354372097, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1354372097, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1354372097, ___data_8)); }
	inline DelegateData_t2091040235 * get_data_8() const { return ___data_8; }
	inline DelegateData_t2091040235 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t2091040235 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1354372097_H
#ifndef WEAKREFERENCE_T4204601341_H
#define WEAKREFERENCE_T4204601341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t4204601341  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t3183665968  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t4204601341, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t4204601341, ___gcHandle_1)); }
	inline GCHandle_t3183665968  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t3183665968 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t3183665968  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T4204601341_H
#ifndef STACKOVERFLOWEXCEPTION_T3006178200_H
#define STACKOVERFLOWEXCEPTION_T3006178200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StackOverflowException
struct  StackOverflowException_t3006178200  : public SystemException_t82066692
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKOVERFLOWEXCEPTION_T3006178200_H
#ifndef UNITYTYPE_T466071028_H
#define UNITYTYPE_T466071028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder/UnityType
struct  UnityType_t466071028 
{
public:
	// System.Byte System.UnitySerializationHolder/UnityType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityType_t466071028, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYTYPE_T466071028_H
#ifndef RUNTIMETYPEHANDLE_T4105852237_H
#define RUNTIMETYPEHANDLE_T4105852237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t4105852237 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t4105852237, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T4105852237_H
#ifndef TYPELOADEXCEPTION_T3383640194_H
#define TYPELOADEXCEPTION_T3383640194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t3383640194  : public SystemException_t82066692
{
public:
	// System.String System.TypeLoadException::className
	String_t* ___className_12;
	// System.String System.TypeLoadException::assemblyName
	String_t* ___assemblyName_13;

public:
	inline static int32_t get_offset_of_className_12() { return static_cast<int32_t>(offsetof(TypeLoadException_t3383640194, ___className_12)); }
	inline String_t* get_className_12() const { return ___className_12; }
	inline String_t** get_address_of_className_12() { return &___className_12; }
	inline void set_className_12(String_t* value)
	{
		___className_12 = value;
		Il2CppCodeGenWriteBarrier((&___className_12), value);
	}

	inline static int32_t get_offset_of_assemblyName_13() { return static_cast<int32_t>(offsetof(TypeLoadException_t3383640194, ___assemblyName_13)); }
	inline String_t* get_assemblyName_13() const { return ___assemblyName_13; }
	inline String_t** get_address_of_assemblyName_13() { return &___assemblyName_13; }
	inline void set_assemblyName_13(String_t* value)
	{
		___assemblyName_13 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T3383640194_H
#ifndef UNAUTHORIZEDACCESSEXCEPTION_T1825374429_H
#define UNAUTHORIZEDACCESSEXCEPTION_T1825374429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_t1825374429  : public SystemException_t82066692
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNAUTHORIZEDACCESSEXCEPTION_T1825374429_H
#ifndef TYPECODE_T159724530_H
#define TYPECODE_T159724530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t159724530 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeCode_t159724530, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECODE_T159724530_H
#ifndef CURRENTSYSTEMTIMEZONE_T1783896134_H
#define CURRENTSYSTEMTIMEZONE_T1783896134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CurrentSystemTimeZone
struct  CurrentSystemTimeZone_t1783896134  : public TimeZone_t3385619321
{
public:
	// System.String System.CurrentSystemTimeZone::m_standardName
	String_t* ___m_standardName_3;
	// System.String System.CurrentSystemTimeZone::m_daylightName
	String_t* ___m_daylightName_4;
	// System.Collections.Hashtable System.CurrentSystemTimeZone::m_CachedDaylightChanges
	Hashtable_t1456928900 * ___m_CachedDaylightChanges_5;
	// System.Int64 System.CurrentSystemTimeZone::m_ticksOffset
	int64_t ___m_ticksOffset_6;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithOutDLS
	TimeSpan_t3567112609  ___utcOffsetWithOutDLS_7;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithDLS
	TimeSpan_t3567112609  ___utcOffsetWithDLS_8;

public:
	inline static int32_t get_offset_of_m_standardName_3() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1783896134, ___m_standardName_3)); }
	inline String_t* get_m_standardName_3() const { return ___m_standardName_3; }
	inline String_t** get_address_of_m_standardName_3() { return &___m_standardName_3; }
	inline void set_m_standardName_3(String_t* value)
	{
		___m_standardName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_standardName_3), value);
	}

	inline static int32_t get_offset_of_m_daylightName_4() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1783896134, ___m_daylightName_4)); }
	inline String_t* get_m_daylightName_4() const { return ___m_daylightName_4; }
	inline String_t** get_address_of_m_daylightName_4() { return &___m_daylightName_4; }
	inline void set_m_daylightName_4(String_t* value)
	{
		___m_daylightName_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_daylightName_4), value);
	}

	inline static int32_t get_offset_of_m_CachedDaylightChanges_5() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1783896134, ___m_CachedDaylightChanges_5)); }
	inline Hashtable_t1456928900 * get_m_CachedDaylightChanges_5() const { return ___m_CachedDaylightChanges_5; }
	inline Hashtable_t1456928900 ** get_address_of_m_CachedDaylightChanges_5() { return &___m_CachedDaylightChanges_5; }
	inline void set_m_CachedDaylightChanges_5(Hashtable_t1456928900 * value)
	{
		___m_CachedDaylightChanges_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedDaylightChanges_5), value);
	}

	inline static int32_t get_offset_of_m_ticksOffset_6() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1783896134, ___m_ticksOffset_6)); }
	inline int64_t get_m_ticksOffset_6() const { return ___m_ticksOffset_6; }
	inline int64_t* get_address_of_m_ticksOffset_6() { return &___m_ticksOffset_6; }
	inline void set_m_ticksOffset_6(int64_t value)
	{
		___m_ticksOffset_6 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithOutDLS_7() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1783896134, ___utcOffsetWithOutDLS_7)); }
	inline TimeSpan_t3567112609  get_utcOffsetWithOutDLS_7() const { return ___utcOffsetWithOutDLS_7; }
	inline TimeSpan_t3567112609 * get_address_of_utcOffsetWithOutDLS_7() { return &___utcOffsetWithOutDLS_7; }
	inline void set_utcOffsetWithOutDLS_7(TimeSpan_t3567112609  value)
	{
		___utcOffsetWithOutDLS_7 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithDLS_8() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1783896134, ___utcOffsetWithDLS_8)); }
	inline TimeSpan_t3567112609  get_utcOffsetWithDLS_8() const { return ___utcOffsetWithDLS_8; }
	inline TimeSpan_t3567112609 * get_address_of_utcOffsetWithDLS_8() { return &___utcOffsetWithDLS_8; }
	inline void set_utcOffsetWithDLS_8(TimeSpan_t3567112609  value)
	{
		___utcOffsetWithDLS_8 = value;
	}
};

struct CurrentSystemTimeZone_t1783896134_StaticFields
{
public:
	// System.Int32 System.CurrentSystemTimeZone::this_year
	int32_t ___this_year_9;
	// System.Globalization.DaylightTime System.CurrentSystemTimeZone::this_year_dlt
	DaylightTime_t2037047829 * ___this_year_dlt_10;

public:
	inline static int32_t get_offset_of_this_year_9() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1783896134_StaticFields, ___this_year_9)); }
	inline int32_t get_this_year_9() const { return ___this_year_9; }
	inline int32_t* get_address_of_this_year_9() { return &___this_year_9; }
	inline void set_this_year_9(int32_t value)
	{
		___this_year_9 = value;
	}

	inline static int32_t get_offset_of_this_year_dlt_10() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1783896134_StaticFields, ___this_year_dlt_10)); }
	inline DaylightTime_t2037047829 * get_this_year_dlt_10() const { return ___this_year_dlt_10; }
	inline DaylightTime_t2037047829 ** get_address_of_this_year_dlt_10() { return &___this_year_dlt_10; }
	inline void set_this_year_dlt_10(DaylightTime_t2037047829 * value)
	{
		___this_year_dlt_10 = value;
		Il2CppCodeGenWriteBarrier((&___this_year_dlt_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURRENTSYSTEMTIMEZONE_T1783896134_H
#ifndef TYPEINITIALIZATIONEXCEPTION_T1699631790_H
#define TYPEINITIALIZATIONEXCEPTION_T1699631790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeInitializationException
struct  TypeInitializationException_t1699631790  : public SystemException_t82066692
{
public:
	// System.String System.TypeInitializationException::type_name
	String_t* ___type_name_11;

public:
	inline static int32_t get_offset_of_type_name_11() { return static_cast<int32_t>(offsetof(TypeInitializationException_t1699631790, ___type_name_11)); }
	inline String_t* get_type_name_11() const { return ___type_name_11; }
	inline String_t** get_address_of_type_name_11() { return &___type_name_11; }
	inline void set_type_name_11(String_t* value)
	{
		___type_name_11 = value;
		Il2CppCodeGenWriteBarrier((&___type_name_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINITIALIZATIONEXCEPTION_T1699631790_H
#ifndef OPERATINGSYSTEM_T3826181801_H
#define OPERATINGSYSTEM_T3826181801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OperatingSystem
struct  OperatingSystem_t3826181801  : public RuntimeObject
{
public:
	// System.PlatformID System.OperatingSystem::_platform
	int32_t ____platform_0;
	// System.Version System.OperatingSystem::_version
	Version_t75757620 * ____version_1;
	// System.String System.OperatingSystem::_servicePack
	String_t* ____servicePack_2;

public:
	inline static int32_t get_offset_of__platform_0() { return static_cast<int32_t>(offsetof(OperatingSystem_t3826181801, ____platform_0)); }
	inline int32_t get__platform_0() const { return ____platform_0; }
	inline int32_t* get_address_of__platform_0() { return &____platform_0; }
	inline void set__platform_0(int32_t value)
	{
		____platform_0 = value;
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(OperatingSystem_t3826181801, ____version_1)); }
	inline Version_t75757620 * get__version_1() const { return ____version_1; }
	inline Version_t75757620 ** get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(Version_t75757620 * value)
	{
		____version_1 = value;
		Il2CppCodeGenWriteBarrier((&____version_1), value);
	}

	inline static int32_t get_offset_of__servicePack_2() { return static_cast<int32_t>(offsetof(OperatingSystem_t3826181801, ____servicePack_2)); }
	inline String_t* get__servicePack_2() const { return ____servicePack_2; }
	inline String_t** get_address_of__servicePack_2() { return &____servicePack_2; }
	inline void set__servicePack_2(String_t* value)
	{
		____servicePack_2 = value;
		Il2CppCodeGenWriteBarrier((&____servicePack_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATINGSYSTEM_T3826181801_H
#ifndef OBJECTDISPOSEDEXCEPTION_T796800015_H
#define OBJECTDISPOSEDEXCEPTION_T796800015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObjectDisposedException
struct  ObjectDisposedException_t796800015  : public InvalidOperationException_t1874512906
{
public:
	// System.String System.ObjectDisposedException::obj_name
	String_t* ___obj_name_12;
	// System.String System.ObjectDisposedException::msg
	String_t* ___msg_13;

public:
	inline static int32_t get_offset_of_obj_name_12() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t796800015, ___obj_name_12)); }
	inline String_t* get_obj_name_12() const { return ___obj_name_12; }
	inline String_t** get_address_of_obj_name_12() { return &___obj_name_12; }
	inline void set_obj_name_12(String_t* value)
	{
		___obj_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___obj_name_12), value);
	}

	inline static int32_t get_offset_of_msg_13() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t796800015, ___msg_13)); }
	inline String_t* get_msg_13() const { return ___msg_13; }
	inline String_t** get_address_of_msg_13() { return &___msg_13; }
	inline void set_msg_13(String_t* value)
	{
		___msg_13 = value;
		Il2CppCodeGenWriteBarrier((&___msg_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTDISPOSEDEXCEPTION_T796800015_H
#ifndef OVERFLOWEXCEPTION_T2070242466_H
#define OVERFLOWEXCEPTION_T2070242466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OverflowException
struct  OverflowException_t2070242466  : public ArithmeticException_t320423534
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERFLOWEXCEPTION_T2070242466_H
#ifndef METHODACCESSEXCEPTION_T3740856359_H
#define METHODACCESSEXCEPTION_T3740856359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MethodAccessException
struct  MethodAccessException_t3740856359  : public MemberAccessException_t2404015039
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODACCESSEXCEPTION_T3740856359_H
#ifndef FIELDACCESSEXCEPTION_T4193541070_H
#define FIELDACCESSEXCEPTION_T4193541070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FieldAccessException
struct  FieldAccessException_t4193541070  : public MemberAccessException_t2404015039
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDACCESSEXCEPTION_T4193541070_H
#ifndef MULTICASTDELEGATE_T3490129055_H
#define MULTICASTDELEGATE_T3490129055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t3490129055  : public Delegate_t1354372097
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t3490129055 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t3490129055 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3490129055, ___prev_9)); }
	inline MulticastDelegate_t3490129055 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t3490129055 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t3490129055 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3490129055, ___kpm_next_10)); }
	inline MulticastDelegate_t3490129055 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t3490129055 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t3490129055 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T3490129055_H
#ifndef UNITYSERIALIZATIONHOLDER_T268650221_H
#define UNITYSERIALIZATIONHOLDER_T268650221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder
struct  UnitySerializationHolder_t268650221  : public RuntimeObject
{
public:
	// System.String System.UnitySerializationHolder::_data
	String_t* ____data_0;
	// System.UnitySerializationHolder/UnityType System.UnitySerializationHolder::_unityType
	uint8_t ____unityType_1;
	// System.String System.UnitySerializationHolder::_assemblyName
	String_t* ____assemblyName_2;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t268650221, ____data_0)); }
	inline String_t* get__data_0() const { return ____data_0; }
	inline String_t** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(String_t* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}

	inline static int32_t get_offset_of__unityType_1() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t268650221, ____unityType_1)); }
	inline uint8_t get__unityType_1() const { return ____unityType_1; }
	inline uint8_t* get_address_of__unityType_1() { return &____unityType_1; }
	inline void set__unityType_1(uint8_t value)
	{
		____unityType_1 = value;
	}

	inline static int32_t get_offset_of__assemblyName_2() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t268650221, ____assemblyName_2)); }
	inline String_t* get__assemblyName_2() const { return ____assemblyName_2; }
	inline String_t** get_address_of__assemblyName_2() { return &____assemblyName_2; }
	inline void set__assemblyName_2(String_t* value)
	{
		____assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSERIALIZATIONHOLDER_T268650221_H
#ifndef PLATFORMNOTSUPPORTEDEXCEPTION_T4062442988_H
#define PLATFORMNOTSUPPORTEDEXCEPTION_T4062442988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformNotSupportedException
struct  PlatformNotSupportedException_t4062442988  : public NotSupportedException_t3838488019
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMNOTSUPPORTEDEXCEPTION_T4062442988_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t4105852237  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t4105852237  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t4105852237 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t4105852237  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t2362283017* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t1969215007 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t1969215007 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t1969215007 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t2362283017* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t2362283017** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t2362283017* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t1969215007 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t1969215007 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t1969215007 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t1969215007 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t1969215007 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t1969215007 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t1969215007 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t1969215007 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t1969215007 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef MISSINGMEMBEREXCEPTION_T197906361_H
#define MISSINGMEMBEREXCEPTION_T197906361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMemberException
struct  MissingMemberException_t197906361  : public MemberAccessException_t2404015039
{
public:
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_11;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_12;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_t1390853353* ___Signature_13;

public:
	inline static int32_t get_offset_of_ClassName_11() { return static_cast<int32_t>(offsetof(MissingMemberException_t197906361, ___ClassName_11)); }
	inline String_t* get_ClassName_11() const { return ___ClassName_11; }
	inline String_t** get_address_of_ClassName_11() { return &___ClassName_11; }
	inline void set_ClassName_11(String_t* value)
	{
		___ClassName_11 = value;
		Il2CppCodeGenWriteBarrier((&___ClassName_11), value);
	}

	inline static int32_t get_offset_of_MemberName_12() { return static_cast<int32_t>(offsetof(MissingMemberException_t197906361, ___MemberName_12)); }
	inline String_t* get_MemberName_12() const { return ___MemberName_12; }
	inline String_t** get_address_of_MemberName_12() { return &___MemberName_12; }
	inline void set_MemberName_12(String_t* value)
	{
		___MemberName_12 = value;
		Il2CppCodeGenWriteBarrier((&___MemberName_12), value);
	}

	inline static int32_t get_offset_of_Signature_13() { return static_cast<int32_t>(offsetof(MissingMemberException_t197906361, ___Signature_13)); }
	inline ByteU5BU5D_t1390853353* get_Signature_13() const { return ___Signature_13; }
	inline ByteU5BU5D_t1390853353** get_address_of_Signature_13() { return &___Signature_13; }
	inline void set_Signature_13(ByteU5BU5D_t1390853353* value)
	{
		___Signature_13 = value;
		Il2CppCodeGenWriteBarrier((&___Signature_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMEMBEREXCEPTION_T197906361_H
#ifndef PRIMALITYTEST_T198494800_H
#define PRIMALITYTEST_T198494800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTest
struct  PrimalityTest_t198494800  : public MulticastDelegate_t3490129055
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTEST_T198494800_H
#ifndef MISSINGFIELDEXCEPTION_T895981444_H
#define MISSINGFIELDEXCEPTION_T895981444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingFieldException
struct  MissingFieldException_t895981444  : public MissingMemberException_t197906361
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGFIELDEXCEPTION_T895981444_H
#ifndef UNHANDLEDEXCEPTIONEVENTHANDLER_T3988325396_H
#define UNHANDLEDEXCEPTIONEVENTHANDLER_T3988325396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_t3988325396  : public MulticastDelegate_t3490129055
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTHANDLER_T3988325396_H
#ifndef MISSINGMETHODEXCEPTION_T1765050860_H
#define MISSINGMETHODEXCEPTION_T1765050860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMethodException
struct  MissingMethodException_t1765050860  : public MissingMemberException_t197906361
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMETHODEXCEPTION_T1765050860_H
#ifndef TYPEFILTER_T1765044406_H
#define TYPEFILTER_T1765044406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeFilter
struct  TypeFilter_t1765044406  : public MulticastDelegate_t3490129055
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFILTER_T1765044406_H
#ifndef MONOTYPE_T_H
#define MONOTYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoType
struct  MonoType_t  : public Type_t
{
public:
	// System.MonoTypeInfo System.MonoType::type_info
	MonoTypeInfo_t4102765205 * ___type_info_8;

public:
	inline static int32_t get_offset_of_type_info_8() { return static_cast<int32_t>(offsetof(MonoType_t, ___type_info_8)); }
	inline MonoTypeInfo_t4102765205 * get_type_info_8() const { return ___type_info_8; }
	inline MonoTypeInfo_t4102765205 ** get_address_of_type_info_8() { return &___type_info_8; }
	inline void set_type_info_8(MonoTypeInfo_t4102765205 * value)
	{
		___type_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___type_info_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTYPE_T_H
#ifndef CROSSCONTEXTDELEGATE_T2041844601_H
#define CROSSCONTEXTDELEGATE_T2041844601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.CrossContextDelegate
struct  CrossContextDelegate_t2041844601  : public MulticastDelegate_t3490129055
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSCONTEXTDELEGATE_T2041844601_H
#ifndef HEADERHANDLER_T322209849_H
#define HEADERHANDLER_T322209849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.HeaderHandler
struct  HeaderHandler_t322209849  : public MulticastDelegate_t3490129055
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADERHANDLER_T322209849_H
#ifndef SENDORPOSTCALLBACK_T958766183_H
#define SENDORPOSTCALLBACK_T958766183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SendOrPostCallback
struct  SendOrPostCallback_t958766183  : public MulticastDelegate_t3490129055
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDORPOSTCALLBACK_T958766183_H
#ifndef THREADSTART_T1125214590_H
#define THREADSTART_T1125214590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStart
struct  ThreadStart_t1125214590  : public MulticastDelegate_t3490129055
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTART_T1125214590_H
#ifndef TIMERCALLBACK_T457925261_H
#define TIMERCALLBACK_T457925261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.TimerCallback
struct  TimerCallback_t457925261  : public MulticastDelegate_t3490129055
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMERCALLBACK_T457925261_H
#ifndef WAITCALLBACK_T1619727629_H
#define WAITCALLBACK_T1619727629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitCallback
struct  WaitCallback_t1619727629  : public MulticastDelegate_t3490129055
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITCALLBACK_T1619727629_H
#ifndef APPDOMAININITIALIZER_T4153601912_H
#define APPDOMAININITIALIZER_T4153601912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomainInitializer
struct  AppDomainInitializer_t4153601912  : public MulticastDelegate_t3490129055
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAININITIALIZER_T4153601912_H
#ifndef ASSEMBLYLOADEVENTHANDLER_T3411467263_H
#define ASSEMBLYLOADEVENTHANDLER_T3411467263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AssemblyLoadEventHandler
struct  AssemblyLoadEventHandler_t3411467263  : public MulticastDelegate_t3490129055
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYLOADEVENTHANDLER_T3411467263_H
#ifndef EVENTHANDLER_T1921980382_H
#define EVENTHANDLER_T1921980382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler
struct  EventHandler_t1921980382  : public MulticastDelegate_t3490129055
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T1921980382_H
#ifndef MEMBERFILTER_T1969215007_H
#define MEMBERFILTER_T1969215007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberFilter
struct  MemberFilter_t1969215007  : public MulticastDelegate_t3490129055
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERFILTER_T1969215007_H
#ifndef RESOLVEEVENTHANDLER_T1648622124_H
#define RESOLVEEVENTHANDLER_T1648622124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventHandler
struct  ResolveEventHandler_t1648622124  : public MulticastDelegate_t3490129055
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHANDLER_T1648622124_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize800 = { sizeof (EventArgs_t2957260612), -1, sizeof(EventArgs_t2957260612_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable800[1] = 
{
	EventArgs_t2957260612_StaticFields::get_offset_of_Empty_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize801 = { sizeof (ExecutionEngineException_t274056588), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize802 = { sizeof (FieldAccessException_t4193541070), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize803 = { sizeof (FlagsAttribute_t3663229599), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize804 = { sizeof (FormatException_t337572198), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable804[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize805 = { sizeof (GC_t550184022), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize806 = { sizeof (Guid_t)+ sizeof (RuntimeObject), sizeof(Guid_t ), sizeof(Guid_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable806[15] = 
{
	Guid_t::get_offset_of__a_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__b_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__c_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__d_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__e_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__f_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__g_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__h_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__i_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__j_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__k_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t_StaticFields::get_offset_of_Empty_11(),
	Guid_t_StaticFields::get_offset_of__rngAccess_12(),
	Guid_t_StaticFields::get_offset_of__rng_13(),
	Guid_t_StaticFields::get_offset_of__fastRng_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize807 = { sizeof (GuidParser_t3445609525), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable807[3] = 
{
	GuidParser_t3445609525::get_offset_of__src_0(),
	GuidParser_t3445609525::get_offset_of__length_1(),
	GuidParser_t3445609525::get_offset_of__cur_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize808 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize809 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize810 = { sizeof (IndexOutOfRangeException_t2809213135), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize811 = { sizeof (InvalidCastException_t1648559118), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable811[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize812 = { sizeof (InvalidOperationException_t1874512906), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable812[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize813 = { sizeof (LoaderOptimization_t2737350648)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable813[7] = 
{
	LoaderOptimization_t2737350648::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize814 = { sizeof (LocalDataStoreSlot_t2080020751), -1, sizeof(LocalDataStoreSlot_t2080020751_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable814[5] = 
{
	LocalDataStoreSlot_t2080020751::get_offset_of_slot_0(),
	LocalDataStoreSlot_t2080020751::get_offset_of_thread_local_1(),
	LocalDataStoreSlot_t2080020751_StaticFields::get_offset_of_lock_obj_2(),
	LocalDataStoreSlot_t2080020751_StaticFields::get_offset_of_slot_bitmap_thread_3(),
	LocalDataStoreSlot_t2080020751_StaticFields::get_offset_of_slot_bitmap_context_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize815 = { sizeof (Math_t4134494189), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize816 = { sizeof (MemberAccessException_t2404015039), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize817 = { sizeof (MethodAccessException_t3740856359), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable817[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize818 = { sizeof (MissingFieldException_t895981444), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize819 = { sizeof (MissingMemberException_t197906361), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable819[3] = 
{
	MissingMemberException_t197906361::get_offset_of_ClassName_11(),
	MissingMemberException_t197906361::get_offset_of_MemberName_12(),
	MissingMemberException_t197906361::get_offset_of_Signature_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize820 = { sizeof (MissingMethodException_t1765050860), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable820[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize821 = { sizeof (MonoAsyncCall_t298858217), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable821[7] = 
{
	MonoAsyncCall_t298858217::get_offset_of_msg_0(),
	MonoAsyncCall_t298858217::get_offset_of_cb_method_1(),
	MonoAsyncCall_t298858217::get_offset_of_cb_target_2(),
	MonoAsyncCall_t298858217::get_offset_of_state_3(),
	MonoAsyncCall_t298858217::get_offset_of_res_4(),
	MonoAsyncCall_t298858217::get_offset_of_out_args_5(),
	MonoAsyncCall_t298858217::get_offset_of_wait_event_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize822 = { sizeof (MonoCustomAttrs_t3592029779), -1, sizeof(MonoCustomAttrs_t3592029779_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable822[3] = 
{
	MonoCustomAttrs_t3592029779_StaticFields::get_offset_of_corlib_0(),
	MonoCustomAttrs_t3592029779_StaticFields::get_offset_of_AttributeUsageType_1(),
	MonoCustomAttrs_t3592029779_StaticFields::get_offset_of_DefaultAttributeUsage_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize823 = { sizeof (AttributeInfo_t1278389190), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable823[2] = 
{
	AttributeInfo_t1278389190::get_offset_of__usage_0(),
	AttributeInfo_t1278389190::get_offset_of__inheritanceLevel_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize824 = { sizeof (MonoTouchAOTHelper_t1344711673), -1, sizeof(MonoTouchAOTHelper_t1344711673_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable824[1] = 
{
	MonoTouchAOTHelper_t1344711673_StaticFields::get_offset_of_FalseFlag_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize825 = { sizeof (MonoTypeInfo_t4102765205), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable825[2] = 
{
	MonoTypeInfo_t4102765205::get_offset_of_full_name_0(),
	MonoTypeInfo_t4102765205::get_offset_of_default_ctor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize826 = { sizeof (MonoType_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable826[1] = 
{
	MonoType_t::get_offset_of_type_info_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize827 = { sizeof (MulticastNotSupportedException_t3016540688), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize828 = { sizeof (NonSerializedAttribute_t2183942278), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize829 = { sizeof (NotImplementedException_t224927754), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize830 = { sizeof (NotSupportedException_t3838488019), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable830[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize831 = { sizeof (NullReferenceException_t3620155142), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable831[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize832 = { sizeof (NumberFormatter_t3453388345), -1, sizeof(NumberFormatter_t3453388345_StaticFields), sizeof(NumberFormatter_t3453388345_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable832[26] = 
{
	NumberFormatter_t3453388345_StaticFields::get_offset_of_MantissaBitsTable_0(),
	NumberFormatter_t3453388345_StaticFields::get_offset_of_TensExponentTable_1(),
	NumberFormatter_t3453388345_StaticFields::get_offset_of_DigitLowerTable_2(),
	NumberFormatter_t3453388345_StaticFields::get_offset_of_DigitUpperTable_3(),
	NumberFormatter_t3453388345_StaticFields::get_offset_of_TenPowersList_4(),
	NumberFormatter_t3453388345_StaticFields::get_offset_of_DecHexDigits_5(),
	NumberFormatter_t3453388345::get_offset_of__thread_6(),
	NumberFormatter_t3453388345::get_offset_of__nfi_7(),
	NumberFormatter_t3453388345::get_offset_of__NaN_8(),
	NumberFormatter_t3453388345::get_offset_of__infinity_9(),
	NumberFormatter_t3453388345::get_offset_of__isCustomFormat_10(),
	NumberFormatter_t3453388345::get_offset_of__specifierIsUpper_11(),
	NumberFormatter_t3453388345::get_offset_of__positive_12(),
	NumberFormatter_t3453388345::get_offset_of__specifier_13(),
	NumberFormatter_t3453388345::get_offset_of__precision_14(),
	NumberFormatter_t3453388345::get_offset_of__defPrecision_15(),
	NumberFormatter_t3453388345::get_offset_of__digitsLen_16(),
	NumberFormatter_t3453388345::get_offset_of__offset_17(),
	NumberFormatter_t3453388345::get_offset_of__decPointPos_18(),
	NumberFormatter_t3453388345::get_offset_of__val1_19(),
	NumberFormatter_t3453388345::get_offset_of__val2_20(),
	NumberFormatter_t3453388345::get_offset_of__val3_21(),
	NumberFormatter_t3453388345::get_offset_of__val4_22(),
	NumberFormatter_t3453388345::get_offset_of__cbuf_23(),
	NumberFormatter_t3453388345::get_offset_of__ind_24(),
	THREAD_STATIC_FIELD_OFFSET,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize833 = { sizeof (CustomInfo_t626617653), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable833[14] = 
{
	CustomInfo_t626617653::get_offset_of_UseGroup_0(),
	CustomInfo_t626617653::get_offset_of_DecimalDigits_1(),
	CustomInfo_t626617653::get_offset_of_DecimalPointPos_2(),
	CustomInfo_t626617653::get_offset_of_DecimalTailSharpDigits_3(),
	CustomInfo_t626617653::get_offset_of_IntegerDigits_4(),
	CustomInfo_t626617653::get_offset_of_IntegerHeadSharpDigits_5(),
	CustomInfo_t626617653::get_offset_of_IntegerHeadPos_6(),
	CustomInfo_t626617653::get_offset_of_UseExponent_7(),
	CustomInfo_t626617653::get_offset_of_ExponentDigits_8(),
	CustomInfo_t626617653::get_offset_of_ExponentTailSharpDigits_9(),
	CustomInfo_t626617653::get_offset_of_ExponentNegativeSignOnly_10(),
	CustomInfo_t626617653::get_offset_of_DividePlaces_11(),
	CustomInfo_t626617653::get_offset_of_Percents_12(),
	CustomInfo_t626617653::get_offset_of_Permilles_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize834 = { sizeof (ObjectDisposedException_t796800015), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable834[2] = 
{
	ObjectDisposedException_t796800015::get_offset_of_obj_name_12(),
	ObjectDisposedException_t796800015::get_offset_of_msg_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize835 = { sizeof (OperatingSystem_t3826181801), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable835[3] = 
{
	OperatingSystem_t3826181801::get_offset_of__platform_0(),
	OperatingSystem_t3826181801::get_offset_of__version_1(),
	OperatingSystem_t3826181801::get_offset_of__servicePack_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize836 = { sizeof (OutOfMemoryException_t620329179), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable836[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize837 = { sizeof (OverflowException_t2070242466), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable837[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize838 = { sizeof (PlatformID_t4249670298)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable838[8] = 
{
	PlatformID_t4249670298::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize839 = { sizeof (PlatformNotSupportedException_t4062442988), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable839[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize840 = { sizeof (RankException_t1254030116), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize841 = { sizeof (ResolveEventArgs_t3180588390), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable841[1] = 
{
	ResolveEventArgs_t3180588390::get_offset_of_m_Name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize842 = { sizeof (RuntimeMethodHandle_t3094749374)+ sizeof (RuntimeObject), sizeof(RuntimeMethodHandle_t3094749374 ), 0, 0 };
extern const int32_t g_FieldOffsetTable842[1] = 
{
	RuntimeMethodHandle_t3094749374::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize843 = { sizeof (StackOverflowException_t3006178200), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize844 = { sizeof (StringComparer_t578076063), -1, sizeof(StringComparer_t578076063_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable844[4] = 
{
	StringComparer_t578076063_StaticFields::get_offset_of_invariantCultureIgnoreCase_0(),
	StringComparer_t578076063_StaticFields::get_offset_of_invariantCulture_1(),
	StringComparer_t578076063_StaticFields::get_offset_of_ordinalIgnoreCase_2(),
	StringComparer_t578076063_StaticFields::get_offset_of_ordinal_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize845 = { sizeof (CultureAwareComparer_t3809122731), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable845[2] = 
{
	CultureAwareComparer_t3809122731::get_offset_of__ignoreCase_4(),
	CultureAwareComparer_t3809122731::get_offset_of__compareInfo_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize846 = { sizeof (OrdinalComparer_t736870908), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable846[1] = 
{
	OrdinalComparer_t736870908::get_offset_of__ignoreCase_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize847 = { sizeof (StringComparison_t2615625859)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable847[7] = 
{
	StringComparison_t2615625859::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize848 = { sizeof (StringSplitOptions_t3837118665)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable848[3] = 
{
	StringSplitOptions_t3837118665::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize849 = { sizeof (SystemException_t82066692), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize850 = { sizeof (ThreadStaticAttribute_t2875227927), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize851 = { sizeof (TimeSpan_t3567112609)+ sizeof (RuntimeObject), sizeof(TimeSpan_t3567112609 ), sizeof(TimeSpan_t3567112609_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable851[4] = 
{
	TimeSpan_t3567112609_StaticFields::get_offset_of_MaxValue_0(),
	TimeSpan_t3567112609_StaticFields::get_offset_of_MinValue_1(),
	TimeSpan_t3567112609_StaticFields::get_offset_of_Zero_2(),
	TimeSpan_t3567112609::get_offset_of__ticks_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize852 = { sizeof (TimeZone_t3385619321), -1, sizeof(TimeZone_t3385619321_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable852[3] = 
{
	TimeZone_t3385619321_StaticFields::get_offset_of_currentTimeZone_0(),
	TimeZone_t3385619321_StaticFields::get_offset_of_tz_lock_1(),
	TimeZone_t3385619321_StaticFields::get_offset_of_timezone_check_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize853 = { sizeof (CurrentSystemTimeZone_t1783896134), -1, sizeof(CurrentSystemTimeZone_t1783896134_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable853[8] = 
{
	CurrentSystemTimeZone_t1783896134::get_offset_of_m_standardName_3(),
	CurrentSystemTimeZone_t1783896134::get_offset_of_m_daylightName_4(),
	CurrentSystemTimeZone_t1783896134::get_offset_of_m_CachedDaylightChanges_5(),
	CurrentSystemTimeZone_t1783896134::get_offset_of_m_ticksOffset_6(),
	CurrentSystemTimeZone_t1783896134::get_offset_of_utcOffsetWithOutDLS_7(),
	CurrentSystemTimeZone_t1783896134::get_offset_of_utcOffsetWithDLS_8(),
	CurrentSystemTimeZone_t1783896134_StaticFields::get_offset_of_this_year_9(),
	CurrentSystemTimeZone_t1783896134_StaticFields::get_offset_of_this_year_dlt_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize854 = { sizeof (TypeCode_t159724530)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable854[19] = 
{
	TypeCode_t159724530::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize855 = { sizeof (TypeInitializationException_t1699631790), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable855[1] = 
{
	TypeInitializationException_t1699631790::get_offset_of_type_name_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize856 = { sizeof (TypeLoadException_t3383640194), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable856[3] = 
{
	0,
	TypeLoadException_t3383640194::get_offset_of_className_12(),
	TypeLoadException_t3383640194::get_offset_of_assemblyName_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize857 = { sizeof (UnauthorizedAccessException_t1825374429), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize858 = { sizeof (UnhandledExceptionEventArgs_t746382225), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable858[2] = 
{
	UnhandledExceptionEventArgs_t746382225::get_offset_of_exception_1(),
	UnhandledExceptionEventArgs_t746382225::get_offset_of_m_isTerminating_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize859 = { sizeof (UnitySerializationHolder_t268650221), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable859[3] = 
{
	UnitySerializationHolder_t268650221::get_offset_of__data_0(),
	UnitySerializationHolder_t268650221::get_offset_of__unityType_1(),
	UnitySerializationHolder_t268650221::get_offset_of__assemblyName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize860 = { sizeof (UnityType_t466071028)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable860[5] = 
{
	UnityType_t466071028::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize861 = { sizeof (Version_t75757620), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable861[5] = 
{
	0,
	Version_t75757620::get_offset_of__Major_1(),
	Version_t75757620::get_offset_of__Minor_2(),
	Version_t75757620::get_offset_of__Build_3(),
	Version_t75757620::get_offset_of__Revision_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize862 = { sizeof (WeakReference_t4204601341), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable862[2] = 
{
	WeakReference_t4204601341::get_offset_of_isLongReference_0(),
	WeakReference_t4204601341::get_offset_of_gcHandle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize863 = { sizeof (PrimalityTest_t198494800), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize864 = { sizeof (MemberFilter_t1969215007), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize865 = { sizeof (TypeFilter_t1765044406), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize866 = { sizeof (CrossContextDelegate_t2041844601), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize867 = { sizeof (HeaderHandler_t322209849), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize868 = { sizeof (SendOrPostCallback_t958766183), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize869 = { sizeof (ThreadStart_t1125214590), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize870 = { sizeof (TimerCallback_t457925261), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize871 = { sizeof (WaitCallback_t1619727629), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize872 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize873 = { sizeof (AppDomainInitializer_t4153601912), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize874 = { sizeof (AssemblyLoadEventHandler_t3411467263), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize875 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize876 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize877 = { sizeof (EventHandler_t1921980382), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize878 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize879 = { sizeof (ResolveEventHandler_t1648622124), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize880 = { sizeof (UnhandledExceptionEventHandler_t3988325396), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize881 = { sizeof (U3CPrivateImplementationDetailsU3E_t1006692956), -1, sizeof(U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable881[53] = 
{
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D1_1(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D2_2(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D3_3(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D4_4(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D5_5(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D6_6(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D15_7(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D16_8(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D17_9(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D18_10(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D19_11(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D20_12(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D21_13(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D22_14(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D23_15(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D24_16(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D25_17(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D26_18(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D27_19(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D30_20(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D31_21(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D32_22(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D33_23(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D34_24(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D35_25(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D36_26(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D37_27(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D38_28(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D39_29(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D40_30(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D41_31(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D42_32(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D43_33(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D44_34(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D45_35(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D46_36(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D47_37(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D48_38(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D49_39(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D50_40(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D51_41(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D52_42(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D53_43(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D54_44(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D55_45(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D56_46(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D57_47(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D60_48(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D62_49(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D63_50(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D64_51(),
	U3CPrivateImplementationDetailsU3E_t1006692956_StaticFields::get_offset_of_U24U24fieldU2D65_52(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize882 = { sizeof (U24ArrayTypeU2456_t1543429825)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2456_t1543429825 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize883 = { sizeof (U24ArrayTypeU2424_t770301086)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2424_t770301086 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize884 = { sizeof (U24ArrayTypeU2416_t70776454)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2416_t70776454 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize885 = { sizeof (U24ArrayTypeU24120_t958999923)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24120_t958999923 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize886 = { sizeof (U24ArrayTypeU243132_t2832538681)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU243132_t2832538681 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize887 = { sizeof (U24ArrayTypeU2420_t3778103746)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2420_t3778103746 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize888 = { sizeof (U24ArrayTypeU2432_t3804456112)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2432_t3804456112 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize889 = { sizeof (U24ArrayTypeU2448_t1068404676)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2448_t1068404676 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize890 = { sizeof (U24ArrayTypeU2464_t2033706348)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2464_t2033706348 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize891 = { sizeof (U24ArrayTypeU2412_t2214411420)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2412_t2214411420 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize892 = { sizeof (U24ArrayTypeU24136_t2045787120)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24136_t2045787120 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize893 = { sizeof (U24ArrayTypeU248_t3549862496)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU248_t3549862496 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize894 = { sizeof (U24ArrayTypeU2472_t118347367)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2472_t118347367 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize895 = { sizeof (U24ArrayTypeU24124_t4214951589)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24124_t4214951589 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize896 = { sizeof (U24ArrayTypeU2496_t4000210986)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2496_t4000210986 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize897 = { sizeof (U24ArrayTypeU242048_t1147011002)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU242048_t1147011002 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize898 = { sizeof (U24ArrayTypeU24256_t2510773725)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t2510773725 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize899 = { sizeof (U24ArrayTypeU241024_t2151015563)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU241024_t2151015563 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
