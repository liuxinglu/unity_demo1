#include "il2cpp-config.h"

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
struct testC2_t1762257698;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3219470610;
// UnityEngine.Component
struct Component_t2940604190;
// System.String
struct String_t;
// UnityEngine.Events.UnityAction`1<Msg>
struct UnityAction_1_t2106002691;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t1210416504;
// System.Type
struct Type_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.Events.UnityEvent`1<Msg>
struct UnityEvent_1_t2112370805;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t1216784618;
// Msg
struct Msg_t620930238;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t164968753;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t1482420647;
// System.Char[]
struct CharU5BU5D_t1242876772;
// System.Object[]
struct ObjectU5BU5D_t906324130;
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
// DataHandler
struct DataHandler_t707596629;
// MyEvent
struct MyEvent_t1783061039;
// UserRole
struct UserRole_t2954338303;

extern RuntimeClass* DataHandler_t707596629_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAction_1_t2106002691_il2cpp_TypeInfo_var;
extern RuntimeClass* MyEvent_t1783061039_il2cpp_TypeInfo_var;
extern const RuntimeMethod* testC2_callback_m754204179_RuntimeMethod_var;
extern const RuntimeMethod* UnityAction_1__ctor_m516621986_RuntimeMethod_var;
extern const RuntimeMethod* UnityEvent_1_AddListener_m1859990944_RuntimeMethod_var;
extern Il2CppCodeGenString* _stringLiteral344599007;
extern Il2CppCodeGenString* _stringLiteral764242036;
extern const uint32_t testC2_Start_m969053283_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4246394000;
extern const uint32_t testC2_callback_m754204179_MetadataUsageId;



#ifndef U3CMODULEU3E_T3825170581_H
#define U3CMODULEU3E_T3825170581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3825170581 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3825170581_H
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
#ifndef UNITYEVENTBASE_T2952083443_H
#define UNITYEVENTBASE_T2952083443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t2952083443  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t164968753 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t1482420647 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t2952083443, ___m_Calls_0)); }
	inline InvokableCallList_t164968753 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t164968753 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t164968753 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t2952083443, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t1482420647 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t1482420647 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t1482420647 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t2952083443, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t2952083443, ___m_CallsDirty_3)); }
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
#endif // UNITYEVENTBASE_T2952083443_H
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
#ifndef MSG_T620930238_H
#define MSG_T620930238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Msg
struct  Msg_t620930238  : public RuntimeObject
{
public:
	// System.String Msg::type
	String_t* ___type_0;
	// System.Int32 Msg::gameIndex
	int32_t ___gameIndex_1;
	// System.String Msg::data
	String_t* ___data_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Msg_t620930238, ___type_0)); }
	inline String_t* get_type_0() const { return ___type_0; }
	inline String_t** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(String_t* value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_gameIndex_1() { return static_cast<int32_t>(offsetof(Msg_t620930238, ___gameIndex_1)); }
	inline int32_t get_gameIndex_1() const { return ___gameIndex_1; }
	inline int32_t* get_address_of_gameIndex_1() { return &___gameIndex_1; }
	inline void set_gameIndex_1(int32_t value)
	{
		___gameIndex_1 = value;
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(Msg_t620930238, ___data_2)); }
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
#endif // MSG_T620930238_H
#ifndef UNITYEVENT_1_T2112370805_H
#define UNITYEVENT_1_T2112370805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<Msg>
struct  UnityEvent_1_t2112370805  : public UnityEventBase_t2952083443
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t906324130* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t2112370805, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t906324130* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t906324130** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t906324130* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T2112370805_H
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
#ifndef MYEVENT_T1783061039_H
#define MYEVENT_T1783061039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MyEvent
struct  MyEvent_t1783061039  : public UnityEvent_1_t2112370805
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MYEVENT_T1783061039_H
#ifndef OBJECT_T467389942_H
#define OBJECT_T467389942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t467389942  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t467389942, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t467389942_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t467389942_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t467389942_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t467389942_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T467389942_H
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
#ifndef COMPONENT_T2940604190_H
#define COMPONENT_T2940604190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t2940604190  : public Object_t467389942
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T2940604190_H
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
#ifndef UNITYACTION_1_T2106002691_H
#define UNITYACTION_1_T2106002691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<Msg>
struct  UnityAction_1_t2106002691  : public MulticastDelegate_t1928935903
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T2106002691_H
#ifndef BEHAVIOUR_T1869515952_H
#define BEHAVIOUR_T1869515952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1869515952  : public Component_t2940604190
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1869515952_H
#ifndef MONOBEHAVIOUR_T3219470610_H
#define MONOBEHAVIOUR_T3219470610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3219470610  : public Behaviour_t1869515952
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3219470610_H
#ifndef TESTC2_T1762257698_H
#define TESTC2_T1762257698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// testC2
struct  testC2_t1762257698  : public MonoBehaviour_t3219470610
{
public:
	// UnityEngine.Events.UnityAction`1<Msg> testC2::action
	UnityAction_1_t2106002691 * ___action_2;
	// DataHandler testC2::dataHandler
	DataHandler_t707596629 * ___dataHandler_3;

public:
	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(testC2_t1762257698, ___action_2)); }
	inline UnityAction_1_t2106002691 * get_action_2() const { return ___action_2; }
	inline UnityAction_1_t2106002691 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(UnityAction_1_t2106002691 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_dataHandler_3() { return static_cast<int32_t>(offsetof(testC2_t1762257698, ___dataHandler_3)); }
	inline DataHandler_t707596629 * get_dataHandler_3() const { return ___dataHandler_3; }
	inline DataHandler_t707596629 ** get_address_of_dataHandler_3() { return &___dataHandler_3; }
	inline void set_dataHandler_3(DataHandler_t707596629 * value)
	{
		___dataHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___dataHandler_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTC2_T1762257698_H
#ifndef DATAHANDLER_T707596629_H
#define DATAHANDLER_T707596629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DataHandler
struct  DataHandler_t707596629  : public MonoBehaviour_t3219470610
{
public:
	// MyEvent DataHandler::m_MyEvent
	MyEvent_t1783061039 * ___m_MyEvent_2;

public:
	inline static int32_t get_offset_of_m_MyEvent_2() { return static_cast<int32_t>(offsetof(DataHandler_t707596629, ___m_MyEvent_2)); }
	inline MyEvent_t1783061039 * get_m_MyEvent_2() const { return ___m_MyEvent_2; }
	inline MyEvent_t1783061039 ** get_address_of_m_MyEvent_2() { return &___m_MyEvent_2; }
	inline void set_m_MyEvent_2(MyEvent_t1783061039 * value)
	{
		___m_MyEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_MyEvent_2), value);
	}
};

struct DataHandler_t707596629_StaticFields
{
public:
	// UserRole DataHandler::userRole
	UserRole_t2954338303 * ___userRole_3;
	// DataHandler DataHandler::handler
	DataHandler_t707596629 * ___handler_4;

public:
	inline static int32_t get_offset_of_userRole_3() { return static_cast<int32_t>(offsetof(DataHandler_t707596629_StaticFields, ___userRole_3)); }
	inline UserRole_t2954338303 * get_userRole_3() const { return ___userRole_3; }
	inline UserRole_t2954338303 ** get_address_of_userRole_3() { return &___userRole_3; }
	inline void set_userRole_3(UserRole_t2954338303 * value)
	{
		___userRole_3 = value;
		Il2CppCodeGenWriteBarrier((&___userRole_3), value);
	}

	inline static int32_t get_offset_of_handler_4() { return static_cast<int32_t>(offsetof(DataHandler_t707596629_StaticFields, ___handler_4)); }
	inline DataHandler_t707596629 * get_handler_4() const { return ___handler_4; }
	inline DataHandler_t707596629 ** get_address_of_handler_4() { return &___handler_4; }
	inline void set_handler_4(DataHandler_t707596629 * value)
	{
		___handler_4 = value;
		Il2CppCodeGenWriteBarrier((&___handler_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAHANDLER_T707596629_H


// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_1__ctor_m3700747390_gshared (UnityAction_1_t1210416504 * __this, RuntimeObject * p0, IntPtr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
extern "C"  void UnityEvent_1_AddListener_m3952191657_gshared (UnityEvent_1_t1216784618 * __this, UnityAction_1_t1210416504 * p0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m3017326456 (MonoBehaviour_t3219470610 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.String)
extern "C"  Component_t2940604190 * Component_GetComponent_m1463072671 (Component_t2940604190 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction`1<Msg>::.ctor(System.Object,System.IntPtr)
#define UnityAction_1__ctor_m516621986(__this, p0, p1, method) ((  void (*) (UnityAction_1_t2106002691 *, RuntimeObject *, IntPtr_t, const RuntimeMethod*))UnityAction_1__ctor_m3700747390_gshared)(__this, p0, p1, method)
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m734351011 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Type::GetField(System.String)
extern "C"  FieldInfo_t * Type_GetField_m1592200457 (Type_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<Msg>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
#define UnityEvent_1_AddListener_m1859990944(__this, p0, method) ((  void (*) (UnityEvent_1_t2112370805 *, UnityAction_1_t2106002691 *, const RuntimeMethod*))UnityEvent_1_AddListener_m3952191657_gshared)(__this, p0, method)
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3975408422 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C"  void MonoBehaviour_print_m738215896 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void testC2::.ctor()
extern "C"  void testC2__ctor_m60753647 (testC2_t1762257698 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m3017326456(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void testC2::Start()
extern "C"  void testC2_Start_m969053283 (testC2_t1762257698 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (testC2_Start_m969053283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Component_t2940604190 * L_0 = Component_GetComponent_m1463072671(__this, _stringLiteral344599007, /*hidden argument*/NULL);
		__this->set_dataHandler_3(((DataHandler_t707596629 *)CastclassClass((RuntimeObject*)L_0, DataHandler_t707596629_il2cpp_TypeInfo_var)));
		IntPtr_t L_1;
		L_1.set_m_value_0((void*)(void*)testC2_callback_m754204179_RuntimeMethod_var);
		UnityAction_1_t2106002691 * L_2 = (UnityAction_1_t2106002691 *)il2cpp_codegen_object_new(UnityAction_1_t2106002691_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m516621986(L_2, __this, L_1, /*hidden argument*/UnityAction_1__ctor_m516621986_RuntimeMethod_var);
		__this->set_action_2(L_2);
		DataHandler_t707596629 * L_3 = __this->get_dataHandler_3();
		Type_t * L_4 = Object_GetType_m734351011(L_3, /*hidden argument*/NULL);
		FieldInfo_t * L_5 = Type_GetField_m1592200457(L_4, _stringLiteral764242036, /*hidden argument*/NULL);
		DataHandler_t707596629 * L_6 = __this->get_dataHandler_3();
		RuntimeObject * L_7 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(18 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_5, L_6);
		UnityAction_1_t2106002691 * L_8 = __this->get_action_2();
		UnityEvent_1_AddListener_m1859990944(((MyEvent_t1783061039 *)IsInstClass((RuntimeObject*)L_7, MyEvent_t1783061039_il2cpp_TypeInfo_var)), L_8, /*hidden argument*/UnityEvent_1_AddListener_m1859990944_RuntimeMethod_var);
		return;
	}
}
// System.Void testC2::callback(Msg)
extern "C"  void testC2_callback_m754204179 (testC2_t1762257698 * __this, Msg_t620930238 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (testC2_callback_m754204179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Msg_t620930238 * L_0 = ___obj0;
		String_t* L_1 = L_0->get_data_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3975408422(NULL /*static, unused*/, _stringLiteral4246394000, L_1, /*hidden argument*/NULL);
		MonoBehaviour_print_m738215896(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
