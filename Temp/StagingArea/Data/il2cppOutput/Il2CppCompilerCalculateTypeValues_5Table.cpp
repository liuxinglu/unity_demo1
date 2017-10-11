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

// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Remoting.Identity
struct Identity_t78057183;
// System.Collections.ArrayList
struct ArrayList_t2438777478;
// System.Byte[]
struct ByteU5BU5D_t481254776;
// System.Type[]
struct TypeU5BU5D_t3074309185;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t703538957;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t3079317807;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t698684977;
// System.Collections.Hashtable
struct Hashtable_t2491480603;
// System.Runtime.Remoting.IChannelInfo
struct IChannelInfo_t1410586592;
// System.Runtime.Remoting.IRemotingTypeInfo
struct IRemotingTypeInfo_t482385218;
// System.Runtime.Remoting.IEnvoyInfo
struct IEnvoyInfo_t1659478667;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2512102020;
// System.Runtime.Remoting.ChannelData
struct ChannelData_t3379529888;
// System.Collections.Stack
struct Stack_t794365638;
// System.Collections.IList
struct IList_t1272884294;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t980866733;
// System.Reflection.MonoMethod
struct MonoMethod_t;
// System.Object[]
struct ObjectU5BU5D_t769195566;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t2351273423;
// System.Exception
struct Exception_t3830270800;
// System.Runtime.Remoting.Messaging.CallContextRemotingData
struct CallContextRemotingData_t3463933388;
// System.Reflection.MethodBase
struct MethodBase_t995967996;
// System.Collections.IDictionary
struct IDictionary_t2155452954;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2658842190;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t2025180053;
// System.String[]
struct StringU5BU5D_t1580750740;
// System.Runtime.Remoting.Messaging.MethodDictionary
struct MethodDictionary_t2256436503;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3913810675;
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
struct ObjRefSurrogate_t3545829384;
// System.Runtime.Remoting.Messaging.RemotingSurrogate
struct RemotingSurrogate_t1703573715;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t3246644795;
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct MethodReturnDictionary_t3810987099;
// System.Runtime.Remoting.Messaging.ArgInfo
struct ArgInfo_t4039207888;
// System.MarshalByRefObject
struct MarshalByRefObject_t933609709;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t2203412205;
// System.IntPtr[]
struct IntPtrU5BU5D_t3274416346;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Int32[]
struct Int32U5BU5D_t916272174;
// System.WeakReference
struct WeakReference_t155206486;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2330603731;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t2325625229;
// System.Char[]
struct CharU5BU5D_t2644401608;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t4008665658;
// System.Runtime.Serialization.ISerializationSurrogate
struct ISerializationSurrogate_t3123069445;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t1902547881;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t4020167867;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t1623850403;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1834069478;




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
#ifndef FORMATTERCONVERTER_T2931272622_H
#define FORMATTERCONVERTER_T2931272622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FormatterConverter
struct  FormatterConverter_t2931272622  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERCONVERTER_T2931272622_H
#ifndef REALPROXY_T980866733_H
#define REALPROXY_T980866733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Proxies.RealProxy
struct  RealProxy_t980866733  : public RuntimeObject
{
public:
	// System.Type System.Runtime.Remoting.Proxies.RealProxy::class_to_proxy
	Type_t * ___class_to_proxy_0;
	// System.Int32 System.Runtime.Remoting.Proxies.RealProxy::_targetDomainId
	int32_t ____targetDomainId_1;
	// System.String System.Runtime.Remoting.Proxies.RealProxy::_targetUri
	String_t* ____targetUri_2;
	// System.Runtime.Remoting.Identity System.Runtime.Remoting.Proxies.RealProxy::_objectIdentity
	Identity_t78057183 * ____objectIdentity_3;
	// System.Object System.Runtime.Remoting.Proxies.RealProxy::_objTP
	RuntimeObject * ____objTP_4;

public:
	inline static int32_t get_offset_of_class_to_proxy_0() { return static_cast<int32_t>(offsetof(RealProxy_t980866733, ___class_to_proxy_0)); }
	inline Type_t * get_class_to_proxy_0() const { return ___class_to_proxy_0; }
	inline Type_t ** get_address_of_class_to_proxy_0() { return &___class_to_proxy_0; }
	inline void set_class_to_proxy_0(Type_t * value)
	{
		___class_to_proxy_0 = value;
		Il2CppCodeGenWriteBarrier((&___class_to_proxy_0), value);
	}

	inline static int32_t get_offset_of__targetDomainId_1() { return static_cast<int32_t>(offsetof(RealProxy_t980866733, ____targetDomainId_1)); }
	inline int32_t get__targetDomainId_1() const { return ____targetDomainId_1; }
	inline int32_t* get_address_of__targetDomainId_1() { return &____targetDomainId_1; }
	inline void set__targetDomainId_1(int32_t value)
	{
		____targetDomainId_1 = value;
	}

	inline static int32_t get_offset_of__targetUri_2() { return static_cast<int32_t>(offsetof(RealProxy_t980866733, ____targetUri_2)); }
	inline String_t* get__targetUri_2() const { return ____targetUri_2; }
	inline String_t** get_address_of__targetUri_2() { return &____targetUri_2; }
	inline void set__targetUri_2(String_t* value)
	{
		____targetUri_2 = value;
		Il2CppCodeGenWriteBarrier((&____targetUri_2), value);
	}

	inline static int32_t get_offset_of__objectIdentity_3() { return static_cast<int32_t>(offsetof(RealProxy_t980866733, ____objectIdentity_3)); }
	inline Identity_t78057183 * get__objectIdentity_3() const { return ____objectIdentity_3; }
	inline Identity_t78057183 ** get_address_of__objectIdentity_3() { return &____objectIdentity_3; }
	inline void set__objectIdentity_3(Identity_t78057183 * value)
	{
		____objectIdentity_3 = value;
		Il2CppCodeGenWriteBarrier((&____objectIdentity_3), value);
	}

	inline static int32_t get_offset_of__objTP_4() { return static_cast<int32_t>(offsetof(RealProxy_t980866733, ____objTP_4)); }
	inline RuntimeObject * get__objTP_4() const { return ____objTP_4; }
	inline RuntimeObject ** get_address_of__objTP_4() { return &____objTP_4; }
	inline void set__objTP_4(RuntimeObject * value)
	{
		____objTP_4 = value;
		Il2CppCodeGenWriteBarrier((&____objTP_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REALPROXY_T980866733_H
#ifndef TRACKINGSERVICES_T2878337549_H
#define TRACKINGSERVICES_T2878337549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Services.TrackingServices
struct  TrackingServices_t2878337549  : public RuntimeObject
{
public:

public:
};

struct TrackingServices_t2878337549_StaticFields
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Services.TrackingServices::_handlers
	ArrayList_t2438777478 * ____handlers_0;

public:
	inline static int32_t get_offset_of__handlers_0() { return static_cast<int32_t>(offsetof(TrackingServices_t2878337549_StaticFields, ____handlers_0)); }
	inline ArrayList_t2438777478 * get__handlers_0() const { return ____handlers_0; }
	inline ArrayList_t2438777478 ** get_address_of__handlers_0() { return &____handlers_0; }
	inline void set__handlers_0(ArrayList_t2438777478 * value)
	{
		____handlers_0 = value;
		Il2CppCodeGenWriteBarrier((&____handlers_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKINGSERVICES_T2878337549_H
#ifndef BINARYCOMMON_T914372529_H
#define BINARYCOMMON_T914372529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryCommon
struct  BinaryCommon_t914372529  : public RuntimeObject
{
public:

public:
};

struct BinaryCommon_t914372529_StaticFields
{
public:
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::BinaryHeader
	ByteU5BU5D_t481254776* ___BinaryHeader_0;
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::_typeCodesToType
	TypeU5BU5D_t3074309185* ____typeCodesToType_1;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::_typeCodeMap
	ByteU5BU5D_t481254776* ____typeCodeMap_2;
	// System.Boolean System.Runtime.Serialization.Formatters.Binary.BinaryCommon::UseReflectionSerialization
	bool ___UseReflectionSerialization_3;

public:
	inline static int32_t get_offset_of_BinaryHeader_0() { return static_cast<int32_t>(offsetof(BinaryCommon_t914372529_StaticFields, ___BinaryHeader_0)); }
	inline ByteU5BU5D_t481254776* get_BinaryHeader_0() const { return ___BinaryHeader_0; }
	inline ByteU5BU5D_t481254776** get_address_of_BinaryHeader_0() { return &___BinaryHeader_0; }
	inline void set_BinaryHeader_0(ByteU5BU5D_t481254776* value)
	{
		___BinaryHeader_0 = value;
		Il2CppCodeGenWriteBarrier((&___BinaryHeader_0), value);
	}

	inline static int32_t get_offset_of__typeCodesToType_1() { return static_cast<int32_t>(offsetof(BinaryCommon_t914372529_StaticFields, ____typeCodesToType_1)); }
	inline TypeU5BU5D_t3074309185* get__typeCodesToType_1() const { return ____typeCodesToType_1; }
	inline TypeU5BU5D_t3074309185** get_address_of__typeCodesToType_1() { return &____typeCodesToType_1; }
	inline void set__typeCodesToType_1(TypeU5BU5D_t3074309185* value)
	{
		____typeCodesToType_1 = value;
		Il2CppCodeGenWriteBarrier((&____typeCodesToType_1), value);
	}

	inline static int32_t get_offset_of__typeCodeMap_2() { return static_cast<int32_t>(offsetof(BinaryCommon_t914372529_StaticFields, ____typeCodeMap_2)); }
	inline ByteU5BU5D_t481254776* get__typeCodeMap_2() const { return ____typeCodeMap_2; }
	inline ByteU5BU5D_t481254776** get_address_of__typeCodeMap_2() { return &____typeCodeMap_2; }
	inline void set__typeCodeMap_2(ByteU5BU5D_t481254776* value)
	{
		____typeCodeMap_2 = value;
		Il2CppCodeGenWriteBarrier((&____typeCodeMap_2), value);
	}

	inline static int32_t get_offset_of_UseReflectionSerialization_3() { return static_cast<int32_t>(offsetof(BinaryCommon_t914372529_StaticFields, ___UseReflectionSerialization_3)); }
	inline bool get_UseReflectionSerialization_3() const { return ___UseReflectionSerialization_3; }
	inline bool* get_address_of_UseReflectionSerialization_3() { return &___UseReflectionSerialization_3; }
	inline void set_UseReflectionSerialization_3(bool value)
	{
		___UseReflectionSerialization_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYCOMMON_T914372529_H
#ifndef ENVOYINFO_T2673120801_H
#define ENVOYINFO_T2673120801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.EnvoyInfo
struct  EnvoyInfo_t2673120801  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.EnvoyInfo::envoySinks
	RuntimeObject* ___envoySinks_0;

public:
	inline static int32_t get_offset_of_envoySinks_0() { return static_cast<int32_t>(offsetof(EnvoyInfo_t2673120801, ___envoySinks_0)); }
	inline RuntimeObject* get_envoySinks_0() const { return ___envoySinks_0; }
	inline RuntimeObject** get_address_of_envoySinks_0() { return &___envoySinks_0; }
	inline void set_envoySinks_0(RuntimeObject* value)
	{
		___envoySinks_0 = value;
		Il2CppCodeGenWriteBarrier((&___envoySinks_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVOYINFO_T2673120801_H
#ifndef IDENTITY_T78057183_H
#define IDENTITY_T78057183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Identity
struct  Identity_t78057183  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Identity::_objectUri
	String_t* ____objectUri_0;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::_channelSink
	RuntimeObject* ____channelSink_1;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::_envoySink
	RuntimeObject* ____envoySink_2;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::_clientDynamicProperties
	DynamicPropertyCollection_t3079317807 * ____clientDynamicProperties_3;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::_serverDynamicProperties
	DynamicPropertyCollection_t3079317807 * ____serverDynamicProperties_4;
	// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::_objRef
	ObjRef_t698684977 * ____objRef_5;
	// System.Boolean System.Runtime.Remoting.Identity::_disposed
	bool ____disposed_6;

public:
	inline static int32_t get_offset_of__objectUri_0() { return static_cast<int32_t>(offsetof(Identity_t78057183, ____objectUri_0)); }
	inline String_t* get__objectUri_0() const { return ____objectUri_0; }
	inline String_t** get_address_of__objectUri_0() { return &____objectUri_0; }
	inline void set__objectUri_0(String_t* value)
	{
		____objectUri_0 = value;
		Il2CppCodeGenWriteBarrier((&____objectUri_0), value);
	}

	inline static int32_t get_offset_of__channelSink_1() { return static_cast<int32_t>(offsetof(Identity_t78057183, ____channelSink_1)); }
	inline RuntimeObject* get__channelSink_1() const { return ____channelSink_1; }
	inline RuntimeObject** get_address_of__channelSink_1() { return &____channelSink_1; }
	inline void set__channelSink_1(RuntimeObject* value)
	{
		____channelSink_1 = value;
		Il2CppCodeGenWriteBarrier((&____channelSink_1), value);
	}

	inline static int32_t get_offset_of__envoySink_2() { return static_cast<int32_t>(offsetof(Identity_t78057183, ____envoySink_2)); }
	inline RuntimeObject* get__envoySink_2() const { return ____envoySink_2; }
	inline RuntimeObject** get_address_of__envoySink_2() { return &____envoySink_2; }
	inline void set__envoySink_2(RuntimeObject* value)
	{
		____envoySink_2 = value;
		Il2CppCodeGenWriteBarrier((&____envoySink_2), value);
	}

	inline static int32_t get_offset_of__clientDynamicProperties_3() { return static_cast<int32_t>(offsetof(Identity_t78057183, ____clientDynamicProperties_3)); }
	inline DynamicPropertyCollection_t3079317807 * get__clientDynamicProperties_3() const { return ____clientDynamicProperties_3; }
	inline DynamicPropertyCollection_t3079317807 ** get_address_of__clientDynamicProperties_3() { return &____clientDynamicProperties_3; }
	inline void set__clientDynamicProperties_3(DynamicPropertyCollection_t3079317807 * value)
	{
		____clientDynamicProperties_3 = value;
		Il2CppCodeGenWriteBarrier((&____clientDynamicProperties_3), value);
	}

	inline static int32_t get_offset_of__serverDynamicProperties_4() { return static_cast<int32_t>(offsetof(Identity_t78057183, ____serverDynamicProperties_4)); }
	inline DynamicPropertyCollection_t3079317807 * get__serverDynamicProperties_4() const { return ____serverDynamicProperties_4; }
	inline DynamicPropertyCollection_t3079317807 ** get_address_of__serverDynamicProperties_4() { return &____serverDynamicProperties_4; }
	inline void set__serverDynamicProperties_4(DynamicPropertyCollection_t3079317807 * value)
	{
		____serverDynamicProperties_4 = value;
		Il2CppCodeGenWriteBarrier((&____serverDynamicProperties_4), value);
	}

	inline static int32_t get_offset_of__objRef_5() { return static_cast<int32_t>(offsetof(Identity_t78057183, ____objRef_5)); }
	inline ObjRef_t698684977 * get__objRef_5() const { return ____objRef_5; }
	inline ObjRef_t698684977 ** get_address_of__objRef_5() { return &____objRef_5; }
	inline void set__objRef_5(ObjRef_t698684977 * value)
	{
		____objRef_5 = value;
		Il2CppCodeGenWriteBarrier((&____objRef_5), value);
	}

	inline static int32_t get_offset_of__disposed_6() { return static_cast<int32_t>(offsetof(Identity_t78057183, ____disposed_6)); }
	inline bool get__disposed_6() const { return ____disposed_6; }
	inline bool* get_address_of__disposed_6() { return &____disposed_6; }
	inline void set__disposed_6(bool value)
	{
		____disposed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IDENTITY_T78057183_H
#ifndef FORMATTERSERVICES_T276146134_H
#define FORMATTERSERVICES_T276146134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FormatterServices
struct  FormatterServices_t276146134  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERSERVICES_T276146134_H
#ifndef INTERNALREMOTINGSERVICES_T1405304081_H
#define INTERNALREMOTINGSERVICES_T1405304081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.InternalRemotingServices
struct  InternalRemotingServices_t1405304081  : public RuntimeObject
{
public:

public:
};

struct InternalRemotingServices_t1405304081_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.InternalRemotingServices::_soapAttributes
	Hashtable_t2491480603 * ____soapAttributes_0;

public:
	inline static int32_t get_offset_of__soapAttributes_0() { return static_cast<int32_t>(offsetof(InternalRemotingServices_t1405304081_StaticFields, ____soapAttributes_0)); }
	inline Hashtable_t2491480603 * get__soapAttributes_0() const { return ____soapAttributes_0; }
	inline Hashtable_t2491480603 ** get_address_of__soapAttributes_0() { return &____soapAttributes_0; }
	inline void set__soapAttributes_0(Hashtable_t2491480603 * value)
	{
		____soapAttributes_0 = value;
		Il2CppCodeGenWriteBarrier((&____soapAttributes_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALREMOTINGSERVICES_T1405304081_H
#ifndef OBJREF_T698684977_H
#define OBJREF_T698684977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ObjRef
struct  ObjRef_t698684977  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::channel_info
	RuntimeObject* ___channel_info_0;
	// System.String System.Runtime.Remoting.ObjRef::uri
	String_t* ___uri_1;
	// System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::typeInfo
	RuntimeObject* ___typeInfo_2;
	// System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::envoyInfo
	RuntimeObject* ___envoyInfo_3;
	// System.Int32 System.Runtime.Remoting.ObjRef::flags
	int32_t ___flags_4;
	// System.Type System.Runtime.Remoting.ObjRef::_serverType
	Type_t * ____serverType_5;

public:
	inline static int32_t get_offset_of_channel_info_0() { return static_cast<int32_t>(offsetof(ObjRef_t698684977, ___channel_info_0)); }
	inline RuntimeObject* get_channel_info_0() const { return ___channel_info_0; }
	inline RuntimeObject** get_address_of_channel_info_0() { return &___channel_info_0; }
	inline void set_channel_info_0(RuntimeObject* value)
	{
		___channel_info_0 = value;
		Il2CppCodeGenWriteBarrier((&___channel_info_0), value);
	}

	inline static int32_t get_offset_of_uri_1() { return static_cast<int32_t>(offsetof(ObjRef_t698684977, ___uri_1)); }
	inline String_t* get_uri_1() const { return ___uri_1; }
	inline String_t** get_address_of_uri_1() { return &___uri_1; }
	inline void set_uri_1(String_t* value)
	{
		___uri_1 = value;
		Il2CppCodeGenWriteBarrier((&___uri_1), value);
	}

	inline static int32_t get_offset_of_typeInfo_2() { return static_cast<int32_t>(offsetof(ObjRef_t698684977, ___typeInfo_2)); }
	inline RuntimeObject* get_typeInfo_2() const { return ___typeInfo_2; }
	inline RuntimeObject** get_address_of_typeInfo_2() { return &___typeInfo_2; }
	inline void set_typeInfo_2(RuntimeObject* value)
	{
		___typeInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___typeInfo_2), value);
	}

	inline static int32_t get_offset_of_envoyInfo_3() { return static_cast<int32_t>(offsetof(ObjRef_t698684977, ___envoyInfo_3)); }
	inline RuntimeObject* get_envoyInfo_3() const { return ___envoyInfo_3; }
	inline RuntimeObject** get_address_of_envoyInfo_3() { return &___envoyInfo_3; }
	inline void set_envoyInfo_3(RuntimeObject* value)
	{
		___envoyInfo_3 = value;
		Il2CppCodeGenWriteBarrier((&___envoyInfo_3), value);
	}

	inline static int32_t get_offset_of_flags_4() { return static_cast<int32_t>(offsetof(ObjRef_t698684977, ___flags_4)); }
	inline int32_t get_flags_4() const { return ___flags_4; }
	inline int32_t* get_address_of_flags_4() { return &___flags_4; }
	inline void set_flags_4(int32_t value)
	{
		___flags_4 = value;
	}

	inline static int32_t get_offset_of__serverType_5() { return static_cast<int32_t>(offsetof(ObjRef_t698684977, ____serverType_5)); }
	inline Type_t * get__serverType_5() const { return ____serverType_5; }
	inline Type_t ** get_address_of__serverType_5() { return &____serverType_5; }
	inline void set__serverType_5(Type_t * value)
	{
		____serverType_5 = value;
		Il2CppCodeGenWriteBarrier((&____serverType_5), value);
	}
};

struct ObjRef_t698684977_StaticFields
{
public:
	// System.Int32 System.Runtime.Remoting.ObjRef::MarshalledObjectRef
	int32_t ___MarshalledObjectRef_6;
	// System.Int32 System.Runtime.Remoting.ObjRef::WellKnowObjectRef
	int32_t ___WellKnowObjectRef_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.ObjRef::<>f__switch$map26
	Dictionary_2_t2512102020 * ___U3CU3Ef__switchU24map26_8;

public:
	inline static int32_t get_offset_of_MarshalledObjectRef_6() { return static_cast<int32_t>(offsetof(ObjRef_t698684977_StaticFields, ___MarshalledObjectRef_6)); }
	inline int32_t get_MarshalledObjectRef_6() const { return ___MarshalledObjectRef_6; }
	inline int32_t* get_address_of_MarshalledObjectRef_6() { return &___MarshalledObjectRef_6; }
	inline void set_MarshalledObjectRef_6(int32_t value)
	{
		___MarshalledObjectRef_6 = value;
	}

	inline static int32_t get_offset_of_WellKnowObjectRef_7() { return static_cast<int32_t>(offsetof(ObjRef_t698684977_StaticFields, ___WellKnowObjectRef_7)); }
	inline int32_t get_WellKnowObjectRef_7() const { return ___WellKnowObjectRef_7; }
	inline int32_t* get_address_of_WellKnowObjectRef_7() { return &___WellKnowObjectRef_7; }
	inline void set_WellKnowObjectRef_7(int32_t value)
	{
		___WellKnowObjectRef_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map26_8() { return static_cast<int32_t>(offsetof(ObjRef_t698684977_StaticFields, ___U3CU3Ef__switchU24map26_8)); }
	inline Dictionary_2_t2512102020 * get_U3CU3Ef__switchU24map26_8() const { return ___U3CU3Ef__switchU24map26_8; }
	inline Dictionary_2_t2512102020 ** get_address_of_U3CU3Ef__switchU24map26_8() { return &___U3CU3Ef__switchU24map26_8; }
	inline void set_U3CU3Ef__switchU24map26_8(Dictionary_2_t2512102020 * value)
	{
		___U3CU3Ef__switchU24map26_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map26_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJREF_T698684977_H
#ifndef REMOTINGCONFIGURATION_T3919773212_H
#define REMOTINGCONFIGURATION_T3919773212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.RemotingConfiguration
struct  RemotingConfiguration_t3919773212  : public RuntimeObject
{
public:

public:
};

struct RemotingConfiguration_t3919773212_StaticFields
{
public:
	// System.String System.Runtime.Remoting.RemotingConfiguration::applicationID
	String_t* ___applicationID_0;
	// System.String System.Runtime.Remoting.RemotingConfiguration::applicationName
	String_t* ___applicationName_1;
	// System.String System.Runtime.Remoting.RemotingConfiguration::processGuid
	String_t* ___processGuid_2;
	// System.Boolean System.Runtime.Remoting.RemotingConfiguration::defaultConfigRead
	bool ___defaultConfigRead_3;
	// System.Boolean System.Runtime.Remoting.RemotingConfiguration::defaultDelayedConfigRead
	bool ___defaultDelayedConfigRead_4;
	// System.String System.Runtime.Remoting.RemotingConfiguration::_errorMode
	String_t* ____errorMode_5;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::wellKnownClientEntries
	Hashtable_t2491480603 * ___wellKnownClientEntries_6;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::activatedClientEntries
	Hashtable_t2491480603 * ___activatedClientEntries_7;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::wellKnownServiceEntries
	Hashtable_t2491480603 * ___wellKnownServiceEntries_8;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::activatedServiceEntries
	Hashtable_t2491480603 * ___activatedServiceEntries_9;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::channelTemplates
	Hashtable_t2491480603 * ___channelTemplates_10;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::clientProviderTemplates
	Hashtable_t2491480603 * ___clientProviderTemplates_11;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::serverProviderTemplates
	Hashtable_t2491480603 * ___serverProviderTemplates_12;

public:
	inline static int32_t get_offset_of_applicationID_0() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3919773212_StaticFields, ___applicationID_0)); }
	inline String_t* get_applicationID_0() const { return ___applicationID_0; }
	inline String_t** get_address_of_applicationID_0() { return &___applicationID_0; }
	inline void set_applicationID_0(String_t* value)
	{
		___applicationID_0 = value;
		Il2CppCodeGenWriteBarrier((&___applicationID_0), value);
	}

	inline static int32_t get_offset_of_applicationName_1() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3919773212_StaticFields, ___applicationName_1)); }
	inline String_t* get_applicationName_1() const { return ___applicationName_1; }
	inline String_t** get_address_of_applicationName_1() { return &___applicationName_1; }
	inline void set_applicationName_1(String_t* value)
	{
		___applicationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___applicationName_1), value);
	}

	inline static int32_t get_offset_of_processGuid_2() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3919773212_StaticFields, ___processGuid_2)); }
	inline String_t* get_processGuid_2() const { return ___processGuid_2; }
	inline String_t** get_address_of_processGuid_2() { return &___processGuid_2; }
	inline void set_processGuid_2(String_t* value)
	{
		___processGuid_2 = value;
		Il2CppCodeGenWriteBarrier((&___processGuid_2), value);
	}

	inline static int32_t get_offset_of_defaultConfigRead_3() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3919773212_StaticFields, ___defaultConfigRead_3)); }
	inline bool get_defaultConfigRead_3() const { return ___defaultConfigRead_3; }
	inline bool* get_address_of_defaultConfigRead_3() { return &___defaultConfigRead_3; }
	inline void set_defaultConfigRead_3(bool value)
	{
		___defaultConfigRead_3 = value;
	}

	inline static int32_t get_offset_of_defaultDelayedConfigRead_4() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3919773212_StaticFields, ___defaultDelayedConfigRead_4)); }
	inline bool get_defaultDelayedConfigRead_4() const { return ___defaultDelayedConfigRead_4; }
	inline bool* get_address_of_defaultDelayedConfigRead_4() { return &___defaultDelayedConfigRead_4; }
	inline void set_defaultDelayedConfigRead_4(bool value)
	{
		___defaultDelayedConfigRead_4 = value;
	}

	inline static int32_t get_offset_of__errorMode_5() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3919773212_StaticFields, ____errorMode_5)); }
	inline String_t* get__errorMode_5() const { return ____errorMode_5; }
	inline String_t** get_address_of__errorMode_5() { return &____errorMode_5; }
	inline void set__errorMode_5(String_t* value)
	{
		____errorMode_5 = value;
		Il2CppCodeGenWriteBarrier((&____errorMode_5), value);
	}

	inline static int32_t get_offset_of_wellKnownClientEntries_6() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3919773212_StaticFields, ___wellKnownClientEntries_6)); }
	inline Hashtable_t2491480603 * get_wellKnownClientEntries_6() const { return ___wellKnownClientEntries_6; }
	inline Hashtable_t2491480603 ** get_address_of_wellKnownClientEntries_6() { return &___wellKnownClientEntries_6; }
	inline void set_wellKnownClientEntries_6(Hashtable_t2491480603 * value)
	{
		___wellKnownClientEntries_6 = value;
		Il2CppCodeGenWriteBarrier((&___wellKnownClientEntries_6), value);
	}

	inline static int32_t get_offset_of_activatedClientEntries_7() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3919773212_StaticFields, ___activatedClientEntries_7)); }
	inline Hashtable_t2491480603 * get_activatedClientEntries_7() const { return ___activatedClientEntries_7; }
	inline Hashtable_t2491480603 ** get_address_of_activatedClientEntries_7() { return &___activatedClientEntries_7; }
	inline void set_activatedClientEntries_7(Hashtable_t2491480603 * value)
	{
		___activatedClientEntries_7 = value;
		Il2CppCodeGenWriteBarrier((&___activatedClientEntries_7), value);
	}

	inline static int32_t get_offset_of_wellKnownServiceEntries_8() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3919773212_StaticFields, ___wellKnownServiceEntries_8)); }
	inline Hashtable_t2491480603 * get_wellKnownServiceEntries_8() const { return ___wellKnownServiceEntries_8; }
	inline Hashtable_t2491480603 ** get_address_of_wellKnownServiceEntries_8() { return &___wellKnownServiceEntries_8; }
	inline void set_wellKnownServiceEntries_8(Hashtable_t2491480603 * value)
	{
		___wellKnownServiceEntries_8 = value;
		Il2CppCodeGenWriteBarrier((&___wellKnownServiceEntries_8), value);
	}

	inline static int32_t get_offset_of_activatedServiceEntries_9() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3919773212_StaticFields, ___activatedServiceEntries_9)); }
	inline Hashtable_t2491480603 * get_activatedServiceEntries_9() const { return ___activatedServiceEntries_9; }
	inline Hashtable_t2491480603 ** get_address_of_activatedServiceEntries_9() { return &___activatedServiceEntries_9; }
	inline void set_activatedServiceEntries_9(Hashtable_t2491480603 * value)
	{
		___activatedServiceEntries_9 = value;
		Il2CppCodeGenWriteBarrier((&___activatedServiceEntries_9), value);
	}

	inline static int32_t get_offset_of_channelTemplates_10() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3919773212_StaticFields, ___channelTemplates_10)); }
	inline Hashtable_t2491480603 * get_channelTemplates_10() const { return ___channelTemplates_10; }
	inline Hashtable_t2491480603 ** get_address_of_channelTemplates_10() { return &___channelTemplates_10; }
	inline void set_channelTemplates_10(Hashtable_t2491480603 * value)
	{
		___channelTemplates_10 = value;
		Il2CppCodeGenWriteBarrier((&___channelTemplates_10), value);
	}

	inline static int32_t get_offset_of_clientProviderTemplates_11() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3919773212_StaticFields, ___clientProviderTemplates_11)); }
	inline Hashtable_t2491480603 * get_clientProviderTemplates_11() const { return ___clientProviderTemplates_11; }
	inline Hashtable_t2491480603 ** get_address_of_clientProviderTemplates_11() { return &___clientProviderTemplates_11; }
	inline void set_clientProviderTemplates_11(Hashtable_t2491480603 * value)
	{
		___clientProviderTemplates_11 = value;
		Il2CppCodeGenWriteBarrier((&___clientProviderTemplates_11), value);
	}

	inline static int32_t get_offset_of_serverProviderTemplates_12() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3919773212_StaticFields, ___serverProviderTemplates_12)); }
	inline Hashtable_t2491480603 * get_serverProviderTemplates_12() const { return ___serverProviderTemplates_12; }
	inline Hashtable_t2491480603 ** get_address_of_serverProviderTemplates_12() { return &___serverProviderTemplates_12; }
	inline void set_serverProviderTemplates_12(Hashtable_t2491480603 * value)
	{
		___serverProviderTemplates_12 = value;
		Il2CppCodeGenWriteBarrier((&___serverProviderTemplates_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGCONFIGURATION_T3919773212_H
#ifndef CONFIGHANDLER_T3452603798_H
#define CONFIGHANDLER_T3452603798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ConfigHandler
struct  ConfigHandler_t3452603798  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.ConfigHandler::typeEntries
	ArrayList_t2438777478 * ___typeEntries_0;
	// System.Collections.ArrayList System.Runtime.Remoting.ConfigHandler::channelInstances
	ArrayList_t2438777478 * ___channelInstances_1;
	// System.Runtime.Remoting.ChannelData System.Runtime.Remoting.ConfigHandler::currentChannel
	ChannelData_t3379529888 * ___currentChannel_2;
	// System.Collections.Stack System.Runtime.Remoting.ConfigHandler::currentProviderData
	Stack_t794365638 * ___currentProviderData_3;
	// System.String System.Runtime.Remoting.ConfigHandler::currentClientUrl
	String_t* ___currentClientUrl_4;
	// System.String System.Runtime.Remoting.ConfigHandler::appName
	String_t* ___appName_5;
	// System.String System.Runtime.Remoting.ConfigHandler::currentXmlPath
	String_t* ___currentXmlPath_6;
	// System.Boolean System.Runtime.Remoting.ConfigHandler::onlyDelayedChannels
	bool ___onlyDelayedChannels_7;

public:
	inline static int32_t get_offset_of_typeEntries_0() { return static_cast<int32_t>(offsetof(ConfigHandler_t3452603798, ___typeEntries_0)); }
	inline ArrayList_t2438777478 * get_typeEntries_0() const { return ___typeEntries_0; }
	inline ArrayList_t2438777478 ** get_address_of_typeEntries_0() { return &___typeEntries_0; }
	inline void set_typeEntries_0(ArrayList_t2438777478 * value)
	{
		___typeEntries_0 = value;
		Il2CppCodeGenWriteBarrier((&___typeEntries_0), value);
	}

	inline static int32_t get_offset_of_channelInstances_1() { return static_cast<int32_t>(offsetof(ConfigHandler_t3452603798, ___channelInstances_1)); }
	inline ArrayList_t2438777478 * get_channelInstances_1() const { return ___channelInstances_1; }
	inline ArrayList_t2438777478 ** get_address_of_channelInstances_1() { return &___channelInstances_1; }
	inline void set_channelInstances_1(ArrayList_t2438777478 * value)
	{
		___channelInstances_1 = value;
		Il2CppCodeGenWriteBarrier((&___channelInstances_1), value);
	}

	inline static int32_t get_offset_of_currentChannel_2() { return static_cast<int32_t>(offsetof(ConfigHandler_t3452603798, ___currentChannel_2)); }
	inline ChannelData_t3379529888 * get_currentChannel_2() const { return ___currentChannel_2; }
	inline ChannelData_t3379529888 ** get_address_of_currentChannel_2() { return &___currentChannel_2; }
	inline void set_currentChannel_2(ChannelData_t3379529888 * value)
	{
		___currentChannel_2 = value;
		Il2CppCodeGenWriteBarrier((&___currentChannel_2), value);
	}

	inline static int32_t get_offset_of_currentProviderData_3() { return static_cast<int32_t>(offsetof(ConfigHandler_t3452603798, ___currentProviderData_3)); }
	inline Stack_t794365638 * get_currentProviderData_3() const { return ___currentProviderData_3; }
	inline Stack_t794365638 ** get_address_of_currentProviderData_3() { return &___currentProviderData_3; }
	inline void set_currentProviderData_3(Stack_t794365638 * value)
	{
		___currentProviderData_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentProviderData_3), value);
	}

	inline static int32_t get_offset_of_currentClientUrl_4() { return static_cast<int32_t>(offsetof(ConfigHandler_t3452603798, ___currentClientUrl_4)); }
	inline String_t* get_currentClientUrl_4() const { return ___currentClientUrl_4; }
	inline String_t** get_address_of_currentClientUrl_4() { return &___currentClientUrl_4; }
	inline void set_currentClientUrl_4(String_t* value)
	{
		___currentClientUrl_4 = value;
		Il2CppCodeGenWriteBarrier((&___currentClientUrl_4), value);
	}

	inline static int32_t get_offset_of_appName_5() { return static_cast<int32_t>(offsetof(ConfigHandler_t3452603798, ___appName_5)); }
	inline String_t* get_appName_5() const { return ___appName_5; }
	inline String_t** get_address_of_appName_5() { return &___appName_5; }
	inline void set_appName_5(String_t* value)
	{
		___appName_5 = value;
		Il2CppCodeGenWriteBarrier((&___appName_5), value);
	}

	inline static int32_t get_offset_of_currentXmlPath_6() { return static_cast<int32_t>(offsetof(ConfigHandler_t3452603798, ___currentXmlPath_6)); }
	inline String_t* get_currentXmlPath_6() const { return ___currentXmlPath_6; }
	inline String_t** get_address_of_currentXmlPath_6() { return &___currentXmlPath_6; }
	inline void set_currentXmlPath_6(String_t* value)
	{
		___currentXmlPath_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentXmlPath_6), value);
	}

	inline static int32_t get_offset_of_onlyDelayedChannels_7() { return static_cast<int32_t>(offsetof(ConfigHandler_t3452603798, ___onlyDelayedChannels_7)); }
	inline bool get_onlyDelayedChannels_7() const { return ___onlyDelayedChannels_7; }
	inline bool* get_address_of_onlyDelayedChannels_7() { return &___onlyDelayedChannels_7; }
	inline void set_onlyDelayedChannels_7(bool value)
	{
		___onlyDelayedChannels_7 = value;
	}
};

struct ConfigHandler_t3452603798_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.ConfigHandler::<>f__switch$map27
	Dictionary_2_t2512102020 * ___U3CU3Ef__switchU24map27_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.ConfigHandler::<>f__switch$map28
	Dictionary_2_t2512102020 * ___U3CU3Ef__switchU24map28_9;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map27_8() { return static_cast<int32_t>(offsetof(ConfigHandler_t3452603798_StaticFields, ___U3CU3Ef__switchU24map27_8)); }
	inline Dictionary_2_t2512102020 * get_U3CU3Ef__switchU24map27_8() const { return ___U3CU3Ef__switchU24map27_8; }
	inline Dictionary_2_t2512102020 ** get_address_of_U3CU3Ef__switchU24map27_8() { return &___U3CU3Ef__switchU24map27_8; }
	inline void set_U3CU3Ef__switchU24map27_8(Dictionary_2_t2512102020 * value)
	{
		___U3CU3Ef__switchU24map27_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map27_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map28_9() { return static_cast<int32_t>(offsetof(ConfigHandler_t3452603798_StaticFields, ___U3CU3Ef__switchU24map28_9)); }
	inline Dictionary_2_t2512102020 * get_U3CU3Ef__switchU24map28_9() const { return ___U3CU3Ef__switchU24map28_9; }
	inline Dictionary_2_t2512102020 ** get_address_of_U3CU3Ef__switchU24map28_9() { return &___U3CU3Ef__switchU24map28_9; }
	inline void set_U3CU3Ef__switchU24map28_9(Dictionary_2_t2512102020 * value)
	{
		___U3CU3Ef__switchU24map28_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map28_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGHANDLER_T3452603798_H
#ifndef CHANNELDATA_T3379529888_H
#define CHANNELDATA_T3379529888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ChannelData
struct  ChannelData_t3379529888  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.ChannelData::Ref
	String_t* ___Ref_0;
	// System.String System.Runtime.Remoting.ChannelData::Type
	String_t* ___Type_1;
	// System.String System.Runtime.Remoting.ChannelData::Id
	String_t* ___Id_2;
	// System.String System.Runtime.Remoting.ChannelData::DelayLoadAsClientChannel
	String_t* ___DelayLoadAsClientChannel_3;
	// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::_serverProviders
	ArrayList_t2438777478 * ____serverProviders_4;
	// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::_clientProviders
	ArrayList_t2438777478 * ____clientProviders_5;
	// System.Collections.Hashtable System.Runtime.Remoting.ChannelData::_customProperties
	Hashtable_t2491480603 * ____customProperties_6;

public:
	inline static int32_t get_offset_of_Ref_0() { return static_cast<int32_t>(offsetof(ChannelData_t3379529888, ___Ref_0)); }
	inline String_t* get_Ref_0() const { return ___Ref_0; }
	inline String_t** get_address_of_Ref_0() { return &___Ref_0; }
	inline void set_Ref_0(String_t* value)
	{
		___Ref_0 = value;
		Il2CppCodeGenWriteBarrier((&___Ref_0), value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(ChannelData_t3379529888, ___Type_1)); }
	inline String_t* get_Type_1() const { return ___Type_1; }
	inline String_t** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(String_t* value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier((&___Type_1), value);
	}

	inline static int32_t get_offset_of_Id_2() { return static_cast<int32_t>(offsetof(ChannelData_t3379529888, ___Id_2)); }
	inline String_t* get_Id_2() const { return ___Id_2; }
	inline String_t** get_address_of_Id_2() { return &___Id_2; }
	inline void set_Id_2(String_t* value)
	{
		___Id_2 = value;
		Il2CppCodeGenWriteBarrier((&___Id_2), value);
	}

	inline static int32_t get_offset_of_DelayLoadAsClientChannel_3() { return static_cast<int32_t>(offsetof(ChannelData_t3379529888, ___DelayLoadAsClientChannel_3)); }
	inline String_t* get_DelayLoadAsClientChannel_3() const { return ___DelayLoadAsClientChannel_3; }
	inline String_t** get_address_of_DelayLoadAsClientChannel_3() { return &___DelayLoadAsClientChannel_3; }
	inline void set_DelayLoadAsClientChannel_3(String_t* value)
	{
		___DelayLoadAsClientChannel_3 = value;
		Il2CppCodeGenWriteBarrier((&___DelayLoadAsClientChannel_3), value);
	}

	inline static int32_t get_offset_of__serverProviders_4() { return static_cast<int32_t>(offsetof(ChannelData_t3379529888, ____serverProviders_4)); }
	inline ArrayList_t2438777478 * get__serverProviders_4() const { return ____serverProviders_4; }
	inline ArrayList_t2438777478 ** get_address_of__serverProviders_4() { return &____serverProviders_4; }
	inline void set__serverProviders_4(ArrayList_t2438777478 * value)
	{
		____serverProviders_4 = value;
		Il2CppCodeGenWriteBarrier((&____serverProviders_4), value);
	}

	inline static int32_t get_offset_of__clientProviders_5() { return static_cast<int32_t>(offsetof(ChannelData_t3379529888, ____clientProviders_5)); }
	inline ArrayList_t2438777478 * get__clientProviders_5() const { return ____clientProviders_5; }
	inline ArrayList_t2438777478 ** get_address_of__clientProviders_5() { return &____clientProviders_5; }
	inline void set__clientProviders_5(ArrayList_t2438777478 * value)
	{
		____clientProviders_5 = value;
		Il2CppCodeGenWriteBarrier((&____clientProviders_5), value);
	}

	inline static int32_t get_offset_of__customProperties_6() { return static_cast<int32_t>(offsetof(ChannelData_t3379529888, ____customProperties_6)); }
	inline Hashtable_t2491480603 * get__customProperties_6() const { return ____customProperties_6; }
	inline Hashtable_t2491480603 ** get_address_of__customProperties_6() { return &____customProperties_6; }
	inline void set__customProperties_6(Hashtable_t2491480603 * value)
	{
		____customProperties_6 = value;
		Il2CppCodeGenWriteBarrier((&____customProperties_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELDATA_T3379529888_H
#ifndef PROVIDERDATA_T2301861939_H
#define PROVIDERDATA_T2301861939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ProviderData
struct  ProviderData_t2301861939  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.ProviderData::Ref
	String_t* ___Ref_0;
	// System.String System.Runtime.Remoting.ProviderData::Type
	String_t* ___Type_1;
	// System.String System.Runtime.Remoting.ProviderData::Id
	String_t* ___Id_2;
	// System.Collections.Hashtable System.Runtime.Remoting.ProviderData::CustomProperties
	Hashtable_t2491480603 * ___CustomProperties_3;
	// System.Collections.IList System.Runtime.Remoting.ProviderData::CustomData
	RuntimeObject* ___CustomData_4;

public:
	inline static int32_t get_offset_of_Ref_0() { return static_cast<int32_t>(offsetof(ProviderData_t2301861939, ___Ref_0)); }
	inline String_t* get_Ref_0() const { return ___Ref_0; }
	inline String_t** get_address_of_Ref_0() { return &___Ref_0; }
	inline void set_Ref_0(String_t* value)
	{
		___Ref_0 = value;
		Il2CppCodeGenWriteBarrier((&___Ref_0), value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(ProviderData_t2301861939, ___Type_1)); }
	inline String_t* get_Type_1() const { return ___Type_1; }
	inline String_t** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(String_t* value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier((&___Type_1), value);
	}

	inline static int32_t get_offset_of_Id_2() { return static_cast<int32_t>(offsetof(ProviderData_t2301861939, ___Id_2)); }
	inline String_t* get_Id_2() const { return ___Id_2; }
	inline String_t** get_address_of_Id_2() { return &___Id_2; }
	inline void set_Id_2(String_t* value)
	{
		___Id_2 = value;
		Il2CppCodeGenWriteBarrier((&___Id_2), value);
	}

	inline static int32_t get_offset_of_CustomProperties_3() { return static_cast<int32_t>(offsetof(ProviderData_t2301861939, ___CustomProperties_3)); }
	inline Hashtable_t2491480603 * get_CustomProperties_3() const { return ___CustomProperties_3; }
	inline Hashtable_t2491480603 ** get_address_of_CustomProperties_3() { return &___CustomProperties_3; }
	inline void set_CustomProperties_3(Hashtable_t2491480603 * value)
	{
		___CustomProperties_3 = value;
		Il2CppCodeGenWriteBarrier((&___CustomProperties_3), value);
	}

	inline static int32_t get_offset_of_CustomData_4() { return static_cast<int32_t>(offsetof(ProviderData_t2301861939, ___CustomData_4)); }
	inline RuntimeObject* get_CustomData_4() const { return ___CustomData_4; }
	inline RuntimeObject** get_address_of_CustomData_4() { return &___CustomData_4; }
	inline void set_CustomData_4(RuntimeObject* value)
	{
		___CustomData_4 = value;
		Il2CppCodeGenWriteBarrier((&___CustomData_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROVIDERDATA_T2301861939_H
#ifndef ATTRIBUTE_T3079708014_H
#define ATTRIBUTE_T3079708014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t3079708014  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T3079708014_H
#ifndef SERIALIZATIONBINDER_T1623850403_H
#define SERIALIZATIONBINDER_T1623850403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationBinder
struct  SerializationBinder_t1623850403  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONBINDER_T1623850403_H
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
#ifndef SOAPSERVICES_T3985036768_H
#define SOAPSERVICES_T3985036768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.SoapServices
struct  SoapServices_t3985036768  : public RuntimeObject
{
public:

public:
};

struct SoapServices_t3985036768_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_xmlTypes
	Hashtable_t2491480603 * ____xmlTypes_0;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_xmlElements
	Hashtable_t2491480603 * ____xmlElements_1;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_soapActions
	Hashtable_t2491480603 * ____soapActions_2;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_soapActionsMethods
	Hashtable_t2491480603 * ____soapActionsMethods_3;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_typeInfos
	Hashtable_t2491480603 * ____typeInfos_4;

public:
	inline static int32_t get_offset_of__xmlTypes_0() { return static_cast<int32_t>(offsetof(SoapServices_t3985036768_StaticFields, ____xmlTypes_0)); }
	inline Hashtable_t2491480603 * get__xmlTypes_0() const { return ____xmlTypes_0; }
	inline Hashtable_t2491480603 ** get_address_of__xmlTypes_0() { return &____xmlTypes_0; }
	inline void set__xmlTypes_0(Hashtable_t2491480603 * value)
	{
		____xmlTypes_0 = value;
		Il2CppCodeGenWriteBarrier((&____xmlTypes_0), value);
	}

	inline static int32_t get_offset_of__xmlElements_1() { return static_cast<int32_t>(offsetof(SoapServices_t3985036768_StaticFields, ____xmlElements_1)); }
	inline Hashtable_t2491480603 * get__xmlElements_1() const { return ____xmlElements_1; }
	inline Hashtable_t2491480603 ** get_address_of__xmlElements_1() { return &____xmlElements_1; }
	inline void set__xmlElements_1(Hashtable_t2491480603 * value)
	{
		____xmlElements_1 = value;
		Il2CppCodeGenWriteBarrier((&____xmlElements_1), value);
	}

	inline static int32_t get_offset_of__soapActions_2() { return static_cast<int32_t>(offsetof(SoapServices_t3985036768_StaticFields, ____soapActions_2)); }
	inline Hashtable_t2491480603 * get__soapActions_2() const { return ____soapActions_2; }
	inline Hashtable_t2491480603 ** get_address_of__soapActions_2() { return &____soapActions_2; }
	inline void set__soapActions_2(Hashtable_t2491480603 * value)
	{
		____soapActions_2 = value;
		Il2CppCodeGenWriteBarrier((&____soapActions_2), value);
	}

	inline static int32_t get_offset_of__soapActionsMethods_3() { return static_cast<int32_t>(offsetof(SoapServices_t3985036768_StaticFields, ____soapActionsMethods_3)); }
	inline Hashtable_t2491480603 * get__soapActionsMethods_3() const { return ____soapActionsMethods_3; }
	inline Hashtable_t2491480603 ** get_address_of__soapActionsMethods_3() { return &____soapActionsMethods_3; }
	inline void set__soapActionsMethods_3(Hashtable_t2491480603 * value)
	{
		____soapActionsMethods_3 = value;
		Il2CppCodeGenWriteBarrier((&____soapActionsMethods_3), value);
	}

	inline static int32_t get_offset_of__typeInfos_4() { return static_cast<int32_t>(offsetof(SoapServices_t3985036768_StaticFields, ____typeInfos_4)); }
	inline Hashtable_t2491480603 * get__typeInfos_4() const { return ____typeInfos_4; }
	inline Hashtable_t2491480603 ** get_address_of__typeInfos_4() { return &____typeInfos_4; }
	inline void set__typeInfos_4(Hashtable_t2491480603 * value)
	{
		____typeInfos_4 = value;
		Il2CppCodeGenWriteBarrier((&____typeInfos_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPSERVICES_T3985036768_H
#ifndef TYPEINFO_T1787786947_H
#define TYPEINFO_T1787786947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.SoapServices/TypeInfo
struct  TypeInfo_t1787786947  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices/TypeInfo::Attributes
	Hashtable_t2491480603 * ___Attributes_0;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices/TypeInfo::Elements
	Hashtable_t2491480603 * ___Elements_1;

public:
	inline static int32_t get_offset_of_Attributes_0() { return static_cast<int32_t>(offsetof(TypeInfo_t1787786947, ___Attributes_0)); }
	inline Hashtable_t2491480603 * get_Attributes_0() const { return ___Attributes_0; }
	inline Hashtable_t2491480603 ** get_address_of_Attributes_0() { return &___Attributes_0; }
	inline void set_Attributes_0(Hashtable_t2491480603 * value)
	{
		___Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((&___Attributes_0), value);
	}

	inline static int32_t get_offset_of_Elements_1() { return static_cast<int32_t>(offsetof(TypeInfo_t1787786947, ___Elements_1)); }
	inline Hashtable_t2491480603 * get_Elements_1() const { return ___Elements_1; }
	inline Hashtable_t2491480603 ** get_address_of_Elements_1() { return &___Elements_1; }
	inline void set_Elements_1(Hashtable_t2491480603 * value)
	{
		___Elements_1 = value;
		Il2CppCodeGenWriteBarrier((&___Elements_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T1787786947_H
#ifndef TYPEENTRY_T3796475128_H
#define TYPEENTRY_T3796475128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.TypeEntry
struct  TypeEntry_t3796475128  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.TypeEntry::assembly_name
	String_t* ___assembly_name_0;
	// System.String System.Runtime.Remoting.TypeEntry::type_name
	String_t* ___type_name_1;

public:
	inline static int32_t get_offset_of_assembly_name_0() { return static_cast<int32_t>(offsetof(TypeEntry_t3796475128, ___assembly_name_0)); }
	inline String_t* get_assembly_name_0() const { return ___assembly_name_0; }
	inline String_t** get_address_of_assembly_name_0() { return &___assembly_name_0; }
	inline void set_assembly_name_0(String_t* value)
	{
		___assembly_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_name_0), value);
	}

	inline static int32_t get_offset_of_type_name_1() { return static_cast<int32_t>(offsetof(TypeEntry_t3796475128, ___type_name_1)); }
	inline String_t* get_type_name_1() const { return ___type_name_1; }
	inline String_t** get_address_of_type_name_1() { return &___type_name_1; }
	inline void set_type_name_1(String_t* value)
	{
		___type_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEENTRY_T3796475128_H
#ifndef MESSAGEFORMATTER_T3347209865_H
#define MESSAGEFORMATTER_T3347209865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.MessageFormatter
struct  MessageFormatter_t3347209865  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEFORMATTER_T3347209865_H
#ifndef TRANSPARENTPROXY_T2401910458_H
#define TRANSPARENTPROXY_T2401910458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Proxies.TransparentProxy
struct  TransparentProxy_t2401910458  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.TransparentProxy::_rp
	RealProxy_t980866733 * ____rp_0;

public:
	inline static int32_t get_offset_of__rp_0() { return static_cast<int32_t>(offsetof(TransparentProxy_t2401910458, ____rp_0)); }
	inline RealProxy_t980866733 * get__rp_0() const { return ____rp_0; }
	inline RealProxy_t980866733 ** get_address_of__rp_0() { return &____rp_0; }
	inline void set__rp_0(RealProxy_t980866733 * value)
	{
		____rp_0 = value;
		Il2CppCodeGenWriteBarrier((&____rp_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSPARENTPROXY_T2401910458_H
#ifndef MONOMETHODMESSAGE_T1289019874_H
#define MONOMETHODMESSAGE_T1289019874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct  MonoMethodMessage_t1289019874  : public RuntimeObject
{
public:
	// System.Reflection.MonoMethod System.Runtime.Remoting.Messaging.MonoMethodMessage::method
	MonoMethod_t * ___method_0;
	// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::args
	ObjectU5BU5D_t769195566* ___args_1;
	// System.Byte[] System.Runtime.Remoting.Messaging.MonoMethodMessage::arg_types
	ByteU5BU5D_t481254776* ___arg_types_2;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::ctx
	LogicalCallContext_t2351273423 * ___ctx_3;
	// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::rval
	RuntimeObject * ___rval_4;
	// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::exc
	Exception_t3830270800 * ___exc_5;
	// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::uri
	String_t* ___uri_6;
	// System.Type[] System.Runtime.Remoting.Messaging.MonoMethodMessage::methodSignature
	TypeU5BU5D_t3074309185* ___methodSignature_7;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1289019874, ___method_0)); }
	inline MonoMethod_t * get_method_0() const { return ___method_0; }
	inline MonoMethod_t ** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(MonoMethod_t * value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier((&___method_0), value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1289019874, ___args_1)); }
	inline ObjectU5BU5D_t769195566* get_args_1() const { return ___args_1; }
	inline ObjectU5BU5D_t769195566** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(ObjectU5BU5D_t769195566* value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier((&___args_1), value);
	}

	inline static int32_t get_offset_of_arg_types_2() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1289019874, ___arg_types_2)); }
	inline ByteU5BU5D_t481254776* get_arg_types_2() const { return ___arg_types_2; }
	inline ByteU5BU5D_t481254776** get_address_of_arg_types_2() { return &___arg_types_2; }
	inline void set_arg_types_2(ByteU5BU5D_t481254776* value)
	{
		___arg_types_2 = value;
		Il2CppCodeGenWriteBarrier((&___arg_types_2), value);
	}

	inline static int32_t get_offset_of_ctx_3() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1289019874, ___ctx_3)); }
	inline LogicalCallContext_t2351273423 * get_ctx_3() const { return ___ctx_3; }
	inline LogicalCallContext_t2351273423 ** get_address_of_ctx_3() { return &___ctx_3; }
	inline void set_ctx_3(LogicalCallContext_t2351273423 * value)
	{
		___ctx_3 = value;
		Il2CppCodeGenWriteBarrier((&___ctx_3), value);
	}

	inline static int32_t get_offset_of_rval_4() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1289019874, ___rval_4)); }
	inline RuntimeObject * get_rval_4() const { return ___rval_4; }
	inline RuntimeObject ** get_address_of_rval_4() { return &___rval_4; }
	inline void set_rval_4(RuntimeObject * value)
	{
		___rval_4 = value;
		Il2CppCodeGenWriteBarrier((&___rval_4), value);
	}

	inline static int32_t get_offset_of_exc_5() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1289019874, ___exc_5)); }
	inline Exception_t3830270800 * get_exc_5() const { return ___exc_5; }
	inline Exception_t3830270800 ** get_address_of_exc_5() { return &___exc_5; }
	inline void set_exc_5(Exception_t3830270800 * value)
	{
		___exc_5 = value;
		Il2CppCodeGenWriteBarrier((&___exc_5), value);
	}

	inline static int32_t get_offset_of_uri_6() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1289019874, ___uri_6)); }
	inline String_t* get_uri_6() const { return ___uri_6; }
	inline String_t** get_address_of_uri_6() { return &___uri_6; }
	inline void set_uri_6(String_t* value)
	{
		___uri_6 = value;
		Il2CppCodeGenWriteBarrier((&___uri_6), value);
	}

	inline static int32_t get_offset_of_methodSignature_7() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1289019874, ___methodSignature_7)); }
	inline TypeU5BU5D_t3074309185* get_methodSignature_7() const { return ___methodSignature_7; }
	inline TypeU5BU5D_t3074309185** get_address_of_methodSignature_7() { return &___methodSignature_7; }
	inline void set_methodSignature_7(TypeU5BU5D_t3074309185* value)
	{
		___methodSignature_7 = value;
		Il2CppCodeGenWriteBarrier((&___methodSignature_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOMETHODMESSAGE_T1289019874_H
#ifndef ENVOYTERMINATORSINK_T1768325852_H
#define ENVOYTERMINATORSINK_T1768325852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
struct  EnvoyTerminatorSink_t1768325852  : public RuntimeObject
{
public:

public:
};

struct EnvoyTerminatorSink_t1768325852_StaticFields
{
public:
	// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::Instance
	EnvoyTerminatorSink_t1768325852 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(EnvoyTerminatorSink_t1768325852_StaticFields, ___Instance_0)); }
	inline EnvoyTerminatorSink_t1768325852 * get_Instance_0() const { return ___Instance_0; }
	inline EnvoyTerminatorSink_t1768325852 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(EnvoyTerminatorSink_t1768325852 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVOYTERMINATORSINK_T1768325852_H
#ifndef HEADER_T2373696101_H
#define HEADER_T2373696101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.Header
struct  Header_t2373696101  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Messaging.Header::HeaderNamespace
	String_t* ___HeaderNamespace_0;
	// System.Boolean System.Runtime.Remoting.Messaging.Header::MustUnderstand
	bool ___MustUnderstand_1;
	// System.String System.Runtime.Remoting.Messaging.Header::Name
	String_t* ___Name_2;
	// System.Object System.Runtime.Remoting.Messaging.Header::Value
	RuntimeObject * ___Value_3;

public:
	inline static int32_t get_offset_of_HeaderNamespace_0() { return static_cast<int32_t>(offsetof(Header_t2373696101, ___HeaderNamespace_0)); }
	inline String_t* get_HeaderNamespace_0() const { return ___HeaderNamespace_0; }
	inline String_t** get_address_of_HeaderNamespace_0() { return &___HeaderNamespace_0; }
	inline void set_HeaderNamespace_0(String_t* value)
	{
		___HeaderNamespace_0 = value;
		Il2CppCodeGenWriteBarrier((&___HeaderNamespace_0), value);
	}

	inline static int32_t get_offset_of_MustUnderstand_1() { return static_cast<int32_t>(offsetof(Header_t2373696101, ___MustUnderstand_1)); }
	inline bool get_MustUnderstand_1() const { return ___MustUnderstand_1; }
	inline bool* get_address_of_MustUnderstand_1() { return &___MustUnderstand_1; }
	inline void set_MustUnderstand_1(bool value)
	{
		___MustUnderstand_1 = value;
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(Header_t2373696101, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((&___Name_2), value);
	}

	inline static int32_t get_offset_of_Value_3() { return static_cast<int32_t>(offsetof(Header_t2373696101, ___Value_3)); }
	inline RuntimeObject * get_Value_3() const { return ___Value_3; }
	inline RuntimeObject ** get_address_of_Value_3() { return &___Value_3; }
	inline void set_Value_3(RuntimeObject * value)
	{
		___Value_3 = value;
		Il2CppCodeGenWriteBarrier((&___Value_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADER_T2373696101_H
#ifndef LOGICALCALLCONTEXT_T2351273423_H
#define LOGICALCALLCONTEXT_T2351273423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.LogicalCallContext
struct  LogicalCallContext_t2351273423  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.Messaging.LogicalCallContext::_data
	Hashtable_t2491480603 * ____data_0;
	// System.Runtime.Remoting.Messaging.CallContextRemotingData System.Runtime.Remoting.Messaging.LogicalCallContext::_remotingData
	CallContextRemotingData_t3463933388 * ____remotingData_1;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(LogicalCallContext_t2351273423, ____data_0)); }
	inline Hashtable_t2491480603 * get__data_0() const { return ____data_0; }
	inline Hashtable_t2491480603 ** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(Hashtable_t2491480603 * value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}

	inline static int32_t get_offset_of__remotingData_1() { return static_cast<int32_t>(offsetof(LogicalCallContext_t2351273423, ____remotingData_1)); }
	inline CallContextRemotingData_t3463933388 * get__remotingData_1() const { return ____remotingData_1; }
	inline CallContextRemotingData_t3463933388 ** get_address_of__remotingData_1() { return &____remotingData_1; }
	inline void set__remotingData_1(CallContextRemotingData_t3463933388 * value)
	{
		____remotingData_1 = value;
		Il2CppCodeGenWriteBarrier((&____remotingData_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGICALCALLCONTEXT_T2351273423_H
#ifndef CALLCONTEXTREMOTINGDATA_T3463933388_H
#define CALLCONTEXTREMOTINGDATA_T3463933388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.CallContextRemotingData
struct  CallContextRemotingData_t3463933388  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Messaging.CallContextRemotingData::_logicalCallID
	String_t* ____logicalCallID_0;

public:
	inline static int32_t get_offset_of__logicalCallID_0() { return static_cast<int32_t>(offsetof(CallContextRemotingData_t3463933388, ____logicalCallID_0)); }
	inline String_t* get__logicalCallID_0() const { return ____logicalCallID_0; }
	inline String_t** get_address_of__logicalCallID_0() { return &____logicalCallID_0; }
	inline void set__logicalCallID_0(String_t* value)
	{
		____logicalCallID_0 = value;
		Il2CppCodeGenWriteBarrier((&____logicalCallID_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLCONTEXTREMOTINGDATA_T3463933388_H
#ifndef METHODCALL_T3237794944_H
#define METHODCALL_T3237794944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodCall
struct  MethodCall_t3237794944  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_uri
	String_t* ____uri_0;
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_typeName
	String_t* ____typeName_1;
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_methodName
	String_t* ____methodName_2;
	// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::_args
	ObjectU5BU5D_t769195566* ____args_3;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::_methodSignature
	TypeU5BU5D_t3074309185* ____methodSignature_4;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::_methodBase
	MethodBase_t995967996 * ____methodBase_5;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::_callContext
	LogicalCallContext_t2351273423 * ____callContext_6;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::_genericArguments
	TypeU5BU5D_t3074309185* ____genericArguments_7;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::ExternalProperties
	RuntimeObject* ___ExternalProperties_8;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::InternalProperties
	RuntimeObject* ___InternalProperties_9;

public:
	inline static int32_t get_offset_of__uri_0() { return static_cast<int32_t>(offsetof(MethodCall_t3237794944, ____uri_0)); }
	inline String_t* get__uri_0() const { return ____uri_0; }
	inline String_t** get_address_of__uri_0() { return &____uri_0; }
	inline void set__uri_0(String_t* value)
	{
		____uri_0 = value;
		Il2CppCodeGenWriteBarrier((&____uri_0), value);
	}

	inline static int32_t get_offset_of__typeName_1() { return static_cast<int32_t>(offsetof(MethodCall_t3237794944, ____typeName_1)); }
	inline String_t* get__typeName_1() const { return ____typeName_1; }
	inline String_t** get_address_of__typeName_1() { return &____typeName_1; }
	inline void set__typeName_1(String_t* value)
	{
		____typeName_1 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_1), value);
	}

	inline static int32_t get_offset_of__methodName_2() { return static_cast<int32_t>(offsetof(MethodCall_t3237794944, ____methodName_2)); }
	inline String_t* get__methodName_2() const { return ____methodName_2; }
	inline String_t** get_address_of__methodName_2() { return &____methodName_2; }
	inline void set__methodName_2(String_t* value)
	{
		____methodName_2 = value;
		Il2CppCodeGenWriteBarrier((&____methodName_2), value);
	}

	inline static int32_t get_offset_of__args_3() { return static_cast<int32_t>(offsetof(MethodCall_t3237794944, ____args_3)); }
	inline ObjectU5BU5D_t769195566* get__args_3() const { return ____args_3; }
	inline ObjectU5BU5D_t769195566** get_address_of__args_3() { return &____args_3; }
	inline void set__args_3(ObjectU5BU5D_t769195566* value)
	{
		____args_3 = value;
		Il2CppCodeGenWriteBarrier((&____args_3), value);
	}

	inline static int32_t get_offset_of__methodSignature_4() { return static_cast<int32_t>(offsetof(MethodCall_t3237794944, ____methodSignature_4)); }
	inline TypeU5BU5D_t3074309185* get__methodSignature_4() const { return ____methodSignature_4; }
	inline TypeU5BU5D_t3074309185** get_address_of__methodSignature_4() { return &____methodSignature_4; }
	inline void set__methodSignature_4(TypeU5BU5D_t3074309185* value)
	{
		____methodSignature_4 = value;
		Il2CppCodeGenWriteBarrier((&____methodSignature_4), value);
	}

	inline static int32_t get_offset_of__methodBase_5() { return static_cast<int32_t>(offsetof(MethodCall_t3237794944, ____methodBase_5)); }
	inline MethodBase_t995967996 * get__methodBase_5() const { return ____methodBase_5; }
	inline MethodBase_t995967996 ** get_address_of__methodBase_5() { return &____methodBase_5; }
	inline void set__methodBase_5(MethodBase_t995967996 * value)
	{
		____methodBase_5 = value;
		Il2CppCodeGenWriteBarrier((&____methodBase_5), value);
	}

	inline static int32_t get_offset_of__callContext_6() { return static_cast<int32_t>(offsetof(MethodCall_t3237794944, ____callContext_6)); }
	inline LogicalCallContext_t2351273423 * get__callContext_6() const { return ____callContext_6; }
	inline LogicalCallContext_t2351273423 ** get_address_of__callContext_6() { return &____callContext_6; }
	inline void set__callContext_6(LogicalCallContext_t2351273423 * value)
	{
		____callContext_6 = value;
		Il2CppCodeGenWriteBarrier((&____callContext_6), value);
	}

	inline static int32_t get_offset_of__genericArguments_7() { return static_cast<int32_t>(offsetof(MethodCall_t3237794944, ____genericArguments_7)); }
	inline TypeU5BU5D_t3074309185* get__genericArguments_7() const { return ____genericArguments_7; }
	inline TypeU5BU5D_t3074309185** get_address_of__genericArguments_7() { return &____genericArguments_7; }
	inline void set__genericArguments_7(TypeU5BU5D_t3074309185* value)
	{
		____genericArguments_7 = value;
		Il2CppCodeGenWriteBarrier((&____genericArguments_7), value);
	}

	inline static int32_t get_offset_of_ExternalProperties_8() { return static_cast<int32_t>(offsetof(MethodCall_t3237794944, ___ExternalProperties_8)); }
	inline RuntimeObject* get_ExternalProperties_8() const { return ___ExternalProperties_8; }
	inline RuntimeObject** get_address_of_ExternalProperties_8() { return &___ExternalProperties_8; }
	inline void set_ExternalProperties_8(RuntimeObject* value)
	{
		___ExternalProperties_8 = value;
		Il2CppCodeGenWriteBarrier((&___ExternalProperties_8), value);
	}

	inline static int32_t get_offset_of_InternalProperties_9() { return static_cast<int32_t>(offsetof(MethodCall_t3237794944, ___InternalProperties_9)); }
	inline RuntimeObject* get_InternalProperties_9() const { return ___InternalProperties_9; }
	inline RuntimeObject** get_address_of_InternalProperties_9() { return &___InternalProperties_9; }
	inline void set_InternalProperties_9(RuntimeObject* value)
	{
		___InternalProperties_9 = value;
		Il2CppCodeGenWriteBarrier((&___InternalProperties_9), value);
	}
};

struct MethodCall_t3237794944_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodCall::<>f__switch$map1F
	Dictionary_2_t2512102020 * ___U3CU3Ef__switchU24map1F_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1F_10() { return static_cast<int32_t>(offsetof(MethodCall_t3237794944_StaticFields, ___U3CU3Ef__switchU24map1F_10)); }
	inline Dictionary_2_t2512102020 * get_U3CU3Ef__switchU24map1F_10() const { return ___U3CU3Ef__switchU24map1F_10; }
	inline Dictionary_2_t2512102020 ** get_address_of_U3CU3Ef__switchU24map1F_10() { return &___U3CU3Ef__switchU24map1F_10; }
	inline void set_U3CU3Ef__switchU24map1F_10(Dictionary_2_t2512102020 * value)
	{
		___U3CU3Ef__switchU24map1F_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1F_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALL_T3237794944_H
#ifndef BASEFIXUPRECORD_T1902547881_H
#define BASEFIXUPRECORD_T1902547881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.BaseFixupRecord
struct  BaseFixupRecord_t1902547881  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.BaseFixupRecord::ObjectToBeFixed
	ObjectRecord_t2658842190 * ___ObjectToBeFixed_0;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.BaseFixupRecord::ObjectRequired
	ObjectRecord_t2658842190 * ___ObjectRequired_1;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.BaseFixupRecord::NextSameContainer
	BaseFixupRecord_t1902547881 * ___NextSameContainer_2;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.BaseFixupRecord::NextSameRequired
	BaseFixupRecord_t1902547881 * ___NextSameRequired_3;

public:
	inline static int32_t get_offset_of_ObjectToBeFixed_0() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t1902547881, ___ObjectToBeFixed_0)); }
	inline ObjectRecord_t2658842190 * get_ObjectToBeFixed_0() const { return ___ObjectToBeFixed_0; }
	inline ObjectRecord_t2658842190 ** get_address_of_ObjectToBeFixed_0() { return &___ObjectToBeFixed_0; }
	inline void set_ObjectToBeFixed_0(ObjectRecord_t2658842190 * value)
	{
		___ObjectToBeFixed_0 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectToBeFixed_0), value);
	}

	inline static int32_t get_offset_of_ObjectRequired_1() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t1902547881, ___ObjectRequired_1)); }
	inline ObjectRecord_t2658842190 * get_ObjectRequired_1() const { return ___ObjectRequired_1; }
	inline ObjectRecord_t2658842190 ** get_address_of_ObjectRequired_1() { return &___ObjectRequired_1; }
	inline void set_ObjectRequired_1(ObjectRecord_t2658842190 * value)
	{
		___ObjectRequired_1 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectRequired_1), value);
	}

	inline static int32_t get_offset_of_NextSameContainer_2() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t1902547881, ___NextSameContainer_2)); }
	inline BaseFixupRecord_t1902547881 * get_NextSameContainer_2() const { return ___NextSameContainer_2; }
	inline BaseFixupRecord_t1902547881 ** get_address_of_NextSameContainer_2() { return &___NextSameContainer_2; }
	inline void set_NextSameContainer_2(BaseFixupRecord_t1902547881 * value)
	{
		___NextSameContainer_2 = value;
		Il2CppCodeGenWriteBarrier((&___NextSameContainer_2), value);
	}

	inline static int32_t get_offset_of_NextSameRequired_3() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t1902547881, ___NextSameRequired_3)); }
	inline BaseFixupRecord_t1902547881 * get_NextSameRequired_3() const { return ___NextSameRequired_3; }
	inline BaseFixupRecord_t1902547881 ** get_address_of_NextSameRequired_3() { return &___NextSameRequired_3; }
	inline void set_NextSameRequired_3(BaseFixupRecord_t1902547881 * value)
	{
		___NextSameRequired_3 = value;
		Il2CppCodeGenWriteBarrier((&___NextSameRequired_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEFIXUPRECORD_T1902547881_H
#ifndef METHODDICTIONARY_T2256436503_H
#define METHODDICTIONARY_T2256436503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodDictionary
struct  MethodDictionary_t2256436503  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::_internalProperties
	RuntimeObject* ____internalProperties_0;
	// System.Runtime.Remoting.Messaging.IMethodMessage System.Runtime.Remoting.Messaging.MethodDictionary::_message
	RuntimeObject* ____message_1;
	// System.String[] System.Runtime.Remoting.Messaging.MethodDictionary::_methodKeys
	StringU5BU5D_t1580750740* ____methodKeys_2;
	// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::_ownProperties
	bool ____ownProperties_3;

public:
	inline static int32_t get_offset_of__internalProperties_0() { return static_cast<int32_t>(offsetof(MethodDictionary_t2256436503, ____internalProperties_0)); }
	inline RuntimeObject* get__internalProperties_0() const { return ____internalProperties_0; }
	inline RuntimeObject** get_address_of__internalProperties_0() { return &____internalProperties_0; }
	inline void set__internalProperties_0(RuntimeObject* value)
	{
		____internalProperties_0 = value;
		Il2CppCodeGenWriteBarrier((&____internalProperties_0), value);
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(MethodDictionary_t2256436503, ____message_1)); }
	inline RuntimeObject* get__message_1() const { return ____message_1; }
	inline RuntimeObject** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(RuntimeObject* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier((&____message_1), value);
	}

	inline static int32_t get_offset_of__methodKeys_2() { return static_cast<int32_t>(offsetof(MethodDictionary_t2256436503, ____methodKeys_2)); }
	inline StringU5BU5D_t1580750740* get__methodKeys_2() const { return ____methodKeys_2; }
	inline StringU5BU5D_t1580750740** get_address_of__methodKeys_2() { return &____methodKeys_2; }
	inline void set__methodKeys_2(StringU5BU5D_t1580750740* value)
	{
		____methodKeys_2 = value;
		Il2CppCodeGenWriteBarrier((&____methodKeys_2), value);
	}

	inline static int32_t get_offset_of__ownProperties_3() { return static_cast<int32_t>(offsetof(MethodDictionary_t2256436503, ____ownProperties_3)); }
	inline bool get__ownProperties_3() const { return ____ownProperties_3; }
	inline bool* get_address_of__ownProperties_3() { return &____ownProperties_3; }
	inline void set__ownProperties_3(bool value)
	{
		____ownProperties_3 = value;
	}
};

struct MethodDictionary_t2256436503_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodDictionary::<>f__switch$map21
	Dictionary_2_t2512102020 * ___U3CU3Ef__switchU24map21_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodDictionary::<>f__switch$map22
	Dictionary_2_t2512102020 * ___U3CU3Ef__switchU24map22_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map21_4() { return static_cast<int32_t>(offsetof(MethodDictionary_t2256436503_StaticFields, ___U3CU3Ef__switchU24map21_4)); }
	inline Dictionary_2_t2512102020 * get_U3CU3Ef__switchU24map21_4() const { return ___U3CU3Ef__switchU24map21_4; }
	inline Dictionary_2_t2512102020 ** get_address_of_U3CU3Ef__switchU24map21_4() { return &___U3CU3Ef__switchU24map21_4; }
	inline void set_U3CU3Ef__switchU24map21_4(Dictionary_2_t2512102020 * value)
	{
		___U3CU3Ef__switchU24map21_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map21_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map22_5() { return static_cast<int32_t>(offsetof(MethodDictionary_t2256436503_StaticFields, ___U3CU3Ef__switchU24map22_5)); }
	inline Dictionary_2_t2512102020 * get_U3CU3Ef__switchU24map22_5() const { return ___U3CU3Ef__switchU24map22_5; }
	inline Dictionary_2_t2512102020 ** get_address_of_U3CU3Ef__switchU24map22_5() { return &___U3CU3Ef__switchU24map22_5; }
	inline void set_U3CU3Ef__switchU24map22_5(Dictionary_2_t2512102020 * value)
	{
		___U3CU3Ef__switchU24map22_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map22_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODDICTIONARY_T2256436503_H
#ifndef DICTIONARYENUMERATOR_T3447244325_H
#define DICTIONARYENUMERATOR_T3447244325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
struct  DictionaryEnumerator_t3447244325  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.MethodDictionary System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::_methodDictionary
	MethodDictionary_t2256436503 * ____methodDictionary_0;
	// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::_hashtableEnum
	RuntimeObject* ____hashtableEnum_1;
	// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::_posMethod
	int32_t ____posMethod_2;

public:
	inline static int32_t get_offset_of__methodDictionary_0() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t3447244325, ____methodDictionary_0)); }
	inline MethodDictionary_t2256436503 * get__methodDictionary_0() const { return ____methodDictionary_0; }
	inline MethodDictionary_t2256436503 ** get_address_of__methodDictionary_0() { return &____methodDictionary_0; }
	inline void set__methodDictionary_0(MethodDictionary_t2256436503 * value)
	{
		____methodDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&____methodDictionary_0), value);
	}

	inline static int32_t get_offset_of__hashtableEnum_1() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t3447244325, ____hashtableEnum_1)); }
	inline RuntimeObject* get__hashtableEnum_1() const { return ____hashtableEnum_1; }
	inline RuntimeObject** get_address_of__hashtableEnum_1() { return &____hashtableEnum_1; }
	inline void set__hashtableEnum_1(RuntimeObject* value)
	{
		____hashtableEnum_1 = value;
		Il2CppCodeGenWriteBarrier((&____hashtableEnum_1), value);
	}

	inline static int32_t get_offset_of__posMethod_2() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t3447244325, ____posMethod_2)); }
	inline int32_t get__posMethod_2() const { return ____posMethod_2; }
	inline int32_t* get_address_of__posMethod_2() { return &____posMethod_2; }
	inline void set__posMethod_2(int32_t value)
	{
		____posMethod_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYENUMERATOR_T3447244325_H
#ifndef ARRAYNULLFILLER_T1189628944_H
#define ARRAYNULLFILLER_T1189628944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller
struct  ArrayNullFiller_t1189628944  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller::NullCount
	int32_t ___NullCount_0;

public:
	inline static int32_t get_offset_of_NullCount_0() { return static_cast<int32_t>(offsetof(ArrayNullFiller_t1189628944, ___NullCount_0)); }
	inline int32_t get_NullCount_0() const { return ___NullCount_0; }
	inline int32_t* get_address_of_NullCount_0() { return &___NullCount_0; }
	inline void set_NullCount_0(int32_t value)
	{
		___NullCount_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYNULLFILLER_T1189628944_H
#ifndef REMOTINGSURROGATE_T1703573715_H
#define REMOTINGSURROGATE_T1703573715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.RemotingSurrogate
struct  RemotingSurrogate_t1703573715  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGSURROGATE_T1703573715_H
#ifndef TYPEINFO_T364353910_H
#define TYPEINFO_T364353910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.TypeInfo
struct  TypeInfo_t364353910  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.TypeInfo::serverType
	String_t* ___serverType_0;
	// System.String[] System.Runtime.Remoting.TypeInfo::serverHierarchy
	StringU5BU5D_t1580750740* ___serverHierarchy_1;
	// System.String[] System.Runtime.Remoting.TypeInfo::interfacesImplemented
	StringU5BU5D_t1580750740* ___interfacesImplemented_2;

public:
	inline static int32_t get_offset_of_serverType_0() { return static_cast<int32_t>(offsetof(TypeInfo_t364353910, ___serverType_0)); }
	inline String_t* get_serverType_0() const { return ___serverType_0; }
	inline String_t** get_address_of_serverType_0() { return &___serverType_0; }
	inline void set_serverType_0(String_t* value)
	{
		___serverType_0 = value;
		Il2CppCodeGenWriteBarrier((&___serverType_0), value);
	}

	inline static int32_t get_offset_of_serverHierarchy_1() { return static_cast<int32_t>(offsetof(TypeInfo_t364353910, ___serverHierarchy_1)); }
	inline StringU5BU5D_t1580750740* get_serverHierarchy_1() const { return ___serverHierarchy_1; }
	inline StringU5BU5D_t1580750740** get_address_of_serverHierarchy_1() { return &___serverHierarchy_1; }
	inline void set_serverHierarchy_1(StringU5BU5D_t1580750740* value)
	{
		___serverHierarchy_1 = value;
		Il2CppCodeGenWriteBarrier((&___serverHierarchy_1), value);
	}

	inline static int32_t get_offset_of_interfacesImplemented_2() { return static_cast<int32_t>(offsetof(TypeInfo_t364353910, ___interfacesImplemented_2)); }
	inline StringU5BU5D_t1580750740* get_interfacesImplemented_2() const { return ___interfacesImplemented_2; }
	inline StringU5BU5D_t1580750740** get_address_of_interfacesImplemented_2() { return &___interfacesImplemented_2; }
	inline void set_interfacesImplemented_2(StringU5BU5D_t1580750740* value)
	{
		___interfacesImplemented_2 = value;
		Il2CppCodeGenWriteBarrier((&___interfacesImplemented_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T364353910_H
#ifndef REMOTINGSURROGATESELECTOR_T1464403223_H
#define REMOTINGSURROGATESELECTOR_T1464403223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
struct  RemotingSurrogateSelector_t1464403223  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::_next
	RuntimeObject* ____next_3;

public:
	inline static int32_t get_offset_of__next_3() { return static_cast<int32_t>(offsetof(RemotingSurrogateSelector_t1464403223, ____next_3)); }
	inline RuntimeObject* get__next_3() const { return ____next_3; }
	inline RuntimeObject** get_address_of__next_3() { return &____next_3; }
	inline void set__next_3(RuntimeObject* value)
	{
		____next_3 = value;
		Il2CppCodeGenWriteBarrier((&____next_3), value);
	}
};

struct RemotingSurrogateSelector_t1464403223_StaticFields
{
public:
	// System.Type System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::s_cachedTypeObjRef
	Type_t * ___s_cachedTypeObjRef_0;
	// System.Runtime.Remoting.Messaging.ObjRefSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::_objRefSurrogate
	ObjRefSurrogate_t3545829384 * ____objRefSurrogate_1;
	// System.Runtime.Remoting.Messaging.RemotingSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::_objRemotingSurrogate
	RemotingSurrogate_t1703573715 * ____objRemotingSurrogate_2;

public:
	inline static int32_t get_offset_of_s_cachedTypeObjRef_0() { return static_cast<int32_t>(offsetof(RemotingSurrogateSelector_t1464403223_StaticFields, ___s_cachedTypeObjRef_0)); }
	inline Type_t * get_s_cachedTypeObjRef_0() const { return ___s_cachedTypeObjRef_0; }
	inline Type_t ** get_address_of_s_cachedTypeObjRef_0() { return &___s_cachedTypeObjRef_0; }
	inline void set_s_cachedTypeObjRef_0(Type_t * value)
	{
		___s_cachedTypeObjRef_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedTypeObjRef_0), value);
	}

	inline static int32_t get_offset_of__objRefSurrogate_1() { return static_cast<int32_t>(offsetof(RemotingSurrogateSelector_t1464403223_StaticFields, ____objRefSurrogate_1)); }
	inline ObjRefSurrogate_t3545829384 * get__objRefSurrogate_1() const { return ____objRefSurrogate_1; }
	inline ObjRefSurrogate_t3545829384 ** get_address_of__objRefSurrogate_1() { return &____objRefSurrogate_1; }
	inline void set__objRefSurrogate_1(ObjRefSurrogate_t3545829384 * value)
	{
		____objRefSurrogate_1 = value;
		Il2CppCodeGenWriteBarrier((&____objRefSurrogate_1), value);
	}

	inline static int32_t get_offset_of__objRemotingSurrogate_2() { return static_cast<int32_t>(offsetof(RemotingSurrogateSelector_t1464403223_StaticFields, ____objRemotingSurrogate_2)); }
	inline RemotingSurrogate_t1703573715 * get__objRemotingSurrogate_2() const { return ____objRemotingSurrogate_2; }
	inline RemotingSurrogate_t1703573715 ** get_address_of__objRemotingSurrogate_2() { return &____objRemotingSurrogate_2; }
	inline void set__objRemotingSurrogate_2(RemotingSurrogate_t1703573715 * value)
	{
		____objRemotingSurrogate_2 = value;
		Il2CppCodeGenWriteBarrier((&____objRemotingSurrogate_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGSURROGATESELECTOR_T1464403223_H
#ifndef RETURNMESSAGE_T3705063755_H
#define RETURNMESSAGE_T3705063755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ReturnMessage
struct  ReturnMessage_t3705063755  : public RuntimeObject
{
public:
	// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::_outArgs
	ObjectU5BU5D_t769195566* ____outArgs_0;
	// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::_args
	ObjectU5BU5D_t769195566* ____args_1;
	// System.Int32 System.Runtime.Remoting.Messaging.ReturnMessage::_outArgsCount
	int32_t ____outArgsCount_2;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::_callCtx
	LogicalCallContext_t2351273423 * ____callCtx_3;
	// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::_returnValue
	RuntimeObject * ____returnValue_4;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_uri
	String_t* ____uri_5;
	// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::_exception
	Exception_t3830270800 * ____exception_6;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::_methodBase
	MethodBase_t995967996 * ____methodBase_7;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_methodName
	String_t* ____methodName_8;
	// System.Type[] System.Runtime.Remoting.Messaging.ReturnMessage::_methodSignature
	TypeU5BU5D_t3074309185* ____methodSignature_9;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_typeName
	String_t* ____typeName_10;
	// System.Runtime.Remoting.Messaging.MethodReturnDictionary System.Runtime.Remoting.Messaging.ReturnMessage::_properties
	MethodReturnDictionary_t3810987099 * ____properties_11;
	// System.Runtime.Remoting.Messaging.ArgInfo System.Runtime.Remoting.Messaging.ReturnMessage::_inArgInfo
	ArgInfo_t4039207888 * ____inArgInfo_12;

public:
	inline static int32_t get_offset_of__outArgs_0() { return static_cast<int32_t>(offsetof(ReturnMessage_t3705063755, ____outArgs_0)); }
	inline ObjectU5BU5D_t769195566* get__outArgs_0() const { return ____outArgs_0; }
	inline ObjectU5BU5D_t769195566** get_address_of__outArgs_0() { return &____outArgs_0; }
	inline void set__outArgs_0(ObjectU5BU5D_t769195566* value)
	{
		____outArgs_0 = value;
		Il2CppCodeGenWriteBarrier((&____outArgs_0), value);
	}

	inline static int32_t get_offset_of__args_1() { return static_cast<int32_t>(offsetof(ReturnMessage_t3705063755, ____args_1)); }
	inline ObjectU5BU5D_t769195566* get__args_1() const { return ____args_1; }
	inline ObjectU5BU5D_t769195566** get_address_of__args_1() { return &____args_1; }
	inline void set__args_1(ObjectU5BU5D_t769195566* value)
	{
		____args_1 = value;
		Il2CppCodeGenWriteBarrier((&____args_1), value);
	}

	inline static int32_t get_offset_of__outArgsCount_2() { return static_cast<int32_t>(offsetof(ReturnMessage_t3705063755, ____outArgsCount_2)); }
	inline int32_t get__outArgsCount_2() const { return ____outArgsCount_2; }
	inline int32_t* get_address_of__outArgsCount_2() { return &____outArgsCount_2; }
	inline void set__outArgsCount_2(int32_t value)
	{
		____outArgsCount_2 = value;
	}

	inline static int32_t get_offset_of__callCtx_3() { return static_cast<int32_t>(offsetof(ReturnMessage_t3705063755, ____callCtx_3)); }
	inline LogicalCallContext_t2351273423 * get__callCtx_3() const { return ____callCtx_3; }
	inline LogicalCallContext_t2351273423 ** get_address_of__callCtx_3() { return &____callCtx_3; }
	inline void set__callCtx_3(LogicalCallContext_t2351273423 * value)
	{
		____callCtx_3 = value;
		Il2CppCodeGenWriteBarrier((&____callCtx_3), value);
	}

	inline static int32_t get_offset_of__returnValue_4() { return static_cast<int32_t>(offsetof(ReturnMessage_t3705063755, ____returnValue_4)); }
	inline RuntimeObject * get__returnValue_4() const { return ____returnValue_4; }
	inline RuntimeObject ** get_address_of__returnValue_4() { return &____returnValue_4; }
	inline void set__returnValue_4(RuntimeObject * value)
	{
		____returnValue_4 = value;
		Il2CppCodeGenWriteBarrier((&____returnValue_4), value);
	}

	inline static int32_t get_offset_of__uri_5() { return static_cast<int32_t>(offsetof(ReturnMessage_t3705063755, ____uri_5)); }
	inline String_t* get__uri_5() const { return ____uri_5; }
	inline String_t** get_address_of__uri_5() { return &____uri_5; }
	inline void set__uri_5(String_t* value)
	{
		____uri_5 = value;
		Il2CppCodeGenWriteBarrier((&____uri_5), value);
	}

	inline static int32_t get_offset_of__exception_6() { return static_cast<int32_t>(offsetof(ReturnMessage_t3705063755, ____exception_6)); }
	inline Exception_t3830270800 * get__exception_6() const { return ____exception_6; }
	inline Exception_t3830270800 ** get_address_of__exception_6() { return &____exception_6; }
	inline void set__exception_6(Exception_t3830270800 * value)
	{
		____exception_6 = value;
		Il2CppCodeGenWriteBarrier((&____exception_6), value);
	}

	inline static int32_t get_offset_of__methodBase_7() { return static_cast<int32_t>(offsetof(ReturnMessage_t3705063755, ____methodBase_7)); }
	inline MethodBase_t995967996 * get__methodBase_7() const { return ____methodBase_7; }
	inline MethodBase_t995967996 ** get_address_of__methodBase_7() { return &____methodBase_7; }
	inline void set__methodBase_7(MethodBase_t995967996 * value)
	{
		____methodBase_7 = value;
		Il2CppCodeGenWriteBarrier((&____methodBase_7), value);
	}

	inline static int32_t get_offset_of__methodName_8() { return static_cast<int32_t>(offsetof(ReturnMessage_t3705063755, ____methodName_8)); }
	inline String_t* get__methodName_8() const { return ____methodName_8; }
	inline String_t** get_address_of__methodName_8() { return &____methodName_8; }
	inline void set__methodName_8(String_t* value)
	{
		____methodName_8 = value;
		Il2CppCodeGenWriteBarrier((&____methodName_8), value);
	}

	inline static int32_t get_offset_of__methodSignature_9() { return static_cast<int32_t>(offsetof(ReturnMessage_t3705063755, ____methodSignature_9)); }
	inline TypeU5BU5D_t3074309185* get__methodSignature_9() const { return ____methodSignature_9; }
	inline TypeU5BU5D_t3074309185** get_address_of__methodSignature_9() { return &____methodSignature_9; }
	inline void set__methodSignature_9(TypeU5BU5D_t3074309185* value)
	{
		____methodSignature_9 = value;
		Il2CppCodeGenWriteBarrier((&____methodSignature_9), value);
	}

	inline static int32_t get_offset_of__typeName_10() { return static_cast<int32_t>(offsetof(ReturnMessage_t3705063755, ____typeName_10)); }
	inline String_t* get__typeName_10() const { return ____typeName_10; }
	inline String_t** get_address_of__typeName_10() { return &____typeName_10; }
	inline void set__typeName_10(String_t* value)
	{
		____typeName_10 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_10), value);
	}

	inline static int32_t get_offset_of__properties_11() { return static_cast<int32_t>(offsetof(ReturnMessage_t3705063755, ____properties_11)); }
	inline MethodReturnDictionary_t3810987099 * get__properties_11() const { return ____properties_11; }
	inline MethodReturnDictionary_t3810987099 ** get_address_of__properties_11() { return &____properties_11; }
	inline void set__properties_11(MethodReturnDictionary_t3810987099 * value)
	{
		____properties_11 = value;
		Il2CppCodeGenWriteBarrier((&____properties_11), value);
	}

	inline static int32_t get_offset_of__inArgInfo_12() { return static_cast<int32_t>(offsetof(ReturnMessage_t3705063755, ____inArgInfo_12)); }
	inline ArgInfo_t4039207888 * get__inArgInfo_12() const { return ____inArgInfo_12; }
	inline ArgInfo_t4039207888 ** get_address_of__inArgInfo_12() { return &____inArgInfo_12; }
	inline void set__inArgInfo_12(ArgInfo_t4039207888 * value)
	{
		____inArgInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&____inArgInfo_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RETURNMESSAGE_T3705063755_H
#ifndef SERVERCONTEXTTERMINATORSINK_T851007775_H
#define SERVERCONTEXTTERMINATORSINK_T851007775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ServerContextTerminatorSink
struct  ServerContextTerminatorSink_t851007775  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERCONTEXTTERMINATORSINK_T851007775_H
#ifndef SERVEROBJECTTERMINATORSINK_T3850460778_H
#define SERVEROBJECTTERMINATORSINK_T3850460778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink
struct  ServerObjectTerminatorSink_t3850460778  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink::_nextSink
	RuntimeObject* ____nextSink_0;

public:
	inline static int32_t get_offset_of__nextSink_0() { return static_cast<int32_t>(offsetof(ServerObjectTerminatorSink_t3850460778, ____nextSink_0)); }
	inline RuntimeObject* get__nextSink_0() const { return ____nextSink_0; }
	inline RuntimeObject** get_address_of__nextSink_0() { return &____nextSink_0; }
	inline void set__nextSink_0(RuntimeObject* value)
	{
		____nextSink_0 = value;
		Il2CppCodeGenWriteBarrier((&____nextSink_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVEROBJECTTERMINATORSINK_T3850460778_H
#ifndef STACKBUILDERSINK_T3271074981_H
#define STACKBUILDERSINK_T3271074981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.StackBuilderSink
struct  StackBuilderSink_t3271074981  : public RuntimeObject
{
public:
	// System.MarshalByRefObject System.Runtime.Remoting.Messaging.StackBuilderSink::_target
	MarshalByRefObject_t933609709 * ____target_0;
	// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Messaging.StackBuilderSink::_rp
	RealProxy_t980866733 * ____rp_1;

public:
	inline static int32_t get_offset_of__target_0() { return static_cast<int32_t>(offsetof(StackBuilderSink_t3271074981, ____target_0)); }
	inline MarshalByRefObject_t933609709 * get__target_0() const { return ____target_0; }
	inline MarshalByRefObject_t933609709 ** get_address_of__target_0() { return &____target_0; }
	inline void set__target_0(MarshalByRefObject_t933609709 * value)
	{
		____target_0 = value;
		Il2CppCodeGenWriteBarrier((&____target_0), value);
	}

	inline static int32_t get_offset_of__rp_1() { return static_cast<int32_t>(offsetof(StackBuilderSink_t3271074981, ____rp_1)); }
	inline RealProxy_t980866733 * get__rp_1() const { return ____rp_1; }
	inline RealProxy_t980866733 ** get_address_of__rp_1() { return &____rp_1; }
	inline void set__rp_1(RealProxy_t980866733 * value)
	{
		____rp_1 = value;
		Il2CppCodeGenWriteBarrier((&____rp_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKBUILDERSINK_T3271074981_H
#ifndef TYPEMETADATA_T1473591231_H
#define TYPEMETADATA_T1473591231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata
struct  TypeMetadata_t1473591231  : public RuntimeObject
{
public:
	// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::Type
	Type_t * ___Type_0;
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberTypes
	TypeU5BU5D_t3074309185* ___MemberTypes_1;
	// System.String[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberNames
	StringU5BU5D_t1580750740* ___MemberNames_2;
	// System.Reflection.MemberInfo[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberInfos
	MemberInfoU5BU5D_t2203412205* ___MemberInfos_3;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::FieldCount
	int32_t ___FieldCount_4;
	// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::NeedsSerializationInfo
	bool ___NeedsSerializationInfo_5;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(TypeMetadata_t1473591231, ___Type_0)); }
	inline Type_t * get_Type_0() const { return ___Type_0; }
	inline Type_t ** get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(Type_t * value)
	{
		___Type_0 = value;
		Il2CppCodeGenWriteBarrier((&___Type_0), value);
	}

	inline static int32_t get_offset_of_MemberTypes_1() { return static_cast<int32_t>(offsetof(TypeMetadata_t1473591231, ___MemberTypes_1)); }
	inline TypeU5BU5D_t3074309185* get_MemberTypes_1() const { return ___MemberTypes_1; }
	inline TypeU5BU5D_t3074309185** get_address_of_MemberTypes_1() { return &___MemberTypes_1; }
	inline void set_MemberTypes_1(TypeU5BU5D_t3074309185* value)
	{
		___MemberTypes_1 = value;
		Il2CppCodeGenWriteBarrier((&___MemberTypes_1), value);
	}

	inline static int32_t get_offset_of_MemberNames_2() { return static_cast<int32_t>(offsetof(TypeMetadata_t1473591231, ___MemberNames_2)); }
	inline StringU5BU5D_t1580750740* get_MemberNames_2() const { return ___MemberNames_2; }
	inline StringU5BU5D_t1580750740** get_address_of_MemberNames_2() { return &___MemberNames_2; }
	inline void set_MemberNames_2(StringU5BU5D_t1580750740* value)
	{
		___MemberNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberNames_2), value);
	}

	inline static int32_t get_offset_of_MemberInfos_3() { return static_cast<int32_t>(offsetof(TypeMetadata_t1473591231, ___MemberInfos_3)); }
	inline MemberInfoU5BU5D_t2203412205* get_MemberInfos_3() const { return ___MemberInfos_3; }
	inline MemberInfoU5BU5D_t2203412205** get_address_of_MemberInfos_3() { return &___MemberInfos_3; }
	inline void set_MemberInfos_3(MemberInfoU5BU5D_t2203412205* value)
	{
		___MemberInfos_3 = value;
		Il2CppCodeGenWriteBarrier((&___MemberInfos_3), value);
	}

	inline static int32_t get_offset_of_FieldCount_4() { return static_cast<int32_t>(offsetof(TypeMetadata_t1473591231, ___FieldCount_4)); }
	inline int32_t get_FieldCount_4() const { return ___FieldCount_4; }
	inline int32_t* get_address_of_FieldCount_4() { return &___FieldCount_4; }
	inline void set_FieldCount_4(int32_t value)
	{
		___FieldCount_4 = value;
	}

	inline static int32_t get_offset_of_NeedsSerializationInfo_5() { return static_cast<int32_t>(offsetof(TypeMetadata_t1473591231, ___NeedsSerializationInfo_5)); }
	inline bool get_NeedsSerializationInfo_5() const { return ___NeedsSerializationInfo_5; }
	inline bool* get_address_of_NeedsSerializationInfo_5() { return &___NeedsSerializationInfo_5; }
	inline void set_NeedsSerializationInfo_5(bool value)
	{
		___NeedsSerializationInfo_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEMETADATA_T1473591231_H
#ifndef EXCEPTION_T3830270800_H
#define EXCEPTION_T3830270800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t3830270800  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t3274416346* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t3830270800 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t3830270800, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t3274416346* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t3274416346** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t3274416346* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t3830270800, ___inner_exception_1)); }
	inline Exception_t3830270800 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t3830270800 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t3830270800 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t3830270800, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t3830270800, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t3830270800, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t3830270800, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t3830270800, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t3830270800, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t3830270800, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t3830270800, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t3830270800, ____data_10)); }
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
#endif // EXCEPTION_T3830270800_H
#ifndef OBJREFSURROGATE_T3545829384_H
#define OBJREFSURROGATE_T3545829384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ObjRefSurrogate
struct  ObjRefSurrogate_t3545829384  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJREFSURROGATE_T3545829384_H
#ifndef ARRAYFIXUPRECORD_T1729185097_H
#define ARRAYFIXUPRECORD_T1729185097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ArrayFixupRecord
struct  ArrayFixupRecord_t1729185097  : public BaseFixupRecord_t1902547881
{
public:
	// System.Int32 System.Runtime.Serialization.ArrayFixupRecord::_index
	int32_t ____index_4;

public:
	inline static int32_t get_offset_of__index_4() { return static_cast<int32_t>(offsetof(ArrayFixupRecord_t1729185097, ____index_4)); }
	inline int32_t get__index_4() const { return ____index_4; }
	inline int32_t* get_address_of__index_4() { return &____index_4; }
	inline void set__index_4(int32_t value)
	{
		____index_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYFIXUPRECORD_T1729185097_H
#ifndef ONDESERIALIZINGATTRIBUTE_T4249412610_H
#define ONDESERIALIZINGATTRIBUTE_T4249412610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnDeserializingAttribute
struct  OnDeserializingAttribute_t4249412610  : public Attribute_t3079708014
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONDESERIALIZINGATTRIBUTE_T4249412610_H
#ifndef ONDESERIALIZEDATTRIBUTE_T1170673285_H
#define ONDESERIALIZEDATTRIBUTE_T1170673285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnDeserializedAttribute
struct  OnDeserializedAttribute_t1170673285  : public Attribute_t3079708014
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONDESERIALIZEDATTRIBUTE_T1170673285_H
#ifndef ONSERIALIZEDATTRIBUTE_T3634929697_H
#define ONSERIALIZEDATTRIBUTE_T3634929697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnSerializedAttribute
struct  OnSerializedAttribute_t3634929697  : public Attribute_t3079708014
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONSERIALIZEDATTRIBUTE_T3634929697_H
#ifndef DELAYEDFIXUPRECORD_T3619809552_H
#define DELAYEDFIXUPRECORD_T3619809552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.DelayedFixupRecord
struct  DelayedFixupRecord_t3619809552  : public BaseFixupRecord_t1902547881
{
public:
	// System.String System.Runtime.Serialization.DelayedFixupRecord::_memberName
	String_t* ____memberName_4;

public:
	inline static int32_t get_offset_of__memberName_4() { return static_cast<int32_t>(offsetof(DelayedFixupRecord_t3619809552, ____memberName_4)); }
	inline String_t* get__memberName_4() const { return ____memberName_4; }
	inline String_t** get_address_of__memberName_4() { return &____memberName_4; }
	inline void set__memberName_4(String_t* value)
	{
		____memberName_4 = value;
		Il2CppCodeGenWriteBarrier((&____memberName_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELAYEDFIXUPRECORD_T3619809552_H
#ifndef WELLKNOWNCLIENTTYPEENTRY_T3502923836_H
#define WELLKNOWNCLIENTTYPEENTRY_T3502923836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.WellKnownClientTypeEntry
struct  WellKnownClientTypeEntry_t3502923836  : public TypeEntry_t3796475128
{
public:
	// System.Type System.Runtime.Remoting.WellKnownClientTypeEntry::obj_type
	Type_t * ___obj_type_2;
	// System.String System.Runtime.Remoting.WellKnownClientTypeEntry::obj_url
	String_t* ___obj_url_3;
	// System.String System.Runtime.Remoting.WellKnownClientTypeEntry::app_url
	String_t* ___app_url_4;

public:
	inline static int32_t get_offset_of_obj_type_2() { return static_cast<int32_t>(offsetof(WellKnownClientTypeEntry_t3502923836, ___obj_type_2)); }
	inline Type_t * get_obj_type_2() const { return ___obj_type_2; }
	inline Type_t ** get_address_of_obj_type_2() { return &___obj_type_2; }
	inline void set_obj_type_2(Type_t * value)
	{
		___obj_type_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_type_2), value);
	}

	inline static int32_t get_offset_of_obj_url_3() { return static_cast<int32_t>(offsetof(WellKnownClientTypeEntry_t3502923836, ___obj_url_3)); }
	inline String_t* get_obj_url_3() const { return ___obj_url_3; }
	inline String_t** get_address_of_obj_url_3() { return &___obj_url_3; }
	inline void set_obj_url_3(String_t* value)
	{
		___obj_url_3 = value;
		Il2CppCodeGenWriteBarrier((&___obj_url_3), value);
	}

	inline static int32_t get_offset_of_app_url_4() { return static_cast<int32_t>(offsetof(WellKnownClientTypeEntry_t3502923836, ___app_url_4)); }
	inline String_t* get_app_url_4() const { return ___app_url_4; }
	inline String_t** get_address_of_app_url_4() { return &___app_url_4; }
	inline void set_app_url_4(String_t* value)
	{
		___app_url_4 = value;
		Il2CppCodeGenWriteBarrier((&___app_url_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WELLKNOWNCLIENTTYPEENTRY_T3502923836_H
#ifndef FIXUPRECORD_T2831593520_H
#define FIXUPRECORD_T2831593520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FixupRecord
struct  FixupRecord_t2831593520  : public BaseFixupRecord_t1902547881
{
public:
	// System.Reflection.MemberInfo System.Runtime.Serialization.FixupRecord::_member
	MemberInfo_t * ____member_4;

public:
	inline static int32_t get_offset_of__member_4() { return static_cast<int32_t>(offsetof(FixupRecord_t2831593520, ____member_4)); }
	inline MemberInfo_t * get__member_4() const { return ____member_4; }
	inline MemberInfo_t ** get_address_of__member_4() { return &____member_4; }
	inline void set__member_4(MemberInfo_t * value)
	{
		____member_4 = value;
		Il2CppCodeGenWriteBarrier((&____member_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXUPRECORD_T2831593520_H
#ifndef MULTIARRAYFIXUPRECORD_T953748551_H
#define MULTIARRAYFIXUPRECORD_T953748551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.MultiArrayFixupRecord
struct  MultiArrayFixupRecord_t953748551  : public BaseFixupRecord_t1902547881
{
public:
	// System.Int32[] System.Runtime.Serialization.MultiArrayFixupRecord::_indices
	Int32U5BU5D_t916272174* ____indices_4;

public:
	inline static int32_t get_offset_of__indices_4() { return static_cast<int32_t>(offsetof(MultiArrayFixupRecord_t953748551, ____indices_4)); }
	inline Int32U5BU5D_t916272174* get__indices_4() const { return ____indices_4; }
	inline Int32U5BU5D_t916272174** get_address_of__indices_4() { return &____indices_4; }
	inline void set__indices_4(Int32U5BU5D_t916272174* value)
	{
		____indices_4 = value;
		Il2CppCodeGenWriteBarrier((&____indices_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTIARRAYFIXUPRECORD_T953748551_H
#ifndef CLIENTIDENTITY_T3026188452_H
#define CLIENTIDENTITY_T3026188452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ClientIdentity
struct  ClientIdentity_t3026188452  : public Identity_t78057183
{
public:
	// System.WeakReference System.Runtime.Remoting.ClientIdentity::_proxyReference
	WeakReference_t155206486 * ____proxyReference_7;

public:
	inline static int32_t get_offset_of__proxyReference_7() { return static_cast<int32_t>(offsetof(ClientIdentity_t3026188452, ____proxyReference_7)); }
	inline WeakReference_t155206486 * get__proxyReference_7() const { return ____proxyReference_7; }
	inline WeakReference_t155206486 ** get_address_of__proxyReference_7() { return &____proxyReference_7; }
	inline void set__proxyReference_7(WeakReference_t155206486 * value)
	{
		____proxyReference_7 = value;
		Il2CppCodeGenWriteBarrier((&____proxyReference_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTIDENTITY_T3026188452_H
#ifndef SERVERIDENTITY_T2406396366_H
#define SERVERIDENTITY_T2406396366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ServerIdentity
struct  ServerIdentity_t2406396366  : public Identity_t78057183
{
public:
	// System.Type System.Runtime.Remoting.ServerIdentity::_objectType
	Type_t * ____objectType_7;
	// System.MarshalByRefObject System.Runtime.Remoting.ServerIdentity::_serverObject
	MarshalByRefObject_t933609709 * ____serverObject_8;
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.ServerIdentity::_context
	Context_t2330603731 * ____context_9;

public:
	inline static int32_t get_offset_of__objectType_7() { return static_cast<int32_t>(offsetof(ServerIdentity_t2406396366, ____objectType_7)); }
	inline Type_t * get__objectType_7() const { return ____objectType_7; }
	inline Type_t ** get_address_of__objectType_7() { return &____objectType_7; }
	inline void set__objectType_7(Type_t * value)
	{
		____objectType_7 = value;
		Il2CppCodeGenWriteBarrier((&____objectType_7), value);
	}

	inline static int32_t get_offset_of__serverObject_8() { return static_cast<int32_t>(offsetof(ServerIdentity_t2406396366, ____serverObject_8)); }
	inline MarshalByRefObject_t933609709 * get__serverObject_8() const { return ____serverObject_8; }
	inline MarshalByRefObject_t933609709 ** get_address_of__serverObject_8() { return &____serverObject_8; }
	inline void set__serverObject_8(MarshalByRefObject_t933609709 * value)
	{
		____serverObject_8 = value;
		Il2CppCodeGenWriteBarrier((&____serverObject_8), value);
	}

	inline static int32_t get_offset_of__context_9() { return static_cast<int32_t>(offsetof(ServerIdentity_t2406396366, ____context_9)); }
	inline Context_t2330603731 * get__context_9() const { return ____context_9; }
	inline Context_t2330603731 ** get_address_of__context_9() { return &____context_9; }
	inline void set__context_9(Context_t2330603731 * value)
	{
		____context_9 = value;
		Il2CppCodeGenWriteBarrier((&____context_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERIDENTITY_T2406396366_H
#ifndef FORMATTERDATA_T1493043227_H
#define FORMATTERDATA_T1493043227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.FormatterData
struct  FormatterData_t1493043227  : public ProviderData_t2301861939
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERDATA_T1493043227_H
#ifndef ACTIVATEDSERVICETYPEENTRY_T3401294514_H
#define ACTIVATEDSERVICETYPEENTRY_T3401294514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ActivatedServiceTypeEntry
struct  ActivatedServiceTypeEntry_t3401294514  : public TypeEntry_t3796475128
{
public:
	// System.Type System.Runtime.Remoting.ActivatedServiceTypeEntry::obj_type
	Type_t * ___obj_type_2;

public:
	inline static int32_t get_offset_of_obj_type_2() { return static_cast<int32_t>(offsetof(ActivatedServiceTypeEntry_t3401294514, ___obj_type_2)); }
	inline Type_t * get_obj_type_2() const { return ___obj_type_2; }
	inline Type_t ** get_address_of_obj_type_2() { return &___obj_type_2; }
	inline void set_obj_type_2(Type_t * value)
	{
		___obj_type_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATEDSERVICETYPEENTRY_T3401294514_H
#ifndef ACTIVATEDCLIENTTYPEENTRY_T2633353574_H
#define ACTIVATEDCLIENTTYPEENTRY_T2633353574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ActivatedClientTypeEntry
struct  ActivatedClientTypeEntry_t2633353574  : public TypeEntry_t3796475128
{
public:
	// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::applicationUrl
	String_t* ___applicationUrl_2;
	// System.Type System.Runtime.Remoting.ActivatedClientTypeEntry::obj_type
	Type_t * ___obj_type_3;

public:
	inline static int32_t get_offset_of_applicationUrl_2() { return static_cast<int32_t>(offsetof(ActivatedClientTypeEntry_t2633353574, ___applicationUrl_2)); }
	inline String_t* get_applicationUrl_2() const { return ___applicationUrl_2; }
	inline String_t** get_address_of_applicationUrl_2() { return &___applicationUrl_2; }
	inline void set_applicationUrl_2(String_t* value)
	{
		___applicationUrl_2 = value;
		Il2CppCodeGenWriteBarrier((&___applicationUrl_2), value);
	}

	inline static int32_t get_offset_of_obj_type_3() { return static_cast<int32_t>(offsetof(ActivatedClientTypeEntry_t2633353574, ___obj_type_3)); }
	inline Type_t * get_obj_type_3() const { return ___obj_type_3; }
	inline Type_t ** get_address_of_obj_type_3() { return &___obj_type_3; }
	inline void set_obj_type_3(Type_t * value)
	{
		___obj_type_3 = value;
		Il2CppCodeGenWriteBarrier((&___obj_type_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATEDCLIENTTYPEENTRY_T2633353574_H
#ifndef REMOTINGPROXY_T304261877_H
#define REMOTINGPROXY_T304261877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Proxies.RemotingProxy
struct  RemotingProxy_t304261877  : public RealProxy_t980866733
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Proxies.RemotingProxy::_sink
	RuntimeObject* ____sink_7;
	// System.Boolean System.Runtime.Remoting.Proxies.RemotingProxy::_hasEnvoySink
	bool ____hasEnvoySink_8;
	// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Proxies.RemotingProxy::_ctorCall
	ConstructionCall_t2325625229 * ____ctorCall_9;

public:
	inline static int32_t get_offset_of__sink_7() { return static_cast<int32_t>(offsetof(RemotingProxy_t304261877, ____sink_7)); }
	inline RuntimeObject* get__sink_7() const { return ____sink_7; }
	inline RuntimeObject** get_address_of__sink_7() { return &____sink_7; }
	inline void set__sink_7(RuntimeObject* value)
	{
		____sink_7 = value;
		Il2CppCodeGenWriteBarrier((&____sink_7), value);
	}

	inline static int32_t get_offset_of__hasEnvoySink_8() { return static_cast<int32_t>(offsetof(RemotingProxy_t304261877, ____hasEnvoySink_8)); }
	inline bool get__hasEnvoySink_8() const { return ____hasEnvoySink_8; }
	inline bool* get_address_of__hasEnvoySink_8() { return &____hasEnvoySink_8; }
	inline void set__hasEnvoySink_8(bool value)
	{
		____hasEnvoySink_8 = value;
	}

	inline static int32_t get_offset_of__ctorCall_9() { return static_cast<int32_t>(offsetof(RemotingProxy_t304261877, ____ctorCall_9)); }
	inline ConstructionCall_t2325625229 * get__ctorCall_9() const { return ____ctorCall_9; }
	inline ConstructionCall_t2325625229 ** get_address_of__ctorCall_9() { return &____ctorCall_9; }
	inline void set__ctorCall_9(ConstructionCall_t2325625229 * value)
	{
		____ctorCall_9 = value;
		Il2CppCodeGenWriteBarrier((&____ctorCall_9), value);
	}
};

struct RemotingProxy_t304261877_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Runtime.Remoting.Proxies.RemotingProxy::_cache_GetTypeMethod
	MethodInfo_t * ____cache_GetTypeMethod_5;
	// System.Reflection.MethodInfo System.Runtime.Remoting.Proxies.RemotingProxy::_cache_GetHashCodeMethod
	MethodInfo_t * ____cache_GetHashCodeMethod_6;

public:
	inline static int32_t get_offset_of__cache_GetTypeMethod_5() { return static_cast<int32_t>(offsetof(RemotingProxy_t304261877_StaticFields, ____cache_GetTypeMethod_5)); }
	inline MethodInfo_t * get__cache_GetTypeMethod_5() const { return ____cache_GetTypeMethod_5; }
	inline MethodInfo_t ** get_address_of__cache_GetTypeMethod_5() { return &____cache_GetTypeMethod_5; }
	inline void set__cache_GetTypeMethod_5(MethodInfo_t * value)
	{
		____cache_GetTypeMethod_5 = value;
		Il2CppCodeGenWriteBarrier((&____cache_GetTypeMethod_5), value);
	}

	inline static int32_t get_offset_of__cache_GetHashCodeMethod_6() { return static_cast<int32_t>(offsetof(RemotingProxy_t304261877_StaticFields, ____cache_GetHashCodeMethod_6)); }
	inline MethodInfo_t * get__cache_GetHashCodeMethod_6() const { return ____cache_GetHashCodeMethod_6; }
	inline MethodInfo_t ** get_address_of__cache_GetHashCodeMethod_6() { return &____cache_GetHashCodeMethod_6; }
	inline void set__cache_GetHashCodeMethod_6(MethodInfo_t * value)
	{
		____cache_GetHashCodeMethod_6 = value;
		Il2CppCodeGenWriteBarrier((&____cache_GetHashCodeMethod_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGPROXY_T304261877_H
#ifndef PROXYATTRIBUTE_T1439036879_H
#define PROXYATTRIBUTE_T1439036879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Proxies.ProxyAttribute
struct  ProxyAttribute_t1439036879  : public Attribute_t3079708014
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROXYATTRIBUTE_T1439036879_H
#ifndef SYSTEMEXCEPTION_T3102250335_H
#define SYSTEMEXCEPTION_T3102250335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3102250335  : public Exception_t3830270800
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3102250335_H
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
#ifndef SOAPATTRIBUTE_T1463742503_H
#define SOAPATTRIBUTE_T1463742503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapAttribute
struct  SoapAttribute_t1463742503  : public Attribute_t3079708014
{
public:
	// System.Boolean System.Runtime.Remoting.Metadata.SoapAttribute::_useAttribute
	bool ____useAttribute_0;
	// System.String System.Runtime.Remoting.Metadata.SoapAttribute::ProtXmlNamespace
	String_t* ___ProtXmlNamespace_1;
	// System.Object System.Runtime.Remoting.Metadata.SoapAttribute::ReflectInfo
	RuntimeObject * ___ReflectInfo_2;

public:
	inline static int32_t get_offset_of__useAttribute_0() { return static_cast<int32_t>(offsetof(SoapAttribute_t1463742503, ____useAttribute_0)); }
	inline bool get__useAttribute_0() const { return ____useAttribute_0; }
	inline bool* get_address_of__useAttribute_0() { return &____useAttribute_0; }
	inline void set__useAttribute_0(bool value)
	{
		____useAttribute_0 = value;
	}

	inline static int32_t get_offset_of_ProtXmlNamespace_1() { return static_cast<int32_t>(offsetof(SoapAttribute_t1463742503, ___ProtXmlNamespace_1)); }
	inline String_t* get_ProtXmlNamespace_1() const { return ___ProtXmlNamespace_1; }
	inline String_t** get_address_of_ProtXmlNamespace_1() { return &___ProtXmlNamespace_1; }
	inline void set_ProtXmlNamespace_1(String_t* value)
	{
		___ProtXmlNamespace_1 = value;
		Il2CppCodeGenWriteBarrier((&___ProtXmlNamespace_1), value);
	}

	inline static int32_t get_offset_of_ReflectInfo_2() { return static_cast<int32_t>(offsetof(SoapAttribute_t1463742503, ___ReflectInfo_2)); }
	inline RuntimeObject * get_ReflectInfo_2() const { return ___ReflectInfo_2; }
	inline RuntimeObject ** get_address_of_ReflectInfo_2() { return &___ReflectInfo_2; }
	inline void set_ReflectInfo_2(RuntimeObject * value)
	{
		___ReflectInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___ReflectInfo_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPATTRIBUTE_T1463742503_H
#ifndef METHODRETURNDICTIONARY_T3810987099_H
#define METHODRETURNDICTIONARY_T3810987099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct  MethodReturnDictionary_t3810987099  : public MethodDictionary_t2256436503
{
public:

public:
};

struct MethodReturnDictionary_t3810987099_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalReturnKeys
	StringU5BU5D_t1580750740* ___InternalReturnKeys_6;
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalExceptionKeys
	StringU5BU5D_t1580750740* ___InternalExceptionKeys_7;

public:
	inline static int32_t get_offset_of_InternalReturnKeys_6() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_t3810987099_StaticFields, ___InternalReturnKeys_6)); }
	inline StringU5BU5D_t1580750740* get_InternalReturnKeys_6() const { return ___InternalReturnKeys_6; }
	inline StringU5BU5D_t1580750740** get_address_of_InternalReturnKeys_6() { return &___InternalReturnKeys_6; }
	inline void set_InternalReturnKeys_6(StringU5BU5D_t1580750740* value)
	{
		___InternalReturnKeys_6 = value;
		Il2CppCodeGenWriteBarrier((&___InternalReturnKeys_6), value);
	}

	inline static int32_t get_offset_of_InternalExceptionKeys_7() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_t3810987099_StaticFields, ___InternalExceptionKeys_7)); }
	inline StringU5BU5D_t1580750740* get_InternalExceptionKeys_7() const { return ___InternalExceptionKeys_7; }
	inline StringU5BU5D_t1580750740** get_address_of_InternalExceptionKeys_7() { return &___InternalExceptionKeys_7; }
	inline void set_InternalExceptionKeys_7(StringU5BU5D_t1580750740* value)
	{
		___InternalExceptionKeys_7 = value;
		Il2CppCodeGenWriteBarrier((&___InternalExceptionKeys_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODRETURNDICTIONARY_T3810987099_H
#ifndef METHODCALLDICTIONARY_T2102636391_H
#define METHODCALLDICTIONARY_T2102636391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodCallDictionary
struct  MethodCallDictionary_t2102636391  : public MethodDictionary_t2256436503
{
public:

public:
};

struct MethodCallDictionary_t2102636391_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MethodCallDictionary::InternalKeys
	StringU5BU5D_t1580750740* ___InternalKeys_6;

public:
	inline static int32_t get_offset_of_InternalKeys_6() { return static_cast<int32_t>(offsetof(MethodCallDictionary_t2102636391_StaticFields, ___InternalKeys_6)); }
	inline StringU5BU5D_t1580750740* get_InternalKeys_6() const { return ___InternalKeys_6; }
	inline StringU5BU5D_t1580750740** get_address_of_InternalKeys_6() { return &___InternalKeys_6; }
	inline void set_InternalKeys_6(StringU5BU5D_t1580750740* value)
	{
		___InternalKeys_6 = value;
		Il2CppCodeGenWriteBarrier((&___InternalKeys_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALLDICTIONARY_T2102636391_H
#ifndef ONSERIALIZINGATTRIBUTE_T1960667843_H
#define ONSERIALIZINGATTRIBUTE_T1960667843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnSerializingAttribute
struct  OnSerializingAttribute_t1960667843  : public Attribute_t3079708014
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONSERIALIZINGATTRIBUTE_T1960667843_H
#ifndef CONSTRUCTIONCALLDICTIONARY_T316612919_H
#define CONSTRUCTIONCALLDICTIONARY_T316612919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
struct  ConstructionCallDictionary_t316612919  : public MethodDictionary_t2256436503
{
public:

public:
};

struct ConstructionCallDictionary_t316612919_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.ConstructionCallDictionary::InternalKeys
	StringU5BU5D_t1580750740* ___InternalKeys_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.ConstructionCallDictionary::<>f__switch$map23
	Dictionary_2_t2512102020 * ___U3CU3Ef__switchU24map23_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.ConstructionCallDictionary::<>f__switch$map24
	Dictionary_2_t2512102020 * ___U3CU3Ef__switchU24map24_8;

public:
	inline static int32_t get_offset_of_InternalKeys_6() { return static_cast<int32_t>(offsetof(ConstructionCallDictionary_t316612919_StaticFields, ___InternalKeys_6)); }
	inline StringU5BU5D_t1580750740* get_InternalKeys_6() const { return ___InternalKeys_6; }
	inline StringU5BU5D_t1580750740** get_address_of_InternalKeys_6() { return &___InternalKeys_6; }
	inline void set_InternalKeys_6(StringU5BU5D_t1580750740* value)
	{
		___InternalKeys_6 = value;
		Il2CppCodeGenWriteBarrier((&___InternalKeys_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map23_7() { return static_cast<int32_t>(offsetof(ConstructionCallDictionary_t316612919_StaticFields, ___U3CU3Ef__switchU24map23_7)); }
	inline Dictionary_2_t2512102020 * get_U3CU3Ef__switchU24map23_7() const { return ___U3CU3Ef__switchU24map23_7; }
	inline Dictionary_2_t2512102020 ** get_address_of_U3CU3Ef__switchU24map23_7() { return &___U3CU3Ef__switchU24map23_7; }
	inline void set_U3CU3Ef__switchU24map23_7(Dictionary_2_t2512102020 * value)
	{
		___U3CU3Ef__switchU24map23_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map23_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map24_8() { return static_cast<int32_t>(offsetof(ConstructionCallDictionary_t316612919_StaticFields, ___U3CU3Ef__switchU24map24_8)); }
	inline Dictionary_2_t2512102020 * get_U3CU3Ef__switchU24map24_8() const { return ___U3CU3Ef__switchU24map24_8; }
	inline Dictionary_2_t2512102020 ** get_address_of_U3CU3Ef__switchU24map24_8() { return &___U3CU3Ef__switchU24map24_8; }
	inline void set_U3CU3Ef__switchU24map24_8(Dictionary_2_t2512102020 * value)
	{
		___U3CU3Ef__switchU24map24_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map24_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTIONCALLDICTIONARY_T316612919_H
#ifndef OBJECTRECORDSTATUS_T1464403357_H
#define OBJECTRECORDSTATUS_T1464403357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectRecordStatus
struct  ObjectRecordStatus_t1464403357 
{
public:
	// System.Byte System.Runtime.Serialization.ObjectRecordStatus::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ObjectRecordStatus_t1464403357, ___value___1)); }
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
#endif // OBJECTRECORDSTATUS_T1464403357_H
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
#ifndef SINGLETONIDENTITY_T2138500178_H
#define SINGLETONIDENTITY_T2138500178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.SingletonIdentity
struct  SingletonIdentity_t2138500178  : public ServerIdentity_t2406396366
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETONIDENTITY_T2138500178_H
#ifndef FORMATTERTYPESTYLE_T3555614384_H
#define FORMATTERTYPESTYLE_T3555614384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterTypeStyle
struct  FormatterTypeStyle_t3555614384 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterTypeStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterTypeStyle_t3555614384, ___value___1)); }
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
#endif // FORMATTERTYPESTYLE_T3555614384_H
#ifndef SOAPFIELDATTRIBUTE_T1005179016_H
#define SOAPFIELDATTRIBUTE_T1005179016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapFieldAttribute
struct  SoapFieldAttribute_t1005179016  : public SoapAttribute_t1463742503
{
public:
	// System.String System.Runtime.Remoting.Metadata.SoapFieldAttribute::_elementName
	String_t* ____elementName_3;
	// System.Boolean System.Runtime.Remoting.Metadata.SoapFieldAttribute::_isElement
	bool ____isElement_4;

public:
	inline static int32_t get_offset_of__elementName_3() { return static_cast<int32_t>(offsetof(SoapFieldAttribute_t1005179016, ____elementName_3)); }
	inline String_t* get__elementName_3() const { return ____elementName_3; }
	inline String_t** get_address_of__elementName_3() { return &____elementName_3; }
	inline void set__elementName_3(String_t* value)
	{
		____elementName_3 = value;
		Il2CppCodeGenWriteBarrier((&____elementName_3), value);
	}

	inline static int32_t get_offset_of__isElement_4() { return static_cast<int32_t>(offsetof(SoapFieldAttribute_t1005179016, ____isElement_4)); }
	inline bool get__isElement_4() const { return ____isElement_4; }
	inline bool* get_address_of__isElement_4() { return &____isElement_4; }
	inline void set__isElement_4(bool value)
	{
		____isElement_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPFIELDATTRIBUTE_T1005179016_H
#ifndef SOAPMETHODATTRIBUTE_T786113413_H
#define SOAPMETHODATTRIBUTE_T786113413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapMethodAttribute
struct  SoapMethodAttribute_t786113413  : public SoapAttribute_t1463742503
{
public:
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_responseElement
	String_t* ____responseElement_3;
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_responseNamespace
	String_t* ____responseNamespace_4;
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_returnElement
	String_t* ____returnElement_5;
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_soapAction
	String_t* ____soapAction_6;
	// System.Boolean System.Runtime.Remoting.Metadata.SoapMethodAttribute::_useAttribute
	bool ____useAttribute_7;
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_namespace
	String_t* ____namespace_8;

public:
	inline static int32_t get_offset_of__responseElement_3() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t786113413, ____responseElement_3)); }
	inline String_t* get__responseElement_3() const { return ____responseElement_3; }
	inline String_t** get_address_of__responseElement_3() { return &____responseElement_3; }
	inline void set__responseElement_3(String_t* value)
	{
		____responseElement_3 = value;
		Il2CppCodeGenWriteBarrier((&____responseElement_3), value);
	}

	inline static int32_t get_offset_of__responseNamespace_4() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t786113413, ____responseNamespace_4)); }
	inline String_t* get__responseNamespace_4() const { return ____responseNamespace_4; }
	inline String_t** get_address_of__responseNamespace_4() { return &____responseNamespace_4; }
	inline void set__responseNamespace_4(String_t* value)
	{
		____responseNamespace_4 = value;
		Il2CppCodeGenWriteBarrier((&____responseNamespace_4), value);
	}

	inline static int32_t get_offset_of__returnElement_5() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t786113413, ____returnElement_5)); }
	inline String_t* get__returnElement_5() const { return ____returnElement_5; }
	inline String_t** get_address_of__returnElement_5() { return &____returnElement_5; }
	inline void set__returnElement_5(String_t* value)
	{
		____returnElement_5 = value;
		Il2CppCodeGenWriteBarrier((&____returnElement_5), value);
	}

	inline static int32_t get_offset_of__soapAction_6() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t786113413, ____soapAction_6)); }
	inline String_t* get__soapAction_6() const { return ____soapAction_6; }
	inline String_t** get_address_of__soapAction_6() { return &____soapAction_6; }
	inline void set__soapAction_6(String_t* value)
	{
		____soapAction_6 = value;
		Il2CppCodeGenWriteBarrier((&____soapAction_6), value);
	}

	inline static int32_t get_offset_of__useAttribute_7() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t786113413, ____useAttribute_7)); }
	inline bool get__useAttribute_7() const { return ____useAttribute_7; }
	inline bool* get_address_of__useAttribute_7() { return &____useAttribute_7; }
	inline void set__useAttribute_7(bool value)
	{
		____useAttribute_7 = value;
	}

	inline static int32_t get_offset_of__namespace_8() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t786113413, ____namespace_8)); }
	inline String_t* get__namespace_8() const { return ____namespace_8; }
	inline String_t** get_address_of__namespace_8() { return &____namespace_8; }
	inline void set__namespace_8(String_t* value)
	{
		____namespace_8 = value;
		Il2CppCodeGenWriteBarrier((&____namespace_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPMETHODATTRIBUTE_T786113413_H
#ifndef SOAPPARAMETERATTRIBUTE_T2901007635_H
#define SOAPPARAMETERATTRIBUTE_T2901007635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapParameterAttribute
struct  SoapParameterAttribute_t2901007635  : public SoapAttribute_t1463742503
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPPARAMETERATTRIBUTE_T2901007635_H
#ifndef SOAPTYPEATTRIBUTE_T198619528_H
#define SOAPTYPEATTRIBUTE_T198619528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapTypeAttribute
struct  SoapTypeAttribute_t198619528  : public SoapAttribute_t1463742503
{
public:
	// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::_useAttribute
	bool ____useAttribute_3;
	// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::_xmlElementName
	String_t* ____xmlElementName_4;
	// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::_xmlNamespace
	String_t* ____xmlNamespace_5;
	// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::_xmlTypeName
	String_t* ____xmlTypeName_6;
	// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::_xmlTypeNamespace
	String_t* ____xmlTypeNamespace_7;
	// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::_isType
	bool ____isType_8;
	// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::_isElement
	bool ____isElement_9;

public:
	inline static int32_t get_offset_of__useAttribute_3() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t198619528, ____useAttribute_3)); }
	inline bool get__useAttribute_3() const { return ____useAttribute_3; }
	inline bool* get_address_of__useAttribute_3() { return &____useAttribute_3; }
	inline void set__useAttribute_3(bool value)
	{
		____useAttribute_3 = value;
	}

	inline static int32_t get_offset_of__xmlElementName_4() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t198619528, ____xmlElementName_4)); }
	inline String_t* get__xmlElementName_4() const { return ____xmlElementName_4; }
	inline String_t** get_address_of__xmlElementName_4() { return &____xmlElementName_4; }
	inline void set__xmlElementName_4(String_t* value)
	{
		____xmlElementName_4 = value;
		Il2CppCodeGenWriteBarrier((&____xmlElementName_4), value);
	}

	inline static int32_t get_offset_of__xmlNamespace_5() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t198619528, ____xmlNamespace_5)); }
	inline String_t* get__xmlNamespace_5() const { return ____xmlNamespace_5; }
	inline String_t** get_address_of__xmlNamespace_5() { return &____xmlNamespace_5; }
	inline void set__xmlNamespace_5(String_t* value)
	{
		____xmlNamespace_5 = value;
		Il2CppCodeGenWriteBarrier((&____xmlNamespace_5), value);
	}

	inline static int32_t get_offset_of__xmlTypeName_6() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t198619528, ____xmlTypeName_6)); }
	inline String_t* get__xmlTypeName_6() const { return ____xmlTypeName_6; }
	inline String_t** get_address_of__xmlTypeName_6() { return &____xmlTypeName_6; }
	inline void set__xmlTypeName_6(String_t* value)
	{
		____xmlTypeName_6 = value;
		Il2CppCodeGenWriteBarrier((&____xmlTypeName_6), value);
	}

	inline static int32_t get_offset_of__xmlTypeNamespace_7() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t198619528, ____xmlTypeNamespace_7)); }
	inline String_t* get__xmlTypeNamespace_7() const { return ____xmlTypeNamespace_7; }
	inline String_t** get_address_of__xmlTypeNamespace_7() { return &____xmlTypeNamespace_7; }
	inline void set__xmlTypeNamespace_7(String_t* value)
	{
		____xmlTypeNamespace_7 = value;
		Il2CppCodeGenWriteBarrier((&____xmlTypeNamespace_7), value);
	}

	inline static int32_t get_offset_of__isType_8() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t198619528, ____isType_8)); }
	inline bool get__isType_8() const { return ____isType_8; }
	inline bool* get_address_of__isType_8() { return &____isType_8; }
	inline void set__isType_8(bool value)
	{
		____isType_8 = value;
	}

	inline static int32_t get_offset_of__isElement_9() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t198619528, ____isElement_9)); }
	inline bool get__isElement_9() const { return ____isElement_9; }
	inline bool* get_address_of__isElement_9() { return &____isElement_9; }
	inline void set__isElement_9(bool value)
	{
		____isElement_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPTYPEATTRIBUTE_T198619528_H
#ifndef REMOTINGEXCEPTION_T4145312574_H
#define REMOTINGEXCEPTION_T4145312574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.RemotingException
struct  RemotingException_t4145312574  : public SystemException_t3102250335
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGEXCEPTION_T4145312574_H
#ifndef CLIENTACTIVATEDIDENTITY_T3552715286_H
#define CLIENTACTIVATEDIDENTITY_T3552715286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ClientActivatedIdentity
struct  ClientActivatedIdentity_t3552715286  : public ServerIdentity_t2406396366
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTACTIVATEDIDENTITY_T3552715286_H
#ifndef SINGLECALLIDENTITY_T943744803_H
#define SINGLECALLIDENTITY_T943744803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.SingleCallIdentity
struct  SingleCallIdentity_t943744803  : public ServerIdentity_t2406396366
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLECALLIDENTITY_T943744803_H
#ifndef TYPEFILTERLEVEL_T2263457487_H
#define TYPEFILTERLEVEL_T2263457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.TypeFilterLevel
struct  TypeFilterLevel_t2263457487 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.TypeFilterLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeFilterLevel_t2263457487, ___value___1)); }
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
#endif // TYPEFILTERLEVEL_T2263457487_H
#ifndef WELLKNOWNOBJECTMODE_T1076894662_H
#define WELLKNOWNOBJECTMODE_T1076894662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.WellKnownObjectMode
struct  WellKnownObjectMode_t1076894662 
{
public:
	// System.Int32 System.Runtime.Remoting.WellKnownObjectMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WellKnownObjectMode_t1076894662, ___value___1)); }
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
#endif // WELLKNOWNOBJECTMODE_T1076894662_H
#ifndef TYPETAG_T2549026113_H
#define TYPETAG_T2549026113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.TypeTag
struct  TypeTag_t2549026113 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.TypeTag::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeTag_t2549026113, ___value___1)); }
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
#endif // TYPETAG_T2549026113_H
#ifndef METHODFLAGS_T3654341750_H
#define METHODFLAGS_T3654341750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.MethodFlags
struct  MethodFlags_t3654341750 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.MethodFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodFlags_t3654341750, ___value___1)); }
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
#endif // METHODFLAGS_T3654341750_H
#ifndef RETURNTYPETAG_T3494338432_H
#define RETURNTYPETAG_T3494338432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag
struct  ReturnTypeTag_t3494338432 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReturnTypeTag_t3494338432, ___value___1)); }
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
#endif // RETURNTYPETAG_T3494338432_H
#ifndef FORMATTERASSEMBLYSTYLE_T4028360733_H
#define FORMATTERASSEMBLYSTYLE_T4028360733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_t4028360733 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_t4028360733, ___value___1)); }
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
#endif // FORMATTERASSEMBLYSTYLE_T4028360733_H
#ifndef BINARYELEMENT_T3697628713_H
#define BINARYELEMENT_T3697628713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryElement
struct  BinaryElement_t3697628713 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.BinaryElement::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BinaryElement_t3697628713, ___value___1)); }
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
#endif // BINARYELEMENT_T3697628713_H
#ifndef STREAMINGCONTEXTSTATES_T825388451_H
#define STREAMINGCONTEXTSTATES_T825388451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t825388451 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t825388451, ___value___1)); }
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
#endif // STREAMINGCONTEXTSTATES_T825388451_H
#ifndef WELLKNOWNSERVICETYPEENTRY_T2445315225_H
#define WELLKNOWNSERVICETYPEENTRY_T2445315225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.WellKnownServiceTypeEntry
struct  WellKnownServiceTypeEntry_t2445315225  : public TypeEntry_t3796475128
{
public:
	// System.Type System.Runtime.Remoting.WellKnownServiceTypeEntry::obj_type
	Type_t * ___obj_type_2;
	// System.String System.Runtime.Remoting.WellKnownServiceTypeEntry::obj_uri
	String_t* ___obj_uri_3;
	// System.Runtime.Remoting.WellKnownObjectMode System.Runtime.Remoting.WellKnownServiceTypeEntry::obj_mode
	int32_t ___obj_mode_4;

public:
	inline static int32_t get_offset_of_obj_type_2() { return static_cast<int32_t>(offsetof(WellKnownServiceTypeEntry_t2445315225, ___obj_type_2)); }
	inline Type_t * get_obj_type_2() const { return ___obj_type_2; }
	inline Type_t ** get_address_of_obj_type_2() { return &___obj_type_2; }
	inline void set_obj_type_2(Type_t * value)
	{
		___obj_type_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_type_2), value);
	}

	inline static int32_t get_offset_of_obj_uri_3() { return static_cast<int32_t>(offsetof(WellKnownServiceTypeEntry_t2445315225, ___obj_uri_3)); }
	inline String_t* get_obj_uri_3() const { return ___obj_uri_3; }
	inline String_t** get_address_of_obj_uri_3() { return &___obj_uri_3; }
	inline void set_obj_uri_3(String_t* value)
	{
		___obj_uri_3 = value;
		Il2CppCodeGenWriteBarrier((&___obj_uri_3), value);
	}

	inline static int32_t get_offset_of_obj_mode_4() { return static_cast<int32_t>(offsetof(WellKnownServiceTypeEntry_t2445315225, ___obj_mode_4)); }
	inline int32_t get_obj_mode_4() const { return ___obj_mode_4; }
	inline int32_t* get_address_of_obj_mode_4() { return &___obj_mode_4; }
	inline void set_obj_mode_4(int32_t value)
	{
		___obj_mode_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WELLKNOWNSERVICETYPEENTRY_T2445315225_H
#ifndef OBJECTRECORD_T2658842190_H
#define OBJECTRECORD_T2658842190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectRecord
struct  ObjectRecord_t2658842190  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectRecordStatus System.Runtime.Serialization.ObjectRecord::Status
	uint8_t ___Status_0;
	// System.Object System.Runtime.Serialization.ObjectRecord::OriginalObject
	RuntimeObject * ___OriginalObject_1;
	// System.Object System.Runtime.Serialization.ObjectRecord::ObjectInstance
	RuntimeObject * ___ObjectInstance_2;
	// System.Int64 System.Runtime.Serialization.ObjectRecord::ObjectID
	int64_t ___ObjectID_3;
	// System.Runtime.Serialization.SerializationInfo System.Runtime.Serialization.ObjectRecord::Info
	SerializationInfo_t4008665658 * ___Info_4;
	// System.Int64 System.Runtime.Serialization.ObjectRecord::IdOfContainingObj
	int64_t ___IdOfContainingObj_5;
	// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ObjectRecord::Surrogate
	RuntimeObject* ___Surrogate_6;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.ObjectRecord::SurrogateSelector
	RuntimeObject* ___SurrogateSelector_7;
	// System.Reflection.MemberInfo System.Runtime.Serialization.ObjectRecord::Member
	MemberInfo_t * ___Member_8;
	// System.Int32[] System.Runtime.Serialization.ObjectRecord::ArrayIndex
	Int32U5BU5D_t916272174* ___ArrayIndex_9;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.ObjectRecord::FixupChainAsContainer
	BaseFixupRecord_t1902547881 * ___FixupChainAsContainer_10;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.ObjectRecord::FixupChainAsRequired
	BaseFixupRecord_t1902547881 * ___FixupChainAsRequired_11;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectRecord::Next
	ObjectRecord_t2658842190 * ___Next_12;

public:
	inline static int32_t get_offset_of_Status_0() { return static_cast<int32_t>(offsetof(ObjectRecord_t2658842190, ___Status_0)); }
	inline uint8_t get_Status_0() const { return ___Status_0; }
	inline uint8_t* get_address_of_Status_0() { return &___Status_0; }
	inline void set_Status_0(uint8_t value)
	{
		___Status_0 = value;
	}

	inline static int32_t get_offset_of_OriginalObject_1() { return static_cast<int32_t>(offsetof(ObjectRecord_t2658842190, ___OriginalObject_1)); }
	inline RuntimeObject * get_OriginalObject_1() const { return ___OriginalObject_1; }
	inline RuntimeObject ** get_address_of_OriginalObject_1() { return &___OriginalObject_1; }
	inline void set_OriginalObject_1(RuntimeObject * value)
	{
		___OriginalObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalObject_1), value);
	}

	inline static int32_t get_offset_of_ObjectInstance_2() { return static_cast<int32_t>(offsetof(ObjectRecord_t2658842190, ___ObjectInstance_2)); }
	inline RuntimeObject * get_ObjectInstance_2() const { return ___ObjectInstance_2; }
	inline RuntimeObject ** get_address_of_ObjectInstance_2() { return &___ObjectInstance_2; }
	inline void set_ObjectInstance_2(RuntimeObject * value)
	{
		___ObjectInstance_2 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectInstance_2), value);
	}

	inline static int32_t get_offset_of_ObjectID_3() { return static_cast<int32_t>(offsetof(ObjectRecord_t2658842190, ___ObjectID_3)); }
	inline int64_t get_ObjectID_3() const { return ___ObjectID_3; }
	inline int64_t* get_address_of_ObjectID_3() { return &___ObjectID_3; }
	inline void set_ObjectID_3(int64_t value)
	{
		___ObjectID_3 = value;
	}

	inline static int32_t get_offset_of_Info_4() { return static_cast<int32_t>(offsetof(ObjectRecord_t2658842190, ___Info_4)); }
	inline SerializationInfo_t4008665658 * get_Info_4() const { return ___Info_4; }
	inline SerializationInfo_t4008665658 ** get_address_of_Info_4() { return &___Info_4; }
	inline void set_Info_4(SerializationInfo_t4008665658 * value)
	{
		___Info_4 = value;
		Il2CppCodeGenWriteBarrier((&___Info_4), value);
	}

	inline static int32_t get_offset_of_IdOfContainingObj_5() { return static_cast<int32_t>(offsetof(ObjectRecord_t2658842190, ___IdOfContainingObj_5)); }
	inline int64_t get_IdOfContainingObj_5() const { return ___IdOfContainingObj_5; }
	inline int64_t* get_address_of_IdOfContainingObj_5() { return &___IdOfContainingObj_5; }
	inline void set_IdOfContainingObj_5(int64_t value)
	{
		___IdOfContainingObj_5 = value;
	}

	inline static int32_t get_offset_of_Surrogate_6() { return static_cast<int32_t>(offsetof(ObjectRecord_t2658842190, ___Surrogate_6)); }
	inline RuntimeObject* get_Surrogate_6() const { return ___Surrogate_6; }
	inline RuntimeObject** get_address_of_Surrogate_6() { return &___Surrogate_6; }
	inline void set_Surrogate_6(RuntimeObject* value)
	{
		___Surrogate_6 = value;
		Il2CppCodeGenWriteBarrier((&___Surrogate_6), value);
	}

	inline static int32_t get_offset_of_SurrogateSelector_7() { return static_cast<int32_t>(offsetof(ObjectRecord_t2658842190, ___SurrogateSelector_7)); }
	inline RuntimeObject* get_SurrogateSelector_7() const { return ___SurrogateSelector_7; }
	inline RuntimeObject** get_address_of_SurrogateSelector_7() { return &___SurrogateSelector_7; }
	inline void set_SurrogateSelector_7(RuntimeObject* value)
	{
		___SurrogateSelector_7 = value;
		Il2CppCodeGenWriteBarrier((&___SurrogateSelector_7), value);
	}

	inline static int32_t get_offset_of_Member_8() { return static_cast<int32_t>(offsetof(ObjectRecord_t2658842190, ___Member_8)); }
	inline MemberInfo_t * get_Member_8() const { return ___Member_8; }
	inline MemberInfo_t ** get_address_of_Member_8() { return &___Member_8; }
	inline void set_Member_8(MemberInfo_t * value)
	{
		___Member_8 = value;
		Il2CppCodeGenWriteBarrier((&___Member_8), value);
	}

	inline static int32_t get_offset_of_ArrayIndex_9() { return static_cast<int32_t>(offsetof(ObjectRecord_t2658842190, ___ArrayIndex_9)); }
	inline Int32U5BU5D_t916272174* get_ArrayIndex_9() const { return ___ArrayIndex_9; }
	inline Int32U5BU5D_t916272174** get_address_of_ArrayIndex_9() { return &___ArrayIndex_9; }
	inline void set_ArrayIndex_9(Int32U5BU5D_t916272174* value)
	{
		___ArrayIndex_9 = value;
		Il2CppCodeGenWriteBarrier((&___ArrayIndex_9), value);
	}

	inline static int32_t get_offset_of_FixupChainAsContainer_10() { return static_cast<int32_t>(offsetof(ObjectRecord_t2658842190, ___FixupChainAsContainer_10)); }
	inline BaseFixupRecord_t1902547881 * get_FixupChainAsContainer_10() const { return ___FixupChainAsContainer_10; }
	inline BaseFixupRecord_t1902547881 ** get_address_of_FixupChainAsContainer_10() { return &___FixupChainAsContainer_10; }
	inline void set_FixupChainAsContainer_10(BaseFixupRecord_t1902547881 * value)
	{
		___FixupChainAsContainer_10 = value;
		Il2CppCodeGenWriteBarrier((&___FixupChainAsContainer_10), value);
	}

	inline static int32_t get_offset_of_FixupChainAsRequired_11() { return static_cast<int32_t>(offsetof(ObjectRecord_t2658842190, ___FixupChainAsRequired_11)); }
	inline BaseFixupRecord_t1902547881 * get_FixupChainAsRequired_11() const { return ___FixupChainAsRequired_11; }
	inline BaseFixupRecord_t1902547881 ** get_address_of_FixupChainAsRequired_11() { return &___FixupChainAsRequired_11; }
	inline void set_FixupChainAsRequired_11(BaseFixupRecord_t1902547881 * value)
	{
		___FixupChainAsRequired_11 = value;
		Il2CppCodeGenWriteBarrier((&___FixupChainAsRequired_11), value);
	}

	inline static int32_t get_offset_of_Next_12() { return static_cast<int32_t>(offsetof(ObjectRecord_t2658842190, ___Next_12)); }
	inline ObjectRecord_t2658842190 * get_Next_12() const { return ___Next_12; }
	inline ObjectRecord_t2658842190 ** get_address_of_Next_12() { return &___Next_12; }
	inline void set_Next_12(ObjectRecord_t2658842190 * value)
	{
		___Next_12 = value;
		Il2CppCodeGenWriteBarrier((&___Next_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTRECORD_T2658842190_H
#ifndef REMOTINGSERVICES_T1281481784_H
#define REMOTINGSERVICES_T1281481784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.RemotingServices
struct  RemotingServices_t1281481784  : public RuntimeObject
{
public:

public:
};

struct RemotingServices_t1281481784_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingServices::uri_hash
	Hashtable_t2491480603 * ___uri_hash_0;
	// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter System.Runtime.Remoting.RemotingServices::_serializationFormatter
	BinaryFormatter_t4020167867 * ____serializationFormatter_1;
	// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter System.Runtime.Remoting.RemotingServices::_deserializationFormatter
	BinaryFormatter_t4020167867 * ____deserializationFormatter_2;
	// System.String System.Runtime.Remoting.RemotingServices::app_id
	String_t* ___app_id_3;
	// System.Int32 System.Runtime.Remoting.RemotingServices::next_id
	int32_t ___next_id_4;
	// System.Reflection.BindingFlags System.Runtime.Remoting.RemotingServices::methodBindings
	int32_t ___methodBindings_5;
	// System.Reflection.MethodInfo System.Runtime.Remoting.RemotingServices::FieldSetterMethod
	MethodInfo_t * ___FieldSetterMethod_6;
	// System.Reflection.MethodInfo System.Runtime.Remoting.RemotingServices::FieldGetterMethod
	MethodInfo_t * ___FieldGetterMethod_7;

public:
	inline static int32_t get_offset_of_uri_hash_0() { return static_cast<int32_t>(offsetof(RemotingServices_t1281481784_StaticFields, ___uri_hash_0)); }
	inline Hashtable_t2491480603 * get_uri_hash_0() const { return ___uri_hash_0; }
	inline Hashtable_t2491480603 ** get_address_of_uri_hash_0() { return &___uri_hash_0; }
	inline void set_uri_hash_0(Hashtable_t2491480603 * value)
	{
		___uri_hash_0 = value;
		Il2CppCodeGenWriteBarrier((&___uri_hash_0), value);
	}

	inline static int32_t get_offset_of__serializationFormatter_1() { return static_cast<int32_t>(offsetof(RemotingServices_t1281481784_StaticFields, ____serializationFormatter_1)); }
	inline BinaryFormatter_t4020167867 * get__serializationFormatter_1() const { return ____serializationFormatter_1; }
	inline BinaryFormatter_t4020167867 ** get_address_of__serializationFormatter_1() { return &____serializationFormatter_1; }
	inline void set__serializationFormatter_1(BinaryFormatter_t4020167867 * value)
	{
		____serializationFormatter_1 = value;
		Il2CppCodeGenWriteBarrier((&____serializationFormatter_1), value);
	}

	inline static int32_t get_offset_of__deserializationFormatter_2() { return static_cast<int32_t>(offsetof(RemotingServices_t1281481784_StaticFields, ____deserializationFormatter_2)); }
	inline BinaryFormatter_t4020167867 * get__deserializationFormatter_2() const { return ____deserializationFormatter_2; }
	inline BinaryFormatter_t4020167867 ** get_address_of__deserializationFormatter_2() { return &____deserializationFormatter_2; }
	inline void set__deserializationFormatter_2(BinaryFormatter_t4020167867 * value)
	{
		____deserializationFormatter_2 = value;
		Il2CppCodeGenWriteBarrier((&____deserializationFormatter_2), value);
	}

	inline static int32_t get_offset_of_app_id_3() { return static_cast<int32_t>(offsetof(RemotingServices_t1281481784_StaticFields, ___app_id_3)); }
	inline String_t* get_app_id_3() const { return ___app_id_3; }
	inline String_t** get_address_of_app_id_3() { return &___app_id_3; }
	inline void set_app_id_3(String_t* value)
	{
		___app_id_3 = value;
		Il2CppCodeGenWriteBarrier((&___app_id_3), value);
	}

	inline static int32_t get_offset_of_next_id_4() { return static_cast<int32_t>(offsetof(RemotingServices_t1281481784_StaticFields, ___next_id_4)); }
	inline int32_t get_next_id_4() const { return ___next_id_4; }
	inline int32_t* get_address_of_next_id_4() { return &___next_id_4; }
	inline void set_next_id_4(int32_t value)
	{
		___next_id_4 = value;
	}

	inline static int32_t get_offset_of_methodBindings_5() { return static_cast<int32_t>(offsetof(RemotingServices_t1281481784_StaticFields, ___methodBindings_5)); }
	inline int32_t get_methodBindings_5() const { return ___methodBindings_5; }
	inline int32_t* get_address_of_methodBindings_5() { return &___methodBindings_5; }
	inline void set_methodBindings_5(int32_t value)
	{
		___methodBindings_5 = value;
	}

	inline static int32_t get_offset_of_FieldSetterMethod_6() { return static_cast<int32_t>(offsetof(RemotingServices_t1281481784_StaticFields, ___FieldSetterMethod_6)); }
	inline MethodInfo_t * get_FieldSetterMethod_6() const { return ___FieldSetterMethod_6; }
	inline MethodInfo_t ** get_address_of_FieldSetterMethod_6() { return &___FieldSetterMethod_6; }
	inline void set_FieldSetterMethod_6(MethodInfo_t * value)
	{
		___FieldSetterMethod_6 = value;
		Il2CppCodeGenWriteBarrier((&___FieldSetterMethod_6), value);
	}

	inline static int32_t get_offset_of_FieldGetterMethod_7() { return static_cast<int32_t>(offsetof(RemotingServices_t1281481784_StaticFields, ___FieldGetterMethod_7)); }
	inline MethodInfo_t * get_FieldGetterMethod_7() const { return ___FieldGetterMethod_7; }
	inline MethodInfo_t ** get_address_of_FieldGetterMethod_7() { return &___FieldGetterMethod_7; }
	inline void set_FieldGetterMethod_7(MethodInfo_t * value)
	{
		___FieldGetterMethod_7 = value;
		Il2CppCodeGenWriteBarrier((&___FieldGetterMethod_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGSERVICES_T1281481784_H
#ifndef STREAMINGCONTEXT_T3674920394_H
#define STREAMINGCONTEXT_T3674920394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t3674920394 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t3674920394, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t3674920394, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3674920394_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3674920394_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T3674920394_H
#ifndef BINARYFORMATTER_T4020167867_H
#define BINARYFORMATTER_T4020167867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct  BinaryFormatter_t4020167867  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::assembly_format
	int32_t ___assembly_format_0;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::binder
	SerializationBinder_t1623850403 * ___binder_1;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::context
	StreamingContext_t3674920394  ___context_2;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::surrogate_selector
	RuntimeObject* ___surrogate_selector_3;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::type_format
	int32_t ___type_format_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::filter_level
	int32_t ___filter_level_5;

public:
	inline static int32_t get_offset_of_assembly_format_0() { return static_cast<int32_t>(offsetof(BinaryFormatter_t4020167867, ___assembly_format_0)); }
	inline int32_t get_assembly_format_0() const { return ___assembly_format_0; }
	inline int32_t* get_address_of_assembly_format_0() { return &___assembly_format_0; }
	inline void set_assembly_format_0(int32_t value)
	{
		___assembly_format_0 = value;
	}

	inline static int32_t get_offset_of_binder_1() { return static_cast<int32_t>(offsetof(BinaryFormatter_t4020167867, ___binder_1)); }
	inline SerializationBinder_t1623850403 * get_binder_1() const { return ___binder_1; }
	inline SerializationBinder_t1623850403 ** get_address_of_binder_1() { return &___binder_1; }
	inline void set_binder_1(SerializationBinder_t1623850403 * value)
	{
		___binder_1 = value;
		Il2CppCodeGenWriteBarrier((&___binder_1), value);
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(BinaryFormatter_t4020167867, ___context_2)); }
	inline StreamingContext_t3674920394  get_context_2() const { return ___context_2; }
	inline StreamingContext_t3674920394 * get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(StreamingContext_t3674920394  value)
	{
		___context_2 = value;
	}

	inline static int32_t get_offset_of_surrogate_selector_3() { return static_cast<int32_t>(offsetof(BinaryFormatter_t4020167867, ___surrogate_selector_3)); }
	inline RuntimeObject* get_surrogate_selector_3() const { return ___surrogate_selector_3; }
	inline RuntimeObject** get_address_of_surrogate_selector_3() { return &___surrogate_selector_3; }
	inline void set_surrogate_selector_3(RuntimeObject* value)
	{
		___surrogate_selector_3 = value;
		Il2CppCodeGenWriteBarrier((&___surrogate_selector_3), value);
	}

	inline static int32_t get_offset_of_type_format_4() { return static_cast<int32_t>(offsetof(BinaryFormatter_t4020167867, ___type_format_4)); }
	inline int32_t get_type_format_4() const { return ___type_format_4; }
	inline int32_t* get_address_of_type_format_4() { return &___type_format_4; }
	inline void set_type_format_4(int32_t value)
	{
		___type_format_4 = value;
	}

	inline static int32_t get_offset_of_filter_level_5() { return static_cast<int32_t>(offsetof(BinaryFormatter_t4020167867, ___filter_level_5)); }
	inline int32_t get_filter_level_5() const { return ___filter_level_5; }
	inline int32_t* get_address_of_filter_level_5() { return &___filter_level_5; }
	inline void set_filter_level_5(int32_t value)
	{
		___filter_level_5 = value;
	}
};

struct BinaryFormatter_t4020167867_StaticFields
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::<DefaultSurrogateSelector>k__BackingField
	RuntimeObject* ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BinaryFormatter_t4020167867_StaticFields, ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() const { return ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() { return &___U3CDefaultSurrogateSelectorU3Ek__BackingField_6; }
	inline void set_U3CDefaultSurrogateSelectorU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CDefaultSurrogateSelectorU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultSurrogateSelectorU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYFORMATTER_T4020167867_H
#ifndef OBJECTREADER_T37321081_H
#define OBJECTREADER_T37321081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader
struct  ObjectReader_t37321081  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.ObjectReader::_surrogateSelector
	RuntimeObject* ____surrogateSelector_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.ObjectReader::_context
	StreamingContext_t3674920394  ____context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.ObjectReader::_binder
	SerializationBinder_t1623850403 * ____binder_2;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.ObjectReader::_filterLevel
	int32_t ____filterLevel_3;
	// System.Runtime.Serialization.ObjectManager System.Runtime.Serialization.Formatters.Binary.ObjectReader::_manager
	ObjectManager_t1834069478 * ____manager_4;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectReader::_registeredAssemblies
	Hashtable_t2491480603 * ____registeredAssemblies_5;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectReader::_typeMetadataCache
	Hashtable_t2491480603 * ____typeMetadataCache_6;
	// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::_lastObject
	RuntimeObject * ____lastObject_7;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectReader::_lastObjectID
	int64_t ____lastObjectID_8;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectReader::_rootObjectID
	int64_t ____rootObjectID_9;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.ObjectReader::arrayBuffer
	ByteU5BU5D_t481254776* ___arrayBuffer_10;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader::ArrayBufferLength
	int32_t ___ArrayBufferLength_11;

public:
	inline static int32_t get_offset_of__surrogateSelector_0() { return static_cast<int32_t>(offsetof(ObjectReader_t37321081, ____surrogateSelector_0)); }
	inline RuntimeObject* get__surrogateSelector_0() const { return ____surrogateSelector_0; }
	inline RuntimeObject** get_address_of__surrogateSelector_0() { return &____surrogateSelector_0; }
	inline void set__surrogateSelector_0(RuntimeObject* value)
	{
		____surrogateSelector_0 = value;
		Il2CppCodeGenWriteBarrier((&____surrogateSelector_0), value);
	}

	inline static int32_t get_offset_of__context_1() { return static_cast<int32_t>(offsetof(ObjectReader_t37321081, ____context_1)); }
	inline StreamingContext_t3674920394  get__context_1() const { return ____context_1; }
	inline StreamingContext_t3674920394 * get_address_of__context_1() { return &____context_1; }
	inline void set__context_1(StreamingContext_t3674920394  value)
	{
		____context_1 = value;
	}

	inline static int32_t get_offset_of__binder_2() { return static_cast<int32_t>(offsetof(ObjectReader_t37321081, ____binder_2)); }
	inline SerializationBinder_t1623850403 * get__binder_2() const { return ____binder_2; }
	inline SerializationBinder_t1623850403 ** get_address_of__binder_2() { return &____binder_2; }
	inline void set__binder_2(SerializationBinder_t1623850403 * value)
	{
		____binder_2 = value;
		Il2CppCodeGenWriteBarrier((&____binder_2), value);
	}

	inline static int32_t get_offset_of__filterLevel_3() { return static_cast<int32_t>(offsetof(ObjectReader_t37321081, ____filterLevel_3)); }
	inline int32_t get__filterLevel_3() const { return ____filterLevel_3; }
	inline int32_t* get_address_of__filterLevel_3() { return &____filterLevel_3; }
	inline void set__filterLevel_3(int32_t value)
	{
		____filterLevel_3 = value;
	}

	inline static int32_t get_offset_of__manager_4() { return static_cast<int32_t>(offsetof(ObjectReader_t37321081, ____manager_4)); }
	inline ObjectManager_t1834069478 * get__manager_4() const { return ____manager_4; }
	inline ObjectManager_t1834069478 ** get_address_of__manager_4() { return &____manager_4; }
	inline void set__manager_4(ObjectManager_t1834069478 * value)
	{
		____manager_4 = value;
		Il2CppCodeGenWriteBarrier((&____manager_4), value);
	}

	inline static int32_t get_offset_of__registeredAssemblies_5() { return static_cast<int32_t>(offsetof(ObjectReader_t37321081, ____registeredAssemblies_5)); }
	inline Hashtable_t2491480603 * get__registeredAssemblies_5() const { return ____registeredAssemblies_5; }
	inline Hashtable_t2491480603 ** get_address_of__registeredAssemblies_5() { return &____registeredAssemblies_5; }
	inline void set__registeredAssemblies_5(Hashtable_t2491480603 * value)
	{
		____registeredAssemblies_5 = value;
		Il2CppCodeGenWriteBarrier((&____registeredAssemblies_5), value);
	}

	inline static int32_t get_offset_of__typeMetadataCache_6() { return static_cast<int32_t>(offsetof(ObjectReader_t37321081, ____typeMetadataCache_6)); }
	inline Hashtable_t2491480603 * get__typeMetadataCache_6() const { return ____typeMetadataCache_6; }
	inline Hashtable_t2491480603 ** get_address_of__typeMetadataCache_6() { return &____typeMetadataCache_6; }
	inline void set__typeMetadataCache_6(Hashtable_t2491480603 * value)
	{
		____typeMetadataCache_6 = value;
		Il2CppCodeGenWriteBarrier((&____typeMetadataCache_6), value);
	}

	inline static int32_t get_offset_of__lastObject_7() { return static_cast<int32_t>(offsetof(ObjectReader_t37321081, ____lastObject_7)); }
	inline RuntimeObject * get__lastObject_7() const { return ____lastObject_7; }
	inline RuntimeObject ** get_address_of__lastObject_7() { return &____lastObject_7; }
	inline void set__lastObject_7(RuntimeObject * value)
	{
		____lastObject_7 = value;
		Il2CppCodeGenWriteBarrier((&____lastObject_7), value);
	}

	inline static int32_t get_offset_of__lastObjectID_8() { return static_cast<int32_t>(offsetof(ObjectReader_t37321081, ____lastObjectID_8)); }
	inline int64_t get__lastObjectID_8() const { return ____lastObjectID_8; }
	inline int64_t* get_address_of__lastObjectID_8() { return &____lastObjectID_8; }
	inline void set__lastObjectID_8(int64_t value)
	{
		____lastObjectID_8 = value;
	}

	inline static int32_t get_offset_of__rootObjectID_9() { return static_cast<int32_t>(offsetof(ObjectReader_t37321081, ____rootObjectID_9)); }
	inline int64_t get__rootObjectID_9() const { return ____rootObjectID_9; }
	inline int64_t* get_address_of__rootObjectID_9() { return &____rootObjectID_9; }
	inline void set__rootObjectID_9(int64_t value)
	{
		____rootObjectID_9 = value;
	}

	inline static int32_t get_offset_of_arrayBuffer_10() { return static_cast<int32_t>(offsetof(ObjectReader_t37321081, ___arrayBuffer_10)); }
	inline ByteU5BU5D_t481254776* get_arrayBuffer_10() const { return ___arrayBuffer_10; }
	inline ByteU5BU5D_t481254776** get_address_of_arrayBuffer_10() { return &___arrayBuffer_10; }
	inline void set_arrayBuffer_10(ByteU5BU5D_t481254776* value)
	{
		___arrayBuffer_10 = value;
		Il2CppCodeGenWriteBarrier((&___arrayBuffer_10), value);
	}

	inline static int32_t get_offset_of_ArrayBufferLength_11() { return static_cast<int32_t>(offsetof(ObjectReader_t37321081, ___ArrayBufferLength_11)); }
	inline int32_t get_ArrayBufferLength_11() const { return ___ArrayBufferLength_11; }
	inline int32_t* get_address_of_ArrayBufferLength_11() { return &___ArrayBufferLength_11; }
	inline void set_ArrayBufferLength_11(int32_t value)
	{
		___ArrayBufferLength_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTREADER_T37321081_H
#ifndef OBJECTMANAGER_T1834069478_H
#define OBJECTMANAGER_T1834069478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectManager
struct  ObjectManager_t1834069478  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::_objectRecordChain
	ObjectRecord_t2658842190 * ____objectRecordChain_0;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::_lastObjectRecord
	ObjectRecord_t2658842190 * ____lastObjectRecord_1;
	// System.Collections.ArrayList System.Runtime.Serialization.ObjectManager::_deserializedRecords
	ArrayList_t2438777478 * ____deserializedRecords_2;
	// System.Collections.ArrayList System.Runtime.Serialization.ObjectManager::_onDeserializedCallbackRecords
	ArrayList_t2438777478 * ____onDeserializedCallbackRecords_3;
	// System.Collections.Hashtable System.Runtime.Serialization.ObjectManager::_objectRecords
	Hashtable_t2491480603 * ____objectRecords_4;
	// System.Boolean System.Runtime.Serialization.ObjectManager::_finalFixup
	bool ____finalFixup_5;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.ObjectManager::_selector
	RuntimeObject* ____selector_6;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.ObjectManager::_context
	StreamingContext_t3674920394  ____context_7;
	// System.Int32 System.Runtime.Serialization.ObjectManager::_registeredObjectsCount
	int32_t ____registeredObjectsCount_8;

public:
	inline static int32_t get_offset_of__objectRecordChain_0() { return static_cast<int32_t>(offsetof(ObjectManager_t1834069478, ____objectRecordChain_0)); }
	inline ObjectRecord_t2658842190 * get__objectRecordChain_0() const { return ____objectRecordChain_0; }
	inline ObjectRecord_t2658842190 ** get_address_of__objectRecordChain_0() { return &____objectRecordChain_0; }
	inline void set__objectRecordChain_0(ObjectRecord_t2658842190 * value)
	{
		____objectRecordChain_0 = value;
		Il2CppCodeGenWriteBarrier((&____objectRecordChain_0), value);
	}

	inline static int32_t get_offset_of__lastObjectRecord_1() { return static_cast<int32_t>(offsetof(ObjectManager_t1834069478, ____lastObjectRecord_1)); }
	inline ObjectRecord_t2658842190 * get__lastObjectRecord_1() const { return ____lastObjectRecord_1; }
	inline ObjectRecord_t2658842190 ** get_address_of__lastObjectRecord_1() { return &____lastObjectRecord_1; }
	inline void set__lastObjectRecord_1(ObjectRecord_t2658842190 * value)
	{
		____lastObjectRecord_1 = value;
		Il2CppCodeGenWriteBarrier((&____lastObjectRecord_1), value);
	}

	inline static int32_t get_offset_of__deserializedRecords_2() { return static_cast<int32_t>(offsetof(ObjectManager_t1834069478, ____deserializedRecords_2)); }
	inline ArrayList_t2438777478 * get__deserializedRecords_2() const { return ____deserializedRecords_2; }
	inline ArrayList_t2438777478 ** get_address_of__deserializedRecords_2() { return &____deserializedRecords_2; }
	inline void set__deserializedRecords_2(ArrayList_t2438777478 * value)
	{
		____deserializedRecords_2 = value;
		Il2CppCodeGenWriteBarrier((&____deserializedRecords_2), value);
	}

	inline static int32_t get_offset_of__onDeserializedCallbackRecords_3() { return static_cast<int32_t>(offsetof(ObjectManager_t1834069478, ____onDeserializedCallbackRecords_3)); }
	inline ArrayList_t2438777478 * get__onDeserializedCallbackRecords_3() const { return ____onDeserializedCallbackRecords_3; }
	inline ArrayList_t2438777478 ** get_address_of__onDeserializedCallbackRecords_3() { return &____onDeserializedCallbackRecords_3; }
	inline void set__onDeserializedCallbackRecords_3(ArrayList_t2438777478 * value)
	{
		____onDeserializedCallbackRecords_3 = value;
		Il2CppCodeGenWriteBarrier((&____onDeserializedCallbackRecords_3), value);
	}

	inline static int32_t get_offset_of__objectRecords_4() { return static_cast<int32_t>(offsetof(ObjectManager_t1834069478, ____objectRecords_4)); }
	inline Hashtable_t2491480603 * get__objectRecords_4() const { return ____objectRecords_4; }
	inline Hashtable_t2491480603 ** get_address_of__objectRecords_4() { return &____objectRecords_4; }
	inline void set__objectRecords_4(Hashtable_t2491480603 * value)
	{
		____objectRecords_4 = value;
		Il2CppCodeGenWriteBarrier((&____objectRecords_4), value);
	}

	inline static int32_t get_offset_of__finalFixup_5() { return static_cast<int32_t>(offsetof(ObjectManager_t1834069478, ____finalFixup_5)); }
	inline bool get__finalFixup_5() const { return ____finalFixup_5; }
	inline bool* get_address_of__finalFixup_5() { return &____finalFixup_5; }
	inline void set__finalFixup_5(bool value)
	{
		____finalFixup_5 = value;
	}

	inline static int32_t get_offset_of__selector_6() { return static_cast<int32_t>(offsetof(ObjectManager_t1834069478, ____selector_6)); }
	inline RuntimeObject* get__selector_6() const { return ____selector_6; }
	inline RuntimeObject** get_address_of__selector_6() { return &____selector_6; }
	inline void set__selector_6(RuntimeObject* value)
	{
		____selector_6 = value;
		Il2CppCodeGenWriteBarrier((&____selector_6), value);
	}

	inline static int32_t get_offset_of__context_7() { return static_cast<int32_t>(offsetof(ObjectManager_t1834069478, ____context_7)); }
	inline StreamingContext_t3674920394  get__context_7() const { return ____context_7; }
	inline StreamingContext_t3674920394 * get_address_of__context_7() { return &____context_7; }
	inline void set__context_7(StreamingContext_t3674920394  value)
	{
		____context_7 = value;
	}

	inline static int32_t get_offset_of__registeredObjectsCount_8() { return static_cast<int32_t>(offsetof(ObjectManager_t1834069478, ____registeredObjectsCount_8)); }
	inline int32_t get__registeredObjectsCount_8() const { return ____registeredObjectsCount_8; }
	inline int32_t* get_address_of__registeredObjectsCount_8() { return &____registeredObjectsCount_8; }
	inline void set__registeredObjectsCount_8(int32_t value)
	{
		____registeredObjectsCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTMANAGER_T1834069478_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize500 = { sizeof (ConstructionCallDictionary_t316612919), -1, sizeof(ConstructionCallDictionary_t316612919_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable500[3] = 
{
	ConstructionCallDictionary_t316612919_StaticFields::get_offset_of_InternalKeys_6(),
	ConstructionCallDictionary_t316612919_StaticFields::get_offset_of_U3CU3Ef__switchU24map23_7(),
	ConstructionCallDictionary_t316612919_StaticFields::get_offset_of_U3CU3Ef__switchU24map24_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize501 = { sizeof (EnvoyTerminatorSink_t1768325852), -1, sizeof(EnvoyTerminatorSink_t1768325852_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable501[1] = 
{
	EnvoyTerminatorSink_t1768325852_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize502 = { sizeof (Header_t2373696101), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable502[4] = 
{
	Header_t2373696101::get_offset_of_HeaderNamespace_0(),
	Header_t2373696101::get_offset_of_MustUnderstand_1(),
	Header_t2373696101::get_offset_of_Name_2(),
	Header_t2373696101::get_offset_of_Value_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize503 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize504 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize505 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize506 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize507 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize508 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize509 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize510 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize511 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize512 = { sizeof (LogicalCallContext_t2351273423), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable512[2] = 
{
	LogicalCallContext_t2351273423::get_offset_of__data_0(),
	LogicalCallContext_t2351273423::get_offset_of__remotingData_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize513 = { sizeof (CallContextRemotingData_t3463933388), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable513[1] = 
{
	CallContextRemotingData_t3463933388::get_offset_of__logicalCallID_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize514 = { sizeof (MethodCall_t3237794944), -1, sizeof(MethodCall_t3237794944_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable514[11] = 
{
	MethodCall_t3237794944::get_offset_of__uri_0(),
	MethodCall_t3237794944::get_offset_of__typeName_1(),
	MethodCall_t3237794944::get_offset_of__methodName_2(),
	MethodCall_t3237794944::get_offset_of__args_3(),
	MethodCall_t3237794944::get_offset_of__methodSignature_4(),
	MethodCall_t3237794944::get_offset_of__methodBase_5(),
	MethodCall_t3237794944::get_offset_of__callContext_6(),
	MethodCall_t3237794944::get_offset_of__genericArguments_7(),
	MethodCall_t3237794944::get_offset_of_ExternalProperties_8(),
	MethodCall_t3237794944::get_offset_of_InternalProperties_9(),
	MethodCall_t3237794944_StaticFields::get_offset_of_U3CU3Ef__switchU24map1F_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize515 = { sizeof (MethodCallDictionary_t2102636391), -1, sizeof(MethodCallDictionary_t2102636391_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable515[1] = 
{
	MethodCallDictionary_t2102636391_StaticFields::get_offset_of_InternalKeys_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize516 = { sizeof (MethodDictionary_t2256436503), -1, sizeof(MethodDictionary_t2256436503_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable516[6] = 
{
	MethodDictionary_t2256436503::get_offset_of__internalProperties_0(),
	MethodDictionary_t2256436503::get_offset_of__message_1(),
	MethodDictionary_t2256436503::get_offset_of__methodKeys_2(),
	MethodDictionary_t2256436503::get_offset_of__ownProperties_3(),
	MethodDictionary_t2256436503_StaticFields::get_offset_of_U3CU3Ef__switchU24map21_4(),
	MethodDictionary_t2256436503_StaticFields::get_offset_of_U3CU3Ef__switchU24map22_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize517 = { sizeof (DictionaryEnumerator_t3447244325), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable517[3] = 
{
	DictionaryEnumerator_t3447244325::get_offset_of__methodDictionary_0(),
	DictionaryEnumerator_t3447244325::get_offset_of__hashtableEnum_1(),
	DictionaryEnumerator_t3447244325::get_offset_of__posMethod_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize518 = { sizeof (MethodReturnDictionary_t3810987099), -1, sizeof(MethodReturnDictionary_t3810987099_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable518[2] = 
{
	MethodReturnDictionary_t3810987099_StaticFields::get_offset_of_InternalReturnKeys_6(),
	MethodReturnDictionary_t3810987099_StaticFields::get_offset_of_InternalExceptionKeys_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize519 = { sizeof (MonoMethodMessage_t1289019874), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable519[8] = 
{
	MonoMethodMessage_t1289019874::get_offset_of_method_0(),
	MonoMethodMessage_t1289019874::get_offset_of_args_1(),
	MonoMethodMessage_t1289019874::get_offset_of_arg_types_2(),
	MonoMethodMessage_t1289019874::get_offset_of_ctx_3(),
	MonoMethodMessage_t1289019874::get_offset_of_rval_4(),
	MonoMethodMessage_t1289019874::get_offset_of_exc_5(),
	MonoMethodMessage_t1289019874::get_offset_of_uri_6(),
	MonoMethodMessage_t1289019874::get_offset_of_methodSignature_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize520 = { sizeof (RemotingSurrogate_t1703573715), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize521 = { sizeof (ObjRefSurrogate_t3545829384), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize522 = { sizeof (RemotingSurrogateSelector_t1464403223), -1, sizeof(RemotingSurrogateSelector_t1464403223_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable522[4] = 
{
	RemotingSurrogateSelector_t1464403223_StaticFields::get_offset_of_s_cachedTypeObjRef_0(),
	RemotingSurrogateSelector_t1464403223_StaticFields::get_offset_of__objRefSurrogate_1(),
	RemotingSurrogateSelector_t1464403223_StaticFields::get_offset_of__objRemotingSurrogate_2(),
	RemotingSurrogateSelector_t1464403223::get_offset_of__next_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize523 = { sizeof (ReturnMessage_t3705063755), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable523[13] = 
{
	ReturnMessage_t3705063755::get_offset_of__outArgs_0(),
	ReturnMessage_t3705063755::get_offset_of__args_1(),
	ReturnMessage_t3705063755::get_offset_of__outArgsCount_2(),
	ReturnMessage_t3705063755::get_offset_of__callCtx_3(),
	ReturnMessage_t3705063755::get_offset_of__returnValue_4(),
	ReturnMessage_t3705063755::get_offset_of__uri_5(),
	ReturnMessage_t3705063755::get_offset_of__exception_6(),
	ReturnMessage_t3705063755::get_offset_of__methodBase_7(),
	ReturnMessage_t3705063755::get_offset_of__methodName_8(),
	ReturnMessage_t3705063755::get_offset_of__methodSignature_9(),
	ReturnMessage_t3705063755::get_offset_of__typeName_10(),
	ReturnMessage_t3705063755::get_offset_of__properties_11(),
	ReturnMessage_t3705063755::get_offset_of__inArgInfo_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize524 = { sizeof (ServerContextTerminatorSink_t851007775), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize525 = { sizeof (ServerObjectTerminatorSink_t3850460778), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable525[1] = 
{
	ServerObjectTerminatorSink_t3850460778::get_offset_of__nextSink_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize526 = { sizeof (StackBuilderSink_t3271074981), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable526[2] = 
{
	StackBuilderSink_t3271074981::get_offset_of__target_0(),
	StackBuilderSink_t3271074981::get_offset_of__rp_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize527 = { sizeof (SoapAttribute_t1463742503), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable527[3] = 
{
	SoapAttribute_t1463742503::get_offset_of__useAttribute_0(),
	SoapAttribute_t1463742503::get_offset_of_ProtXmlNamespace_1(),
	SoapAttribute_t1463742503::get_offset_of_ReflectInfo_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize528 = { sizeof (SoapFieldAttribute_t1005179016), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable528[2] = 
{
	SoapFieldAttribute_t1005179016::get_offset_of__elementName_3(),
	SoapFieldAttribute_t1005179016::get_offset_of__isElement_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize529 = { sizeof (SoapMethodAttribute_t786113413), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable529[6] = 
{
	SoapMethodAttribute_t786113413::get_offset_of__responseElement_3(),
	SoapMethodAttribute_t786113413::get_offset_of__responseNamespace_4(),
	SoapMethodAttribute_t786113413::get_offset_of__returnElement_5(),
	SoapMethodAttribute_t786113413::get_offset_of__soapAction_6(),
	SoapMethodAttribute_t786113413::get_offset_of__useAttribute_7(),
	SoapMethodAttribute_t786113413::get_offset_of__namespace_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize530 = { sizeof (SoapParameterAttribute_t2901007635), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize531 = { sizeof (SoapTypeAttribute_t198619528), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable531[7] = 
{
	SoapTypeAttribute_t198619528::get_offset_of__useAttribute_3(),
	SoapTypeAttribute_t198619528::get_offset_of__xmlElementName_4(),
	SoapTypeAttribute_t198619528::get_offset_of__xmlNamespace_5(),
	SoapTypeAttribute_t198619528::get_offset_of__xmlTypeName_6(),
	SoapTypeAttribute_t198619528::get_offset_of__xmlTypeNamespace_7(),
	SoapTypeAttribute_t198619528::get_offset_of__isType_8(),
	SoapTypeAttribute_t198619528::get_offset_of__isElement_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize532 = { sizeof (ProxyAttribute_t1439036879), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize533 = { sizeof (TransparentProxy_t2401910458), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable533[1] = 
{
	TransparentProxy_t2401910458::get_offset_of__rp_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize534 = { sizeof (RealProxy_t980866733), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable534[5] = 
{
	RealProxy_t980866733::get_offset_of_class_to_proxy_0(),
	RealProxy_t980866733::get_offset_of__targetDomainId_1(),
	RealProxy_t980866733::get_offset_of__targetUri_2(),
	RealProxy_t980866733::get_offset_of__objectIdentity_3(),
	RealProxy_t980866733::get_offset_of__objTP_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize535 = { sizeof (RemotingProxy_t304261877), -1, sizeof(RemotingProxy_t304261877_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable535[5] = 
{
	RemotingProxy_t304261877_StaticFields::get_offset_of__cache_GetTypeMethod_5(),
	RemotingProxy_t304261877_StaticFields::get_offset_of__cache_GetHashCodeMethod_6(),
	RemotingProxy_t304261877::get_offset_of__sink_7(),
	RemotingProxy_t304261877::get_offset_of__hasEnvoySink_8(),
	RemotingProxy_t304261877::get_offset_of__ctorCall_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize536 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize537 = { sizeof (TrackingServices_t2878337549), -1, sizeof(TrackingServices_t2878337549_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable537[1] = 
{
	TrackingServices_t2878337549_StaticFields::get_offset_of__handlers_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize538 = { sizeof (ActivatedClientTypeEntry_t2633353574), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable538[2] = 
{
	ActivatedClientTypeEntry_t2633353574::get_offset_of_applicationUrl_2(),
	ActivatedClientTypeEntry_t2633353574::get_offset_of_obj_type_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize539 = { sizeof (ActivatedServiceTypeEntry_t3401294514), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable539[1] = 
{
	ActivatedServiceTypeEntry_t3401294514::get_offset_of_obj_type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize540 = { sizeof (EnvoyInfo_t2673120801), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable540[1] = 
{
	EnvoyInfo_t2673120801::get_offset_of_envoySinks_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize541 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize542 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize543 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize544 = { sizeof (Identity_t78057183), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable544[7] = 
{
	Identity_t78057183::get_offset_of__objectUri_0(),
	Identity_t78057183::get_offset_of__channelSink_1(),
	Identity_t78057183::get_offset_of__envoySink_2(),
	Identity_t78057183::get_offset_of__clientDynamicProperties_3(),
	Identity_t78057183::get_offset_of__serverDynamicProperties_4(),
	Identity_t78057183::get_offset_of__objRef_5(),
	Identity_t78057183::get_offset_of__disposed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize545 = { sizeof (ClientIdentity_t3026188452), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable545[1] = 
{
	ClientIdentity_t3026188452::get_offset_of__proxyReference_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize546 = { sizeof (InternalRemotingServices_t1405304081), -1, sizeof(InternalRemotingServices_t1405304081_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable546[1] = 
{
	InternalRemotingServices_t1405304081_StaticFields::get_offset_of__soapAttributes_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize547 = { sizeof (ObjRef_t698684977), -1, sizeof(ObjRef_t698684977_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable547[9] = 
{
	ObjRef_t698684977::get_offset_of_channel_info_0(),
	ObjRef_t698684977::get_offset_of_uri_1(),
	ObjRef_t698684977::get_offset_of_typeInfo_2(),
	ObjRef_t698684977::get_offset_of_envoyInfo_3(),
	ObjRef_t698684977::get_offset_of_flags_4(),
	ObjRef_t698684977::get_offset_of__serverType_5(),
	ObjRef_t698684977_StaticFields::get_offset_of_MarshalledObjectRef_6(),
	ObjRef_t698684977_StaticFields::get_offset_of_WellKnowObjectRef_7(),
	ObjRef_t698684977_StaticFields::get_offset_of_U3CU3Ef__switchU24map26_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize548 = { sizeof (RemotingConfiguration_t3919773212), -1, sizeof(RemotingConfiguration_t3919773212_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable548[13] = 
{
	RemotingConfiguration_t3919773212_StaticFields::get_offset_of_applicationID_0(),
	RemotingConfiguration_t3919773212_StaticFields::get_offset_of_applicationName_1(),
	RemotingConfiguration_t3919773212_StaticFields::get_offset_of_processGuid_2(),
	RemotingConfiguration_t3919773212_StaticFields::get_offset_of_defaultConfigRead_3(),
	RemotingConfiguration_t3919773212_StaticFields::get_offset_of_defaultDelayedConfigRead_4(),
	RemotingConfiguration_t3919773212_StaticFields::get_offset_of__errorMode_5(),
	RemotingConfiguration_t3919773212_StaticFields::get_offset_of_wellKnownClientEntries_6(),
	RemotingConfiguration_t3919773212_StaticFields::get_offset_of_activatedClientEntries_7(),
	RemotingConfiguration_t3919773212_StaticFields::get_offset_of_wellKnownServiceEntries_8(),
	RemotingConfiguration_t3919773212_StaticFields::get_offset_of_activatedServiceEntries_9(),
	RemotingConfiguration_t3919773212_StaticFields::get_offset_of_channelTemplates_10(),
	RemotingConfiguration_t3919773212_StaticFields::get_offset_of_clientProviderTemplates_11(),
	RemotingConfiguration_t3919773212_StaticFields::get_offset_of_serverProviderTemplates_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize549 = { sizeof (ConfigHandler_t3452603798), -1, sizeof(ConfigHandler_t3452603798_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable549[10] = 
{
	ConfigHandler_t3452603798::get_offset_of_typeEntries_0(),
	ConfigHandler_t3452603798::get_offset_of_channelInstances_1(),
	ConfigHandler_t3452603798::get_offset_of_currentChannel_2(),
	ConfigHandler_t3452603798::get_offset_of_currentProviderData_3(),
	ConfigHandler_t3452603798::get_offset_of_currentClientUrl_4(),
	ConfigHandler_t3452603798::get_offset_of_appName_5(),
	ConfigHandler_t3452603798::get_offset_of_currentXmlPath_6(),
	ConfigHandler_t3452603798::get_offset_of_onlyDelayedChannels_7(),
	ConfigHandler_t3452603798_StaticFields::get_offset_of_U3CU3Ef__switchU24map27_8(),
	ConfigHandler_t3452603798_StaticFields::get_offset_of_U3CU3Ef__switchU24map28_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize550 = { sizeof (ChannelData_t3379529888), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable550[7] = 
{
	ChannelData_t3379529888::get_offset_of_Ref_0(),
	ChannelData_t3379529888::get_offset_of_Type_1(),
	ChannelData_t3379529888::get_offset_of_Id_2(),
	ChannelData_t3379529888::get_offset_of_DelayLoadAsClientChannel_3(),
	ChannelData_t3379529888::get_offset_of__serverProviders_4(),
	ChannelData_t3379529888::get_offset_of__clientProviders_5(),
	ChannelData_t3379529888::get_offset_of__customProperties_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize551 = { sizeof (ProviderData_t2301861939), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable551[5] = 
{
	ProviderData_t2301861939::get_offset_of_Ref_0(),
	ProviderData_t2301861939::get_offset_of_Type_1(),
	ProviderData_t2301861939::get_offset_of_Id_2(),
	ProviderData_t2301861939::get_offset_of_CustomProperties_3(),
	ProviderData_t2301861939::get_offset_of_CustomData_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize552 = { sizeof (FormatterData_t1493043227), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize553 = { sizeof (RemotingException_t4145312574), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize554 = { sizeof (RemotingServices_t1281481784), -1, sizeof(RemotingServices_t1281481784_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable554[8] = 
{
	RemotingServices_t1281481784_StaticFields::get_offset_of_uri_hash_0(),
	RemotingServices_t1281481784_StaticFields::get_offset_of__serializationFormatter_1(),
	RemotingServices_t1281481784_StaticFields::get_offset_of__deserializationFormatter_2(),
	RemotingServices_t1281481784_StaticFields::get_offset_of_app_id_3(),
	RemotingServices_t1281481784_StaticFields::get_offset_of_next_id_4(),
	RemotingServices_t1281481784_StaticFields::get_offset_of_methodBindings_5(),
	RemotingServices_t1281481784_StaticFields::get_offset_of_FieldSetterMethod_6(),
	RemotingServices_t1281481784_StaticFields::get_offset_of_FieldGetterMethod_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize555 = { sizeof (ServerIdentity_t2406396366), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable555[3] = 
{
	ServerIdentity_t2406396366::get_offset_of__objectType_7(),
	ServerIdentity_t2406396366::get_offset_of__serverObject_8(),
	ServerIdentity_t2406396366::get_offset_of__context_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize556 = { sizeof (ClientActivatedIdentity_t3552715286), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize557 = { sizeof (SingletonIdentity_t2138500178), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize558 = { sizeof (SingleCallIdentity_t943744803), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize559 = { sizeof (SoapServices_t3985036768), -1, sizeof(SoapServices_t3985036768_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable559[5] = 
{
	SoapServices_t3985036768_StaticFields::get_offset_of__xmlTypes_0(),
	SoapServices_t3985036768_StaticFields::get_offset_of__xmlElements_1(),
	SoapServices_t3985036768_StaticFields::get_offset_of__soapActions_2(),
	SoapServices_t3985036768_StaticFields::get_offset_of__soapActionsMethods_3(),
	SoapServices_t3985036768_StaticFields::get_offset_of__typeInfos_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize560 = { sizeof (TypeInfo_t1787786947), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable560[2] = 
{
	TypeInfo_t1787786947::get_offset_of_Attributes_0(),
	TypeInfo_t1787786947::get_offset_of_Elements_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize561 = { sizeof (TypeEntry_t3796475128), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable561[2] = 
{
	TypeEntry_t3796475128::get_offset_of_assembly_name_0(),
	TypeEntry_t3796475128::get_offset_of_type_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize562 = { sizeof (TypeInfo_t364353910), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable562[3] = 
{
	TypeInfo_t364353910::get_offset_of_serverType_0(),
	TypeInfo_t364353910::get_offset_of_serverHierarchy_1(),
	TypeInfo_t364353910::get_offset_of_interfacesImplemented_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize563 = { sizeof (WellKnownClientTypeEntry_t3502923836), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable563[3] = 
{
	WellKnownClientTypeEntry_t3502923836::get_offset_of_obj_type_2(),
	WellKnownClientTypeEntry_t3502923836::get_offset_of_obj_url_3(),
	WellKnownClientTypeEntry_t3502923836::get_offset_of_app_url_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize564 = { sizeof (WellKnownObjectMode_t1076894662)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable564[3] = 
{
	WellKnownObjectMode_t1076894662::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize565 = { sizeof (WellKnownServiceTypeEntry_t2445315225), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable565[3] = 
{
	WellKnownServiceTypeEntry_t2445315225::get_offset_of_obj_type_2(),
	WellKnownServiceTypeEntry_t2445315225::get_offset_of_obj_uri_3(),
	WellKnownServiceTypeEntry_t2445315225::get_offset_of_obj_mode_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize566 = { sizeof (BinaryCommon_t914372529), -1, sizeof(BinaryCommon_t914372529_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable566[4] = 
{
	BinaryCommon_t914372529_StaticFields::get_offset_of_BinaryHeader_0(),
	BinaryCommon_t914372529_StaticFields::get_offset_of__typeCodesToType_1(),
	BinaryCommon_t914372529_StaticFields::get_offset_of__typeCodeMap_2(),
	BinaryCommon_t914372529_StaticFields::get_offset_of_UseReflectionSerialization_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize567 = { sizeof (BinaryElement_t3697628713)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable567[24] = 
{
	BinaryElement_t3697628713::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize568 = { sizeof (TypeTag_t2549026113)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable568[9] = 
{
	TypeTag_t2549026113::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize569 = { sizeof (MethodFlags_t3654341750)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable569[11] = 
{
	MethodFlags_t3654341750::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize570 = { sizeof (ReturnTypeTag_t3494338432)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable570[5] = 
{
	ReturnTypeTag_t3494338432::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize571 = { sizeof (BinaryFormatter_t4020167867), -1, sizeof(BinaryFormatter_t4020167867_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable571[7] = 
{
	BinaryFormatter_t4020167867::get_offset_of_assembly_format_0(),
	BinaryFormatter_t4020167867::get_offset_of_binder_1(),
	BinaryFormatter_t4020167867::get_offset_of_context_2(),
	BinaryFormatter_t4020167867::get_offset_of_surrogate_selector_3(),
	BinaryFormatter_t4020167867::get_offset_of_type_format_4(),
	BinaryFormatter_t4020167867::get_offset_of_filter_level_5(),
	BinaryFormatter_t4020167867_StaticFields::get_offset_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize572 = { sizeof (MessageFormatter_t3347209865), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize573 = { sizeof (ObjectReader_t37321081), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable573[12] = 
{
	ObjectReader_t37321081::get_offset_of__surrogateSelector_0(),
	ObjectReader_t37321081::get_offset_of__context_1(),
	ObjectReader_t37321081::get_offset_of__binder_2(),
	ObjectReader_t37321081::get_offset_of__filterLevel_3(),
	ObjectReader_t37321081::get_offset_of__manager_4(),
	ObjectReader_t37321081::get_offset_of__registeredAssemblies_5(),
	ObjectReader_t37321081::get_offset_of__typeMetadataCache_6(),
	ObjectReader_t37321081::get_offset_of__lastObject_7(),
	ObjectReader_t37321081::get_offset_of__lastObjectID_8(),
	ObjectReader_t37321081::get_offset_of__rootObjectID_9(),
	ObjectReader_t37321081::get_offset_of_arrayBuffer_10(),
	ObjectReader_t37321081::get_offset_of_ArrayBufferLength_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize574 = { sizeof (TypeMetadata_t1473591231), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable574[6] = 
{
	TypeMetadata_t1473591231::get_offset_of_Type_0(),
	TypeMetadata_t1473591231::get_offset_of_MemberTypes_1(),
	TypeMetadata_t1473591231::get_offset_of_MemberNames_2(),
	TypeMetadata_t1473591231::get_offset_of_MemberInfos_3(),
	TypeMetadata_t1473591231::get_offset_of_FieldCount_4(),
	TypeMetadata_t1473591231::get_offset_of_NeedsSerializationInfo_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize575 = { sizeof (ArrayNullFiller_t1189628944), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable575[1] = 
{
	ArrayNullFiller_t1189628944::get_offset_of_NullCount_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize576 = { sizeof (FormatterAssemblyStyle_t4028360733)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable576[3] = 
{
	FormatterAssemblyStyle_t4028360733::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize577 = { sizeof (FormatterTypeStyle_t3555614384)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable577[4] = 
{
	FormatterTypeStyle_t3555614384::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize578 = { sizeof (TypeFilterLevel_t2263457487)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable578[3] = 
{
	TypeFilterLevel_t2263457487::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize579 = { sizeof (FormatterConverter_t2931272622), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize580 = { sizeof (FormatterServices_t276146134), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize581 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize582 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize583 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize584 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize585 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize586 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize587 = { sizeof (ObjectManager_t1834069478), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable587[9] = 
{
	ObjectManager_t1834069478::get_offset_of__objectRecordChain_0(),
	ObjectManager_t1834069478::get_offset_of__lastObjectRecord_1(),
	ObjectManager_t1834069478::get_offset_of__deserializedRecords_2(),
	ObjectManager_t1834069478::get_offset_of__onDeserializedCallbackRecords_3(),
	ObjectManager_t1834069478::get_offset_of__objectRecords_4(),
	ObjectManager_t1834069478::get_offset_of__finalFixup_5(),
	ObjectManager_t1834069478::get_offset_of__selector_6(),
	ObjectManager_t1834069478::get_offset_of__context_7(),
	ObjectManager_t1834069478::get_offset_of__registeredObjectsCount_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize588 = { sizeof (BaseFixupRecord_t1902547881), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable588[4] = 
{
	BaseFixupRecord_t1902547881::get_offset_of_ObjectToBeFixed_0(),
	BaseFixupRecord_t1902547881::get_offset_of_ObjectRequired_1(),
	BaseFixupRecord_t1902547881::get_offset_of_NextSameContainer_2(),
	BaseFixupRecord_t1902547881::get_offset_of_NextSameRequired_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize589 = { sizeof (ArrayFixupRecord_t1729185097), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable589[1] = 
{
	ArrayFixupRecord_t1729185097::get_offset_of__index_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize590 = { sizeof (MultiArrayFixupRecord_t953748551), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable590[1] = 
{
	MultiArrayFixupRecord_t953748551::get_offset_of__indices_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize591 = { sizeof (FixupRecord_t2831593520), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable591[1] = 
{
	FixupRecord_t2831593520::get_offset_of__member_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize592 = { sizeof (DelayedFixupRecord_t3619809552), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable592[1] = 
{
	DelayedFixupRecord_t3619809552::get_offset_of__memberName_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize593 = { sizeof (ObjectRecordStatus_t1464403357)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable593[5] = 
{
	ObjectRecordStatus_t1464403357::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize594 = { sizeof (ObjectRecord_t2658842190), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable594[13] = 
{
	ObjectRecord_t2658842190::get_offset_of_Status_0(),
	ObjectRecord_t2658842190::get_offset_of_OriginalObject_1(),
	ObjectRecord_t2658842190::get_offset_of_ObjectInstance_2(),
	ObjectRecord_t2658842190::get_offset_of_ObjectID_3(),
	ObjectRecord_t2658842190::get_offset_of_Info_4(),
	ObjectRecord_t2658842190::get_offset_of_IdOfContainingObj_5(),
	ObjectRecord_t2658842190::get_offset_of_Surrogate_6(),
	ObjectRecord_t2658842190::get_offset_of_SurrogateSelector_7(),
	ObjectRecord_t2658842190::get_offset_of_Member_8(),
	ObjectRecord_t2658842190::get_offset_of_ArrayIndex_9(),
	ObjectRecord_t2658842190::get_offset_of_FixupChainAsContainer_10(),
	ObjectRecord_t2658842190::get_offset_of_FixupChainAsRequired_11(),
	ObjectRecord_t2658842190::get_offset_of_Next_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize595 = { sizeof (OnDeserializedAttribute_t1170673285), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize596 = { sizeof (OnDeserializingAttribute_t4249412610), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize597 = { sizeof (OnSerializedAttribute_t3634929697), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize598 = { sizeof (OnSerializingAttribute_t1960667843), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize599 = { sizeof (SerializationBinder_t1623850403), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
