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

// testC2
struct testC2_t3293762314;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t877510051;
// UnityEngine.Component
struct Component_t356908791;
// System.String
struct String_t;
// UnityEngine.Events.UnityAction`1<Msg>
struct UnityAction_1_t1144153515;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t84728993;
// System.Type
struct Type_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.Events.UnityEvent`1<Msg>
struct UnityEvent_1_t602705656;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3838248430;
// Msg
struct Msg_t838862497;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t370370289;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3311776098;
// System.Char[]
struct CharU5BU5D_t2644401608;
// System.Object[]
struct ObjectU5BU5D_t769195566;
// System.Void
struct Void_t380066806;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3657175950;
// System.Type[]
struct TypeU5BU5D_t3074309185;
// System.Reflection.MemberFilter
struct MemberFilter_t1597292642;
// System.IAsyncResult
struct IAsyncResult_t1106291772;
// System.AsyncCallback
struct AsyncCallback_t4099278057;
// DataHandler
struct DataHandler_t122947775;
// MyEvent
struct MyEvent_t1850193353;
// UserRole
struct UserRole_t477336786;

extern RuntimeClass* DataHandler_t122947775_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAction_1_t1144153515_il2cpp_TypeInfo_var;
extern RuntimeClass* MyEvent_t1850193353_il2cpp_TypeInfo_var;
extern const RuntimeMethod* testC2_callback_m1132650014_RuntimeMethod_var;
extern const RuntimeMethod* UnityAction_1__ctor_m2053997953_RuntimeMethod_var;
extern const RuntimeMethod* UnityEvent_1_AddListener_m343189214_RuntimeMethod_var;
extern Il2CppCodeGenString* _stringLiteral2918675456;
extern Il2CppCodeGenString* _stringLiteral2580408083;
extern const uint32_t testC2_Start_m504708010_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral821616730;
extern const uint32_t testC2_callback_m1132650014_MetadataUsageId;



#ifndef U3CMODULEU3E_T2816031029_H
#define U3CMODULEU3E_T2816031029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2816031029 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2816031029_H
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
#ifndef UNITYEVENTBASE_T2031878548_H
#define UNITYEVENTBASE_T2031878548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t2031878548  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t370370289 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3311776098 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t2031878548, ___m_Calls_0)); }
	inline InvokableCallList_t370370289 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t370370289 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t370370289 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t2031878548, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3311776098 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3311776098 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3311776098 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t2031878548, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t2031878548, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T2031878548_H
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
#ifndef VALUETYPE_T3345440224_H
#define VALUETYPE_T3345440224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3345440224  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3345440224_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3345440224_marshaled_com
{
};
#endif // VALUETYPE_T3345440224_H
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
	CharU5BU5D_t2644401608* ___WhiteChars_3;

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
	inline CharU5BU5D_t2644401608* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t2644401608** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t2644401608* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef MSG_T838862497_H
#define MSG_T838862497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Msg
struct  Msg_t838862497  : public RuntimeObject
{
public:
	// System.String Msg::type
	String_t* ___type_0;
	// System.Int32 Msg::gameIndex
	int32_t ___gameIndex_1;
	// System.String Msg::data
	String_t* ___data_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Msg_t838862497, ___type_0)); }
	inline String_t* get_type_0() const { return ___type_0; }
	inline String_t** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(String_t* value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_gameIndex_1() { return static_cast<int32_t>(offsetof(Msg_t838862497, ___gameIndex_1)); }
	inline int32_t get_gameIndex_1() const { return ___gameIndex_1; }
	inline int32_t* get_address_of_gameIndex_1() { return &___gameIndex_1; }
	inline void set_gameIndex_1(int32_t value)
	{
		___gameIndex_1 = value;
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(Msg_t838862497, ___data_2)); }
	inline String_t* get_data_2() const { return ___data_2; }
	inline String_t** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(String_t* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((&___data_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MSG_T838862497_H
#ifndef UNITYEVENT_1_T602705656_H
#define UNITYEVENT_1_T602705656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<Msg>
struct  UnityEvent_1_t602705656  : public UnityEventBase_t2031878548
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t769195566* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t602705656, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t769195566* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t769195566** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t769195566* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T602705656_H
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef ENUM_T1530692393_H
#define ENUM_T1530692393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1530692393  : public ValueType_t3345440224
{
public:

public:
};

struct Enum_t1530692393_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2644401608* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1530692393_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2644401608* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2644401608** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2644401608* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1530692393_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1530692393_marshaled_com
{
};
#endif // ENUM_T1530692393_H
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
#ifndef VOID_T380066806_H
#define VOID_T380066806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t380066806 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T380066806_H
#ifndef DELEGATE_T3801926116_H
#define DELEGATE_T3801926116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t3801926116  : public RuntimeObject
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
	DelegateData_t3657175950 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t3801926116, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t3801926116, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t3801926116, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t3801926116, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t3801926116, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t3801926116, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t3801926116, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t3801926116, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t3801926116, ___data_8)); }
	inline DelegateData_t3657175950 * get_data_8() const { return ___data_8; }
	inline DelegateData_t3657175950 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t3657175950 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T3801926116_H
#ifndef MYEVENT_T1850193353_H
#define MYEVENT_T1850193353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MyEvent
struct  MyEvent_t1850193353  : public UnityEvent_1_t602705656
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MYEVENT_T1850193353_H
#ifndef OBJECT_T3879327947_H
#define OBJECT_T3879327947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t3879327947  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t3879327947, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t3879327947_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t3879327947_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t3879327947_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t3879327947_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T3879327947_H
#ifndef BINDINGFLAGS_T3232152463_H
#define BINDINGFLAGS_T3232152463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t3232152463 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t3232152463, ___value___1)); }
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
#endif // BINDINGFLAGS_T3232152463_H
#ifndef RUNTIMETYPEHANDLE_T3801135219_H
#define RUNTIMETYPEHANDLE_T3801135219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3801135219 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3801135219, ___value_0)); }
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
#endif // RUNTIMETYPEHANDLE_T3801135219_H
#ifndef COMPONENT_T356908791_H
#define COMPONENT_T356908791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t356908791  : public Object_t3879327947
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T356908791_H
#ifndef MULTICASTDELEGATE_T15068234_H
#define MULTICASTDELEGATE_T15068234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t15068234  : public Delegate_t3801926116
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t15068234 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t15068234 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t15068234, ___prev_9)); }
	inline MulticastDelegate_t15068234 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t15068234 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t15068234 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t15068234, ___kpm_next_10)); }
	inline MulticastDelegate_t15068234 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t15068234 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t15068234 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T15068234_H
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
	RuntimeTypeHandle_t3801135219  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3801135219  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3801135219 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3801135219  value)
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
	TypeU5BU5D_t3074309185* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t1597292642 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t1597292642 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t1597292642 * ___FilterNameIgnoreCase_6;
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
	inline TypeU5BU5D_t3074309185* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3074309185** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3074309185* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t1597292642 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t1597292642 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t1597292642 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t1597292642 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t1597292642 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t1597292642 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t1597292642 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t1597292642 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t1597292642 * value)
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
#ifndef UNITYACTION_1_T1144153515_H
#define UNITYACTION_1_T1144153515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<Msg>
struct  UnityAction_1_t1144153515  : public MulticastDelegate_t15068234
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T1144153515_H
#ifndef BEHAVIOUR_T1310890579_H
#define BEHAVIOUR_T1310890579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1310890579  : public Component_t356908791
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1310890579_H
#ifndef MONOBEHAVIOUR_T877510051_H
#define MONOBEHAVIOUR_T877510051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t877510051  : public Behaviour_t1310890579
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T877510051_H
#ifndef TESTC2_T3293762314_H
#define TESTC2_T3293762314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// testC2
struct  testC2_t3293762314  : public MonoBehaviour_t877510051
{
public:
	// UnityEngine.Events.UnityAction`1<Msg> testC2::action
	UnityAction_1_t1144153515 * ___action_2;
	// DataHandler testC2::dataHandler
	DataHandler_t122947775 * ___dataHandler_3;

public:
	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(testC2_t3293762314, ___action_2)); }
	inline UnityAction_1_t1144153515 * get_action_2() const { return ___action_2; }
	inline UnityAction_1_t1144153515 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(UnityAction_1_t1144153515 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_dataHandler_3() { return static_cast<int32_t>(offsetof(testC2_t3293762314, ___dataHandler_3)); }
	inline DataHandler_t122947775 * get_dataHandler_3() const { return ___dataHandler_3; }
	inline DataHandler_t122947775 ** get_address_of_dataHandler_3() { return &___dataHandler_3; }
	inline void set_dataHandler_3(DataHandler_t122947775 * value)
	{
		___dataHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___dataHandler_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTC2_T3293762314_H
#ifndef DATAHANDLER_T122947775_H
#define DATAHANDLER_T122947775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DataHandler
struct  DataHandler_t122947775  : public MonoBehaviour_t877510051
{
public:
	// MyEvent DataHandler::m_MyEvent
	MyEvent_t1850193353 * ___m_MyEvent_2;

public:
	inline static int32_t get_offset_of_m_MyEvent_2() { return static_cast<int32_t>(offsetof(DataHandler_t122947775, ___m_MyEvent_2)); }
	inline MyEvent_t1850193353 * get_m_MyEvent_2() const { return ___m_MyEvent_2; }
	inline MyEvent_t1850193353 ** get_address_of_m_MyEvent_2() { return &___m_MyEvent_2; }
	inline void set_m_MyEvent_2(MyEvent_t1850193353 * value)
	{
		___m_MyEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_MyEvent_2), value);
	}
};

struct DataHandler_t122947775_StaticFields
{
public:
	// UserRole DataHandler::userRole
	UserRole_t477336786 * ___userRole_3;
	// DataHandler DataHandler::handler
	DataHandler_t122947775 * ___handler_4;

public:
	inline static int32_t get_offset_of_userRole_3() { return static_cast<int32_t>(offsetof(DataHandler_t122947775_StaticFields, ___userRole_3)); }
	inline UserRole_t477336786 * get_userRole_3() const { return ___userRole_3; }
	inline UserRole_t477336786 ** get_address_of_userRole_3() { return &___userRole_3; }
	inline void set_userRole_3(UserRole_t477336786 * value)
	{
		___userRole_3 = value;
		Il2CppCodeGenWriteBarrier((&___userRole_3), value);
	}

	inline static int32_t get_offset_of_handler_4() { return static_cast<int32_t>(offsetof(DataHandler_t122947775_StaticFields, ___handler_4)); }
	inline DataHandler_t122947775 * get_handler_4() const { return ___handler_4; }
	inline DataHandler_t122947775 ** get_address_of_handler_4() { return &___handler_4; }
	inline void set_handler_4(DataHandler_t122947775 * value)
	{
		___handler_4 = value;
		Il2CppCodeGenWriteBarrier((&___handler_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAHANDLER_T122947775_H


// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_1__ctor_m4120361079_gshared (UnityAction_1_t84728993 * __this, RuntimeObject * p0, IntPtr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
extern "C"  void UnityEvent_1_AddListener_m4174352567_gshared (UnityEvent_1_t3838248430 * __this, UnityAction_1_t84728993 * p0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m4118736990 (MonoBehaviour_t877510051 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.String)
extern "C"  Component_t356908791 * Component_GetComponent_m2565981539 (Component_t356908791 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction`1<Msg>::.ctor(System.Object,System.IntPtr)
#define UnityAction_1__ctor_m2053997953(__this, p0, p1, method) ((  void (*) (UnityAction_1_t1144153515 *, RuntimeObject *, IntPtr_t, const RuntimeMethod*))UnityAction_1__ctor_m4120361079_gshared)(__this, p0, p1, method)
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m1980600252 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Type::GetField(System.String)
extern "C"  FieldInfo_t * Type_GetField_m3276693192 (Type_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<Msg>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
#define UnityEvent_1_AddListener_m343189214(__this, p0, method) ((  void (*) (UnityEvent_1_t602705656 *, UnityAction_1_t1144153515 *, const RuntimeMethod*))UnityEvent_1_AddListener_m4174352567_gshared)(__this, p0, method)
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m2878453370 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C"  void MonoBehaviour_print_m3036556041 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void testC2::.ctor()
extern "C"  void testC2__ctor_m3039997485 (testC2_t3293762314 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m4118736990(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void testC2::Start()
extern "C"  void testC2_Start_m504708010 (testC2_t3293762314 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (testC2_Start_m504708010_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Component_t356908791 * L_0 = Component_GetComponent_m2565981539(__this, _stringLiteral2918675456, /*hidden argument*/NULL);
		__this->set_dataHandler_3(((DataHandler_t122947775 *)CastclassClass((RuntimeObject*)L_0, DataHandler_t122947775_il2cpp_TypeInfo_var)));
		IntPtr_t L_1;
		L_1.set_m_value_0((void*)(void*)testC2_callback_m1132650014_RuntimeMethod_var);
		UnityAction_1_t1144153515 * L_2 = (UnityAction_1_t1144153515 *)il2cpp_codegen_object_new(UnityAction_1_t1144153515_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m2053997953(L_2, __this, L_1, /*hidden argument*/UnityAction_1__ctor_m2053997953_RuntimeMethod_var);
		__this->set_action_2(L_2);
		DataHandler_t122947775 * L_3 = __this->get_dataHandler_3();
		Type_t * L_4 = Object_GetType_m1980600252(L_3, /*hidden argument*/NULL);
		FieldInfo_t * L_5 = Type_GetField_m3276693192(L_4, _stringLiteral2580408083, /*hidden argument*/NULL);
		DataHandler_t122947775 * L_6 = __this->get_dataHandler_3();
		RuntimeObject * L_7 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(18 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_5, L_6);
		UnityAction_1_t1144153515 * L_8 = __this->get_action_2();
		UnityEvent_1_AddListener_m343189214(((MyEvent_t1850193353 *)IsInstClass((RuntimeObject*)L_7, MyEvent_t1850193353_il2cpp_TypeInfo_var)), L_8, /*hidden argument*/UnityEvent_1_AddListener_m343189214_RuntimeMethod_var);
		return;
	}
}
// System.Void testC2::callback(Msg)
extern "C"  void testC2_callback_m1132650014 (testC2_t3293762314 * __this, Msg_t838862497 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (testC2_callback_m1132650014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Msg_t838862497 * L_0 = ___obj0;
		String_t* L_1 = L_0->get_data_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m2878453370(NULL /*static, unused*/, _stringLiteral821616730, L_1, /*hidden argument*/NULL);
		MonoBehaviour_print_m3036556041(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
