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

// System.Char[]
struct CharU5BU5D_t1242876772;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t2634705366;
// Mono.Globalization.Unicode.CodePointIndexer/TableRange[]
struct TableRangeU5BU5D_t4105612570;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t479614972;
// System.IntPtr[]
struct IntPtrU5BU5D_t613349752;
// System.Collections.IDictionary
struct IDictionary_t4281580614;
// System.Byte
struct Byte_t3134016783;
// System.Double
struct Double_t2164843507;
// System.UInt16
struct UInt16_t923891940;
// System.Type
struct Type_t;
// System.Void
struct Void_t3777767445;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t681174337;
// System.Type[]
struct TypeU5BU5D_t677980951;
// System.Reflection.MemberFilter
struct MemberFilter_t126741728;
// System.IAsyncResult
struct IAsyncResult_t2761677965;
// System.AsyncCallback
struct AsyncCallback_t2256430285;




#ifndef U3CMODULEU3E_T3825170570_H
#define U3CMODULEU3E_T3825170570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3825170570 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3825170570_H
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
#ifndef LEVEL2MAP_T4055759738_H
#define LEVEL2MAP_T4055759738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.Level2Map
struct  Level2Map_t4055759738  : public RuntimeObject
{
public:
	// System.Byte Mono.Globalization.Unicode.Level2Map::Source
	uint8_t ___Source_0;
	// System.Byte Mono.Globalization.Unicode.Level2Map::Replace
	uint8_t ___Replace_1;

public:
	inline static int32_t get_offset_of_Source_0() { return static_cast<int32_t>(offsetof(Level2Map_t4055759738, ___Source_0)); }
	inline uint8_t get_Source_0() const { return ___Source_0; }
	inline uint8_t* get_address_of_Source_0() { return &___Source_0; }
	inline void set_Source_0(uint8_t value)
	{
		___Source_0 = value;
	}

	inline static int32_t get_offset_of_Replace_1() { return static_cast<int32_t>(offsetof(Level2Map_t4055759738, ___Replace_1)); }
	inline uint8_t get_Replace_1() const { return ___Replace_1; }
	inline uint8_t* get_address_of_Replace_1() { return &___Replace_1; }
	inline void set_Replace_1(uint8_t value)
	{
		___Replace_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVEL2MAP_T4055759738_H
#ifndef CONTRACTIONCOMPARER_T1081760995_H
#define CONTRACTIONCOMPARER_T1081760995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.ContractionComparer
struct  ContractionComparer_t1081760995  : public RuntimeObject
{
public:

public:
};

struct ContractionComparer_t1081760995_StaticFields
{
public:
	// Mono.Globalization.Unicode.ContractionComparer Mono.Globalization.Unicode.ContractionComparer::Instance
	ContractionComparer_t1081760995 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(ContractionComparer_t1081760995_StaticFields, ___Instance_0)); }
	inline ContractionComparer_t1081760995 * get_Instance_0() const { return ___Instance_0; }
	inline ContractionComparer_t1081760995 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(ContractionComparer_t1081760995 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTRACTIONCOMPARER_T1081760995_H
#ifndef CONTRACTION_T3317909793_H
#define CONTRACTION_T3317909793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.Contraction
struct  Contraction_t3317909793  : public RuntimeObject
{
public:
	// System.Char[] Mono.Globalization.Unicode.Contraction::Source
	CharU5BU5D_t1242876772* ___Source_0;
	// System.String Mono.Globalization.Unicode.Contraction::Replacement
	String_t* ___Replacement_1;
	// System.Byte[] Mono.Globalization.Unicode.Contraction::SortKey
	ByteU5BU5D_t2634705366* ___SortKey_2;

public:
	inline static int32_t get_offset_of_Source_0() { return static_cast<int32_t>(offsetof(Contraction_t3317909793, ___Source_0)); }
	inline CharU5BU5D_t1242876772* get_Source_0() const { return ___Source_0; }
	inline CharU5BU5D_t1242876772** get_address_of_Source_0() { return &___Source_0; }
	inline void set_Source_0(CharU5BU5D_t1242876772* value)
	{
		___Source_0 = value;
		Il2CppCodeGenWriteBarrier((&___Source_0), value);
	}

	inline static int32_t get_offset_of_Replacement_1() { return static_cast<int32_t>(offsetof(Contraction_t3317909793, ___Replacement_1)); }
	inline String_t* get_Replacement_1() const { return ___Replacement_1; }
	inline String_t** get_address_of_Replacement_1() { return &___Replacement_1; }
	inline void set_Replacement_1(String_t* value)
	{
		___Replacement_1 = value;
		Il2CppCodeGenWriteBarrier((&___Replacement_1), value);
	}

	inline static int32_t get_offset_of_SortKey_2() { return static_cast<int32_t>(offsetof(Contraction_t3317909793, ___SortKey_2)); }
	inline ByteU5BU5D_t2634705366* get_SortKey_2() const { return ___SortKey_2; }
	inline ByteU5BU5D_t2634705366** get_address_of_SortKey_2() { return &___SortKey_2; }
	inline void set_SortKey_2(ByteU5BU5D_t2634705366* value)
	{
		___SortKey_2 = value;
		Il2CppCodeGenWriteBarrier((&___SortKey_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTRACTION_T3317909793_H
#ifndef TAILORINGINFO_T1003695400_H
#define TAILORINGINFO_T1003695400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.TailoringInfo
struct  TailoringInfo_t1003695400  : public RuntimeObject
{
public:
	// System.Int32 Mono.Globalization.Unicode.TailoringInfo::LCID
	int32_t ___LCID_0;
	// System.Int32 Mono.Globalization.Unicode.TailoringInfo::TailoringIndex
	int32_t ___TailoringIndex_1;
	// System.Int32 Mono.Globalization.Unicode.TailoringInfo::TailoringCount
	int32_t ___TailoringCount_2;
	// System.Boolean Mono.Globalization.Unicode.TailoringInfo::FrenchSort
	bool ___FrenchSort_3;

public:
	inline static int32_t get_offset_of_LCID_0() { return static_cast<int32_t>(offsetof(TailoringInfo_t1003695400, ___LCID_0)); }
	inline int32_t get_LCID_0() const { return ___LCID_0; }
	inline int32_t* get_address_of_LCID_0() { return &___LCID_0; }
	inline void set_LCID_0(int32_t value)
	{
		___LCID_0 = value;
	}

	inline static int32_t get_offset_of_TailoringIndex_1() { return static_cast<int32_t>(offsetof(TailoringInfo_t1003695400, ___TailoringIndex_1)); }
	inline int32_t get_TailoringIndex_1() const { return ___TailoringIndex_1; }
	inline int32_t* get_address_of_TailoringIndex_1() { return &___TailoringIndex_1; }
	inline void set_TailoringIndex_1(int32_t value)
	{
		___TailoringIndex_1 = value;
	}

	inline static int32_t get_offset_of_TailoringCount_2() { return static_cast<int32_t>(offsetof(TailoringInfo_t1003695400, ___TailoringCount_2)); }
	inline int32_t get_TailoringCount_2() const { return ___TailoringCount_2; }
	inline int32_t* get_address_of_TailoringCount_2() { return &___TailoringCount_2; }
	inline void set_TailoringCount_2(int32_t value)
	{
		___TailoringCount_2 = value;
	}

	inline static int32_t get_offset_of_FrenchSort_3() { return static_cast<int32_t>(offsetof(TailoringInfo_t1003695400, ___FrenchSort_3)); }
	inline bool get_FrenchSort_3() const { return ___FrenchSort_3; }
	inline bool* get_address_of_FrenchSort_3() { return &___FrenchSort_3; }
	inline void set_FrenchSort_3(bool value)
	{
		___FrenchSort_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAILORINGINFO_T1003695400_H
#ifndef CODEPOINTINDEXER_T3628685573_H
#define CODEPOINTINDEXER_T3628685573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.CodePointIndexer
struct  CodePointIndexer_t3628685573  : public RuntimeObject
{
public:
	// Mono.Globalization.Unicode.CodePointIndexer/TableRange[] Mono.Globalization.Unicode.CodePointIndexer::ranges
	TableRangeU5BU5D_t4105612570* ___ranges_0;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::TotalCount
	int32_t ___TotalCount_1;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::defaultIndex
	int32_t ___defaultIndex_2;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::defaultCP
	int32_t ___defaultCP_3;

public:
	inline static int32_t get_offset_of_ranges_0() { return static_cast<int32_t>(offsetof(CodePointIndexer_t3628685573, ___ranges_0)); }
	inline TableRangeU5BU5D_t4105612570* get_ranges_0() const { return ___ranges_0; }
	inline TableRangeU5BU5D_t4105612570** get_address_of_ranges_0() { return &___ranges_0; }
	inline void set_ranges_0(TableRangeU5BU5D_t4105612570* value)
	{
		___ranges_0 = value;
		Il2CppCodeGenWriteBarrier((&___ranges_0), value);
	}

	inline static int32_t get_offset_of_TotalCount_1() { return static_cast<int32_t>(offsetof(CodePointIndexer_t3628685573, ___TotalCount_1)); }
	inline int32_t get_TotalCount_1() const { return ___TotalCount_1; }
	inline int32_t* get_address_of_TotalCount_1() { return &___TotalCount_1; }
	inline void set_TotalCount_1(int32_t value)
	{
		___TotalCount_1 = value;
	}

	inline static int32_t get_offset_of_defaultIndex_2() { return static_cast<int32_t>(offsetof(CodePointIndexer_t3628685573, ___defaultIndex_2)); }
	inline int32_t get_defaultIndex_2() const { return ___defaultIndex_2; }
	inline int32_t* get_address_of_defaultIndex_2() { return &___defaultIndex_2; }
	inline void set_defaultIndex_2(int32_t value)
	{
		___defaultIndex_2 = value;
	}

	inline static int32_t get_offset_of_defaultCP_3() { return static_cast<int32_t>(offsetof(CodePointIndexer_t3628685573, ___defaultCP_3)); }
	inline int32_t get_defaultCP_3() const { return ___defaultCP_3; }
	inline int32_t* get_address_of_defaultCP_3() { return &___defaultCP_3; }
	inline void set_defaultCP_3(int32_t value)
	{
		___defaultCP_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEPOINTINDEXER_T3628685573_H
#ifndef LOCALE_T49023510_H
#define LOCALE_T49023510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t49023510  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T49023510_H
#ifndef RUNTIMEHELPERS_T4173041793_H
#define RUNTIMEHELPERS_T4173041793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.RuntimeHelpers
struct  RuntimeHelpers_t4173041793  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEHELPERS_T4173041793_H
#ifndef MARSHALBYREFOBJECT_T2659341205_H
#define MARSHALBYREFOBJECT_T2659341205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2659341205  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t479614972 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2659341205, ____identity_0)); }
	inline ServerIdentity_t479614972 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t479614972 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t479614972 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2659341205_H
#ifndef EXCEPTION_T2901738898_H
#define EXCEPTION_T2901738898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t2901738898  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t613349752* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t2901738898 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t2901738898, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t613349752* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t613349752** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t613349752* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t2901738898, ___inner_exception_1)); }
	inline Exception_t2901738898 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t2901738898 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t2901738898 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t2901738898, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t2901738898, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t2901738898, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t2901738898, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t2901738898, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t2901738898, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t2901738898, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t2901738898, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t2901738898, ____data_10)); }
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
#endif // EXCEPTION_T2901738898_H
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
#ifndef SIMPLEENUMERATOR_T1127930083_H
#define SIMPLEENUMERATOR_T1127930083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array/SimpleEnumerator
struct  SimpleEnumerator_t1127930083  : public RuntimeObject
{
public:
	// System.Array System.Array/SimpleEnumerator::enumeratee
	RuntimeArray * ___enumeratee_0;
	// System.Int32 System.Array/SimpleEnumerator::currentpos
	int32_t ___currentpos_1;
	// System.Int32 System.Array/SimpleEnumerator::length
	int32_t ___length_2;

public:
	inline static int32_t get_offset_of_enumeratee_0() { return static_cast<int32_t>(offsetof(SimpleEnumerator_t1127930083, ___enumeratee_0)); }
	inline RuntimeArray * get_enumeratee_0() const { return ___enumeratee_0; }
	inline RuntimeArray ** get_address_of_enumeratee_0() { return &___enumeratee_0; }
	inline void set_enumeratee_0(RuntimeArray * value)
	{
		___enumeratee_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumeratee_0), value);
	}

	inline static int32_t get_offset_of_currentpos_1() { return static_cast<int32_t>(offsetof(SimpleEnumerator_t1127930083, ___currentpos_1)); }
	inline int32_t get_currentpos_1() const { return ___currentpos_1; }
	inline int32_t* get_address_of_currentpos_1() { return &___currentpos_1; }
	inline void set_currentpos_1(int32_t value)
	{
		___currentpos_1 = value;
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(SimpleEnumerator_t1127930083, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEENUMERATOR_T1127930083_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t1242876772* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t1242876772* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t1242876772** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t1242876772* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef CRITICALFINALIZEROBJECT_T3020251672_H
#define CRITICALFINALIZEROBJECT_T3020251672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t3020251672  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T3020251672_H
#ifndef VALUETYPE_T2631698734_H
#define VALUETYPE_T2631698734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2631698734  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2631698734_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2631698734_marshaled_com
{
};
#endif // VALUETYPE_T2631698734_H
#ifndef ATTRIBUTE_T4191498700_H
#define ATTRIBUTE_T4191498700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t4191498700  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T4191498700_H
#ifndef CHAR_T1295772697_H
#define CHAR_T1295772697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t1295772697 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t1295772697, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t1295772697_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t1295772697_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t1295772697_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t1295772697_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t1295772697_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t1295772697_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t1295772697_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t1295772697_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T1295772697_H
#ifndef GUIDATTRIBUTE_T2479826699_H
#define GUIDATTRIBUTE_T2479826699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GuidAttribute
struct  GuidAttribute_t2479826699  : public Attribute_t4191498700
{
public:
	// System.String System.Runtime.InteropServices.GuidAttribute::guidValue
	String_t* ___guidValue_0;

public:
	inline static int32_t get_offset_of_guidValue_0() { return static_cast<int32_t>(offsetof(GuidAttribute_t2479826699, ___guidValue_0)); }
	inline String_t* get_guidValue_0() const { return ___guidValue_0; }
	inline String_t** get_address_of_guidValue_0() { return &___guidValue_0; }
	inline void set_guidValue_0(String_t* value)
	{
		___guidValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___guidValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDATTRIBUTE_T2479826699_H
#ifndef ASSEMBLYCULTUREATTRIBUTE_T882539991_H
#define ASSEMBLYCULTUREATTRIBUTE_T882539991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCultureAttribute
struct  AssemblyCultureAttribute_t882539991  : public Attribute_t4191498700
{
public:
	// System.String System.Reflection.AssemblyCultureAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyCultureAttribute_t882539991, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCULTUREATTRIBUTE_T882539991_H
#ifndef ASSEMBLYVERSIONATTRIBUTE_T488201353_H
#define ASSEMBLYVERSIONATTRIBUTE_T488201353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyVersionAttribute
struct  AssemblyVersionAttribute_t488201353  : public Attribute_t4191498700
{
public:
	// System.String System.Reflection.AssemblyVersionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyVersionAttribute_t488201353, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYVERSIONATTRIBUTE_T488201353_H
#ifndef COMIMPORTATTRIBUTE_T2904199136_H
#define COMIMPORTATTRIBUTE_T2904199136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComImportAttribute
struct  ComImportAttribute_t2904199136  : public Attribute_t4191498700
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMIMPORTATTRIBUTE_T2904199136_H
#ifndef UINT16_T923891940_H
#define UINT16_T923891940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t923891940 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t923891940, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T923891940_H
#ifndef FIXEDBUFFERATTRIBUTE_T1612864383_H
#define FIXEDBUFFERATTRIBUTE_T1612864383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.FixedBufferAttribute
struct  FixedBufferAttribute_t1612864383  : public Attribute_t4191498700
{
public:
	// System.Type System.Runtime.CompilerServices.FixedBufferAttribute::elementType
	Type_t * ___elementType_0;
	// System.Int32 System.Runtime.CompilerServices.FixedBufferAttribute::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_elementType_0() { return static_cast<int32_t>(offsetof(FixedBufferAttribute_t1612864383, ___elementType_0)); }
	inline Type_t * get_elementType_0() const { return ___elementType_0; }
	inline Type_t ** get_address_of_elementType_0() { return &___elementType_0; }
	inline void set_elementType_0(Type_t * value)
	{
		___elementType_0 = value;
		Il2CppCodeGenWriteBarrier((&___elementType_0), value);
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(FixedBufferAttribute_t1612864383, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXEDBUFFERATTRIBUTE_T1612864383_H
#ifndef COMPILERGENERATEDATTRIBUTE_T677183497_H
#define COMPILERGENERATEDATTRIBUTE_T677183497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct  CompilerGeneratedAttribute_t677183497  : public Attribute_t4191498700
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILERGENERATEDATTRIBUTE_T677183497_H
#ifndef INTERNALSVISIBLETOATTRIBUTE_T3580258490_H
#define INTERNALSVISIBLETOATTRIBUTE_T3580258490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct  InternalsVisibleToAttribute_t3580258490  : public Attribute_t4191498700
{
public:
	// System.String System.Runtime.CompilerServices.InternalsVisibleToAttribute::assemblyName
	String_t* ___assemblyName_0;
	// System.Boolean System.Runtime.CompilerServices.InternalsVisibleToAttribute::all_visible
	bool ___all_visible_1;

public:
	inline static int32_t get_offset_of_assemblyName_0() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t3580258490, ___assemblyName_0)); }
	inline String_t* get_assemblyName_0() const { return ___assemblyName_0; }
	inline String_t** get_address_of_assemblyName_0() { return &___assemblyName_0; }
	inline void set_assemblyName_0(String_t* value)
	{
		___assemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_0), value);
	}

	inline static int32_t get_offset_of_all_visible_1() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t3580258490, ___all_visible_1)); }
	inline bool get_all_visible_1() const { return ___all_visible_1; }
	inline bool* get_address_of_all_visible_1() { return &___all_visible_1; }
	inline void set_all_visible_1(bool value)
	{
		___all_visible_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALSVISIBLETOATTRIBUTE_T3580258490_H
#ifndef RUNTIMECOMPATIBILITYATTRIBUTE_T523139156_H
#define RUNTIMECOMPATIBILITYATTRIBUTE_T523139156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct  RuntimeCompatibilityAttribute_t523139156  : public Attribute_t4191498700
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::wrap_non_exception_throws
	bool ___wrap_non_exception_throws_0;

public:
	inline static int32_t get_offset_of_wrap_non_exception_throws_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_t523139156, ___wrap_non_exception_throws_0)); }
	inline bool get_wrap_non_exception_throws_0() const { return ___wrap_non_exception_throws_0; }
	inline bool* get_address_of_wrap_non_exception_throws_0() { return &___wrap_non_exception_throws_0; }
	inline void set_wrap_non_exception_throws_0(bool value)
	{
		___wrap_non_exception_throws_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMECOMPATIBILITYATTRIBUTE_T523139156_H
#ifndef DEBUGGERHIDDENATTRIBUTE_T1721216086_H
#define DEBUGGERHIDDENATTRIBUTE_T1721216086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggerHiddenAttribute
struct  DebuggerHiddenAttribute_t1721216086  : public Attribute_t4191498700
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERHIDDENATTRIBUTE_T1721216086_H
#ifndef DEFAULTMEMBERATTRIBUTE_T530311905_H
#define DEFAULTMEMBERATTRIBUTE_T530311905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.DefaultMemberAttribute
struct  DefaultMemberAttribute_t530311905  : public Attribute_t4191498700
{
public:
	// System.String System.Reflection.DefaultMemberAttribute::member_name
	String_t* ___member_name_0;

public:
	inline static int32_t get_offset_of_member_name_0() { return static_cast<int32_t>(offsetof(DefaultMemberAttribute_t530311905, ___member_name_0)); }
	inline String_t* get_member_name_0() const { return ___member_name_0; }
	inline String_t** get_address_of_member_name_0() { return &___member_name_0; }
	inline void set_member_name_0(String_t* value)
	{
		___member_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTMEMBERATTRIBUTE_T530311905_H
#ifndef DECIMALCONSTANTATTRIBUTE_T1816610387_H
#define DECIMALCONSTANTATTRIBUTE_T1816610387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DecimalConstantAttribute
struct  DecimalConstantAttribute_t1816610387  : public Attribute_t4191498700
{
public:
	// System.Byte System.Runtime.CompilerServices.DecimalConstantAttribute::scale
	uint8_t ___scale_0;
	// System.Boolean System.Runtime.CompilerServices.DecimalConstantAttribute::sign
	bool ___sign_1;
	// System.Int32 System.Runtime.CompilerServices.DecimalConstantAttribute::hi
	int32_t ___hi_2;
	// System.Int32 System.Runtime.CompilerServices.DecimalConstantAttribute::mid
	int32_t ___mid_3;
	// System.Int32 System.Runtime.CompilerServices.DecimalConstantAttribute::low
	int32_t ___low_4;

public:
	inline static int32_t get_offset_of_scale_0() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t1816610387, ___scale_0)); }
	inline uint8_t get_scale_0() const { return ___scale_0; }
	inline uint8_t* get_address_of_scale_0() { return &___scale_0; }
	inline void set_scale_0(uint8_t value)
	{
		___scale_0 = value;
	}

	inline static int32_t get_offset_of_sign_1() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t1816610387, ___sign_1)); }
	inline bool get_sign_1() const { return ___sign_1; }
	inline bool* get_address_of_sign_1() { return &___sign_1; }
	inline void set_sign_1(bool value)
	{
		___sign_1 = value;
	}

	inline static int32_t get_offset_of_hi_2() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t1816610387, ___hi_2)); }
	inline int32_t get_hi_2() const { return ___hi_2; }
	inline int32_t* get_address_of_hi_2() { return &___hi_2; }
	inline void set_hi_2(int32_t value)
	{
		___hi_2 = value;
	}

	inline static int32_t get_offset_of_mid_3() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t1816610387, ___mid_3)); }
	inline int32_t get_mid_3() const { return ___mid_3; }
	inline int32_t* get_address_of_mid_3() { return &___mid_3; }
	inline void set_mid_3(int32_t value)
	{
		___mid_3 = value;
	}

	inline static int32_t get_offset_of_low_4() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t1816610387, ___low_4)); }
	inline int32_t get_low_4() const { return ___low_4; }
	inline int32_t* get_address_of_low_4() { return &___low_4; }
	inline void set_low_4(int32_t value)
	{
		___low_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONSTANTATTRIBUTE_T1816610387_H
#ifndef FIELDOFFSETATTRIBUTE_T4284704966_H
#define FIELDOFFSETATTRIBUTE_T4284704966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.FieldOffsetAttribute
struct  FieldOffsetAttribute_t4284704966  : public Attribute_t4191498700
{
public:
	// System.Int32 System.Runtime.InteropServices.FieldOffsetAttribute::val
	int32_t ___val_0;

public:
	inline static int32_t get_offset_of_val_0() { return static_cast<int32_t>(offsetof(FieldOffsetAttribute_t4284704966, ___val_0)); }
	inline int32_t get_val_0() const { return ___val_0; }
	inline int32_t* get_address_of_val_0() { return &___val_0; }
	inline void set_val_0(int32_t value)
	{
		___val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDOFFSETATTRIBUTE_T4284704966_H
#ifndef UINT32_T1990758953_H
#define UINT32_T1990758953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t1990758953 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t1990758953, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T1990758953_H
#ifndef INT64_T3417749690_H
#define INT64_T3417749690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3417749690 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3417749690, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3417749690_H
#ifndef COMVISIBLEATTRIBUTE_T2053208884_H
#define COMVISIBLEATTRIBUTE_T2053208884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComVisibleAttribute
struct  ComVisibleAttribute_t2053208884  : public Attribute_t4191498700
{
public:
	// System.Boolean System.Runtime.InteropServices.ComVisibleAttribute::Visible
	bool ___Visible_0;

public:
	inline static int32_t get_offset_of_Visible_0() { return static_cast<int32_t>(offsetof(ComVisibleAttribute_t2053208884, ___Visible_0)); }
	inline bool get_Visible_0() const { return ___Visible_0; }
	inline bool* get_address_of_Visible_0() { return &___Visible_0; }
	inline void set_Visible_0(bool value)
	{
		___Visible_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMVISIBLEATTRIBUTE_T2053208884_H
#ifndef MONOTODOATTRIBUTE_T658195310_H
#define MONOTODOATTRIBUTE_T658195310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t658195310  : public Attribute_t4191498700
{
public:
	// System.String System.MonoTODOAttribute::comment
	String_t* ___comment_0;

public:
	inline static int32_t get_offset_of_comment_0() { return static_cast<int32_t>(offsetof(MonoTODOAttribute_t658195310, ___comment_0)); }
	inline String_t* get_comment_0() const { return ___comment_0; }
	inline String_t** get_address_of_comment_0() { return &___comment_0; }
	inline void set_comment_0(String_t* value)
	{
		___comment_0 = value;
		Il2CppCodeGenWriteBarrier((&___comment_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTODOATTRIBUTE_T658195310_H
#ifndef TABLERANGE_T3970859035_H
#define TABLERANGE_T3970859035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.CodePointIndexer/TableRange
struct  TableRange_t3970859035 
{
public:
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::Start
	int32_t ___Start_0;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::End
	int32_t ___End_1;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::Count
	int32_t ___Count_2;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::IndexStart
	int32_t ___IndexStart_3;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::IndexEnd
	int32_t ___IndexEnd_4;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(TableRange_t3970859035, ___Start_0)); }
	inline int32_t get_Start_0() const { return ___Start_0; }
	inline int32_t* get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(int32_t value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_End_1() { return static_cast<int32_t>(offsetof(TableRange_t3970859035, ___End_1)); }
	inline int32_t get_End_1() const { return ___End_1; }
	inline int32_t* get_address_of_End_1() { return &___End_1; }
	inline void set_End_1(int32_t value)
	{
		___End_1 = value;
	}

	inline static int32_t get_offset_of_Count_2() { return static_cast<int32_t>(offsetof(TableRange_t3970859035, ___Count_2)); }
	inline int32_t get_Count_2() const { return ___Count_2; }
	inline int32_t* get_address_of_Count_2() { return &___Count_2; }
	inline void set_Count_2(int32_t value)
	{
		___Count_2 = value;
	}

	inline static int32_t get_offset_of_IndexStart_3() { return static_cast<int32_t>(offsetof(TableRange_t3970859035, ___IndexStart_3)); }
	inline int32_t get_IndexStart_3() const { return ___IndexStart_3; }
	inline int32_t* get_address_of_IndexStart_3() { return &___IndexStart_3; }
	inline void set_IndexStart_3(int32_t value)
	{
		___IndexStart_3 = value;
	}

	inline static int32_t get_offset_of_IndexEnd_4() { return static_cast<int32_t>(offsetof(TableRange_t3970859035, ___IndexEnd_4)); }
	inline int32_t get_IndexEnd_4() const { return ___IndexEnd_4; }
	inline int32_t* get_address_of_IndexEnd_4() { return &___IndexEnd_4; }
	inline void set_IndexEnd_4(int32_t value)
	{
		___IndexEnd_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TABLERANGE_T3970859035_H
#ifndef SERIALIZABLEATTRIBUTE_T743231655_H
#define SERIALIZABLEATTRIBUTE_T743231655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SerializableAttribute
struct  SerializableAttribute_t743231655  : public Attribute_t4191498700
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEATTRIBUTE_T743231655_H
#ifndef INT32_T3396105074_H
#define INT32_T3396105074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t3396105074 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t3396105074, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T3396105074_H
#ifndef SECURITYATTRIBUTE_T3568639131_H
#define SECURITYATTRIBUTE_T3568639131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAttribute
struct  SecurityAttribute_t3568639131  : public Attribute_t4191498700
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T3568639131_H
#ifndef INATTRIBUTE_T762445862_H
#define INATTRIBUTE_T762445862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InAttribute
struct  InAttribute_t762445862  : public Attribute_t4191498700
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INATTRIBUTE_T762445862_H
#ifndef OPTIONALATTRIBUTE_T3719643932_H
#define OPTIONALATTRIBUTE_T3719643932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.OptionalAttribute
struct  OptionalAttribute_t3719643932  : public Attribute_t4191498700
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPTIONALATTRIBUTE_T3719643932_H
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
#ifndef OBSOLETEATTRIBUTE_T2658563465_H
#define OBSOLETEATTRIBUTE_T2658563465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObsoleteAttribute
struct  ObsoleteAttribute_t2658563465  : public Attribute_t4191498700
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t2658563465, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((&____message_0), value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t2658563465, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSOLETEATTRIBUTE_T2658563465_H
#ifndef OUTATTRIBUTE_T2707251827_H
#define OUTATTRIBUTE_T2707251827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.OutAttribute
struct  OutAttribute_t2707251827  : public Attribute_t4191498700
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTATTRIBUTE_T2707251827_H
#ifndef PARAMARRAYATTRIBUTE_T4275176872_H
#define PARAMARRAYATTRIBUTE_T4275176872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParamArrayAttribute
struct  ParamArrayAttribute_t4275176872  : public Attribute_t4191498700
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMARRAYATTRIBUTE_T4275176872_H
#ifndef BOOLEAN_T809257556_H
#define BOOLEAN_T809257556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t809257556 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t809257556, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t809257556_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t809257556_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t809257556_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T809257556_H
#ifndef DECIMAL_T434558038_H
#define DECIMAL_T434558038_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t434558038 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_6;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_7;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_8;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_9;

public:
	inline static int32_t get_offset_of_flags_6() { return static_cast<int32_t>(offsetof(Decimal_t434558038, ___flags_6)); }
	inline uint32_t get_flags_6() const { return ___flags_6; }
	inline uint32_t* get_address_of_flags_6() { return &___flags_6; }
	inline void set_flags_6(uint32_t value)
	{
		___flags_6 = value;
	}

	inline static int32_t get_offset_of_hi_7() { return static_cast<int32_t>(offsetof(Decimal_t434558038, ___hi_7)); }
	inline uint32_t get_hi_7() const { return ___hi_7; }
	inline uint32_t* get_address_of_hi_7() { return &___hi_7; }
	inline void set_hi_7(uint32_t value)
	{
		___hi_7 = value;
	}

	inline static int32_t get_offset_of_lo_8() { return static_cast<int32_t>(offsetof(Decimal_t434558038, ___lo_8)); }
	inline uint32_t get_lo_8() const { return ___lo_8; }
	inline uint32_t* get_address_of_lo_8() { return &___lo_8; }
	inline void set_lo_8(uint32_t value)
	{
		___lo_8 = value;
	}

	inline static int32_t get_offset_of_mid_9() { return static_cast<int32_t>(offsetof(Decimal_t434558038, ___mid_9)); }
	inline uint32_t get_mid_9() const { return ___mid_9; }
	inline uint32_t* get_address_of_mid_9() { return &___mid_9; }
	inline void set_mid_9(uint32_t value)
	{
		___mid_9 = value;
	}
};

struct Decimal_t434558038_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t434558038  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t434558038  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t434558038  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t434558038  ___One_3;
	// System.Decimal System.Decimal::Zero
	Decimal_t434558038  ___Zero_4;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t434558038  ___MaxValueDiv10_5;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t434558038_StaticFields, ___MinValue_0)); }
	inline Decimal_t434558038  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t434558038 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t434558038  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t434558038_StaticFields, ___MaxValue_1)); }
	inline Decimal_t434558038  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t434558038 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t434558038  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t434558038_StaticFields, ___MinusOne_2)); }
	inline Decimal_t434558038  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t434558038 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t434558038  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t434558038_StaticFields, ___One_3)); }
	inline Decimal_t434558038  get_One_3() const { return ___One_3; }
	inline Decimal_t434558038 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t434558038  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_Zero_4() { return static_cast<int32_t>(offsetof(Decimal_t434558038_StaticFields, ___Zero_4)); }
	inline Decimal_t434558038  get_Zero_4() const { return ___Zero_4; }
	inline Decimal_t434558038 * get_address_of_Zero_4() { return &___Zero_4; }
	inline void set_Zero_4(Decimal_t434558038  value)
	{
		___Zero_4 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_5() { return static_cast<int32_t>(offsetof(Decimal_t434558038_StaticFields, ___MaxValueDiv10_5)); }
	inline Decimal_t434558038  get_MaxValueDiv10_5() const { return ___MaxValueDiv10_5; }
	inline Decimal_t434558038 * get_address_of_MaxValueDiv10_5() { return &___MaxValueDiv10_5; }
	inline void set_MaxValueDiv10_5(Decimal_t434558038  value)
	{
		___MaxValueDiv10_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T434558038_H
#ifndef CLSCOMPLIANTATTRIBUTE_T2371637911_H
#define CLSCOMPLIANTATTRIBUTE_T2371637911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CLSCompliantAttribute
struct  CLSCompliantAttribute_t2371637911  : public Attribute_t4191498700
{
public:
	// System.Boolean System.CLSCompliantAttribute::is_compliant
	bool ___is_compliant_0;

public:
	inline static int32_t get_offset_of_is_compliant_0() { return static_cast<int32_t>(offsetof(CLSCompliantAttribute_t2371637911, ___is_compliant_0)); }
	inline bool get_is_compliant_0() const { return ___is_compliant_0; }
	inline bool* get_address_of_is_compliant_0() { return &___is_compliant_0; }
	inline void set_is_compliant_0(bool value)
	{
		___is_compliant_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLSCOMPLIANTATTRIBUTE_T2371637911_H
#ifndef UINT64_T930108412_H
#define UINT64_T930108412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t930108412 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t930108412, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T930108412_H
#ifndef DOUBLE_T2164843507_H
#define DOUBLE_T2164843507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t2164843507 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t2164843507, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T2164843507_H
#ifndef VOID_T3777767445_H
#define VOID_T3777767445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t3777767445 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T3777767445_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	UIntPtr_t  ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline UIntPtr_t  get_Zero_0() const { return ___Zero_0; }
	inline UIntPtr_t * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(UIntPtr_t  value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef BYTE_T3134016783_H
#define BYTE_T3134016783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t3134016783 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t3134016783, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T3134016783_H
#ifndef SBYTE_T1464287083_H
#define SBYTE_T1464287083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1464287083 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1464287083, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1464287083_H
#ifndef ENUM_T1625055764_H
#define ENUM_T1625055764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1625055764  : public ValueType_t2631698734
{
public:

public:
};

struct Enum_t1625055764_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1242876772* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1625055764_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1242876772* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1242876772** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1242876772* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1625055764_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1625055764_marshaled_com
{
};
#endif // ENUM_T1625055764_H
#ifndef SINGLE_T3691390326_H
#define SINGLE_T3691390326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t3691390326 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t3691390326, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T3691390326_H
#ifndef INT16_T3056507255_H
#define INT16_T3056507255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t3056507255 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t3056507255, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T3056507255_H
#ifndef BINDINGFLAGS_T175332630_H
#define BINDINGFLAGS_T175332630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t175332630 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t175332630, ___value___1)); }
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
#endif // BINDINGFLAGS_T175332630_H
#ifndef CALLINGCONVENTION_T1658657705_H
#define CALLINGCONVENTION_T1658657705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t1658657705 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConvention_t1658657705, ___value___1)); }
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
#endif // CALLINGCONVENTION_T1658657705_H
#ifndef CHARSET_T1262193576_H
#define CHARSET_T1262193576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CharSet
struct  CharSet_t1262193576 
{
public:
	// System.Int32 System.Runtime.InteropServices.CharSet::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharSet_t1262193576, ___value___1)); }
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
#endif // CHARSET_T1262193576_H
#ifndef UNMANAGEDTYPE_T2543506559_H
#define UNMANAGEDTYPE_T2543506559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t2543506559 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnmanagedType_t2543506559, ___value___1)); }
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
#endif // UNMANAGEDTYPE_T2543506559_H
#ifndef ATTRIBUTETARGETS_T3586211010_H
#define ATTRIBUTETARGETS_T3586211010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AttributeTargets
struct  AttributeTargets_t3586211010 
{
public:
	// System.Int32 System.AttributeTargets::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AttributeTargets_t3586211010, ___value___1)); }
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
#endif // ATTRIBUTETARGETS_T3586211010_H
#ifndef SAFEHANDLE_T3566107217_H
#define SAFEHANDLE_T3566107217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t3566107217  : public CriticalFinalizerObject_t3020251672
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	IntPtr_t ___handle_0;
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::invalid_handle_value
	IntPtr_t ___invalid_handle_value_1;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::refcount
	int32_t ___refcount_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::owns_handle
	bool ___owns_handle_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t3566107217, ___handle_0)); }
	inline IntPtr_t get_handle_0() const { return ___handle_0; }
	inline IntPtr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(IntPtr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_invalid_handle_value_1() { return static_cast<int32_t>(offsetof(SafeHandle_t3566107217, ___invalid_handle_value_1)); }
	inline IntPtr_t get_invalid_handle_value_1() const { return ___invalid_handle_value_1; }
	inline IntPtr_t* get_address_of_invalid_handle_value_1() { return &___invalid_handle_value_1; }
	inline void set_invalid_handle_value_1(IntPtr_t value)
	{
		___invalid_handle_value_1 = value;
	}

	inline static int32_t get_offset_of_refcount_2() { return static_cast<int32_t>(offsetof(SafeHandle_t3566107217, ___refcount_2)); }
	inline int32_t get_refcount_2() const { return ___refcount_2; }
	inline int32_t* get_address_of_refcount_2() { return &___refcount_2; }
	inline void set_refcount_2(int32_t value)
	{
		___refcount_2 = value;
	}

	inline static int32_t get_offset_of_owns_handle_3() { return static_cast<int32_t>(offsetof(SafeHandle_t3566107217, ___owns_handle_3)); }
	inline bool get_owns_handle_3() const { return ___owns_handle_3; }
	inline bool* get_address_of_owns_handle_3() { return &___owns_handle_3; }
	inline void set_owns_handle_3(bool value)
	{
		___owns_handle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLE_T3566107217_H
#ifndef DELEGATE_T4158461044_H
#define DELEGATE_T4158461044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t4158461044  : public RuntimeObject
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
	DelegateData_t681174337 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t4158461044, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t4158461044, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t4158461044, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t4158461044, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t4158461044, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t4158461044, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t4158461044, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t4158461044, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t4158461044, ___data_8)); }
	inline DelegateData_t681174337 * get_data_8() const { return ___data_8; }
	inline DelegateData_t681174337 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t681174337 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T4158461044_H
#ifndef ARGITERATOR_T3152761665_H
#define ARGITERATOR_T3152761665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgIterator
struct  ArgIterator_t3152761665 
{
public:
	// System.IntPtr System.ArgIterator::sig
	IntPtr_t ___sig_0;
	// System.IntPtr System.ArgIterator::args
	IntPtr_t ___args_1;
	// System.Int32 System.ArgIterator::next_arg
	int32_t ___next_arg_2;
	// System.Int32 System.ArgIterator::num_args
	int32_t ___num_args_3;

public:
	inline static int32_t get_offset_of_sig_0() { return static_cast<int32_t>(offsetof(ArgIterator_t3152761665, ___sig_0)); }
	inline IntPtr_t get_sig_0() const { return ___sig_0; }
	inline IntPtr_t* get_address_of_sig_0() { return &___sig_0; }
	inline void set_sig_0(IntPtr_t value)
	{
		___sig_0 = value;
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(ArgIterator_t3152761665, ___args_1)); }
	inline IntPtr_t get_args_1() const { return ___args_1; }
	inline IntPtr_t* get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(IntPtr_t value)
	{
		___args_1 = value;
	}

	inline static int32_t get_offset_of_next_arg_2() { return static_cast<int32_t>(offsetof(ArgIterator_t3152761665, ___next_arg_2)); }
	inline int32_t get_next_arg_2() const { return ___next_arg_2; }
	inline int32_t* get_address_of_next_arg_2() { return &___next_arg_2; }
	inline void set_next_arg_2(int32_t value)
	{
		___next_arg_2 = value;
	}

	inline static int32_t get_offset_of_num_args_3() { return static_cast<int32_t>(offsetof(ArgIterator_t3152761665, ___num_args_3)); }
	inline int32_t get_num_args_3() const { return ___num_args_3; }
	inline int32_t* get_address_of_num_args_3() { return &___num_args_3; }
	inline void set_num_args_3(int32_t value)
	{
		___num_args_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGITERATOR_T3152761665_H
#ifndef RUNTIMEARGUMENTHANDLE_T3837967399_H
#define RUNTIMEARGUMENTHANDLE_T3837967399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeArgumentHandle
struct  RuntimeArgumentHandle_t3837967399 
{
public:
	// System.IntPtr System.RuntimeArgumentHandle::args
	IntPtr_t ___args_0;

public:
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(RuntimeArgumentHandle_t3837967399, ___args_0)); }
	inline IntPtr_t get_args_0() const { return ___args_0; }
	inline IntPtr_t* get_address_of_args_0() { return &___args_0; }
	inline void set_args_0(IntPtr_t value)
	{
		___args_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARGUMENTHANDLE_T3837967399_H
#ifndef RUNTIMEFIELDHANDLE_T550731030_H
#define RUNTIMEFIELDHANDLE_T550731030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t550731030 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t550731030, ___value_0)); }
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
#endif // RUNTIMEFIELDHANDLE_T550731030_H
#ifndef RUNTIMETYPEHANDLE_T44831102_H
#define RUNTIMETYPEHANDLE_T44831102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t44831102 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t44831102, ___value_0)); }
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
#endif // RUNTIMETYPEHANDLE_T44831102_H
#ifndef MONODOCUMENTATIONNOTEATTRIBUTE_T3346012765_H
#define MONODOCUMENTATIONNOTEATTRIBUTE_T3346012765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoDocumentationNoteAttribute
struct  MonoDocumentationNoteAttribute_t3346012765  : public MonoTODOAttribute_t658195310
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONODOCUMENTATIONNOTEATTRIBUTE_T3346012765_H
#ifndef SAFEHANDLEZEROORMINUSONEISINVALID_T691874559_H
#define SAFEHANDLEZEROORMINUSONEISINVALID_T691874559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct  SafeHandleZeroOrMinusOneIsInvalid_t691874559  : public SafeHandle_t3566107217
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLEZEROORMINUSONEISINVALID_T691874559_H
#ifndef ATTRIBUTEUSAGEATTRIBUTE_T3650409056_H
#define ATTRIBUTEUSAGEATTRIBUTE_T3650409056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AttributeUsageAttribute
struct  AttributeUsageAttribute_t3650409056  : public Attribute_t4191498700
{
public:
	// System.AttributeTargets System.AttributeUsageAttribute::valid_on
	int32_t ___valid_on_0;
	// System.Boolean System.AttributeUsageAttribute::allow_multiple
	bool ___allow_multiple_1;
	// System.Boolean System.AttributeUsageAttribute::inherited
	bool ___inherited_2;

public:
	inline static int32_t get_offset_of_valid_on_0() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_t3650409056, ___valid_on_0)); }
	inline int32_t get_valid_on_0() const { return ___valid_on_0; }
	inline int32_t* get_address_of_valid_on_0() { return &___valid_on_0; }
	inline void set_valid_on_0(int32_t value)
	{
		___valid_on_0 = value;
	}

	inline static int32_t get_offset_of_allow_multiple_1() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_t3650409056, ___allow_multiple_1)); }
	inline bool get_allow_multiple_1() const { return ___allow_multiple_1; }
	inline bool* get_address_of_allow_multiple_1() { return &___allow_multiple_1; }
	inline void set_allow_multiple_1(bool value)
	{
		___allow_multiple_1 = value;
	}

	inline static int32_t get_offset_of_inherited_2() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_t3650409056, ___inherited_2)); }
	inline bool get_inherited_2() const { return ___inherited_2; }
	inline bool* get_address_of_inherited_2() { return &___inherited_2; }
	inline void set_inherited_2(bool value)
	{
		___inherited_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEUSAGEATTRIBUTE_T3650409056_H
#ifndef MULTICASTDELEGATE_T1928935903_H
#define MULTICASTDELEGATE_T1928935903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t1928935903  : public Delegate_t4158461044
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t1928935903 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t1928935903 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1928935903, ___prev_9)); }
	inline MulticastDelegate_t1928935903 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t1928935903 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t1928935903 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1928935903, ___kpm_next_10)); }
	inline MulticastDelegate_t1928935903 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t1928935903 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t1928935903 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T1928935903_H
#ifndef MARSHALASATTRIBUTE_T3945857041_H
#define MARSHALASATTRIBUTE_T3945857041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.MarshalAsAttribute
struct  MarshalAsAttribute_t3945857041  : public Attribute_t4191498700
{
public:
	// System.Runtime.InteropServices.UnmanagedType System.Runtime.InteropServices.MarshalAsAttribute::utype
	int32_t ___utype_0;
	// System.Runtime.InteropServices.UnmanagedType System.Runtime.InteropServices.MarshalAsAttribute::ArraySubType
	int32_t ___ArraySubType_1;
	// System.String System.Runtime.InteropServices.MarshalAsAttribute::MarshalCookie
	String_t* ___MarshalCookie_2;
	// System.String System.Runtime.InteropServices.MarshalAsAttribute::MarshalType
	String_t* ___MarshalType_3;
	// System.Type System.Runtime.InteropServices.MarshalAsAttribute::MarshalTypeRef
	Type_t * ___MarshalTypeRef_4;
	// System.Int32 System.Runtime.InteropServices.MarshalAsAttribute::SizeConst
	int32_t ___SizeConst_5;
	// System.Int16 System.Runtime.InteropServices.MarshalAsAttribute::SizeParamIndex
	int16_t ___SizeParamIndex_6;

public:
	inline static int32_t get_offset_of_utype_0() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3945857041, ___utype_0)); }
	inline int32_t get_utype_0() const { return ___utype_0; }
	inline int32_t* get_address_of_utype_0() { return &___utype_0; }
	inline void set_utype_0(int32_t value)
	{
		___utype_0 = value;
	}

	inline static int32_t get_offset_of_ArraySubType_1() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3945857041, ___ArraySubType_1)); }
	inline int32_t get_ArraySubType_1() const { return ___ArraySubType_1; }
	inline int32_t* get_address_of_ArraySubType_1() { return &___ArraySubType_1; }
	inline void set_ArraySubType_1(int32_t value)
	{
		___ArraySubType_1 = value;
	}

	inline static int32_t get_offset_of_MarshalCookie_2() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3945857041, ___MarshalCookie_2)); }
	inline String_t* get_MarshalCookie_2() const { return ___MarshalCookie_2; }
	inline String_t** get_address_of_MarshalCookie_2() { return &___MarshalCookie_2; }
	inline void set_MarshalCookie_2(String_t* value)
	{
		___MarshalCookie_2 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalCookie_2), value);
	}

	inline static int32_t get_offset_of_MarshalType_3() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3945857041, ___MarshalType_3)); }
	inline String_t* get_MarshalType_3() const { return ___MarshalType_3; }
	inline String_t** get_address_of_MarshalType_3() { return &___MarshalType_3; }
	inline void set_MarshalType_3(String_t* value)
	{
		___MarshalType_3 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalType_3), value);
	}

	inline static int32_t get_offset_of_MarshalTypeRef_4() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3945857041, ___MarshalTypeRef_4)); }
	inline Type_t * get_MarshalTypeRef_4() const { return ___MarshalTypeRef_4; }
	inline Type_t ** get_address_of_MarshalTypeRef_4() { return &___MarshalTypeRef_4; }
	inline void set_MarshalTypeRef_4(Type_t * value)
	{
		___MarshalTypeRef_4 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalTypeRef_4), value);
	}

	inline static int32_t get_offset_of_SizeConst_5() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3945857041, ___SizeConst_5)); }
	inline int32_t get_SizeConst_5() const { return ___SizeConst_5; }
	inline int32_t* get_address_of_SizeConst_5() { return &___SizeConst_5; }
	inline void set_SizeConst_5(int32_t value)
	{
		___SizeConst_5 = value;
	}

	inline static int32_t get_offset_of_SizeParamIndex_6() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3945857041, ___SizeParamIndex_6)); }
	inline int16_t get_SizeParamIndex_6() const { return ___SizeParamIndex_6; }
	inline int16_t* get_address_of_SizeParamIndex_6() { return &___SizeParamIndex_6; }
	inline void set_SizeParamIndex_6(int16_t value)
	{
		___SizeParamIndex_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALASATTRIBUTE_T3945857041_H
#ifndef TYPEDREFERENCE_T3763201435_H
#define TYPEDREFERENCE_T3763201435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypedReference
struct  TypedReference_t3763201435 
{
public:
	// System.RuntimeTypeHandle System.TypedReference::type
	RuntimeTypeHandle_t44831102  ___type_0;
	// System.IntPtr System.TypedReference::value
	IntPtr_t ___value_1;
	// System.IntPtr System.TypedReference::klass
	IntPtr_t ___klass_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(TypedReference_t3763201435, ___type_0)); }
	inline RuntimeTypeHandle_t44831102  get_type_0() const { return ___type_0; }
	inline RuntimeTypeHandle_t44831102 * get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(RuntimeTypeHandle_t44831102  value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(TypedReference_t3763201435, ___value_1)); }
	inline IntPtr_t get_value_1() const { return ___value_1; }
	inline IntPtr_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(IntPtr_t value)
	{
		___value_1 = value;
	}

	inline static int32_t get_offset_of_klass_2() { return static_cast<int32_t>(offsetof(TypedReference_t3763201435, ___klass_2)); }
	inline IntPtr_t get_klass_2() const { return ___klass_2; }
	inline IntPtr_t* get_address_of_klass_2() { return &___klass_2; }
	inline void set_klass_2(IntPtr_t value)
	{
		___klass_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDREFERENCE_T3763201435_H
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
	RuntimeTypeHandle_t44831102  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t44831102  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t44831102 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t44831102  value)
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
	TypeU5BU5D_t677980951* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t126741728 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t126741728 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t126741728 * ___FilterNameIgnoreCase_6;
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
	inline TypeU5BU5D_t677980951* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t677980951** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t677980951* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t126741728 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t126741728 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t126741728 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t126741728 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t126741728 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t126741728 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t126741728 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t126741728 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t126741728 * value)
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
#ifndef DLLIMPORTATTRIBUTE_T1348723830_H
#define DLLIMPORTATTRIBUTE_T1348723830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DllImportAttribute
struct  DllImportAttribute_t1348723830  : public Attribute_t4191498700
{
public:
	// System.Runtime.InteropServices.CallingConvention System.Runtime.InteropServices.DllImportAttribute::CallingConvention
	int32_t ___CallingConvention_0;
	// System.Runtime.InteropServices.CharSet System.Runtime.InteropServices.DllImportAttribute::CharSet
	int32_t ___CharSet_1;
	// System.String System.Runtime.InteropServices.DllImportAttribute::Dll
	String_t* ___Dll_2;
	// System.String System.Runtime.InteropServices.DllImportAttribute::EntryPoint
	String_t* ___EntryPoint_3;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::ExactSpelling
	bool ___ExactSpelling_4;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::PreserveSig
	bool ___PreserveSig_5;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::SetLastError
	bool ___SetLastError_6;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::BestFitMapping
	bool ___BestFitMapping_7;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::ThrowOnUnmappableChar
	bool ___ThrowOnUnmappableChar_8;

public:
	inline static int32_t get_offset_of_CallingConvention_0() { return static_cast<int32_t>(offsetof(DllImportAttribute_t1348723830, ___CallingConvention_0)); }
	inline int32_t get_CallingConvention_0() const { return ___CallingConvention_0; }
	inline int32_t* get_address_of_CallingConvention_0() { return &___CallingConvention_0; }
	inline void set_CallingConvention_0(int32_t value)
	{
		___CallingConvention_0 = value;
	}

	inline static int32_t get_offset_of_CharSet_1() { return static_cast<int32_t>(offsetof(DllImportAttribute_t1348723830, ___CharSet_1)); }
	inline int32_t get_CharSet_1() const { return ___CharSet_1; }
	inline int32_t* get_address_of_CharSet_1() { return &___CharSet_1; }
	inline void set_CharSet_1(int32_t value)
	{
		___CharSet_1 = value;
	}

	inline static int32_t get_offset_of_Dll_2() { return static_cast<int32_t>(offsetof(DllImportAttribute_t1348723830, ___Dll_2)); }
	inline String_t* get_Dll_2() const { return ___Dll_2; }
	inline String_t** get_address_of_Dll_2() { return &___Dll_2; }
	inline void set_Dll_2(String_t* value)
	{
		___Dll_2 = value;
		Il2CppCodeGenWriteBarrier((&___Dll_2), value);
	}

	inline static int32_t get_offset_of_EntryPoint_3() { return static_cast<int32_t>(offsetof(DllImportAttribute_t1348723830, ___EntryPoint_3)); }
	inline String_t* get_EntryPoint_3() const { return ___EntryPoint_3; }
	inline String_t** get_address_of_EntryPoint_3() { return &___EntryPoint_3; }
	inline void set_EntryPoint_3(String_t* value)
	{
		___EntryPoint_3 = value;
		Il2CppCodeGenWriteBarrier((&___EntryPoint_3), value);
	}

	inline static int32_t get_offset_of_ExactSpelling_4() { return static_cast<int32_t>(offsetof(DllImportAttribute_t1348723830, ___ExactSpelling_4)); }
	inline bool get_ExactSpelling_4() const { return ___ExactSpelling_4; }
	inline bool* get_address_of_ExactSpelling_4() { return &___ExactSpelling_4; }
	inline void set_ExactSpelling_4(bool value)
	{
		___ExactSpelling_4 = value;
	}

	inline static int32_t get_offset_of_PreserveSig_5() { return static_cast<int32_t>(offsetof(DllImportAttribute_t1348723830, ___PreserveSig_5)); }
	inline bool get_PreserveSig_5() const { return ___PreserveSig_5; }
	inline bool* get_address_of_PreserveSig_5() { return &___PreserveSig_5; }
	inline void set_PreserveSig_5(bool value)
	{
		___PreserveSig_5 = value;
	}

	inline static int32_t get_offset_of_SetLastError_6() { return static_cast<int32_t>(offsetof(DllImportAttribute_t1348723830, ___SetLastError_6)); }
	inline bool get_SetLastError_6() const { return ___SetLastError_6; }
	inline bool* get_address_of_SetLastError_6() { return &___SetLastError_6; }
	inline void set_SetLastError_6(bool value)
	{
		___SetLastError_6 = value;
	}

	inline static int32_t get_offset_of_BestFitMapping_7() { return static_cast<int32_t>(offsetof(DllImportAttribute_t1348723830, ___BestFitMapping_7)); }
	inline bool get_BestFitMapping_7() const { return ___BestFitMapping_7; }
	inline bool* get_address_of_BestFitMapping_7() { return &___BestFitMapping_7; }
	inline void set_BestFitMapping_7(bool value)
	{
		___BestFitMapping_7 = value;
	}

	inline static int32_t get_offset_of_ThrowOnUnmappableChar_8() { return static_cast<int32_t>(offsetof(DllImportAttribute_t1348723830, ___ThrowOnUnmappableChar_8)); }
	inline bool get_ThrowOnUnmappableChar_8() const { return ___ThrowOnUnmappableChar_8; }
	inline bool* get_address_of_ThrowOnUnmappableChar_8() { return &___ThrowOnUnmappableChar_8; }
	inline void set_ThrowOnUnmappableChar_8(bool value)
	{
		___ThrowOnUnmappableChar_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DLLIMPORTATTRIBUTE_T1348723830_H
#ifndef SAFEWAITHANDLE_T1574405678_H
#define SAFEWAITHANDLE_T1574405678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct  SafeWaitHandle_t1574405678  : public SafeHandleZeroOrMinusOneIsInvalid_t691874559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEWAITHANDLE_T1574405678_H
#ifndef ASYNCCALLBACK_T2256430285_H
#define ASYNCCALLBACK_T2256430285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t2256430285  : public MulticastDelegate_t1928935903
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T2256430285_H
#ifndef SWAPPER_T2864664652_H
#define SWAPPER_T2864664652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array/Swapper
struct  Swapper_t2864664652  : public MulticastDelegate_t1928935903
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWAPPER_T2864664652_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize0 = { sizeof (U3CModuleU3E_t3825170570), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1 = { sizeof (RuntimeObject), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2 = { sizeof (ValueType_t2631698734), sizeof(ValueType_t2631698734_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3 = { sizeof (Attribute_t4191498700), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5 = { sizeof (Int32_t3396105074)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5[3] = 
{
	0,
	0,
	Int32_t3396105074::get_offset_of_m_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize9 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize10 = { sizeof (SerializableAttribute_t743231655), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize11 = { sizeof (AttributeUsageAttribute_t3650409056), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable11[3] = 
{
	AttributeUsageAttribute_t3650409056::get_offset_of_valid_on_0(),
	AttributeUsageAttribute_t3650409056::get_offset_of_allow_multiple_1(),
	AttributeUsageAttribute_t3650409056::get_offset_of_inherited_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize12 = { sizeof (ComVisibleAttribute_t2053208884), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable12[1] = 
{
	ComVisibleAttribute_t2053208884::get_offset_of_Visible_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize13 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize14 = { sizeof (Int64_t3417749690)+ sizeof (RuntimeObject), sizeof(int64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable14[1] = 
{
	Int64_t3417749690::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize15 = { sizeof (UInt32_t1990758953)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable15[1] = 
{
	UInt32_t1990758953::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize16 = { sizeof (CLSCompliantAttribute_t2371637911), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable16[1] = 
{
	CLSCompliantAttribute_t2371637911::get_offset_of_is_compliant_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize17 = { sizeof (UInt64_t930108412)+ sizeof (RuntimeObject), sizeof(uint64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable17[1] = 
{
	UInt64_t930108412::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize18 = { sizeof (Byte_t3134016783)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable18[3] = 
{
	0,
	0,
	Byte_t3134016783::get_offset_of_m_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize19 = { sizeof (SByte_t1464287083)+ sizeof (RuntimeObject), sizeof(int8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable19[1] = 
{
	SByte_t1464287083::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize20 = { sizeof (Int16_t3056507255)+ sizeof (RuntimeObject), sizeof(int16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable20[1] = 
{
	Int16_t3056507255::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize21 = { sizeof (UInt16_t923891940)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable21[3] = 
{
	0,
	0,
	UInt16_t923891940::get_offset_of_m_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize22 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize23 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize24 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize25 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize26 = { sizeof (Char_t1295772697)+ sizeof (RuntimeObject), 1, sizeof(Char_t1295772697_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable26[10] = 
{
	0,
	0,
	Char_t1295772697::get_offset_of_m_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Char_t1295772697_StaticFields::get_offset_of_category_data_3(),
	Char_t1295772697_StaticFields::get_offset_of_numeric_data_4(),
	Char_t1295772697_StaticFields::get_offset_of_numeric_data_values_5(),
	Char_t1295772697_StaticFields::get_offset_of_to_lower_data_low_6(),
	Char_t1295772697_StaticFields::get_offset_of_to_lower_data_high_7(),
	Char_t1295772697_StaticFields::get_offset_of_to_upper_data_low_8(),
	Char_t1295772697_StaticFields::get_offset_of_to_upper_data_high_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize27 = { sizeof (String_t), sizeof(char*), sizeof(String_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable27[4] = 
{
	String_t::get_offset_of_length_0(),
	String_t::get_offset_of_start_char_1(),
	String_t_StaticFields::get_offset_of_Empty_2(),
	String_t_StaticFields::get_offset_of_WhiteChars_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize28 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize29 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize30 = { sizeof (Single_t3691390326)+ sizeof (RuntimeObject), sizeof(float), 0, 0 };
extern const int32_t g_FieldOffsetTable30[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	Single_t3691390326::get_offset_of_m_value_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize31 = { sizeof (Double_t2164843507)+ sizeof (RuntimeObject), sizeof(double), 0, 0 };
extern const int32_t g_FieldOffsetTable31[14] = 
{
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
	Double_t2164843507::get_offset_of_m_value_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize32 = { sizeof (Decimal_t434558038)+ sizeof (RuntimeObject), sizeof(Decimal_t434558038 ), sizeof(Decimal_t434558038_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable32[10] = 
{
	Decimal_t434558038_StaticFields::get_offset_of_MinValue_0(),
	Decimal_t434558038_StaticFields::get_offset_of_MaxValue_1(),
	Decimal_t434558038_StaticFields::get_offset_of_MinusOne_2(),
	Decimal_t434558038_StaticFields::get_offset_of_One_3(),
	Decimal_t434558038_StaticFields::get_offset_of_Zero_4(),
	Decimal_t434558038_StaticFields::get_offset_of_MaxValueDiv10_5(),
	Decimal_t434558038::get_offset_of_flags_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Decimal_t434558038::get_offset_of_hi_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Decimal_t434558038::get_offset_of_lo_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Decimal_t434558038::get_offset_of_mid_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize33 = { sizeof (Boolean_t809257556)+ sizeof (RuntimeObject), 4, sizeof(Boolean_t809257556_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable33[3] = 
{
	Boolean_t809257556_StaticFields::get_offset_of_FalseString_0(),
	Boolean_t809257556_StaticFields::get_offset_of_TrueString_1(),
	Boolean_t809257556::get_offset_of_m_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize34 = { sizeof (IntPtr_t)+ sizeof (RuntimeObject), sizeof(intptr_t), sizeof(IntPtr_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable34[2] = 
{
	IntPtr_t::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IntPtr_t_StaticFields::get_offset_of_Zero_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize35 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize36 = { sizeof (UIntPtr_t)+ sizeof (RuntimeObject), sizeof(uintptr_t), sizeof(UIntPtr_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable36[2] = 
{
	UIntPtr_t_StaticFields::get_offset_of_Zero_0(),
	UIntPtr_t::get_offset_of__pointer_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize37 = { sizeof (MulticastDelegate_t1928935903), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable37[2] = 
{
	MulticastDelegate_t1928935903::get_offset_of_prev_9(),
	MulticastDelegate_t1928935903::get_offset_of_kpm_next_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize38 = { sizeof (Delegate_t4158461044), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable38[9] = 
{
	Delegate_t4158461044::get_offset_of_method_ptr_0(),
	Delegate_t4158461044::get_offset_of_invoke_impl_1(),
	Delegate_t4158461044::get_offset_of_m_target_2(),
	Delegate_t4158461044::get_offset_of_method_3(),
	Delegate_t4158461044::get_offset_of_delegate_trampoline_4(),
	Delegate_t4158461044::get_offset_of_method_code_5(),
	Delegate_t4158461044::get_offset_of_method_info_6(),
	Delegate_t4158461044::get_offset_of_original_method_info_7(),
	Delegate_t4158461044::get_offset_of_data_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize39 = { sizeof (Enum_t1625055764), sizeof(Enum_t1625055764_marshaled_pinvoke), sizeof(Enum_t1625055764_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable39[1] = 
{
	Enum_t1625055764_StaticFields::get_offset_of_split_char_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize40 = { sizeof (RuntimeArray), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize41 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable41[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize42 = { sizeof (SimpleEnumerator_t1127930083), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable42[3] = 
{
	SimpleEnumerator_t1127930083::get_offset_of_enumeratee_0(),
	SimpleEnumerator_t1127930083::get_offset_of_currentpos_1(),
	SimpleEnumerator_t1127930083::get_offset_of_length_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize43 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable43[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize44 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable44[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize45 = { sizeof (Swapper_t2864664652), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize46 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize47 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize48 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize49 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize50 = { sizeof (Void_t3777767445)+ sizeof (RuntimeObject), 1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize51 = { sizeof (Type_t), -1, sizeof(Type_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable51[8] = 
{
	0,
	Type_t::get_offset_of__impl_1(),
	Type_t_StaticFields::get_offset_of_Delimiter_2(),
	Type_t_StaticFields::get_offset_of_EmptyTypes_3(),
	Type_t_StaticFields::get_offset_of_FilterAttribute_4(),
	Type_t_StaticFields::get_offset_of_FilterName_5(),
	Type_t_StaticFields::get_offset_of_FilterNameIgnoreCase_6(),
	Type_t_StaticFields::get_offset_of_Missing_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize52 = { sizeof (MemberInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize53 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize54 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize55 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize56 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize57 = { sizeof (Exception_t2901738898), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable57[11] = 
{
	Exception_t2901738898::get_offset_of_trace_ips_0(),
	Exception_t2901738898::get_offset_of_inner_exception_1(),
	Exception_t2901738898::get_offset_of_message_2(),
	Exception_t2901738898::get_offset_of_help_link_3(),
	Exception_t2901738898::get_offset_of_class_name_4(),
	Exception_t2901738898::get_offset_of_stack_trace_5(),
	Exception_t2901738898::get_offset_of__remoteStackTraceString_6(),
	Exception_t2901738898::get_offset_of_remote_stack_index_7(),
	Exception_t2901738898::get_offset_of_hresult_8(),
	Exception_t2901738898::get_offset_of_source_9(),
	Exception_t2901738898::get_offset_of__data_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize58 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize59 = { sizeof (RuntimeFieldHandle_t550731030)+ sizeof (RuntimeObject), sizeof(RuntimeFieldHandle_t550731030 ), 0, 0 };
extern const int32_t g_FieldOffsetTable59[1] = 
{
	RuntimeFieldHandle_t550731030::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize60 = { sizeof (RuntimeTypeHandle_t44831102)+ sizeof (RuntimeObject), sizeof(RuntimeTypeHandle_t44831102 ), 0, 0 };
extern const int32_t g_FieldOffsetTable60[1] = 
{
	RuntimeTypeHandle_t44831102::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize61 = { sizeof (ParamArrayAttribute_t4275176872), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize62 = { sizeof (OutAttribute_t2707251827), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize63 = { sizeof (ObsoleteAttribute_t2658563465), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable63[2] = 
{
	ObsoleteAttribute_t2658563465::get_offset_of__message_0(),
	ObsoleteAttribute_t2658563465::get_offset_of__error_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize64 = { sizeof (DllImportAttribute_t1348723830), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable64[9] = 
{
	DllImportAttribute_t1348723830::get_offset_of_CallingConvention_0(),
	DllImportAttribute_t1348723830::get_offset_of_CharSet_1(),
	DllImportAttribute_t1348723830::get_offset_of_Dll_2(),
	DllImportAttribute_t1348723830::get_offset_of_EntryPoint_3(),
	DllImportAttribute_t1348723830::get_offset_of_ExactSpelling_4(),
	DllImportAttribute_t1348723830::get_offset_of_PreserveSig_5(),
	DllImportAttribute_t1348723830::get_offset_of_SetLastError_6(),
	DllImportAttribute_t1348723830::get_offset_of_BestFitMapping_7(),
	DllImportAttribute_t1348723830::get_offset_of_ThrowOnUnmappableChar_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize65 = { sizeof (MarshalAsAttribute_t3945857041), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable65[7] = 
{
	MarshalAsAttribute_t3945857041::get_offset_of_utype_0(),
	MarshalAsAttribute_t3945857041::get_offset_of_ArraySubType_1(),
	MarshalAsAttribute_t3945857041::get_offset_of_MarshalCookie_2(),
	MarshalAsAttribute_t3945857041::get_offset_of_MarshalType_3(),
	MarshalAsAttribute_t3945857041::get_offset_of_MarshalTypeRef_4(),
	MarshalAsAttribute_t3945857041::get_offset_of_SizeConst_5(),
	MarshalAsAttribute_t3945857041::get_offset_of_SizeParamIndex_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize66 = { sizeof (InAttribute_t762445862), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize67 = { sizeof (SecurityAttribute_t3568639131), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize68 = { sizeof (GuidAttribute_t2479826699), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable68[1] = 
{
	GuidAttribute_t2479826699::get_offset_of_guidValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize69 = { sizeof (AssemblyCultureAttribute_t882539991), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable69[1] = 
{
	AssemblyCultureAttribute_t882539991::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize70 = { sizeof (AssemblyVersionAttribute_t488201353), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable70[1] = 
{
	AssemblyVersionAttribute_t488201353::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize71 = { sizeof (ComImportAttribute_t2904199136), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize72 = { sizeof (OptionalAttribute_t3719643932), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize73 = { sizeof (FixedBufferAttribute_t1612864383), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable73[2] = 
{
	FixedBufferAttribute_t1612864383::get_offset_of_elementType_0(),
	FixedBufferAttribute_t1612864383::get_offset_of_length_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize74 = { sizeof (CompilerGeneratedAttribute_t677183497), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize75 = { sizeof (InternalsVisibleToAttribute_t3580258490), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable75[2] = 
{
	InternalsVisibleToAttribute_t3580258490::get_offset_of_assemblyName_0(),
	InternalsVisibleToAttribute_t3580258490::get_offset_of_all_visible_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize76 = { sizeof (RuntimeCompatibilityAttribute_t523139156), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable76[1] = 
{
	RuntimeCompatibilityAttribute_t523139156::get_offset_of_wrap_non_exception_throws_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize77 = { sizeof (DebuggerHiddenAttribute_t1721216086), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize78 = { sizeof (DefaultMemberAttribute_t530311905), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable78[1] = 
{
	DefaultMemberAttribute_t530311905::get_offset_of_member_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize79 = { sizeof (DecimalConstantAttribute_t1816610387), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable79[5] = 
{
	DecimalConstantAttribute_t1816610387::get_offset_of_scale_0(),
	DecimalConstantAttribute_t1816610387::get_offset_of_sign_1(),
	DecimalConstantAttribute_t1816610387::get_offset_of_hi_2(),
	DecimalConstantAttribute_t1816610387::get_offset_of_mid_3(),
	DecimalConstantAttribute_t1816610387::get_offset_of_low_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize80 = { sizeof (FieldOffsetAttribute_t4284704966), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable80[1] = 
{
	FieldOffsetAttribute_t4284704966::get_offset_of_val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize81 = { sizeof (RuntimeArgumentHandle_t3837967399)+ sizeof (RuntimeObject), sizeof(RuntimeArgumentHandle_t3837967399 ), 0, 0 };
extern const int32_t g_FieldOffsetTable81[1] = 
{
	RuntimeArgumentHandle_t3837967399::get_offset_of_args_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize82 = { sizeof (AsyncCallback_t2256430285), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize83 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize84 = { sizeof (TypedReference_t3763201435)+ sizeof (RuntimeObject), sizeof(TypedReference_t3763201435 ), 0, 0 };
extern const int32_t g_FieldOffsetTable84[3] = 
{
	TypedReference_t3763201435::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TypedReference_t3763201435::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TypedReference_t3763201435::get_offset_of_klass_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize85 = { sizeof (ArgIterator_t3152761665)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable85[4] = 
{
	ArgIterator_t3152761665::get_offset_of_sig_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ArgIterator_t3152761665::get_offset_of_args_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ArgIterator_t3152761665::get_offset_of_next_arg_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ArgIterator_t3152761665::get_offset_of_num_args_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize86 = { sizeof (MarshalByRefObject_t2659341205), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable86[1] = 
{
	MarshalByRefObject_t2659341205::get_offset_of__identity_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize87 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable87[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize88 = { sizeof (RuntimeHelpers_t4173041793), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize89 = { sizeof (Locale_t49023510), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize90 = { sizeof (MonoTODOAttribute_t658195310), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable90[1] = 
{
	MonoTODOAttribute_t658195310::get_offset_of_comment_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize91 = { sizeof (MonoDocumentationNoteAttribute_t3346012765), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize92 = { sizeof (SafeHandleZeroOrMinusOneIsInvalid_t691874559), sizeof(void*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize93 = { sizeof (SafeWaitHandle_t1574405678), sizeof(void*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize94 = { sizeof (CodePointIndexer_t3628685573), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable94[4] = 
{
	CodePointIndexer_t3628685573::get_offset_of_ranges_0(),
	CodePointIndexer_t3628685573::get_offset_of_TotalCount_1(),
	CodePointIndexer_t3628685573::get_offset_of_defaultIndex_2(),
	CodePointIndexer_t3628685573::get_offset_of_defaultCP_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize95 = { sizeof (TableRange_t3970859035)+ sizeof (RuntimeObject), sizeof(TableRange_t3970859035 ), 0, 0 };
extern const int32_t g_FieldOffsetTable95[5] = 
{
	TableRange_t3970859035::get_offset_of_Start_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t3970859035::get_offset_of_End_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t3970859035::get_offset_of_Count_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t3970859035::get_offset_of_IndexStart_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t3970859035::get_offset_of_IndexEnd_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize96 = { sizeof (TailoringInfo_t1003695400), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable96[4] = 
{
	TailoringInfo_t1003695400::get_offset_of_LCID_0(),
	TailoringInfo_t1003695400::get_offset_of_TailoringIndex_1(),
	TailoringInfo_t1003695400::get_offset_of_TailoringCount_2(),
	TailoringInfo_t1003695400::get_offset_of_FrenchSort_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize97 = { sizeof (Contraction_t3317909793), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable97[3] = 
{
	Contraction_t3317909793::get_offset_of_Source_0(),
	Contraction_t3317909793::get_offset_of_Replacement_1(),
	Contraction_t3317909793::get_offset_of_SortKey_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize98 = { sizeof (ContractionComparer_t1081760995), -1, sizeof(ContractionComparer_t1081760995_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable98[1] = 
{
	ContractionComparer_t1081760995_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize99 = { sizeof (Level2Map_t4055759738), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable99[2] = 
{
	Level2Map_t4055759738::get_offset_of_Source_0(),
	Level2Map_t4055759738::get_offset_of_Replace_1(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
