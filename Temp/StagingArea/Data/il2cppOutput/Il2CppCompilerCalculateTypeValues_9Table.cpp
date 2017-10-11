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

// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2406396366;
// System.Collections.Hashtable
struct Hashtable_t2491480603;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t3265876172;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t785904923;
// System.Collections.IComparer
struct IComparer_t2102094374;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t651583852;
// System.Collections.ArrayList
struct ArrayList_t2438777478;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t694754150;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t4008665658;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1438975814;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t3806539078;
// System.String
struct String_t;
// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t2230785082;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.ICollection
struct ICollection_t1587693851;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct Dictionary_2_t663670841;
// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct Dictionary_2_t1681810281;
// System.Type
struct Type_t;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1069551948;
// System.Version
struct Version_t473354266;
// System.WeakReference
struct WeakReference_t155206486;
// System.ComponentModel.TypeConverter
struct TypeConverter_t1280771817;
// System.Char[]
struct CharU5BU5D_t2644401608;
// System.String[]
struct StringU5BU5D_t1580750740;
// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t673486859;
// System.Net.IWebProxy
struct IWebProxy_t1584368794;
// System.UInt16[]
struct UInt16U5BU5D_t4218507908;
// System.Uri
struct Uri_t2698829161;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2583174417;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t409957182;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t517886290;
// System.Net.ServicePoint
struct ServicePoint_t3897460184;




#ifndef U3CMODULEU3E_T2816031019_H
#define U3CMODULEU3E_T2816031019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2816031019 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2816031019_H
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
#ifndef MARSHALBYREFOBJECT_T933609709_H
#define MARSHALBYREFOBJECT_T933609709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t933609709  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2406396366 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t933609709, ____identity_0)); }
	inline ServerIdentity_t2406396366 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2406396366 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2406396366 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T933609709_H
#ifndef TYPEDESCRIPTIONPROVIDER_T3770043129_H
#define TYPEDESCRIPTIONPROVIDER_T3770043129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptionProvider
struct  TypeDescriptionProvider_t3770043129  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTIONPROVIDER_T3770043129_H
#ifndef HYBRIDDICTIONARY_T673486859_H
#define HYBRIDDICTIONARY_T673486859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.HybridDictionary
struct  HybridDictionary_t673486859  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.HybridDictionary::caseInsensitive
	bool ___caseInsensitive_0;
	// System.Collections.Hashtable System.Collections.Specialized.HybridDictionary::hashtable
	Hashtable_t2491480603 * ___hashtable_1;
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::list
	ListDictionary_t3265876172 * ___list_2;

public:
	inline static int32_t get_offset_of_caseInsensitive_0() { return static_cast<int32_t>(offsetof(HybridDictionary_t673486859, ___caseInsensitive_0)); }
	inline bool get_caseInsensitive_0() const { return ___caseInsensitive_0; }
	inline bool* get_address_of_caseInsensitive_0() { return &___caseInsensitive_0; }
	inline void set_caseInsensitive_0(bool value)
	{
		___caseInsensitive_0 = value;
	}

	inline static int32_t get_offset_of_hashtable_1() { return static_cast<int32_t>(offsetof(HybridDictionary_t673486859, ___hashtable_1)); }
	inline Hashtable_t2491480603 * get_hashtable_1() const { return ___hashtable_1; }
	inline Hashtable_t2491480603 ** get_address_of_hashtable_1() { return &___hashtable_1; }
	inline void set_hashtable_1(Hashtable_t2491480603 * value)
	{
		___hashtable_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_1), value);
	}

	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(HybridDictionary_t673486859, ___list_2)); }
	inline ListDictionary_t3265876172 * get_list_2() const { return ___list_2; }
	inline ListDictionary_t3265876172 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(ListDictionary_t3265876172 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier((&___list_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HYBRIDDICTIONARY_T673486859_H
#ifndef LISTDICTIONARY_T3265876172_H
#define LISTDICTIONARY_T3265876172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary
struct  ListDictionary_t3265876172  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_t785904923 * ___head_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	RuntimeObject* ___comparer_3;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(ListDictionary_t3265876172, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionary_t3265876172, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_head_2() { return static_cast<int32_t>(offsetof(ListDictionary_t3265876172, ___head_2)); }
	inline DictionaryNode_t785904923 * get_head_2() const { return ___head_2; }
	inline DictionaryNode_t785904923 ** get_address_of_head_2() { return &___head_2; }
	inline void set_head_2(DictionaryNode_t785904923 * value)
	{
		___head_2 = value;
		Il2CppCodeGenWriteBarrier((&___head_2), value);
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(ListDictionary_t3265876172, ___comparer_3)); }
	inline RuntimeObject* get_comparer_3() const { return ___comparer_3; }
	inline RuntimeObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(RuntimeObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTDICTIONARY_T3265876172_H
#ifndef DICTIONARYNODE_T785904923_H
#define DICTIONARYNODE_T785904923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNode
struct  DictionaryNode_t785904923  : public RuntimeObject
{
public:
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::value
	RuntimeObject * ___value_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNode::next
	DictionaryNode_t785904923 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(DictionaryNode_t785904923, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DictionaryNode_t785904923, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(DictionaryNode_t785904923, ___next_2)); }
	inline DictionaryNode_t785904923 * get_next_2() const { return ___next_2; }
	inline DictionaryNode_t785904923 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(DictionaryNode_t785904923 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODE_T785904923_H
#ifndef DICTIONARYNODEENUMERATOR_T104173442_H
#define DICTIONARYNODEENUMERATOR_T104173442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator
struct  DictionaryNodeEnumerator_t104173442  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::dict
	ListDictionary_t3265876172 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::isAtStart
	bool ___isAtStart_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::current
	DictionaryNode_t785904923 * ___current_2;
	// System.Int32 System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::version
	int32_t ___version_3;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t104173442, ___dict_0)); }
	inline ListDictionary_t3265876172 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t3265876172 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t3265876172 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier((&___dict_0), value);
	}

	inline static int32_t get_offset_of_isAtStart_1() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t104173442, ___isAtStart_1)); }
	inline bool get_isAtStart_1() const { return ___isAtStart_1; }
	inline bool* get_address_of_isAtStart_1() { return &___isAtStart_1; }
	inline void set_isAtStart_1(bool value)
	{
		___isAtStart_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t104173442, ___current_2)); }
	inline DictionaryNode_t785904923 * get_current_2() const { return ___current_2; }
	inline DictionaryNode_t785904923 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(DictionaryNode_t785904923 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((&___current_2), value);
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t104173442, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODEENUMERATOR_T104173442_H
#ifndef NAMEOBJECTCOLLECTIONBASE_T2230785082_H
#define NAMEOBJECTCOLLECTIONBASE_T2230785082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase
struct  NameObjectCollectionBase_t2230785082  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.NameObjectCollectionBase::m_ItemsContainer
	Hashtable_t2491480603 * ___m_ItemsContainer_0;
	// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::m_NullKeyItem
	_Item_t651583852 * ___m_NullKeyItem_1;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::m_ItemsArray
	ArrayList_t2438777478 * ___m_ItemsArray_2;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::m_hashprovider
	RuntimeObject* ___m_hashprovider_3;
	// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::m_comparer
	RuntimeObject* ___m_comparer_4;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::m_defCapacity
	int32_t ___m_defCapacity_5;
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::m_readonly
	bool ___m_readonly_6;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::infoCopy
	SerializationInfo_t4008665658 * ___infoCopy_7;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::keyscoll
	KeysCollection_t1438975814 * ___keyscoll_8;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::equality_comparer
	RuntimeObject* ___equality_comparer_9;

public:
	inline static int32_t get_offset_of_m_ItemsContainer_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2230785082, ___m_ItemsContainer_0)); }
	inline Hashtable_t2491480603 * get_m_ItemsContainer_0() const { return ___m_ItemsContainer_0; }
	inline Hashtable_t2491480603 ** get_address_of_m_ItemsContainer_0() { return &___m_ItemsContainer_0; }
	inline void set_m_ItemsContainer_0(Hashtable_t2491480603 * value)
	{
		___m_ItemsContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsContainer_0), value);
	}

	inline static int32_t get_offset_of_m_NullKeyItem_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2230785082, ___m_NullKeyItem_1)); }
	inline _Item_t651583852 * get_m_NullKeyItem_1() const { return ___m_NullKeyItem_1; }
	inline _Item_t651583852 ** get_address_of_m_NullKeyItem_1() { return &___m_NullKeyItem_1; }
	inline void set_m_NullKeyItem_1(_Item_t651583852 * value)
	{
		___m_NullKeyItem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_NullKeyItem_1), value);
	}

	inline static int32_t get_offset_of_m_ItemsArray_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2230785082, ___m_ItemsArray_2)); }
	inline ArrayList_t2438777478 * get_m_ItemsArray_2() const { return ___m_ItemsArray_2; }
	inline ArrayList_t2438777478 ** get_address_of_m_ItemsArray_2() { return &___m_ItemsArray_2; }
	inline void set_m_ItemsArray_2(ArrayList_t2438777478 * value)
	{
		___m_ItemsArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsArray_2), value);
	}

	inline static int32_t get_offset_of_m_hashprovider_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2230785082, ___m_hashprovider_3)); }
	inline RuntimeObject* get_m_hashprovider_3() const { return ___m_hashprovider_3; }
	inline RuntimeObject** get_address_of_m_hashprovider_3() { return &___m_hashprovider_3; }
	inline void set_m_hashprovider_3(RuntimeObject* value)
	{
		___m_hashprovider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_hashprovider_3), value);
	}

	inline static int32_t get_offset_of_m_comparer_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2230785082, ___m_comparer_4)); }
	inline RuntimeObject* get_m_comparer_4() const { return ___m_comparer_4; }
	inline RuntimeObject** get_address_of_m_comparer_4() { return &___m_comparer_4; }
	inline void set_m_comparer_4(RuntimeObject* value)
	{
		___m_comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_comparer_4), value);
	}

	inline static int32_t get_offset_of_m_defCapacity_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2230785082, ___m_defCapacity_5)); }
	inline int32_t get_m_defCapacity_5() const { return ___m_defCapacity_5; }
	inline int32_t* get_address_of_m_defCapacity_5() { return &___m_defCapacity_5; }
	inline void set_m_defCapacity_5(int32_t value)
	{
		___m_defCapacity_5 = value;
	}

	inline static int32_t get_offset_of_m_readonly_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2230785082, ___m_readonly_6)); }
	inline bool get_m_readonly_6() const { return ___m_readonly_6; }
	inline bool* get_address_of_m_readonly_6() { return &___m_readonly_6; }
	inline void set_m_readonly_6(bool value)
	{
		___m_readonly_6 = value;
	}

	inline static int32_t get_offset_of_infoCopy_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2230785082, ___infoCopy_7)); }
	inline SerializationInfo_t4008665658 * get_infoCopy_7() const { return ___infoCopy_7; }
	inline SerializationInfo_t4008665658 ** get_address_of_infoCopy_7() { return &___infoCopy_7; }
	inline void set_infoCopy_7(SerializationInfo_t4008665658 * value)
	{
		___infoCopy_7 = value;
		Il2CppCodeGenWriteBarrier((&___infoCopy_7), value);
	}

	inline static int32_t get_offset_of_keyscoll_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2230785082, ___keyscoll_8)); }
	inline KeysCollection_t1438975814 * get_keyscoll_8() const { return ___keyscoll_8; }
	inline KeysCollection_t1438975814 ** get_address_of_keyscoll_8() { return &___keyscoll_8; }
	inline void set_keyscoll_8(KeysCollection_t1438975814 * value)
	{
		___keyscoll_8 = value;
		Il2CppCodeGenWriteBarrier((&___keyscoll_8), value);
	}

	inline static int32_t get_offset_of_equality_comparer_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2230785082, ___equality_comparer_9)); }
	inline RuntimeObject* get_equality_comparer_9() const { return ___equality_comparer_9; }
	inline RuntimeObject** get_address_of_equality_comparer_9() { return &___equality_comparer_9; }
	inline void set_equality_comparer_9(RuntimeObject* value)
	{
		___equality_comparer_9 = value;
		Il2CppCodeGenWriteBarrier((&___equality_comparer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTCOLLECTIONBASE_T2230785082_H
#ifndef _ITEM_T651583852_H
#define _ITEM_T651583852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct  _Item_t651583852  : public RuntimeObject
{
public:
	// System.String System.Collections.Specialized.NameObjectCollectionBase/_Item::key
	String_t* ___key_0;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase/_Item::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(_Item_t651583852, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(_Item_t651583852, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _ITEM_T651583852_H
#ifndef _KEYSENUMERATOR_T3914185866_H
#define _KEYSENUMERATOR_T3914185866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator
struct  _KeysEnumerator_t3914185866  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_collection
	NameObjectCollectionBase_t2230785082 * ___m_collection_0;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_position
	int32_t ___m_position_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t3914185866, ___m_collection_0)); }
	inline NameObjectCollectionBase_t2230785082 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t2230785082 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t2230785082 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}

	inline static int32_t get_offset_of_m_position_1() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t3914185866, ___m_position_1)); }
	inline int32_t get_m_position_1() const { return ___m_position_1; }
	inline int32_t* get_address_of_m_position_1() { return &___m_position_1; }
	inline void set_m_position_1(int32_t value)
	{
		___m_position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _KEYSENUMERATOR_T3914185866_H
#ifndef KEYSCOLLECTION_T1438975814_H
#define KEYSCOLLECTION_T1438975814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct  KeysCollection_t1438975814  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::m_collection
	NameObjectCollectionBase_t2230785082 * ___m_collection_0;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(KeysCollection_t1438975814, ___m_collection_0)); }
	inline NameObjectCollectionBase_t2230785082 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t2230785082 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t2230785082 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSCOLLECTION_T1438975814_H
#ifndef INSTANCEDESCRIPTOR_T146091440_H
#define INSTANCEDESCRIPTOR_T146091440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct  InstanceDescriptor_t146091440  : public RuntimeObject
{
public:
	// System.Reflection.MemberInfo System.ComponentModel.Design.Serialization.InstanceDescriptor::member
	MemberInfo_t * ___member_0;
	// System.Collections.ICollection System.ComponentModel.Design.Serialization.InstanceDescriptor::arguments
	RuntimeObject* ___arguments_1;
	// System.Boolean System.ComponentModel.Design.Serialization.InstanceDescriptor::isComplete
	bool ___isComplete_2;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t146091440, ___member_0)); }
	inline MemberInfo_t * get_member_0() const { return ___member_0; }
	inline MemberInfo_t ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(MemberInfo_t * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_0), value);
	}

	inline static int32_t get_offset_of_arguments_1() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t146091440, ___arguments_1)); }
	inline RuntimeObject* get_arguments_1() const { return ___arguments_1; }
	inline RuntimeObject** get_address_of_arguments_1() { return &___arguments_1; }
	inline void set_arguments_1(RuntimeObject* value)
	{
		___arguments_1 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_1), value);
	}

	inline static int32_t get_offset_of_isComplete_2() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t146091440, ___isComplete_2)); }
	inline bool get_isComplete_2() const { return ___isComplete_2; }
	inline bool* get_address_of_isComplete_2() { return &___isComplete_2; }
	inline void set_isComplete_2(bool value)
	{
		___isComplete_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEDESCRIPTOR_T146091440_H
#ifndef TYPECONVERTER_T1280771817_H
#define TYPECONVERTER_T1280771817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t1280771817  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T1280771817_H
#ifndef ATTRIBUTECOLLECTION_T1069551948_H
#define ATTRIBUTECOLLECTION_T1069551948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AttributeCollection
struct  AttributeCollection_t1069551948  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.AttributeCollection::attrList
	ArrayList_t2438777478 * ___attrList_0;

public:
	inline static int32_t get_offset_of_attrList_0() { return static_cast<int32_t>(offsetof(AttributeCollection_t1069551948, ___attrList_0)); }
	inline ArrayList_t2438777478 * get_attrList_0() const { return ___attrList_0; }
	inline ArrayList_t2438777478 ** get_address_of_attrList_0() { return &___attrList_0; }
	inline void set_attrList_0(ArrayList_t2438777478 * value)
	{
		___attrList_0 = value;
		Il2CppCodeGenWriteBarrier((&___attrList_0), value);
	}
};

struct AttributeCollection_t1069551948_StaticFields
{
public:
	// System.ComponentModel.AttributeCollection System.ComponentModel.AttributeCollection::Empty
	AttributeCollection_t1069551948 * ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(AttributeCollection_t1069551948_StaticFields, ___Empty_1)); }
	inline AttributeCollection_t1069551948 * get_Empty_1() const { return ___Empty_1; }
	inline AttributeCollection_t1069551948 ** get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(AttributeCollection_t1069551948 * value)
	{
		___Empty_1 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTECOLLECTION_T1069551948_H
#ifndef TYPEDESCRIPTOR_T937879524_H
#define TYPEDESCRIPTOR_T937879524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor
struct  TypeDescriptor_t937879524  : public RuntimeObject
{
public:

public:
};

struct TypeDescriptor_t937879524_StaticFields
{
public:
	// System.Object System.ComponentModel.TypeDescriptor::creatingDefaultConverters
	RuntimeObject * ___creatingDefaultConverters_0;
	// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::defaultConverters
	ArrayList_t2438777478 * ___defaultConverters_1;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::componentTable
	Hashtable_t2491480603 * ___componentTable_2;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::typeTable
	Hashtable_t2491480603 * ___typeTable_3;
	// System.Object System.ComponentModel.TypeDescriptor::typeDescriptionProvidersLock
	RuntimeObject * ___typeDescriptionProvidersLock_4;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::typeDescriptionProviders
	Dictionary_2_t663670841 * ___typeDescriptionProviders_5;
	// System.Object System.ComponentModel.TypeDescriptor::componentDescriptionProvidersLock
	RuntimeObject * ___componentDescriptionProvidersLock_6;
	// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::componentDescriptionProviders
	Dictionary_2_t1681810281 * ___componentDescriptionProviders_7;

public:
	inline static int32_t get_offset_of_creatingDefaultConverters_0() { return static_cast<int32_t>(offsetof(TypeDescriptor_t937879524_StaticFields, ___creatingDefaultConverters_0)); }
	inline RuntimeObject * get_creatingDefaultConverters_0() const { return ___creatingDefaultConverters_0; }
	inline RuntimeObject ** get_address_of_creatingDefaultConverters_0() { return &___creatingDefaultConverters_0; }
	inline void set_creatingDefaultConverters_0(RuntimeObject * value)
	{
		___creatingDefaultConverters_0 = value;
		Il2CppCodeGenWriteBarrier((&___creatingDefaultConverters_0), value);
	}

	inline static int32_t get_offset_of_defaultConverters_1() { return static_cast<int32_t>(offsetof(TypeDescriptor_t937879524_StaticFields, ___defaultConverters_1)); }
	inline ArrayList_t2438777478 * get_defaultConverters_1() const { return ___defaultConverters_1; }
	inline ArrayList_t2438777478 ** get_address_of_defaultConverters_1() { return &___defaultConverters_1; }
	inline void set_defaultConverters_1(ArrayList_t2438777478 * value)
	{
		___defaultConverters_1 = value;
		Il2CppCodeGenWriteBarrier((&___defaultConverters_1), value);
	}

	inline static int32_t get_offset_of_componentTable_2() { return static_cast<int32_t>(offsetof(TypeDescriptor_t937879524_StaticFields, ___componentTable_2)); }
	inline Hashtable_t2491480603 * get_componentTable_2() const { return ___componentTable_2; }
	inline Hashtable_t2491480603 ** get_address_of_componentTable_2() { return &___componentTable_2; }
	inline void set_componentTable_2(Hashtable_t2491480603 * value)
	{
		___componentTable_2 = value;
		Il2CppCodeGenWriteBarrier((&___componentTable_2), value);
	}

	inline static int32_t get_offset_of_typeTable_3() { return static_cast<int32_t>(offsetof(TypeDescriptor_t937879524_StaticFields, ___typeTable_3)); }
	inline Hashtable_t2491480603 * get_typeTable_3() const { return ___typeTable_3; }
	inline Hashtable_t2491480603 ** get_address_of_typeTable_3() { return &___typeTable_3; }
	inline void set_typeTable_3(Hashtable_t2491480603 * value)
	{
		___typeTable_3 = value;
		Il2CppCodeGenWriteBarrier((&___typeTable_3), value);
	}

	inline static int32_t get_offset_of_typeDescriptionProvidersLock_4() { return static_cast<int32_t>(offsetof(TypeDescriptor_t937879524_StaticFields, ___typeDescriptionProvidersLock_4)); }
	inline RuntimeObject * get_typeDescriptionProvidersLock_4() const { return ___typeDescriptionProvidersLock_4; }
	inline RuntimeObject ** get_address_of_typeDescriptionProvidersLock_4() { return &___typeDescriptionProvidersLock_4; }
	inline void set_typeDescriptionProvidersLock_4(RuntimeObject * value)
	{
		___typeDescriptionProvidersLock_4 = value;
		Il2CppCodeGenWriteBarrier((&___typeDescriptionProvidersLock_4), value);
	}

	inline static int32_t get_offset_of_typeDescriptionProviders_5() { return static_cast<int32_t>(offsetof(TypeDescriptor_t937879524_StaticFields, ___typeDescriptionProviders_5)); }
	inline Dictionary_2_t663670841 * get_typeDescriptionProviders_5() const { return ___typeDescriptionProviders_5; }
	inline Dictionary_2_t663670841 ** get_address_of_typeDescriptionProviders_5() { return &___typeDescriptionProviders_5; }
	inline void set_typeDescriptionProviders_5(Dictionary_2_t663670841 * value)
	{
		___typeDescriptionProviders_5 = value;
		Il2CppCodeGenWriteBarrier((&___typeDescriptionProviders_5), value);
	}

	inline static int32_t get_offset_of_componentDescriptionProvidersLock_6() { return static_cast<int32_t>(offsetof(TypeDescriptor_t937879524_StaticFields, ___componentDescriptionProvidersLock_6)); }
	inline RuntimeObject * get_componentDescriptionProvidersLock_6() const { return ___componentDescriptionProvidersLock_6; }
	inline RuntimeObject ** get_address_of_componentDescriptionProvidersLock_6() { return &___componentDescriptionProvidersLock_6; }
	inline void set_componentDescriptionProvidersLock_6(RuntimeObject * value)
	{
		___componentDescriptionProvidersLock_6 = value;
		Il2CppCodeGenWriteBarrier((&___componentDescriptionProvidersLock_6), value);
	}

	inline static int32_t get_offset_of_componentDescriptionProviders_7() { return static_cast<int32_t>(offsetof(TypeDescriptor_t937879524_StaticFields, ___componentDescriptionProviders_7)); }
	inline Dictionary_2_t1681810281 * get_componentDescriptionProviders_7() const { return ___componentDescriptionProviders_7; }
	inline Dictionary_2_t1681810281 ** get_address_of_componentDescriptionProviders_7() { return &___componentDescriptionProviders_7; }
	inline void set_componentDescriptionProviders_7(Dictionary_2_t1681810281 * value)
	{
		___componentDescriptionProviders_7 = value;
		Il2CppCodeGenWriteBarrier((&___componentDescriptionProviders_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTOR_T937879524_H
#ifndef IL2CPPCOMOBJECT_H
#define IL2CPPCOMOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComObject

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPCOMOBJECT_H
#ifndef LOCALE_T2324253654_H
#define LOCALE_T2324253654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t2324253654  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T2324253654_H
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
#ifndef READONLYCOLLECTIONBASE_T866834565_H
#define READONLYCOLLECTIONBASE_T866834565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t866834565  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t2438777478 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t866834565, ___list_0)); }
	inline ArrayList_t2438777478 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2438777478 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2438777478 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T866834565_H
#ifndef INFO_T3210358916_H
#define INFO_T3210358916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Info
struct  Info_t3210358916  : public RuntimeObject
{
public:
	// System.Type System.ComponentModel.Info::_infoType
	Type_t * ____infoType_0;
	// System.ComponentModel.AttributeCollection System.ComponentModel.Info::_attributes
	AttributeCollection_t1069551948 * ____attributes_1;

public:
	inline static int32_t get_offset_of__infoType_0() { return static_cast<int32_t>(offsetof(Info_t3210358916, ____infoType_0)); }
	inline Type_t * get__infoType_0() const { return ____infoType_0; }
	inline Type_t ** get_address_of__infoType_0() { return &____infoType_0; }
	inline void set__infoType_0(Type_t * value)
	{
		____infoType_0 = value;
		Il2CppCodeGenWriteBarrier((&____infoType_0), value);
	}

	inline static int32_t get_offset_of__attributes_1() { return static_cast<int32_t>(offsetof(Info_t3210358916, ____attributes_1)); }
	inline AttributeCollection_t1069551948 * get__attributes_1() const { return ____attributes_1; }
	inline AttributeCollection_t1069551948 ** get_address_of__attributes_1() { return &____attributes_1; }
	inline void set__attributes_1(AttributeCollection_t1069551948 * value)
	{
		____attributes_1 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INFO_T3210358916_H
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
#ifndef HTTPVERSION_T44007510_H
#define HTTPVERSION_T44007510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpVersion
struct  HttpVersion_t44007510  : public RuntimeObject
{
public:

public:
};

struct HttpVersion_t44007510_StaticFields
{
public:
	// System.Version System.Net.HttpVersion::Version10
	Version_t473354266 * ___Version10_0;
	// System.Version System.Net.HttpVersion::Version11
	Version_t473354266 * ___Version11_1;

public:
	inline static int32_t get_offset_of_Version10_0() { return static_cast<int32_t>(offsetof(HttpVersion_t44007510_StaticFields, ___Version10_0)); }
	inline Version_t473354266 * get_Version10_0() const { return ___Version10_0; }
	inline Version_t473354266 ** get_address_of_Version10_0() { return &___Version10_0; }
	inline void set_Version10_0(Version_t473354266 * value)
	{
		___Version10_0 = value;
		Il2CppCodeGenWriteBarrier((&___Version10_0), value);
	}

	inline static int32_t get_offset_of_Version11_1() { return static_cast<int32_t>(offsetof(HttpVersion_t44007510_StaticFields, ___Version11_1)); }
	inline Version_t473354266 * get_Version11_1() const { return ___Version11_1; }
	inline Version_t473354266 ** get_address_of_Version11_1() { return &___Version11_1; }
	inline void set_Version11_1(Version_t473354266 * value)
	{
		___Version11_1 = value;
		Il2CppCodeGenWriteBarrier((&___Version11_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPVERSION_T44007510_H
#ifndef EQUALITYCOMPARER_1_T1015457525_H
#define EQUALITYCOMPARER_1_T1015457525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<System.ComponentModel.WeakObjectWrapper>
struct  EqualityComparer_1_t1015457525  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t1015457525_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1::_default
	EqualityComparer_1_t1015457525 * ____default_0;

public:
	inline static int32_t get_offset_of__default_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t1015457525_StaticFields, ____default_0)); }
	inline EqualityComparer_1_t1015457525 * get__default_0() const { return ____default_0; }
	inline EqualityComparer_1_t1015457525 ** get_address_of__default_0() { return &____default_0; }
	inline void set__default_0(EqualityComparer_1_t1015457525 * value)
	{
		____default_0 = value;
		Il2CppCodeGenWriteBarrier((&____default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYCOMPARER_1_T1015457525_H
#ifndef GLOBALPROXYSELECTION_T3944406681_H
#define GLOBALPROXYSELECTION_T3944406681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.GlobalProxySelection
struct  GlobalProxySelection_t3944406681  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLOBALPROXYSELECTION_T3944406681_H
#ifndef HTTPREQUESTCREATOR_T1853903099_H
#define HTTPREQUESTCREATOR_T1853903099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpRequestCreator
struct  HttpRequestCreator_t1853903099  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPREQUESTCREATOR_T1853903099_H
#ifndef FILEWEBREQUESTCREATOR_T1664806361_H
#define FILEWEBREQUESTCREATOR_T1664806361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FileWebRequestCreator
struct  FileWebRequestCreator_t1664806361  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEWEBREQUESTCREATOR_T1664806361_H
#ifndef DEFAULTCERTIFICATEPOLICY_T4061105288_H
#define DEFAULTCERTIFICATEPOLICY_T4061105288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.DefaultCertificatePolicy
struct  DefaultCertificatePolicy_t4061105288  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTCERTIFICATEPOLICY_T4061105288_H
#ifndef WEAKOBJECTWRAPPER_T251474256_H
#define WEAKOBJECTWRAPPER_T251474256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.WeakObjectWrapper
struct  WeakObjectWrapper_t251474256  : public RuntimeObject
{
public:
	// System.Int32 System.ComponentModel.WeakObjectWrapper::<TargetHashCode>k__BackingField
	int32_t ___U3CTargetHashCodeU3Ek__BackingField_0;
	// System.WeakReference System.ComponentModel.WeakObjectWrapper::<Weak>k__BackingField
	WeakReference_t155206486 * ___U3CWeakU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTargetHashCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WeakObjectWrapper_t251474256, ___U3CTargetHashCodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CTargetHashCodeU3Ek__BackingField_0() const { return ___U3CTargetHashCodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CTargetHashCodeU3Ek__BackingField_0() { return &___U3CTargetHashCodeU3Ek__BackingField_0; }
	inline void set_U3CTargetHashCodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CTargetHashCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CWeakU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WeakObjectWrapper_t251474256, ___U3CWeakU3Ek__BackingField_1)); }
	inline WeakReference_t155206486 * get_U3CWeakU3Ek__BackingField_1() const { return ___U3CWeakU3Ek__BackingField_1; }
	inline WeakReference_t155206486 ** get_address_of_U3CWeakU3Ek__BackingField_1() { return &___U3CWeakU3Ek__BackingField_1; }
	inline void set_U3CWeakU3Ek__BackingField_1(WeakReference_t155206486 * value)
	{
		___U3CWeakU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CWeakU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKOBJECTWRAPPER_T251474256_H
#ifndef FTPREQUESTCREATOR_T689431027_H
#define FTPREQUESTCREATOR_T689431027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FtpRequestCreator
struct  FtpRequestCreator_t689431027  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FTPREQUESTCREATOR_T689431027_H
#ifndef GUIDCONVERTER_T1949305748_H
#define GUIDCONVERTER_T1949305748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.GuidConverter
struct  GuidConverter_t1949305748  : public TypeConverter_t1280771817
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDCONVERTER_T1949305748_H
#ifndef ENUMCONVERTER_T3924296381_H
#define ENUMCONVERTER_T3924296381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter
struct  EnumConverter_t3924296381  : public TypeConverter_t1280771817
{
public:
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t * ___type_0;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(EnumConverter_t3924296381, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCONVERTER_T3924296381_H
#ifndef NULLABLECONVERTER_T293627619_H
#define NULLABLECONVERTER_T293627619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NullableConverter
struct  NullableConverter_t293627619  : public TypeConverter_t1280771817
{
public:
	// System.Type System.ComponentModel.NullableConverter::nullableType
	Type_t * ___nullableType_0;
	// System.Type System.ComponentModel.NullableConverter::underlyingType
	Type_t * ___underlyingType_1;
	// System.ComponentModel.TypeConverter System.ComponentModel.NullableConverter::underlyingTypeConverter
	TypeConverter_t1280771817 * ___underlyingTypeConverter_2;

public:
	inline static int32_t get_offset_of_nullableType_0() { return static_cast<int32_t>(offsetof(NullableConverter_t293627619, ___nullableType_0)); }
	inline Type_t * get_nullableType_0() const { return ___nullableType_0; }
	inline Type_t ** get_address_of_nullableType_0() { return &___nullableType_0; }
	inline void set_nullableType_0(Type_t * value)
	{
		___nullableType_0 = value;
		Il2CppCodeGenWriteBarrier((&___nullableType_0), value);
	}

	inline static int32_t get_offset_of_underlyingType_1() { return static_cast<int32_t>(offsetof(NullableConverter_t293627619, ___underlyingType_1)); }
	inline Type_t * get_underlyingType_1() const { return ___underlyingType_1; }
	inline Type_t ** get_address_of_underlyingType_1() { return &___underlyingType_1; }
	inline void set_underlyingType_1(Type_t * value)
	{
		___underlyingType_1 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingType_1), value);
	}

	inline static int32_t get_offset_of_underlyingTypeConverter_2() { return static_cast<int32_t>(offsetof(NullableConverter_t293627619, ___underlyingTypeConverter_2)); }
	inline TypeConverter_t1280771817 * get_underlyingTypeConverter_2() const { return ___underlyingTypeConverter_2; }
	inline TypeConverter_t1280771817 ** get_address_of_underlyingTypeConverter_2() { return &___underlyingTypeConverter_2; }
	inline void set_underlyingTypeConverter_2(TypeConverter_t1280771817 * value)
	{
		___underlyingTypeConverter_2 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingTypeConverter_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLECONVERTER_T293627619_H
#ifndef REFERENCECONVERTER_T3051563565_H
#define REFERENCECONVERTER_T3051563565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t3051563565  : public TypeConverter_t1280771817
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCECONVERTER_T3051563565_H
#ifndef STRINGCONVERTER_T3523877323_H
#define STRINGCONVERTER_T3523877323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.StringConverter
struct  StringConverter_t3523877323  : public TypeConverter_t1280771817
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCONVERTER_T3523877323_H
#ifndef TYPEINFO_T3300648008_H
#define TYPEINFO_T3300648008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeInfo
struct  TypeInfo_t3300648008  : public Info_t3210358916
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T3300648008_H
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
#ifndef TYPECONVERTERATTRIBUTE_T3487317825_H
#define TYPECONVERTERATTRIBUTE_T3487317825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverterAttribute
struct  TypeConverterAttribute_t3487317825  : public Attribute_t3079708014
{
public:
	// System.String System.ComponentModel.TypeConverterAttribute::converter_type
	String_t* ___converter_type_1;

public:
	inline static int32_t get_offset_of_converter_type_1() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t3487317825, ___converter_type_1)); }
	inline String_t* get_converter_type_1() const { return ___converter_type_1; }
	inline String_t** get_address_of_converter_type_1() { return &___converter_type_1; }
	inline void set_converter_type_1(String_t* value)
	{
		___converter_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___converter_type_1), value);
	}
};

struct TypeConverterAttribute_t3487317825_StaticFields
{
public:
	// System.ComponentModel.TypeConverterAttribute System.ComponentModel.TypeConverterAttribute::Default
	TypeConverterAttribute_t3487317825 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t3487317825_StaticFields, ___Default_0)); }
	inline TypeConverterAttribute_t3487317825 * get_Default_0() const { return ___Default_0; }
	inline TypeConverterAttribute_t3487317825 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(TypeConverterAttribute_t3487317825 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTERATTRIBUTE_T3487317825_H
#ifndef WEAKOBJECTWRAPPERCOMPARER_T3001840707_H
#define WEAKOBJECTWRAPPERCOMPARER_T3001840707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.WeakObjectWrapperComparer
struct  WeakObjectWrapperComparer_t3001840707  : public EqualityComparer_1_t1015457525
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKOBJECTWRAPPERCOMPARER_T3001840707_H
#ifndef DEFAULTVALUEATTRIBUTE_T1097964112_H
#define DEFAULTVALUEATTRIBUTE_T1097964112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultValueAttribute
struct  DefaultValueAttribute_t1097964112  : public Attribute_t3079708014
{
public:
	// System.Object System.ComponentModel.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t1097964112, ___DefaultValue_0)); }
	inline RuntimeObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline RuntimeObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(RuntimeObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T1097964112_H
#ifndef TIMESPANCONVERTER_T934860027_H
#define TIMESPANCONVERTER_T934860027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TimeSpanConverter
struct  TimeSpanConverter_t934860027  : public TypeConverter_t1280771817
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANCONVERTER_T934860027_H
#ifndef DATETIMECONVERTER_T2766013691_H
#define DATETIMECONVERTER_T2766013691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeConverter
struct  DateTimeConverter_t2766013691  : public TypeConverter_t1280771817
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONVERTER_T2766013691_H
#ifndef U24ARRAYTYPEU243132_T1457859022_H
#define U24ARRAYTYPEU243132_T1457859022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$3132
struct  U24ArrayTypeU243132_t1457859022 
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
		uint8_t U24ArrayTypeU243132_t1457859022__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU243132_T1457859022_H
#ifndef U24ARRAYTYPEU2496_T3063015086_H
#define U24ARRAYTYPEU2496_T3063015086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$96
struct  U24ArrayTypeU2496_t3063015086 
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
		uint8_t U24ArrayTypeU2496_t3063015086__padding[96];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2496_T3063015086_H
#ifndef U24ARRAYTYPEU24256_T2168092855_H
#define U24ARRAYTYPEU24256_T2168092855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t2168092855 
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
		uint8_t U24ArrayTypeU24256_t2168092855__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T2168092855_H
#ifndef U24ARRAYTYPEU24128_T231896004_H
#define U24ARRAYTYPEU24128_T231896004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$128
struct  U24ArrayTypeU24128_t231896004 
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
		uint8_t U24ArrayTypeU24128_t231896004__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24128_T231896004_H
#ifndef U24ARRAYTYPEU2452_T3401021087_H
#define U24ARRAYTYPEU2452_T3401021087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$52
struct  U24ArrayTypeU2452_t3401021087 
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
		uint8_t U24ArrayTypeU2452_t3401021087__padding[52];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2452_T3401021087_H
#ifndef __IL2CPPCOMDELEGATE_T1714141216_H
#define __IL2CPPCOMDELEGATE_T1714141216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComDelegate
struct  __Il2CppComDelegate_t1714141216  : public Il2CppComObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __IL2CPPCOMDELEGATE_T1714141216_H
#ifndef MONOTODOATTRIBUTE_T3385003323_H
#define MONOTODOATTRIBUTE_T3385003323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t3385003323  : public Attribute_t3079708014
{
public:
	// System.String System.MonoTODOAttribute::comment
	String_t* ___comment_0;

public:
	inline static int32_t get_offset_of_comment_0() { return static_cast<int32_t>(offsetof(MonoTODOAttribute_t3385003323, ___comment_0)); }
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
#endif // MONOTODOATTRIBUTE_T3385003323_H
#ifndef NAMEVALUECOLLECTION_T2093857968_H
#define NAMEVALUECOLLECTION_T2093857968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameValueCollection
struct  NameValueCollection_t2093857968  : public NameObjectCollectionBase_t2230785082
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAllKeys
	StringU5BU5D_t1580750740* ___cachedAllKeys_10;
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAll
	StringU5BU5D_t1580750740* ___cachedAll_11;

public:
	inline static int32_t get_offset_of_cachedAllKeys_10() { return static_cast<int32_t>(offsetof(NameValueCollection_t2093857968, ___cachedAllKeys_10)); }
	inline StringU5BU5D_t1580750740* get_cachedAllKeys_10() const { return ___cachedAllKeys_10; }
	inline StringU5BU5D_t1580750740** get_address_of_cachedAllKeys_10() { return &___cachedAllKeys_10; }
	inline void set_cachedAllKeys_10(StringU5BU5D_t1580750740* value)
	{
		___cachedAllKeys_10 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAllKeys_10), value);
	}

	inline static int32_t get_offset_of_cachedAll_11() { return static_cast<int32_t>(offsetof(NameValueCollection_t2093857968, ___cachedAll_11)); }
	inline StringU5BU5D_t1580750740* get_cachedAll_11() const { return ___cachedAll_11; }
	inline StringU5BU5D_t1580750740** get_address_of_cachedAll_11() { return &___cachedAll_11; }
	inline void set_cachedAll_11(StringU5BU5D_t1580750740* value)
	{
		___cachedAll_11 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAll_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEVALUECOLLECTION_T2093857968_H
#ifndef U24ARRAYTYPEU242048_T4138257999_H
#define U24ARRAYTYPEU242048_T4138257999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$2048
struct  U24ArrayTypeU242048_t4138257999 
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
		uint8_t U24ArrayTypeU242048_t4138257999__padding[2048];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU242048_T4138257999_H
#ifndef BASENUMBERCONVERTER_T2084873793_H
#define BASENUMBERCONVERTER_T2084873793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t2084873793  : public TypeConverter_t1280771817
{
public:
	// System.Type System.ComponentModel.BaseNumberConverter::InnerType
	Type_t * ___InnerType_0;

public:
	inline static int32_t get_offset_of_InnerType_0() { return static_cast<int32_t>(offsetof(BaseNumberConverter_t2084873793, ___InnerType_0)); }
	inline Type_t * get_InnerType_0() const { return ___InnerType_0; }
	inline Type_t ** get_address_of_InnerType_0() { return &___InnerType_0; }
	inline void set_InnerType_0(Type_t * value)
	{
		___InnerType_0 = value;
		Il2CppCodeGenWriteBarrier((&___InnerType_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASENUMBERCONVERTER_T2084873793_H
#ifndef BOOLEANCONVERTER_T2110863617_H
#define BOOLEANCONVERTER_T2110863617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BooleanConverter
struct  BooleanConverter_t2110863617  : public TypeConverter_t1280771817
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANCONVERTER_T2110863617_H
#ifndef U24ARRAYTYPEU241024_T3787735656_H
#define U24ARRAYTYPEU241024_T3787735656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t3787735656 
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
		uint8_t U24ArrayTypeU241024_t3787735656__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T3787735656_H
#ifndef U24ARRAYTYPEU24640_T1257687080_H
#define U24ARRAYTYPEU24640_T1257687080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$640
struct  U24ArrayTypeU24640_t1257687080 
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
		uint8_t U24ArrayTypeU24640_t1257687080__padding[640];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24640_T1257687080_H
#ifndef U24ARRAYTYPEU24124_T2370283090_H
#define U24ARRAYTYPEU24124_T2370283090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$124
struct  U24ArrayTypeU24124_t2370283090 
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
		uint8_t U24ArrayTypeU24124_t2370283090__padding[124];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24124_T2370283090_H
#ifndef CHARCONVERTER_T2317478221_H
#define CHARCONVERTER_T2317478221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CharConverter
struct  CharConverter_t2317478221  : public TypeConverter_t1280771817
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARCONVERTER_T2317478221_H
#ifndef U24ARRAYTYPEU248_T110117755_H
#define U24ARRAYTYPEU248_T110117755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$8
struct  U24ArrayTypeU248_t110117755 
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
		uint8_t U24ArrayTypeU248_t110117755__padding[8];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU248_T110117755_H
#ifndef U24ARRAYTYPEU24136_T682880107_H
#define U24ARRAYTYPEU24136_T682880107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t682880107 
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
		uint8_t U24ArrayTypeU24136_t682880107__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T682880107_H
#ifndef U24ARRAYTYPEU2412_T4013634657_H
#define U24ARRAYTYPEU2412_T4013634657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t4013634657 
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
		uint8_t U24ArrayTypeU2412_t4013634657__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T4013634657_H
#ifndef COLLECTIONCONVERTER_T3487612868_H
#define COLLECTIONCONVERTER_T3487612868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionConverter
struct  CollectionConverter_t3487612868  : public TypeConverter_t1280771817
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCONVERTER_T3487612868_H
#ifndef COMPONENTCOLLECTION_T498309968_H
#define COMPONENTCOLLECTION_T498309968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentCollection
struct  ComponentCollection_t498309968  : public ReadOnlyCollectionBase_t866834565
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCOLLECTION_T498309968_H
#ifndef U24ARRAYTYPEU2464_T1004406833_H
#define U24ARRAYTYPEU2464_T1004406833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$64
struct  U24ArrayTypeU2464_t1004406833 
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
		uint8_t U24ArrayTypeU2464_t1004406833__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2464_T1004406833_H
#ifndef U24ARRAYTYPEU2448_T3159457181_H
#define U24ARRAYTYPEU2448_T3159457181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$48
struct  U24ArrayTypeU2448_t3159457181 
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
		uint8_t U24ArrayTypeU2448_t3159457181__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2448_T3159457181_H
#ifndef U24ARRAYTYPEU2432_T1253167930_H
#define U24ARRAYTYPEU2432_T1253167930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$32
struct  U24ArrayTypeU2432_t1253167930 
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
		uint8_t U24ArrayTypeU2432_t1253167930__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2432_T1253167930_H
#ifndef U24ARRAYTYPEU2420_T391881291_H
#define U24ARRAYTYPEU2420_T391881291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$20
struct  U24ArrayTypeU2420_t391881291 
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
		uint8_t U24ArrayTypeU2420_t391881291__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2420_T391881291_H
#ifndef U24ARRAYTYPEU2472_T3861729406_H
#define U24ARRAYTYPEU2472_T3861729406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$72
struct  U24ArrayTypeU2472_t3861729406 
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
		uint8_t U24ArrayTypeU2472_t3861729406__padding[72];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2472_T3861729406_H
#ifndef CULTUREINFOCONVERTER_T501613231_H
#define CULTUREINFOCONVERTER_T501613231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter
struct  CultureInfoConverter_t501613231  : public TypeConverter_t1280771817
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCONVERTER_T501613231_H
#ifndef DECIMALCONVERTER_T882648692_H
#define DECIMALCONVERTER_T882648692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DecimalConverter
struct  DecimalConverter_t882648692  : public BaseNumberConverter_t2084873793
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONVERTER_T882648692_H
#ifndef ADDRESSFAMILY_T276761653_H
#define ADDRESSFAMILY_T276761653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.AddressFamily
struct  AddressFamily_t276761653 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AddressFamily_t276761653, ___value___1)); }
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
#endif // ADDRESSFAMILY_T276761653_H
#ifndef SSLPOLICYERRORS_T2677182081_H
#define SSLPOLICYERRORS_T2677182081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslPolicyErrors
struct  SslPolicyErrors_t2677182081 
{
public:
	// System.Int32 System.Net.Security.SslPolicyErrors::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SslPolicyErrors_t2677182081, ___value___1)); }
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
#endif // SSLPOLICYERRORS_T2677182081_H
#ifndef UINT64CONVERTER_T3251534241_H
#define UINT64CONVERTER_T3251534241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt64Converter
struct  UInt64Converter_t3251534241  : public BaseNumberConverter_t2084873793
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64CONVERTER_T3251534241_H
#ifndef TRACELEVEL_T668978887_H
#define TRACELEVEL_T668978887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceLevel
struct  TraceLevel_t668978887 
{
public:
	// System.Int32 System.Diagnostics.TraceLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TraceLevel_t668978887, ___value___1)); }
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
#endif // TRACELEVEL_T668978887_H
#ifndef UINT32CONVERTER_T3643823544_H
#define UINT32CONVERTER_T3643823544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt32Converter
struct  UInt32Converter_t3643823544  : public BaseNumberConverter_t2084873793
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32CONVERTER_T3643823544_H
#ifndef UINT16CONVERTER_T3908494149_H
#define UINT16CONVERTER_T3908494149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt16Converter
struct  UInt16Converter_t3908494149  : public BaseNumberConverter_t2084873793
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16CONVERTER_T3908494149_H
#ifndef ARRAYCONVERTER_T409640655_H
#define ARRAYCONVERTER_T409640655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter
struct  ArrayConverter_t409640655  : public CollectionConverter_t3487612868
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYCONVERTER_T409640655_H
#ifndef SINGLECONVERTER_T423322488_H
#define SINGLECONVERTER_T423322488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SingleConverter
struct  SingleConverter_t423322488  : public BaseNumberConverter_t2084873793
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLECONVERTER_T423322488_H
#ifndef COMPONENTCONVERTER_T414094544_H
#define COMPONENTCONVERTER_T414094544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentConverter
struct  ComponentConverter_t414094544  : public ReferenceConverter_t3051563565
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCONVERTER_T414094544_H
#ifndef SBYTECONVERTER_T154866022_H
#define SBYTECONVERTER_T154866022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SByteConverter
struct  SByteConverter_t154866022  : public BaseNumberConverter_t2084873793
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTECONVERTER_T154866022_H
#ifndef BYTECONVERTER_T3991563681_H
#define BYTECONVERTER_T3991563681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ByteConverter
struct  ByteConverter_t3991563681  : public BaseNumberConverter_t2084873793
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTECONVERTER_T3991563681_H
#ifndef INT64CONVERTER_T479431683_H
#define INT64CONVERTER_T479431683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int64Converter
struct  Int64Converter_t479431683  : public BaseNumberConverter_t2084873793
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64CONVERTER_T479431683_H
#ifndef AUTHENTICATIONLEVEL_T964014101_H
#define AUTHENTICATIONLEVEL_T964014101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticationLevel
struct  AuthenticationLevel_t964014101 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AuthenticationLevel_t964014101, ___value___1)); }
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
#endif // AUTHENTICATIONLEVEL_T964014101_H
#ifndef DOUBLECONVERTER_T1685532162_H
#define DOUBLECONVERTER_T1685532162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoubleConverter
struct  DoubleConverter_t1685532162  : public BaseNumberConverter_t2084873793
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLECONVERTER_T1685532162_H
#ifndef INT32CONVERTER_T654927337_H
#define INT32CONVERTER_T654927337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int32Converter
struct  Int32Converter_t654927337  : public BaseNumberConverter_t2084873793
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32CONVERTER_T654927337_H
#ifndef INT16CONVERTER_T4248329264_H
#define INT16CONVERTER_T4248329264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int16Converter
struct  Int16Converter_t4248329264  : public BaseNumberConverter_t2084873793
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16CONVERTER_T4248329264_H
#ifndef EDITORBROWSABLESTATE_T3481965332_H
#define EDITORBROWSABLESTATE_T3481965332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableState
struct  EditorBrowsableState_t3481965332 
{
public:
	// System.Int32 System.ComponentModel.EditorBrowsableState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EditorBrowsableState_t3481965332, ___value___1)); }
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
#endif // EDITORBROWSABLESTATE_T3481965332_H
#ifndef FILEACCESS_T645641694_H
#define FILEACCESS_T645641694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t645641694 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t645641694, ___value___1)); }
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
#endif // FILEACCESS_T645641694_H
#ifndef WEBREQUEST_T3718803109_H
#define WEBREQUEST_T3718803109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebRequest
struct  WebRequest_t3718803109  : public MarshalByRefObject_t933609709
{
public:
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::authentication_level
	int32_t ___authentication_level_4;

public:
	inline static int32_t get_offset_of_authentication_level_4() { return static_cast<int32_t>(offsetof(WebRequest_t3718803109, ___authentication_level_4)); }
	inline int32_t get_authentication_level_4() const { return ___authentication_level_4; }
	inline int32_t* get_address_of_authentication_level_4() { return &___authentication_level_4; }
	inline void set_authentication_level_4(int32_t value)
	{
		___authentication_level_4 = value;
	}
};

struct WebRequest_t3718803109_StaticFields
{
public:
	// System.Collections.Specialized.HybridDictionary System.Net.WebRequest::prefixes
	HybridDictionary_t673486859 * ___prefixes_1;
	// System.Boolean System.Net.WebRequest::isDefaultWebProxySet
	bool ___isDefaultWebProxySet_2;
	// System.Net.IWebProxy System.Net.WebRequest::defaultWebProxy
	RuntimeObject* ___defaultWebProxy_3;
	// System.Object System.Net.WebRequest::lockobj
	RuntimeObject * ___lockobj_5;

public:
	inline static int32_t get_offset_of_prefixes_1() { return static_cast<int32_t>(offsetof(WebRequest_t3718803109_StaticFields, ___prefixes_1)); }
	inline HybridDictionary_t673486859 * get_prefixes_1() const { return ___prefixes_1; }
	inline HybridDictionary_t673486859 ** get_address_of_prefixes_1() { return &___prefixes_1; }
	inline void set_prefixes_1(HybridDictionary_t673486859 * value)
	{
		___prefixes_1 = value;
		Il2CppCodeGenWriteBarrier((&___prefixes_1), value);
	}

	inline static int32_t get_offset_of_isDefaultWebProxySet_2() { return static_cast<int32_t>(offsetof(WebRequest_t3718803109_StaticFields, ___isDefaultWebProxySet_2)); }
	inline bool get_isDefaultWebProxySet_2() const { return ___isDefaultWebProxySet_2; }
	inline bool* get_address_of_isDefaultWebProxySet_2() { return &___isDefaultWebProxySet_2; }
	inline void set_isDefaultWebProxySet_2(bool value)
	{
		___isDefaultWebProxySet_2 = value;
	}

	inline static int32_t get_offset_of_defaultWebProxy_3() { return static_cast<int32_t>(offsetof(WebRequest_t3718803109_StaticFields, ___defaultWebProxy_3)); }
	inline RuntimeObject* get_defaultWebProxy_3() const { return ___defaultWebProxy_3; }
	inline RuntimeObject** get_address_of_defaultWebProxy_3() { return &___defaultWebProxy_3; }
	inline void set_defaultWebProxy_3(RuntimeObject* value)
	{
		___defaultWebProxy_3 = value;
		Il2CppCodeGenWriteBarrier((&___defaultWebProxy_3), value);
	}

	inline static int32_t get_offset_of_lockobj_5() { return static_cast<int32_t>(offsetof(WebRequest_t3718803109_StaticFields, ___lockobj_5)); }
	inline RuntimeObject * get_lockobj_5() const { return ___lockobj_5; }
	inline RuntimeObject ** get_address_of_lockobj_5() { return &___lockobj_5; }
	inline void set_lockobj_5(RuntimeObject * value)
	{
		___lockobj_5 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUEST_T3718803109_H
#ifndef EDITORBROWSABLEATTRIBUTE_T3782351115_H
#define EDITORBROWSABLEATTRIBUTE_T3782351115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableAttribute
struct  EditorBrowsableAttribute_t3782351115  : public Attribute_t3079708014
{
public:
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(EditorBrowsableAttribute_t3782351115, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLEATTRIBUTE_T3782351115_H
#ifndef IPADDRESS_T2657393126_H
#define IPADDRESS_T2657393126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPAddress
struct  IPAddress_t2657393126  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_0;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_1;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t4218507908* ___m_Numbers_2;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_3;

public:
	inline static int32_t get_offset_of_m_Address_0() { return static_cast<int32_t>(offsetof(IPAddress_t2657393126, ___m_Address_0)); }
	inline int64_t get_m_Address_0() const { return ___m_Address_0; }
	inline int64_t* get_address_of_m_Address_0() { return &___m_Address_0; }
	inline void set_m_Address_0(int64_t value)
	{
		___m_Address_0 = value;
	}

	inline static int32_t get_offset_of_m_Family_1() { return static_cast<int32_t>(offsetof(IPAddress_t2657393126, ___m_Family_1)); }
	inline int32_t get_m_Family_1() const { return ___m_Family_1; }
	inline int32_t* get_address_of_m_Family_1() { return &___m_Family_1; }
	inline void set_m_Family_1(int32_t value)
	{
		___m_Family_1 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_2() { return static_cast<int32_t>(offsetof(IPAddress_t2657393126, ___m_Numbers_2)); }
	inline UInt16U5BU5D_t4218507908* get_m_Numbers_2() const { return ___m_Numbers_2; }
	inline UInt16U5BU5D_t4218507908** get_address_of_m_Numbers_2() { return &___m_Numbers_2; }
	inline void set_m_Numbers_2(UInt16U5BU5D_t4218507908* value)
	{
		___m_Numbers_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Numbers_2), value);
	}

	inline static int32_t get_offset_of_m_ScopeId_3() { return static_cast<int32_t>(offsetof(IPAddress_t2657393126, ___m_ScopeId_3)); }
	inline int64_t get_m_ScopeId_3() const { return ___m_ScopeId_3; }
	inline int64_t* get_address_of_m_ScopeId_3() { return &___m_ScopeId_3; }
	inline void set_m_ScopeId_3(int64_t value)
	{
		___m_ScopeId_3 = value;
	}
};

struct IPAddress_t2657393126_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2657393126 * ___Any_4;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2657393126 * ___Broadcast_5;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2657393126 * ___Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2657393126 * ___None_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2657393126 * ___IPv6Any_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2657393126 * ___IPv6Loopback_9;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2657393126 * ___IPv6None_10;

public:
	inline static int32_t get_offset_of_Any_4() { return static_cast<int32_t>(offsetof(IPAddress_t2657393126_StaticFields, ___Any_4)); }
	inline IPAddress_t2657393126 * get_Any_4() const { return ___Any_4; }
	inline IPAddress_t2657393126 ** get_address_of_Any_4() { return &___Any_4; }
	inline void set_Any_4(IPAddress_t2657393126 * value)
	{
		___Any_4 = value;
		Il2CppCodeGenWriteBarrier((&___Any_4), value);
	}

	inline static int32_t get_offset_of_Broadcast_5() { return static_cast<int32_t>(offsetof(IPAddress_t2657393126_StaticFields, ___Broadcast_5)); }
	inline IPAddress_t2657393126 * get_Broadcast_5() const { return ___Broadcast_5; }
	inline IPAddress_t2657393126 ** get_address_of_Broadcast_5() { return &___Broadcast_5; }
	inline void set_Broadcast_5(IPAddress_t2657393126 * value)
	{
		___Broadcast_5 = value;
		Il2CppCodeGenWriteBarrier((&___Broadcast_5), value);
	}

	inline static int32_t get_offset_of_Loopback_6() { return static_cast<int32_t>(offsetof(IPAddress_t2657393126_StaticFields, ___Loopback_6)); }
	inline IPAddress_t2657393126 * get_Loopback_6() const { return ___Loopback_6; }
	inline IPAddress_t2657393126 ** get_address_of_Loopback_6() { return &___Loopback_6; }
	inline void set_Loopback_6(IPAddress_t2657393126 * value)
	{
		___Loopback_6 = value;
		Il2CppCodeGenWriteBarrier((&___Loopback_6), value);
	}

	inline static int32_t get_offset_of_None_7() { return static_cast<int32_t>(offsetof(IPAddress_t2657393126_StaticFields, ___None_7)); }
	inline IPAddress_t2657393126 * get_None_7() const { return ___None_7; }
	inline IPAddress_t2657393126 ** get_address_of_None_7() { return &___None_7; }
	inline void set_None_7(IPAddress_t2657393126 * value)
	{
		___None_7 = value;
		Il2CppCodeGenWriteBarrier((&___None_7), value);
	}

	inline static int32_t get_offset_of_IPv6Any_8() { return static_cast<int32_t>(offsetof(IPAddress_t2657393126_StaticFields, ___IPv6Any_8)); }
	inline IPAddress_t2657393126 * get_IPv6Any_8() const { return ___IPv6Any_8; }
	inline IPAddress_t2657393126 ** get_address_of_IPv6Any_8() { return &___IPv6Any_8; }
	inline void set_IPv6Any_8(IPAddress_t2657393126 * value)
	{
		___IPv6Any_8 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Any_8), value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_9() { return static_cast<int32_t>(offsetof(IPAddress_t2657393126_StaticFields, ___IPv6Loopback_9)); }
	inline IPAddress_t2657393126 * get_IPv6Loopback_9() const { return ___IPv6Loopback_9; }
	inline IPAddress_t2657393126 ** get_address_of_IPv6Loopback_9() { return &___IPv6Loopback_9; }
	inline void set_IPv6Loopback_9(IPAddress_t2657393126 * value)
	{
		___IPv6Loopback_9 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Loopback_9), value);
	}

	inline static int32_t get_offset_of_IPv6None_10() { return static_cast<int32_t>(offsetof(IPAddress_t2657393126_StaticFields, ___IPv6None_10)); }
	inline IPAddress_t2657393126 * get_IPv6None_10() const { return ___IPv6None_10; }
	inline IPAddress_t2657393126 ** get_address_of_IPv6None_10() { return &___IPv6None_10; }
	inline void set_IPv6None_10(IPAddress_t2657393126 * value)
	{
		___IPv6None_10 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6None_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPADDRESS_T2657393126_H
#ifndef FTPWEBREQUEST_T2963841333_H
#define FTPWEBREQUEST_T2963841333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FtpWebRequest
struct  FtpWebRequest_t2963841333  : public WebRequest_t3718803109
{
public:
	// System.Uri System.Net.FtpWebRequest::requestUri
	Uri_t2698829161 * ___requestUri_6;
	// System.Net.IWebProxy System.Net.FtpWebRequest::proxy
	RuntimeObject* ___proxy_7;
	// System.Int32 System.Net.FtpWebRequest::timeout
	int32_t ___timeout_8;
	// System.Int32 System.Net.FtpWebRequest::rwTimeout
	int32_t ___rwTimeout_9;
	// System.Boolean System.Net.FtpWebRequest::binary
	bool ___binary_10;
	// System.Boolean System.Net.FtpWebRequest::usePassive
	bool ___usePassive_11;
	// System.String System.Net.FtpWebRequest::method
	String_t* ___method_12;
	// System.Object System.Net.FtpWebRequest::locker
	RuntimeObject * ___locker_13;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.FtpWebRequest::callback
	RemoteCertificateValidationCallback_t2583174417 * ___callback_15;

public:
	inline static int32_t get_offset_of_requestUri_6() { return static_cast<int32_t>(offsetof(FtpWebRequest_t2963841333, ___requestUri_6)); }
	inline Uri_t2698829161 * get_requestUri_6() const { return ___requestUri_6; }
	inline Uri_t2698829161 ** get_address_of_requestUri_6() { return &___requestUri_6; }
	inline void set_requestUri_6(Uri_t2698829161 * value)
	{
		___requestUri_6 = value;
		Il2CppCodeGenWriteBarrier((&___requestUri_6), value);
	}

	inline static int32_t get_offset_of_proxy_7() { return static_cast<int32_t>(offsetof(FtpWebRequest_t2963841333, ___proxy_7)); }
	inline RuntimeObject* get_proxy_7() const { return ___proxy_7; }
	inline RuntimeObject** get_address_of_proxy_7() { return &___proxy_7; }
	inline void set_proxy_7(RuntimeObject* value)
	{
		___proxy_7 = value;
		Il2CppCodeGenWriteBarrier((&___proxy_7), value);
	}

	inline static int32_t get_offset_of_timeout_8() { return static_cast<int32_t>(offsetof(FtpWebRequest_t2963841333, ___timeout_8)); }
	inline int32_t get_timeout_8() const { return ___timeout_8; }
	inline int32_t* get_address_of_timeout_8() { return &___timeout_8; }
	inline void set_timeout_8(int32_t value)
	{
		___timeout_8 = value;
	}

	inline static int32_t get_offset_of_rwTimeout_9() { return static_cast<int32_t>(offsetof(FtpWebRequest_t2963841333, ___rwTimeout_9)); }
	inline int32_t get_rwTimeout_9() const { return ___rwTimeout_9; }
	inline int32_t* get_address_of_rwTimeout_9() { return &___rwTimeout_9; }
	inline void set_rwTimeout_9(int32_t value)
	{
		___rwTimeout_9 = value;
	}

	inline static int32_t get_offset_of_binary_10() { return static_cast<int32_t>(offsetof(FtpWebRequest_t2963841333, ___binary_10)); }
	inline bool get_binary_10() const { return ___binary_10; }
	inline bool* get_address_of_binary_10() { return &___binary_10; }
	inline void set_binary_10(bool value)
	{
		___binary_10 = value;
	}

	inline static int32_t get_offset_of_usePassive_11() { return static_cast<int32_t>(offsetof(FtpWebRequest_t2963841333, ___usePassive_11)); }
	inline bool get_usePassive_11() const { return ___usePassive_11; }
	inline bool* get_address_of_usePassive_11() { return &___usePassive_11; }
	inline void set_usePassive_11(bool value)
	{
		___usePassive_11 = value;
	}

	inline static int32_t get_offset_of_method_12() { return static_cast<int32_t>(offsetof(FtpWebRequest_t2963841333, ___method_12)); }
	inline String_t* get_method_12() const { return ___method_12; }
	inline String_t** get_address_of_method_12() { return &___method_12; }
	inline void set_method_12(String_t* value)
	{
		___method_12 = value;
		Il2CppCodeGenWriteBarrier((&___method_12), value);
	}

	inline static int32_t get_offset_of_locker_13() { return static_cast<int32_t>(offsetof(FtpWebRequest_t2963841333, ___locker_13)); }
	inline RuntimeObject * get_locker_13() const { return ___locker_13; }
	inline RuntimeObject ** get_address_of_locker_13() { return &___locker_13; }
	inline void set_locker_13(RuntimeObject * value)
	{
		___locker_13 = value;
		Il2CppCodeGenWriteBarrier((&___locker_13), value);
	}

	inline static int32_t get_offset_of_callback_15() { return static_cast<int32_t>(offsetof(FtpWebRequest_t2963841333, ___callback_15)); }
	inline RemoteCertificateValidationCallback_t2583174417 * get_callback_15() const { return ___callback_15; }
	inline RemoteCertificateValidationCallback_t2583174417 ** get_address_of_callback_15() { return &___callback_15; }
	inline void set_callback_15(RemoteCertificateValidationCallback_t2583174417 * value)
	{
		___callback_15 = value;
		Il2CppCodeGenWriteBarrier((&___callback_15), value);
	}
};

struct FtpWebRequest_t2963841333_StaticFields
{
public:
	// System.String[] System.Net.FtpWebRequest::supportedCommands
	StringU5BU5D_t1580750740* ___supportedCommands_14;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.FtpWebRequest::<>f__am$cache1C
	RemoteCertificateValidationCallback_t2583174417 * ___U3CU3Ef__amU24cache1C_16;

public:
	inline static int32_t get_offset_of_supportedCommands_14() { return static_cast<int32_t>(offsetof(FtpWebRequest_t2963841333_StaticFields, ___supportedCommands_14)); }
	inline StringU5BU5D_t1580750740* get_supportedCommands_14() const { return ___supportedCommands_14; }
	inline StringU5BU5D_t1580750740** get_address_of_supportedCommands_14() { return &___supportedCommands_14; }
	inline void set_supportedCommands_14(StringU5BU5D_t1580750740* value)
	{
		___supportedCommands_14 = value;
		Il2CppCodeGenWriteBarrier((&___supportedCommands_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1C_16() { return static_cast<int32_t>(offsetof(FtpWebRequest_t2963841333_StaticFields, ___U3CU3Ef__amU24cache1C_16)); }
	inline RemoteCertificateValidationCallback_t2583174417 * get_U3CU3Ef__amU24cache1C_16() const { return ___U3CU3Ef__amU24cache1C_16; }
	inline RemoteCertificateValidationCallback_t2583174417 ** get_address_of_U3CU3Ef__amU24cache1C_16() { return &___U3CU3Ef__amU24cache1C_16; }
	inline void set_U3CU3Ef__amU24cache1C_16(RemoteCertificateValidationCallback_t2583174417 * value)
	{
		___U3CU3Ef__amU24cache1C_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1C_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FTPWEBREQUEST_T2963841333_H
#ifndef FILEWEBREQUEST_T2272015932_H
#define FILEWEBREQUEST_T2272015932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FileWebRequest
struct  FileWebRequest_t2272015932  : public WebRequest_t3718803109
{
public:
	// System.Uri System.Net.FileWebRequest::uri
	Uri_t2698829161 * ___uri_6;
	// System.Net.WebHeaderCollection System.Net.FileWebRequest::webHeaders
	WebHeaderCollection_t409957182 * ___webHeaders_7;
	// System.String System.Net.FileWebRequest::connectionGroup
	String_t* ___connectionGroup_8;
	// System.Int64 System.Net.FileWebRequest::contentLength
	int64_t ___contentLength_9;
	// System.IO.FileAccess System.Net.FileWebRequest::fileAccess
	int32_t ___fileAccess_10;
	// System.String System.Net.FileWebRequest::method
	String_t* ___method_11;
	// System.Net.IWebProxy System.Net.FileWebRequest::proxy
	RuntimeObject* ___proxy_12;
	// System.Boolean System.Net.FileWebRequest::preAuthenticate
	bool ___preAuthenticate_13;
	// System.Int32 System.Net.FileWebRequest::timeout
	int32_t ___timeout_14;

public:
	inline static int32_t get_offset_of_uri_6() { return static_cast<int32_t>(offsetof(FileWebRequest_t2272015932, ___uri_6)); }
	inline Uri_t2698829161 * get_uri_6() const { return ___uri_6; }
	inline Uri_t2698829161 ** get_address_of_uri_6() { return &___uri_6; }
	inline void set_uri_6(Uri_t2698829161 * value)
	{
		___uri_6 = value;
		Il2CppCodeGenWriteBarrier((&___uri_6), value);
	}

	inline static int32_t get_offset_of_webHeaders_7() { return static_cast<int32_t>(offsetof(FileWebRequest_t2272015932, ___webHeaders_7)); }
	inline WebHeaderCollection_t409957182 * get_webHeaders_7() const { return ___webHeaders_7; }
	inline WebHeaderCollection_t409957182 ** get_address_of_webHeaders_7() { return &___webHeaders_7; }
	inline void set_webHeaders_7(WebHeaderCollection_t409957182 * value)
	{
		___webHeaders_7 = value;
		Il2CppCodeGenWriteBarrier((&___webHeaders_7), value);
	}

	inline static int32_t get_offset_of_connectionGroup_8() { return static_cast<int32_t>(offsetof(FileWebRequest_t2272015932, ___connectionGroup_8)); }
	inline String_t* get_connectionGroup_8() const { return ___connectionGroup_8; }
	inline String_t** get_address_of_connectionGroup_8() { return &___connectionGroup_8; }
	inline void set_connectionGroup_8(String_t* value)
	{
		___connectionGroup_8 = value;
		Il2CppCodeGenWriteBarrier((&___connectionGroup_8), value);
	}

	inline static int32_t get_offset_of_contentLength_9() { return static_cast<int32_t>(offsetof(FileWebRequest_t2272015932, ___contentLength_9)); }
	inline int64_t get_contentLength_9() const { return ___contentLength_9; }
	inline int64_t* get_address_of_contentLength_9() { return &___contentLength_9; }
	inline void set_contentLength_9(int64_t value)
	{
		___contentLength_9 = value;
	}

	inline static int32_t get_offset_of_fileAccess_10() { return static_cast<int32_t>(offsetof(FileWebRequest_t2272015932, ___fileAccess_10)); }
	inline int32_t get_fileAccess_10() const { return ___fileAccess_10; }
	inline int32_t* get_address_of_fileAccess_10() { return &___fileAccess_10; }
	inline void set_fileAccess_10(int32_t value)
	{
		___fileAccess_10 = value;
	}

	inline static int32_t get_offset_of_method_11() { return static_cast<int32_t>(offsetof(FileWebRequest_t2272015932, ___method_11)); }
	inline String_t* get_method_11() const { return ___method_11; }
	inline String_t** get_address_of_method_11() { return &___method_11; }
	inline void set_method_11(String_t* value)
	{
		___method_11 = value;
		Il2CppCodeGenWriteBarrier((&___method_11), value);
	}

	inline static int32_t get_offset_of_proxy_12() { return static_cast<int32_t>(offsetof(FileWebRequest_t2272015932, ___proxy_12)); }
	inline RuntimeObject* get_proxy_12() const { return ___proxy_12; }
	inline RuntimeObject** get_address_of_proxy_12() { return &___proxy_12; }
	inline void set_proxy_12(RuntimeObject* value)
	{
		___proxy_12 = value;
		Il2CppCodeGenWriteBarrier((&___proxy_12), value);
	}

	inline static int32_t get_offset_of_preAuthenticate_13() { return static_cast<int32_t>(offsetof(FileWebRequest_t2272015932, ___preAuthenticate_13)); }
	inline bool get_preAuthenticate_13() const { return ___preAuthenticate_13; }
	inline bool* get_address_of_preAuthenticate_13() { return &___preAuthenticate_13; }
	inline void set_preAuthenticate_13(bool value)
	{
		___preAuthenticate_13 = value;
	}

	inline static int32_t get_offset_of_timeout_14() { return static_cast<int32_t>(offsetof(FileWebRequest_t2272015932, ___timeout_14)); }
	inline int32_t get_timeout_14() const { return ___timeout_14; }
	inline int32_t* get_address_of_timeout_14() { return &___timeout_14; }
	inline void set_timeout_14(int32_t value)
	{
		___timeout_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEWEBREQUEST_T2272015932_H
#ifndef HTTPWEBREQUEST_T2024699923_H
#define HTTPWEBREQUEST_T2024699923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpWebRequest
struct  HttpWebRequest_t2024699923  : public WebRequest_t3718803109
{
public:
	// System.Uri System.Net.HttpWebRequest::requestUri
	Uri_t2698829161 * ___requestUri_6;
	// System.Uri System.Net.HttpWebRequest::actualUri
	Uri_t2698829161 * ___actualUri_7;
	// System.Boolean System.Net.HttpWebRequest::hostChanged
	bool ___hostChanged_8;
	// System.Boolean System.Net.HttpWebRequest::allowAutoRedirect
	bool ___allowAutoRedirect_9;
	// System.Boolean System.Net.HttpWebRequest::allowBuffering
	bool ___allowBuffering_10;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::certificates
	X509CertificateCollection_t517886290 * ___certificates_11;
	// System.String System.Net.HttpWebRequest::connectionGroup
	String_t* ___connectionGroup_12;
	// System.Int64 System.Net.HttpWebRequest::contentLength
	int64_t ___contentLength_13;
	// System.Net.WebHeaderCollection System.Net.HttpWebRequest::webHeaders
	WebHeaderCollection_t409957182 * ___webHeaders_14;
	// System.Boolean System.Net.HttpWebRequest::keepAlive
	bool ___keepAlive_15;
	// System.Int32 System.Net.HttpWebRequest::maxAutoRedirect
	int32_t ___maxAutoRedirect_16;
	// System.String System.Net.HttpWebRequest::mediaType
	String_t* ___mediaType_17;
	// System.String System.Net.HttpWebRequest::method
	String_t* ___method_18;
	// System.String System.Net.HttpWebRequest::initialMethod
	String_t* ___initialMethod_19;
	// System.Boolean System.Net.HttpWebRequest::pipelined
	bool ___pipelined_20;
	// System.Version System.Net.HttpWebRequest::version
	Version_t473354266 * ___version_21;
	// System.Net.IWebProxy System.Net.HttpWebRequest::proxy
	RuntimeObject* ___proxy_22;
	// System.Boolean System.Net.HttpWebRequest::sendChunked
	bool ___sendChunked_23;
	// System.Net.ServicePoint System.Net.HttpWebRequest::servicePoint
	ServicePoint_t3897460184 * ___servicePoint_24;
	// System.Int32 System.Net.HttpWebRequest::timeout
	int32_t ___timeout_25;
	// System.Int32 System.Net.HttpWebRequest::redirects
	int32_t ___redirects_26;
	// System.Object System.Net.HttpWebRequest::locker
	RuntimeObject * ___locker_27;
	// System.Int32 System.Net.HttpWebRequest::readWriteTimeout
	int32_t ___readWriteTimeout_29;

public:
	inline static int32_t get_offset_of_requestUri_6() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2024699923, ___requestUri_6)); }
	inline Uri_t2698829161 * get_requestUri_6() const { return ___requestUri_6; }
	inline Uri_t2698829161 ** get_address_of_requestUri_6() { return &___requestUri_6; }
	inline void set_requestUri_6(Uri_t2698829161 * value)
	{
		___requestUri_6 = value;
		Il2CppCodeGenWriteBarrier((&___requestUri_6), value);
	}

	inline static int32_t get_offset_of_actualUri_7() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2024699923, ___actualUri_7)); }
	inline Uri_t2698829161 * get_actualUri_7() const { return ___actualUri_7; }
	inline Uri_t2698829161 ** get_address_of_actualUri_7() { return &___actualUri_7; }
	inline void set_actualUri_7(Uri_t2698829161 * value)
	{
		___actualUri_7 = value;
		Il2CppCodeGenWriteBarrier((&___actualUri_7), value);
	}

	inline static int32_t get_offset_of_hostChanged_8() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2024699923, ___hostChanged_8)); }
	inline bool get_hostChanged_8() const { return ___hostChanged_8; }
	inline bool* get_address_of_hostChanged_8() { return &___hostChanged_8; }
	inline void set_hostChanged_8(bool value)
	{
		___hostChanged_8 = value;
	}

	inline static int32_t get_offset_of_allowAutoRedirect_9() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2024699923, ___allowAutoRedirect_9)); }
	inline bool get_allowAutoRedirect_9() const { return ___allowAutoRedirect_9; }
	inline bool* get_address_of_allowAutoRedirect_9() { return &___allowAutoRedirect_9; }
	inline void set_allowAutoRedirect_9(bool value)
	{
		___allowAutoRedirect_9 = value;
	}

	inline static int32_t get_offset_of_allowBuffering_10() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2024699923, ___allowBuffering_10)); }
	inline bool get_allowBuffering_10() const { return ___allowBuffering_10; }
	inline bool* get_address_of_allowBuffering_10() { return &___allowBuffering_10; }
	inline void set_allowBuffering_10(bool value)
	{
		___allowBuffering_10 = value;
	}

	inline static int32_t get_offset_of_certificates_11() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2024699923, ___certificates_11)); }
	inline X509CertificateCollection_t517886290 * get_certificates_11() const { return ___certificates_11; }
	inline X509CertificateCollection_t517886290 ** get_address_of_certificates_11() { return &___certificates_11; }
	inline void set_certificates_11(X509CertificateCollection_t517886290 * value)
	{
		___certificates_11 = value;
		Il2CppCodeGenWriteBarrier((&___certificates_11), value);
	}

	inline static int32_t get_offset_of_connectionGroup_12() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2024699923, ___connectionGroup_12)); }
	inline String_t* get_connectionGroup_12() const { return ___connectionGroup_12; }
	inline String_t** get_address_of_connectionGroup_12() { return &___connectionGroup_12; }
	inline void set_connectionGroup_12(String_t* value)
	{
		___connectionGroup_12 = value;
		Il2CppCodeGenWriteBarrier((&___connectionGroup_12), value);
	}

	inline static int32_t get_offset_of_contentLength_13() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2024699923, ___contentLength_13)); }
	inline int64_t get_contentLength_13() const { return ___contentLength_13; }
	inline int64_t* get_address_of_contentLength_13() { return &___contentLength_13; }
	inline void set_contentLength_13(int64_t value)
	{
		___contentLength_13 = value;
	}

	inline static int32_t get_offset_of_webHeaders_14() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2024699923, ___webHeaders_14)); }
	inline WebHeaderCollection_t409957182 * get_webHeaders_14() const { return ___webHeaders_14; }
	inline WebHeaderCollection_t409957182 ** get_address_of_webHeaders_14() { return &___webHeaders_14; }
	inline void set_webHeaders_14(WebHeaderCollection_t409957182 * value)
	{
		___webHeaders_14 = value;
		Il2CppCodeGenWriteBarrier((&___webHeaders_14), value);
	}

	inline static int32_t get_offset_of_keepAlive_15() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2024699923, ___keepAlive_15)); }
	inline bool get_keepAlive_15() const { return ___keepAlive_15; }
	inline bool* get_address_of_keepAlive_15() { return &___keepAlive_15; }
	inline void set_keepAlive_15(bool value)
	{
		___keepAlive_15 = value;
	}

	inline static int32_t get_offset_of_maxAutoRedirect_16() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2024699923, ___maxAutoRedirect_16)); }
	inline int32_t get_maxAutoRedirect_16() const { return ___maxAutoRedirect_16; }
	inline int32_t* get_address_of_maxAutoRedirect_16() { return &___maxAutoRedirect_16; }
	inline void set_maxAutoRedirect_16(int32_t value)
	{
		___maxAutoRedirect_16 = value;
	}

	inline static int32_t get_offset_of_mediaType_17() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2024699923, ___mediaType_17)); }
	inline String_t* get_mediaType_17() const { return ___mediaType_17; }
	inline String_t** get_address_of_mediaType_17() { return &___mediaType_17; }
	inline void set_mediaType_17(String_t* value)
	{
		___mediaType_17 = value;
		Il2CppCodeGenWriteBarrier((&___mediaType_17), value);
	}

	inline static int32_t get_offset_of_method_18() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2024699923, ___method_18)); }
	inline String_t* get_method_18() const { return ___method_18; }
	inline String_t** get_address_of_method_18() { return &___method_18; }
	inline void set_method_18(String_t* value)
	{
		___method_18 = value;
		Il2CppCodeGenWriteBarrier((&___method_18), value);
	}

	inline static int32_t get_offset_of_initialMethod_19() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2024699923, ___initialMethod_19)); }
	inline String_t* get_initialMethod_19() const { return ___initialMethod_19; }
	inline String_t** get_address_of_initialMethod_19() { return &___initialMethod_19; }
	inline void set_initialMethod_19(String_t* value)
	{
		___initialMethod_19 = value;
		Il2CppCodeGenWriteBarrier((&___initialMethod_19), value);
	}

	inline static int32_t get_offset_of_pipelined_20() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2024699923, ___pipelined_20)); }
	inline bool get_pipelined_20() const { return ___pipelined_20; }
	inline bool* get_address_of_pipelined_20() { return &___pipelined_20; }
	inline void set_pipelined_20(bool value)
	{
		___pipelined_20 = value;
	}

	inline static int32_t get_offset_of_version_21() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2024699923, ___version_21)); }
	inline Version_t473354266 * get_version_21() const { return ___version_21; }
	inline Version_t473354266 ** get_address_of_version_21() { return &___version_21; }
	inline void set_version_21(Version_t473354266 * value)
	{
		___version_21 = value;
		Il2CppCodeGenWriteBarrier((&___version_21), value);
	}

	inline static int32_t get_offset_of_proxy_22() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2024699923, ___proxy_22)); }
	inline RuntimeObject* get_proxy_22() const { return ___proxy_22; }
	inline RuntimeObject** get_address_of_proxy_22() { return &___proxy_22; }
	inline void set_proxy_22(RuntimeObject* value)
	{
		___proxy_22 = value;
		Il2CppCodeGenWriteBarrier((&___proxy_22), value);
	}

	inline static int32_t get_offset_of_sendChunked_23() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2024699923, ___sendChunked_23)); }
	inline bool get_sendChunked_23() const { return ___sendChunked_23; }
	inline bool* get_address_of_sendChunked_23() { return &___sendChunked_23; }
	inline void set_sendChunked_23(bool value)
	{
		___sendChunked_23 = value;
	}

	inline static int32_t get_offset_of_servicePoint_24() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2024699923, ___servicePoint_24)); }
	inline ServicePoint_t3897460184 * get_servicePoint_24() const { return ___servicePoint_24; }
	inline ServicePoint_t3897460184 ** get_address_of_servicePoint_24() { return &___servicePoint_24; }
	inline void set_servicePoint_24(ServicePoint_t3897460184 * value)
	{
		___servicePoint_24 = value;
		Il2CppCodeGenWriteBarrier((&___servicePoint_24), value);
	}

	inline static int32_t get_offset_of_timeout_25() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2024699923, ___timeout_25)); }
	inline int32_t get_timeout_25() const { return ___timeout_25; }
	inline int32_t* get_address_of_timeout_25() { return &___timeout_25; }
	inline void set_timeout_25(int32_t value)
	{
		___timeout_25 = value;
	}

	inline static int32_t get_offset_of_redirects_26() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2024699923, ___redirects_26)); }
	inline int32_t get_redirects_26() const { return ___redirects_26; }
	inline int32_t* get_address_of_redirects_26() { return &___redirects_26; }
	inline void set_redirects_26(int32_t value)
	{
		___redirects_26 = value;
	}

	inline static int32_t get_offset_of_locker_27() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2024699923, ___locker_27)); }
	inline RuntimeObject * get_locker_27() const { return ___locker_27; }
	inline RuntimeObject ** get_address_of_locker_27() { return &___locker_27; }
	inline void set_locker_27(RuntimeObject * value)
	{
		___locker_27 = value;
		Il2CppCodeGenWriteBarrier((&___locker_27), value);
	}

	inline static int32_t get_offset_of_readWriteTimeout_29() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2024699923, ___readWriteTimeout_29)); }
	inline int32_t get_readWriteTimeout_29() const { return ___readWriteTimeout_29; }
	inline int32_t* get_address_of_readWriteTimeout_29() { return &___readWriteTimeout_29; }
	inline void set_readWriteTimeout_29(int32_t value)
	{
		___readWriteTimeout_29 = value;
	}
};

struct HttpWebRequest_t2024699923_StaticFields
{
public:
	// System.Int32 System.Net.HttpWebRequest::defaultMaxResponseHeadersLength
	int32_t ___defaultMaxResponseHeadersLength_28;

public:
	inline static int32_t get_offset_of_defaultMaxResponseHeadersLength_28() { return static_cast<int32_t>(offsetof(HttpWebRequest_t2024699923_StaticFields, ___defaultMaxResponseHeadersLength_28)); }
	inline int32_t get_defaultMaxResponseHeadersLength_28() const { return ___defaultMaxResponseHeadersLength_28; }
	inline int32_t* get_address_of_defaultMaxResponseHeadersLength_28() { return &___defaultMaxResponseHeadersLength_28; }
	inline void set_defaultMaxResponseHeadersLength_28(int32_t value)
	{
		___defaultMaxResponseHeadersLength_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPWEBREQUEST_T2024699923_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize900 = { sizeof (U24ArrayTypeU243132_t1457859022)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU243132_t1457859022 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize901 = { sizeof (U24ArrayTypeU2420_t391881291)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2420_t391881291 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize902 = { sizeof (U24ArrayTypeU2432_t1253167930)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2432_t1253167930 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize903 = { sizeof (U24ArrayTypeU2448_t3159457181)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2448_t3159457181 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize904 = { sizeof (U24ArrayTypeU2464_t1004406833)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2464_t1004406833 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize905 = { sizeof (U24ArrayTypeU2412_t4013634657)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2412_t4013634657 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize906 = { sizeof (U24ArrayTypeU24136_t682880107)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24136_t682880107 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize907 = { sizeof (U24ArrayTypeU248_t110117755)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU248_t110117755 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize908 = { sizeof (U24ArrayTypeU2472_t3861729406)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2472_t3861729406 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize909 = { sizeof (U24ArrayTypeU24124_t2370283090)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24124_t2370283090 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize910 = { sizeof (U24ArrayTypeU2496_t3063015086)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2496_t3063015086 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize911 = { sizeof (U24ArrayTypeU242048_t4138257999)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU242048_t4138257999 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize912 = { sizeof (U24ArrayTypeU24256_t2168092855)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t2168092855 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize913 = { sizeof (U24ArrayTypeU241024_t3787735656)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU241024_t3787735656 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize914 = { sizeof (U24ArrayTypeU24640_t1257687080)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24640_t1257687080 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize915 = { sizeof (U24ArrayTypeU24128_t231896004)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24128_t231896004 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize916 = { sizeof (U24ArrayTypeU2452_t3401021087)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2452_t3401021087 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize917 = { sizeof (Il2CppComObject), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize918 = { sizeof (__Il2CppComDelegate_t1714141216), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize919 = { sizeof (U3CModuleU3E_t2816031019), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize920 = { sizeof (Locale_t2324253654), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize921 = { sizeof (MonoTODOAttribute_t3385003323), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable921[1] = 
{
	MonoTODOAttribute_t3385003323::get_offset_of_comment_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize922 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable922[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize923 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable923[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize924 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable924[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize925 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable925[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize926 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable926[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize927 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable927[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize928 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable928[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize929 = { sizeof (HybridDictionary_t673486859), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable929[3] = 
{
	HybridDictionary_t673486859::get_offset_of_caseInsensitive_0(),
	HybridDictionary_t673486859::get_offset_of_hashtable_1(),
	HybridDictionary_t673486859::get_offset_of_list_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize930 = { sizeof (ListDictionary_t3265876172), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable930[4] = 
{
	ListDictionary_t3265876172::get_offset_of_count_0(),
	ListDictionary_t3265876172::get_offset_of_version_1(),
	ListDictionary_t3265876172::get_offset_of_head_2(),
	ListDictionary_t3265876172::get_offset_of_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize931 = { sizeof (DictionaryNode_t785904923), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable931[3] = 
{
	DictionaryNode_t785904923::get_offset_of_key_0(),
	DictionaryNode_t785904923::get_offset_of_value_1(),
	DictionaryNode_t785904923::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize932 = { sizeof (DictionaryNodeEnumerator_t104173442), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable932[4] = 
{
	DictionaryNodeEnumerator_t104173442::get_offset_of_dict_0(),
	DictionaryNodeEnumerator_t104173442::get_offset_of_isAtStart_1(),
	DictionaryNodeEnumerator_t104173442::get_offset_of_current_2(),
	DictionaryNodeEnumerator_t104173442::get_offset_of_version_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize933 = { sizeof (NameObjectCollectionBase_t2230785082), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable933[10] = 
{
	NameObjectCollectionBase_t2230785082::get_offset_of_m_ItemsContainer_0(),
	NameObjectCollectionBase_t2230785082::get_offset_of_m_NullKeyItem_1(),
	NameObjectCollectionBase_t2230785082::get_offset_of_m_ItemsArray_2(),
	NameObjectCollectionBase_t2230785082::get_offset_of_m_hashprovider_3(),
	NameObjectCollectionBase_t2230785082::get_offset_of_m_comparer_4(),
	NameObjectCollectionBase_t2230785082::get_offset_of_m_defCapacity_5(),
	NameObjectCollectionBase_t2230785082::get_offset_of_m_readonly_6(),
	NameObjectCollectionBase_t2230785082::get_offset_of_infoCopy_7(),
	NameObjectCollectionBase_t2230785082::get_offset_of_keyscoll_8(),
	NameObjectCollectionBase_t2230785082::get_offset_of_equality_comparer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize934 = { sizeof (_Item_t651583852), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable934[2] = 
{
	_Item_t651583852::get_offset_of_key_0(),
	_Item_t651583852::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize935 = { sizeof (_KeysEnumerator_t3914185866), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable935[2] = 
{
	_KeysEnumerator_t3914185866::get_offset_of_m_collection_0(),
	_KeysEnumerator_t3914185866::get_offset_of_m_position_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize936 = { sizeof (KeysCollection_t1438975814), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable936[1] = 
{
	KeysCollection_t1438975814::get_offset_of_m_collection_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize937 = { sizeof (NameValueCollection_t2093857968), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable937[2] = 
{
	NameValueCollection_t2093857968::get_offset_of_cachedAllKeys_10(),
	NameValueCollection_t2093857968::get_offset_of_cachedAll_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize938 = { sizeof (InstanceDescriptor_t146091440), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable938[3] = 
{
	InstanceDescriptor_t146091440::get_offset_of_member_0(),
	InstanceDescriptor_t146091440::get_offset_of_arguments_1(),
	InstanceDescriptor_t146091440::get_offset_of_isComplete_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize939 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize940 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize941 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize942 = { sizeof (ArrayConverter_t409640655), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize943 = { sizeof (AttributeCollection_t1069551948), -1, sizeof(AttributeCollection_t1069551948_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable943[2] = 
{
	AttributeCollection_t1069551948::get_offset_of_attrList_0(),
	AttributeCollection_t1069551948_StaticFields::get_offset_of_Empty_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize944 = { sizeof (BaseNumberConverter_t2084873793), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable944[1] = 
{
	BaseNumberConverter_t2084873793::get_offset_of_InnerType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize945 = { sizeof (BooleanConverter_t2110863617), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize946 = { sizeof (ByteConverter_t3991563681), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize947 = { sizeof (CharConverter_t2317478221), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize948 = { sizeof (CollectionConverter_t3487612868), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize949 = { sizeof (ComponentCollection_t498309968), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize950 = { sizeof (ComponentConverter_t414094544), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize951 = { sizeof (CultureInfoConverter_t501613231), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize952 = { sizeof (DateTimeConverter_t2766013691), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize953 = { sizeof (DecimalConverter_t882648692), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize954 = { sizeof (DefaultValueAttribute_t1097964112), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable954[1] = 
{
	DefaultValueAttribute_t1097964112::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize955 = { sizeof (DoubleConverter_t1685532162), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize956 = { sizeof (EditorBrowsableAttribute_t3782351115), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable956[1] = 
{
	EditorBrowsableAttribute_t3782351115::get_offset_of_state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize957 = { sizeof (EditorBrowsableState_t3481965332)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable957[4] = 
{
	EditorBrowsableState_t3481965332::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize958 = { sizeof (EnumConverter_t3924296381), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable958[1] = 
{
	EnumConverter_t3924296381::get_offset_of_type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize959 = { sizeof (GuidConverter_t1949305748), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize960 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize961 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize962 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize963 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize964 = { sizeof (Int16Converter_t4248329264), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize965 = { sizeof (Int32Converter_t654927337), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize966 = { sizeof (Int64Converter_t479431683), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize967 = { sizeof (NullableConverter_t293627619), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable967[3] = 
{
	NullableConverter_t293627619::get_offset_of_nullableType_0(),
	NullableConverter_t293627619::get_offset_of_underlyingType_1(),
	NullableConverter_t293627619::get_offset_of_underlyingTypeConverter_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize968 = { sizeof (ReferenceConverter_t3051563565), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize969 = { sizeof (SByteConverter_t154866022), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize970 = { sizeof (SingleConverter_t423322488), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize971 = { sizeof (StringConverter_t3523877323), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize972 = { sizeof (TimeSpanConverter_t934860027), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize973 = { sizeof (TypeConverter_t1280771817), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize974 = { sizeof (TypeConverterAttribute_t3487317825), -1, sizeof(TypeConverterAttribute_t3487317825_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable974[2] = 
{
	TypeConverterAttribute_t3487317825_StaticFields::get_offset_of_Default_0(),
	TypeConverterAttribute_t3487317825::get_offset_of_converter_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize975 = { sizeof (TypeDescriptionProvider_t3770043129), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize976 = { sizeof (TypeDescriptor_t937879524), -1, sizeof(TypeDescriptor_t937879524_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable976[8] = 
{
	TypeDescriptor_t937879524_StaticFields::get_offset_of_creatingDefaultConverters_0(),
	TypeDescriptor_t937879524_StaticFields::get_offset_of_defaultConverters_1(),
	TypeDescriptor_t937879524_StaticFields::get_offset_of_componentTable_2(),
	TypeDescriptor_t937879524_StaticFields::get_offset_of_typeTable_3(),
	TypeDescriptor_t937879524_StaticFields::get_offset_of_typeDescriptionProvidersLock_4(),
	TypeDescriptor_t937879524_StaticFields::get_offset_of_typeDescriptionProviders_5(),
	TypeDescriptor_t937879524_StaticFields::get_offset_of_componentDescriptionProvidersLock_6(),
	TypeDescriptor_t937879524_StaticFields::get_offset_of_componentDescriptionProviders_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize977 = { sizeof (Info_t3210358916), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable977[2] = 
{
	Info_t3210358916::get_offset_of__infoType_0(),
	Info_t3210358916::get_offset_of__attributes_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize978 = { sizeof (TypeInfo_t3300648008), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize979 = { sizeof (UInt16Converter_t3908494149), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize980 = { sizeof (UInt32Converter_t3643823544), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize981 = { sizeof (UInt64Converter_t3251534241), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize982 = { sizeof (WeakObjectWrapper_t251474256), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable982[2] = 
{
	WeakObjectWrapper_t251474256::get_offset_of_U3CTargetHashCodeU3Ek__BackingField_0(),
	WeakObjectWrapper_t251474256::get_offset_of_U3CWeakU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize983 = { sizeof (WeakObjectWrapperComparer_t3001840707), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize984 = { sizeof (TraceLevel_t668978887)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable984[6] = 
{
	TraceLevel_t668978887::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize985 = { sizeof (AuthenticationLevel_t964014101)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable985[4] = 
{
	AuthenticationLevel_t964014101::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize986 = { sizeof (SslPolicyErrors_t2677182081)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable986[5] = 
{
	SslPolicyErrors_t2677182081::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize987 = { sizeof (AddressFamily_t276761653)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable987[32] = 
{
	AddressFamily_t276761653::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize988 = { sizeof (DefaultCertificatePolicy_t4061105288), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize989 = { sizeof (FileWebRequest_t2272015932), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable989[9] = 
{
	FileWebRequest_t2272015932::get_offset_of_uri_6(),
	FileWebRequest_t2272015932::get_offset_of_webHeaders_7(),
	FileWebRequest_t2272015932::get_offset_of_connectionGroup_8(),
	FileWebRequest_t2272015932::get_offset_of_contentLength_9(),
	FileWebRequest_t2272015932::get_offset_of_fileAccess_10(),
	FileWebRequest_t2272015932::get_offset_of_method_11(),
	FileWebRequest_t2272015932::get_offset_of_proxy_12(),
	FileWebRequest_t2272015932::get_offset_of_preAuthenticate_13(),
	FileWebRequest_t2272015932::get_offset_of_timeout_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize990 = { sizeof (FileWebRequestCreator_t1664806361), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize991 = { sizeof (FtpRequestCreator_t689431027), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize992 = { sizeof (FtpWebRequest_t2963841333), -1, sizeof(FtpWebRequest_t2963841333_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable992[11] = 
{
	FtpWebRequest_t2963841333::get_offset_of_requestUri_6(),
	FtpWebRequest_t2963841333::get_offset_of_proxy_7(),
	FtpWebRequest_t2963841333::get_offset_of_timeout_8(),
	FtpWebRequest_t2963841333::get_offset_of_rwTimeout_9(),
	FtpWebRequest_t2963841333::get_offset_of_binary_10(),
	FtpWebRequest_t2963841333::get_offset_of_usePassive_11(),
	FtpWebRequest_t2963841333::get_offset_of_method_12(),
	FtpWebRequest_t2963841333::get_offset_of_locker_13(),
	FtpWebRequest_t2963841333_StaticFields::get_offset_of_supportedCommands_14(),
	FtpWebRequest_t2963841333::get_offset_of_callback_15(),
	FtpWebRequest_t2963841333_StaticFields::get_offset_of_U3CU3Ef__amU24cache1C_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize993 = { sizeof (GlobalProxySelection_t3944406681), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize994 = { sizeof (HttpRequestCreator_t1853903099), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize995 = { sizeof (HttpVersion_t44007510), -1, sizeof(HttpVersion_t44007510_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable995[2] = 
{
	HttpVersion_t44007510_StaticFields::get_offset_of_Version10_0(),
	HttpVersion_t44007510_StaticFields::get_offset_of_Version11_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize996 = { sizeof (HttpWebRequest_t2024699923), -1, sizeof(HttpWebRequest_t2024699923_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable996[24] = 
{
	HttpWebRequest_t2024699923::get_offset_of_requestUri_6(),
	HttpWebRequest_t2024699923::get_offset_of_actualUri_7(),
	HttpWebRequest_t2024699923::get_offset_of_hostChanged_8(),
	HttpWebRequest_t2024699923::get_offset_of_allowAutoRedirect_9(),
	HttpWebRequest_t2024699923::get_offset_of_allowBuffering_10(),
	HttpWebRequest_t2024699923::get_offset_of_certificates_11(),
	HttpWebRequest_t2024699923::get_offset_of_connectionGroup_12(),
	HttpWebRequest_t2024699923::get_offset_of_contentLength_13(),
	HttpWebRequest_t2024699923::get_offset_of_webHeaders_14(),
	HttpWebRequest_t2024699923::get_offset_of_keepAlive_15(),
	HttpWebRequest_t2024699923::get_offset_of_maxAutoRedirect_16(),
	HttpWebRequest_t2024699923::get_offset_of_mediaType_17(),
	HttpWebRequest_t2024699923::get_offset_of_method_18(),
	HttpWebRequest_t2024699923::get_offset_of_initialMethod_19(),
	HttpWebRequest_t2024699923::get_offset_of_pipelined_20(),
	HttpWebRequest_t2024699923::get_offset_of_version_21(),
	HttpWebRequest_t2024699923::get_offset_of_proxy_22(),
	HttpWebRequest_t2024699923::get_offset_of_sendChunked_23(),
	HttpWebRequest_t2024699923::get_offset_of_servicePoint_24(),
	HttpWebRequest_t2024699923::get_offset_of_timeout_25(),
	HttpWebRequest_t2024699923::get_offset_of_redirects_26(),
	HttpWebRequest_t2024699923::get_offset_of_locker_27(),
	HttpWebRequest_t2024699923_StaticFields::get_offset_of_defaultMaxResponseHeadersLength_28(),
	HttpWebRequest_t2024699923::get_offset_of_readWriteTimeout_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize997 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize998 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize999 = { sizeof (IPAddress_t2657393126), -1, sizeof(IPAddress_t2657393126_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable999[11] = 
{
	IPAddress_t2657393126::get_offset_of_m_Address_0(),
	IPAddress_t2657393126::get_offset_of_m_Family_1(),
	IPAddress_t2657393126::get_offset_of_m_Numbers_2(),
	IPAddress_t2657393126::get_offset_of_m_ScopeId_3(),
	IPAddress_t2657393126_StaticFields::get_offset_of_Any_4(),
	IPAddress_t2657393126_StaticFields::get_offset_of_Broadcast_5(),
	IPAddress_t2657393126_StaticFields::get_offset_of_Loopback_6(),
	IPAddress_t2657393126_StaticFields::get_offset_of_None_7(),
	IPAddress_t2657393126_StaticFields::get_offset_of_IPv6Any_8(),
	IPAddress_t2657393126_StaticFields::get_offset_of_IPv6Loopback_9(),
	IPAddress_t2657393126_StaticFields::get_offset_of_IPv6None_10(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
