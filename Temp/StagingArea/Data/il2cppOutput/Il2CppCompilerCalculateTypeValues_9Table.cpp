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
struct ServerIdentity_t479614972;
// System.Collections.Hashtable
struct Hashtable_t1955170491;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t326356809;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t377398040;
// System.Collections.IComparer
struct IComparer_t444130954;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t3861182434;
// System.Collections.ArrayList
struct ArrayList_t1083210085;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t4034502721;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1940397113;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t3520860872;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t2947145481;
// System.String
struct String_t;
// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t693805898;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.ICollection
struct ICollection_t2286015806;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct Dictionary_2_t1812259433;
// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct Dictionary_2_t1105708089;
// System.Type
struct Type_t;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t784546342;
// System.Version
struct Version_t3640501616;
// System.WeakReference
struct WeakReference_t379071452;
// System.ComponentModel.TypeConverter
struct TypeConverter_t678871804;
// System.Char[]
struct CharU5BU5D_t1242876772;
// System.String[]
struct StringU5BU5D_t2785173003;
// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t895037008;
// System.Net.IWebProxy
struct IWebProxy_t3551915508;
// System.UInt16[]
struct UInt16U5BU5D_t689615629;
// System.Uri
struct Uri_t1876633617;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1295809792;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t378952152;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t693532176;
// System.Net.ServicePoint
struct ServicePoint_t621399477;




#ifndef U3CMODULEU3E_T3825170571_H
#define U3CMODULEU3E_T3825170571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3825170571 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3825170571_H
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
#ifndef TYPEDESCRIPTIONPROVIDER_T4125853025_H
#define TYPEDESCRIPTIONPROVIDER_T4125853025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptionProvider
struct  TypeDescriptionProvider_t4125853025  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTIONPROVIDER_T4125853025_H
#ifndef HYBRIDDICTIONARY_T895037008_H
#define HYBRIDDICTIONARY_T895037008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.HybridDictionary
struct  HybridDictionary_t895037008  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.HybridDictionary::caseInsensitive
	bool ___caseInsensitive_0;
	// System.Collections.Hashtable System.Collections.Specialized.HybridDictionary::hashtable
	Hashtable_t1955170491 * ___hashtable_1;
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::list
	ListDictionary_t326356809 * ___list_2;

public:
	inline static int32_t get_offset_of_caseInsensitive_0() { return static_cast<int32_t>(offsetof(HybridDictionary_t895037008, ___caseInsensitive_0)); }
	inline bool get_caseInsensitive_0() const { return ___caseInsensitive_0; }
	inline bool* get_address_of_caseInsensitive_0() { return &___caseInsensitive_0; }
	inline void set_caseInsensitive_0(bool value)
	{
		___caseInsensitive_0 = value;
	}

	inline static int32_t get_offset_of_hashtable_1() { return static_cast<int32_t>(offsetof(HybridDictionary_t895037008, ___hashtable_1)); }
	inline Hashtable_t1955170491 * get_hashtable_1() const { return ___hashtable_1; }
	inline Hashtable_t1955170491 ** get_address_of_hashtable_1() { return &___hashtable_1; }
	inline void set_hashtable_1(Hashtable_t1955170491 * value)
	{
		___hashtable_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_1), value);
	}

	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(HybridDictionary_t895037008, ___list_2)); }
	inline ListDictionary_t326356809 * get_list_2() const { return ___list_2; }
	inline ListDictionary_t326356809 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(ListDictionary_t326356809 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier((&___list_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HYBRIDDICTIONARY_T895037008_H
#ifndef LISTDICTIONARY_T326356809_H
#define LISTDICTIONARY_T326356809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary
struct  ListDictionary_t326356809  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_t377398040 * ___head_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	RuntimeObject* ___comparer_3;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(ListDictionary_t326356809, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionary_t326356809, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_head_2() { return static_cast<int32_t>(offsetof(ListDictionary_t326356809, ___head_2)); }
	inline DictionaryNode_t377398040 * get_head_2() const { return ___head_2; }
	inline DictionaryNode_t377398040 ** get_address_of_head_2() { return &___head_2; }
	inline void set_head_2(DictionaryNode_t377398040 * value)
	{
		___head_2 = value;
		Il2CppCodeGenWriteBarrier((&___head_2), value);
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(ListDictionary_t326356809, ___comparer_3)); }
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
#endif // LISTDICTIONARY_T326356809_H
#ifndef DICTIONARYNODE_T377398040_H
#define DICTIONARYNODE_T377398040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNode
struct  DictionaryNode_t377398040  : public RuntimeObject
{
public:
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::value
	RuntimeObject * ___value_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNode::next
	DictionaryNode_t377398040 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(DictionaryNode_t377398040, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DictionaryNode_t377398040, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(DictionaryNode_t377398040, ___next_2)); }
	inline DictionaryNode_t377398040 * get_next_2() const { return ___next_2; }
	inline DictionaryNode_t377398040 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(DictionaryNode_t377398040 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODE_T377398040_H
#ifndef DICTIONARYNODEENUMERATOR_T2505452627_H
#define DICTIONARYNODEENUMERATOR_T2505452627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator
struct  DictionaryNodeEnumerator_t2505452627  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::dict
	ListDictionary_t326356809 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::isAtStart
	bool ___isAtStart_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::current
	DictionaryNode_t377398040 * ___current_2;
	// System.Int32 System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::version
	int32_t ___version_3;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t2505452627, ___dict_0)); }
	inline ListDictionary_t326356809 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t326356809 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t326356809 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier((&___dict_0), value);
	}

	inline static int32_t get_offset_of_isAtStart_1() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t2505452627, ___isAtStart_1)); }
	inline bool get_isAtStart_1() const { return ___isAtStart_1; }
	inline bool* get_address_of_isAtStart_1() { return &___isAtStart_1; }
	inline void set_isAtStart_1(bool value)
	{
		___isAtStart_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t2505452627, ___current_2)); }
	inline DictionaryNode_t377398040 * get_current_2() const { return ___current_2; }
	inline DictionaryNode_t377398040 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(DictionaryNode_t377398040 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((&___current_2), value);
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t2505452627, ___version_3)); }
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
#endif // DICTIONARYNODEENUMERATOR_T2505452627_H
#ifndef NAMEOBJECTCOLLECTIONBASE_T693805898_H
#define NAMEOBJECTCOLLECTIONBASE_T693805898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase
struct  NameObjectCollectionBase_t693805898  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.NameObjectCollectionBase::m_ItemsContainer
	Hashtable_t1955170491 * ___m_ItemsContainer_0;
	// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::m_NullKeyItem
	_Item_t3861182434 * ___m_NullKeyItem_1;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::m_ItemsArray
	ArrayList_t1083210085 * ___m_ItemsArray_2;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::m_hashprovider
	RuntimeObject* ___m_hashprovider_3;
	// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::m_comparer
	RuntimeObject* ___m_comparer_4;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::m_defCapacity
	int32_t ___m_defCapacity_5;
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::m_readonly
	bool ___m_readonly_6;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::infoCopy
	SerializationInfo_t1940397113 * ___infoCopy_7;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::keyscoll
	KeysCollection_t3520860872 * ___keyscoll_8;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::equality_comparer
	RuntimeObject* ___equality_comparer_9;

public:
	inline static int32_t get_offset_of_m_ItemsContainer_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t693805898, ___m_ItemsContainer_0)); }
	inline Hashtable_t1955170491 * get_m_ItemsContainer_0() const { return ___m_ItemsContainer_0; }
	inline Hashtable_t1955170491 ** get_address_of_m_ItemsContainer_0() { return &___m_ItemsContainer_0; }
	inline void set_m_ItemsContainer_0(Hashtable_t1955170491 * value)
	{
		___m_ItemsContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsContainer_0), value);
	}

	inline static int32_t get_offset_of_m_NullKeyItem_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t693805898, ___m_NullKeyItem_1)); }
	inline _Item_t3861182434 * get_m_NullKeyItem_1() const { return ___m_NullKeyItem_1; }
	inline _Item_t3861182434 ** get_address_of_m_NullKeyItem_1() { return &___m_NullKeyItem_1; }
	inline void set_m_NullKeyItem_1(_Item_t3861182434 * value)
	{
		___m_NullKeyItem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_NullKeyItem_1), value);
	}

	inline static int32_t get_offset_of_m_ItemsArray_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t693805898, ___m_ItemsArray_2)); }
	inline ArrayList_t1083210085 * get_m_ItemsArray_2() const { return ___m_ItemsArray_2; }
	inline ArrayList_t1083210085 ** get_address_of_m_ItemsArray_2() { return &___m_ItemsArray_2; }
	inline void set_m_ItemsArray_2(ArrayList_t1083210085 * value)
	{
		___m_ItemsArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsArray_2), value);
	}

	inline static int32_t get_offset_of_m_hashprovider_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t693805898, ___m_hashprovider_3)); }
	inline RuntimeObject* get_m_hashprovider_3() const { return ___m_hashprovider_3; }
	inline RuntimeObject** get_address_of_m_hashprovider_3() { return &___m_hashprovider_3; }
	inline void set_m_hashprovider_3(RuntimeObject* value)
	{
		___m_hashprovider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_hashprovider_3), value);
	}

	inline static int32_t get_offset_of_m_comparer_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t693805898, ___m_comparer_4)); }
	inline RuntimeObject* get_m_comparer_4() const { return ___m_comparer_4; }
	inline RuntimeObject** get_address_of_m_comparer_4() { return &___m_comparer_4; }
	inline void set_m_comparer_4(RuntimeObject* value)
	{
		___m_comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_comparer_4), value);
	}

	inline static int32_t get_offset_of_m_defCapacity_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t693805898, ___m_defCapacity_5)); }
	inline int32_t get_m_defCapacity_5() const { return ___m_defCapacity_5; }
	inline int32_t* get_address_of_m_defCapacity_5() { return &___m_defCapacity_5; }
	inline void set_m_defCapacity_5(int32_t value)
	{
		___m_defCapacity_5 = value;
	}

	inline static int32_t get_offset_of_m_readonly_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t693805898, ___m_readonly_6)); }
	inline bool get_m_readonly_6() const { return ___m_readonly_6; }
	inline bool* get_address_of_m_readonly_6() { return &___m_readonly_6; }
	inline void set_m_readonly_6(bool value)
	{
		___m_readonly_6 = value;
	}

	inline static int32_t get_offset_of_infoCopy_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t693805898, ___infoCopy_7)); }
	inline SerializationInfo_t1940397113 * get_infoCopy_7() const { return ___infoCopy_7; }
	inline SerializationInfo_t1940397113 ** get_address_of_infoCopy_7() { return &___infoCopy_7; }
	inline void set_infoCopy_7(SerializationInfo_t1940397113 * value)
	{
		___infoCopy_7 = value;
		Il2CppCodeGenWriteBarrier((&___infoCopy_7), value);
	}

	inline static int32_t get_offset_of_keyscoll_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t693805898, ___keyscoll_8)); }
	inline KeysCollection_t3520860872 * get_keyscoll_8() const { return ___keyscoll_8; }
	inline KeysCollection_t3520860872 ** get_address_of_keyscoll_8() { return &___keyscoll_8; }
	inline void set_keyscoll_8(KeysCollection_t3520860872 * value)
	{
		___keyscoll_8 = value;
		Il2CppCodeGenWriteBarrier((&___keyscoll_8), value);
	}

	inline static int32_t get_offset_of_equality_comparer_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t693805898, ___equality_comparer_9)); }
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
#endif // NAMEOBJECTCOLLECTIONBASE_T693805898_H
#ifndef _ITEM_T3861182434_H
#define _ITEM_T3861182434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct  _Item_t3861182434  : public RuntimeObject
{
public:
	// System.String System.Collections.Specialized.NameObjectCollectionBase/_Item::key
	String_t* ___key_0;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase/_Item::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(_Item_t3861182434, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(_Item_t3861182434, ___value_1)); }
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
#endif // _ITEM_T3861182434_H
#ifndef _KEYSENUMERATOR_T942091578_H
#define _KEYSENUMERATOR_T942091578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator
struct  _KeysEnumerator_t942091578  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_collection
	NameObjectCollectionBase_t693805898 * ___m_collection_0;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_position
	int32_t ___m_position_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t942091578, ___m_collection_0)); }
	inline NameObjectCollectionBase_t693805898 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t693805898 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t693805898 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}

	inline static int32_t get_offset_of_m_position_1() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t942091578, ___m_position_1)); }
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
#endif // _KEYSENUMERATOR_T942091578_H
#ifndef KEYSCOLLECTION_T3520860872_H
#define KEYSCOLLECTION_T3520860872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct  KeysCollection_t3520860872  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::m_collection
	NameObjectCollectionBase_t693805898 * ___m_collection_0;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(KeysCollection_t3520860872, ___m_collection_0)); }
	inline NameObjectCollectionBase_t693805898 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t693805898 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t693805898 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSCOLLECTION_T3520860872_H
#ifndef INSTANCEDESCRIPTOR_T3441287712_H
#define INSTANCEDESCRIPTOR_T3441287712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct  InstanceDescriptor_t3441287712  : public RuntimeObject
{
public:
	// System.Reflection.MemberInfo System.ComponentModel.Design.Serialization.InstanceDescriptor::member
	MemberInfo_t * ___member_0;
	// System.Collections.ICollection System.ComponentModel.Design.Serialization.InstanceDescriptor::arguments
	RuntimeObject* ___arguments_1;
	// System.Boolean System.ComponentModel.Design.Serialization.InstanceDescriptor::isComplete
	bool ___isComplete_2;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t3441287712, ___member_0)); }
	inline MemberInfo_t * get_member_0() const { return ___member_0; }
	inline MemberInfo_t ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(MemberInfo_t * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_0), value);
	}

	inline static int32_t get_offset_of_arguments_1() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t3441287712, ___arguments_1)); }
	inline RuntimeObject* get_arguments_1() const { return ___arguments_1; }
	inline RuntimeObject** get_address_of_arguments_1() { return &___arguments_1; }
	inline void set_arguments_1(RuntimeObject* value)
	{
		___arguments_1 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_1), value);
	}

	inline static int32_t get_offset_of_isComplete_2() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t3441287712, ___isComplete_2)); }
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
#endif // INSTANCEDESCRIPTOR_T3441287712_H
#ifndef TYPECONVERTER_T678871804_H
#define TYPECONVERTER_T678871804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t678871804  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T678871804_H
#ifndef ATTRIBUTECOLLECTION_T784546342_H
#define ATTRIBUTECOLLECTION_T784546342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AttributeCollection
struct  AttributeCollection_t784546342  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.AttributeCollection::attrList
	ArrayList_t1083210085 * ___attrList_0;

public:
	inline static int32_t get_offset_of_attrList_0() { return static_cast<int32_t>(offsetof(AttributeCollection_t784546342, ___attrList_0)); }
	inline ArrayList_t1083210085 * get_attrList_0() const { return ___attrList_0; }
	inline ArrayList_t1083210085 ** get_address_of_attrList_0() { return &___attrList_0; }
	inline void set_attrList_0(ArrayList_t1083210085 * value)
	{
		___attrList_0 = value;
		Il2CppCodeGenWriteBarrier((&___attrList_0), value);
	}
};

struct AttributeCollection_t784546342_StaticFields
{
public:
	// System.ComponentModel.AttributeCollection System.ComponentModel.AttributeCollection::Empty
	AttributeCollection_t784546342 * ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(AttributeCollection_t784546342_StaticFields, ___Empty_1)); }
	inline AttributeCollection_t784546342 * get_Empty_1() const { return ___Empty_1; }
	inline AttributeCollection_t784546342 ** get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(AttributeCollection_t784546342 * value)
	{
		___Empty_1 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTECOLLECTION_T784546342_H
#ifndef TYPEDESCRIPTOR_T2576052152_H
#define TYPEDESCRIPTOR_T2576052152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor
struct  TypeDescriptor_t2576052152  : public RuntimeObject
{
public:

public:
};

struct TypeDescriptor_t2576052152_StaticFields
{
public:
	// System.Object System.ComponentModel.TypeDescriptor::creatingDefaultConverters
	RuntimeObject * ___creatingDefaultConverters_0;
	// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::defaultConverters
	ArrayList_t1083210085 * ___defaultConverters_1;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::componentTable
	Hashtable_t1955170491 * ___componentTable_2;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::typeTable
	Hashtable_t1955170491 * ___typeTable_3;
	// System.Object System.ComponentModel.TypeDescriptor::typeDescriptionProvidersLock
	RuntimeObject * ___typeDescriptionProvidersLock_4;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::typeDescriptionProviders
	Dictionary_2_t1812259433 * ___typeDescriptionProviders_5;
	// System.Object System.ComponentModel.TypeDescriptor::componentDescriptionProvidersLock
	RuntimeObject * ___componentDescriptionProvidersLock_6;
	// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::componentDescriptionProviders
	Dictionary_2_t1105708089 * ___componentDescriptionProviders_7;

public:
	inline static int32_t get_offset_of_creatingDefaultConverters_0() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2576052152_StaticFields, ___creatingDefaultConverters_0)); }
	inline RuntimeObject * get_creatingDefaultConverters_0() const { return ___creatingDefaultConverters_0; }
	inline RuntimeObject ** get_address_of_creatingDefaultConverters_0() { return &___creatingDefaultConverters_0; }
	inline void set_creatingDefaultConverters_0(RuntimeObject * value)
	{
		___creatingDefaultConverters_0 = value;
		Il2CppCodeGenWriteBarrier((&___creatingDefaultConverters_0), value);
	}

	inline static int32_t get_offset_of_defaultConverters_1() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2576052152_StaticFields, ___defaultConverters_1)); }
	inline ArrayList_t1083210085 * get_defaultConverters_1() const { return ___defaultConverters_1; }
	inline ArrayList_t1083210085 ** get_address_of_defaultConverters_1() { return &___defaultConverters_1; }
	inline void set_defaultConverters_1(ArrayList_t1083210085 * value)
	{
		___defaultConverters_1 = value;
		Il2CppCodeGenWriteBarrier((&___defaultConverters_1), value);
	}

	inline static int32_t get_offset_of_componentTable_2() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2576052152_StaticFields, ___componentTable_2)); }
	inline Hashtable_t1955170491 * get_componentTable_2() const { return ___componentTable_2; }
	inline Hashtable_t1955170491 ** get_address_of_componentTable_2() { return &___componentTable_2; }
	inline void set_componentTable_2(Hashtable_t1955170491 * value)
	{
		___componentTable_2 = value;
		Il2CppCodeGenWriteBarrier((&___componentTable_2), value);
	}

	inline static int32_t get_offset_of_typeTable_3() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2576052152_StaticFields, ___typeTable_3)); }
	inline Hashtable_t1955170491 * get_typeTable_3() const { return ___typeTable_3; }
	inline Hashtable_t1955170491 ** get_address_of_typeTable_3() { return &___typeTable_3; }
	inline void set_typeTable_3(Hashtable_t1955170491 * value)
	{
		___typeTable_3 = value;
		Il2CppCodeGenWriteBarrier((&___typeTable_3), value);
	}

	inline static int32_t get_offset_of_typeDescriptionProvidersLock_4() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2576052152_StaticFields, ___typeDescriptionProvidersLock_4)); }
	inline RuntimeObject * get_typeDescriptionProvidersLock_4() const { return ___typeDescriptionProvidersLock_4; }
	inline RuntimeObject ** get_address_of_typeDescriptionProvidersLock_4() { return &___typeDescriptionProvidersLock_4; }
	inline void set_typeDescriptionProvidersLock_4(RuntimeObject * value)
	{
		___typeDescriptionProvidersLock_4 = value;
		Il2CppCodeGenWriteBarrier((&___typeDescriptionProvidersLock_4), value);
	}

	inline static int32_t get_offset_of_typeDescriptionProviders_5() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2576052152_StaticFields, ___typeDescriptionProviders_5)); }
	inline Dictionary_2_t1812259433 * get_typeDescriptionProviders_5() const { return ___typeDescriptionProviders_5; }
	inline Dictionary_2_t1812259433 ** get_address_of_typeDescriptionProviders_5() { return &___typeDescriptionProviders_5; }
	inline void set_typeDescriptionProviders_5(Dictionary_2_t1812259433 * value)
	{
		___typeDescriptionProviders_5 = value;
		Il2CppCodeGenWriteBarrier((&___typeDescriptionProviders_5), value);
	}

	inline static int32_t get_offset_of_componentDescriptionProvidersLock_6() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2576052152_StaticFields, ___componentDescriptionProvidersLock_6)); }
	inline RuntimeObject * get_componentDescriptionProvidersLock_6() const { return ___componentDescriptionProvidersLock_6; }
	inline RuntimeObject ** get_address_of_componentDescriptionProvidersLock_6() { return &___componentDescriptionProvidersLock_6; }
	inline void set_componentDescriptionProvidersLock_6(RuntimeObject * value)
	{
		___componentDescriptionProvidersLock_6 = value;
		Il2CppCodeGenWriteBarrier((&___componentDescriptionProvidersLock_6), value);
	}

	inline static int32_t get_offset_of_componentDescriptionProviders_7() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2576052152_StaticFields, ___componentDescriptionProviders_7)); }
	inline Dictionary_2_t1105708089 * get_componentDescriptionProviders_7() const { return ___componentDescriptionProviders_7; }
	inline Dictionary_2_t1105708089 ** get_address_of_componentDescriptionProviders_7() { return &___componentDescriptionProviders_7; }
	inline void set_componentDescriptionProviders_7(Dictionary_2_t1105708089 * value)
	{
		___componentDescriptionProviders_7 = value;
		Il2CppCodeGenWriteBarrier((&___componentDescriptionProviders_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTOR_T2576052152_H
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
#ifndef LOCALE_T49023511_H
#define LOCALE_T49023511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t49023511  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T49023511_H
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
#ifndef READONLYCOLLECTIONBASE_T2277522300_H
#define READONLYCOLLECTIONBASE_T2277522300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t2277522300  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t1083210085 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t2277522300, ___list_0)); }
	inline ArrayList_t1083210085 * get_list_0() const { return ___list_0; }
	inline ArrayList_t1083210085 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t1083210085 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T2277522300_H
#ifndef INFO_T2348443746_H
#define INFO_T2348443746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Info
struct  Info_t2348443746  : public RuntimeObject
{
public:
	// System.Type System.ComponentModel.Info::_infoType
	Type_t * ____infoType_0;
	// System.ComponentModel.AttributeCollection System.ComponentModel.Info::_attributes
	AttributeCollection_t784546342 * ____attributes_1;

public:
	inline static int32_t get_offset_of__infoType_0() { return static_cast<int32_t>(offsetof(Info_t2348443746, ____infoType_0)); }
	inline Type_t * get__infoType_0() const { return ____infoType_0; }
	inline Type_t ** get_address_of__infoType_0() { return &____infoType_0; }
	inline void set__infoType_0(Type_t * value)
	{
		____infoType_0 = value;
		Il2CppCodeGenWriteBarrier((&____infoType_0), value);
	}

	inline static int32_t get_offset_of__attributes_1() { return static_cast<int32_t>(offsetof(Info_t2348443746, ____attributes_1)); }
	inline AttributeCollection_t784546342 * get__attributes_1() const { return ____attributes_1; }
	inline AttributeCollection_t784546342 ** get_address_of__attributes_1() { return &____attributes_1; }
	inline void set__attributes_1(AttributeCollection_t784546342 * value)
	{
		____attributes_1 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INFO_T2348443746_H
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
#ifndef HTTPVERSION_T3329228730_H
#define HTTPVERSION_T3329228730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpVersion
struct  HttpVersion_t3329228730  : public RuntimeObject
{
public:

public:
};

struct HttpVersion_t3329228730_StaticFields
{
public:
	// System.Version System.Net.HttpVersion::Version10
	Version_t3640501616 * ___Version10_0;
	// System.Version System.Net.HttpVersion::Version11
	Version_t3640501616 * ___Version11_1;

public:
	inline static int32_t get_offset_of_Version10_0() { return static_cast<int32_t>(offsetof(HttpVersion_t3329228730_StaticFields, ___Version10_0)); }
	inline Version_t3640501616 * get_Version10_0() const { return ___Version10_0; }
	inline Version_t3640501616 ** get_address_of_Version10_0() { return &___Version10_0; }
	inline void set_Version10_0(Version_t3640501616 * value)
	{
		___Version10_0 = value;
		Il2CppCodeGenWriteBarrier((&___Version10_0), value);
	}

	inline static int32_t get_offset_of_Version11_1() { return static_cast<int32_t>(offsetof(HttpVersion_t3329228730_StaticFields, ___Version11_1)); }
	inline Version_t3640501616 * get_Version11_1() const { return ___Version11_1; }
	inline Version_t3640501616 ** get_address_of_Version11_1() { return &___Version11_1; }
	inline void set_Version11_1(Version_t3640501616 * value)
	{
		___Version11_1 = value;
		Il2CppCodeGenWriteBarrier((&___Version11_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPVERSION_T3329228730_H
#ifndef EQUALITYCOMPARER_1_T1917333448_H
#define EQUALITYCOMPARER_1_T1917333448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<System.ComponentModel.WeakObjectWrapper>
struct  EqualityComparer_1_t1917333448  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t1917333448_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1::_default
	EqualityComparer_1_t1917333448 * ____default_0;

public:
	inline static int32_t get_offset_of__default_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t1917333448_StaticFields, ____default_0)); }
	inline EqualityComparer_1_t1917333448 * get__default_0() const { return ____default_0; }
	inline EqualityComparer_1_t1917333448 ** get_address_of__default_0() { return &____default_0; }
	inline void set__default_0(EqualityComparer_1_t1917333448 * value)
	{
		____default_0 = value;
		Il2CppCodeGenWriteBarrier((&____default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYCOMPARER_1_T1917333448_H
#ifndef GLOBALPROXYSELECTION_T1946661320_H
#define GLOBALPROXYSELECTION_T1946661320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.GlobalProxySelection
struct  GlobalProxySelection_t1946661320  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLOBALPROXYSELECTION_T1946661320_H
#ifndef HTTPREQUESTCREATOR_T2081221849_H
#define HTTPREQUESTCREATOR_T2081221849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpRequestCreator
struct  HttpRequestCreator_t2081221849  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPREQUESTCREATOR_T2081221849_H
#ifndef FILEWEBREQUESTCREATOR_T1747718398_H
#define FILEWEBREQUESTCREATOR_T1747718398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FileWebRequestCreator
struct  FileWebRequestCreator_t1747718398  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEWEBREQUESTCREATOR_T1747718398_H
#ifndef DEFAULTCERTIFICATEPOLICY_T398677236_H
#define DEFAULTCERTIFICATEPOLICY_T398677236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.DefaultCertificatePolicy
struct  DefaultCertificatePolicy_t398677236  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTCERTIFICATEPOLICY_T398677236_H
#ifndef WEAKOBJECTWRAPPER_T1427850386_H
#define WEAKOBJECTWRAPPER_T1427850386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.WeakObjectWrapper
struct  WeakObjectWrapper_t1427850386  : public RuntimeObject
{
public:
	// System.Int32 System.ComponentModel.WeakObjectWrapper::<TargetHashCode>k__BackingField
	int32_t ___U3CTargetHashCodeU3Ek__BackingField_0;
	// System.WeakReference System.ComponentModel.WeakObjectWrapper::<Weak>k__BackingField
	WeakReference_t379071452 * ___U3CWeakU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTargetHashCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WeakObjectWrapper_t1427850386, ___U3CTargetHashCodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CTargetHashCodeU3Ek__BackingField_0() const { return ___U3CTargetHashCodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CTargetHashCodeU3Ek__BackingField_0() { return &___U3CTargetHashCodeU3Ek__BackingField_0; }
	inline void set_U3CTargetHashCodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CTargetHashCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CWeakU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WeakObjectWrapper_t1427850386, ___U3CWeakU3Ek__BackingField_1)); }
	inline WeakReference_t379071452 * get_U3CWeakU3Ek__BackingField_1() const { return ___U3CWeakU3Ek__BackingField_1; }
	inline WeakReference_t379071452 ** get_address_of_U3CWeakU3Ek__BackingField_1() { return &___U3CWeakU3Ek__BackingField_1; }
	inline void set_U3CWeakU3Ek__BackingField_1(WeakReference_t379071452 * value)
	{
		___U3CWeakU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CWeakU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKOBJECTWRAPPER_T1427850386_H
#ifndef FTPREQUESTCREATOR_T3000993211_H
#define FTPREQUESTCREATOR_T3000993211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FtpRequestCreator
struct  FtpRequestCreator_t3000993211  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FTPREQUESTCREATOR_T3000993211_H
#ifndef GUIDCONVERTER_T3937718446_H
#define GUIDCONVERTER_T3937718446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.GuidConverter
struct  GuidConverter_t3937718446  : public TypeConverter_t678871804
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDCONVERTER_T3937718446_H
#ifndef ENUMCONVERTER_T1805872476_H
#define ENUMCONVERTER_T1805872476_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter
struct  EnumConverter_t1805872476  : public TypeConverter_t678871804
{
public:
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t * ___type_0;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(EnumConverter_t1805872476, ___type_0)); }
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
#endif // ENUMCONVERTER_T1805872476_H
#ifndef NULLABLECONVERTER_T2739239978_H
#define NULLABLECONVERTER_T2739239978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NullableConverter
struct  NullableConverter_t2739239978  : public TypeConverter_t678871804
{
public:
	// System.Type System.ComponentModel.NullableConverter::nullableType
	Type_t * ___nullableType_0;
	// System.Type System.ComponentModel.NullableConverter::underlyingType
	Type_t * ___underlyingType_1;
	// System.ComponentModel.TypeConverter System.ComponentModel.NullableConverter::underlyingTypeConverter
	TypeConverter_t678871804 * ___underlyingTypeConverter_2;

public:
	inline static int32_t get_offset_of_nullableType_0() { return static_cast<int32_t>(offsetof(NullableConverter_t2739239978, ___nullableType_0)); }
	inline Type_t * get_nullableType_0() const { return ___nullableType_0; }
	inline Type_t ** get_address_of_nullableType_0() { return &___nullableType_0; }
	inline void set_nullableType_0(Type_t * value)
	{
		___nullableType_0 = value;
		Il2CppCodeGenWriteBarrier((&___nullableType_0), value);
	}

	inline static int32_t get_offset_of_underlyingType_1() { return static_cast<int32_t>(offsetof(NullableConverter_t2739239978, ___underlyingType_1)); }
	inline Type_t * get_underlyingType_1() const { return ___underlyingType_1; }
	inline Type_t ** get_address_of_underlyingType_1() { return &___underlyingType_1; }
	inline void set_underlyingType_1(Type_t * value)
	{
		___underlyingType_1 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingType_1), value);
	}

	inline static int32_t get_offset_of_underlyingTypeConverter_2() { return static_cast<int32_t>(offsetof(NullableConverter_t2739239978, ___underlyingTypeConverter_2)); }
	inline TypeConverter_t678871804 * get_underlyingTypeConverter_2() const { return ___underlyingTypeConverter_2; }
	inline TypeConverter_t678871804 ** get_address_of_underlyingTypeConverter_2() { return &___underlyingTypeConverter_2; }
	inline void set_underlyingTypeConverter_2(TypeConverter_t678871804 * value)
	{
		___underlyingTypeConverter_2 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingTypeConverter_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLECONVERTER_T2739239978_H
#ifndef REFERENCECONVERTER_T1206905398_H
#define REFERENCECONVERTER_T1206905398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t1206905398  : public TypeConverter_t678871804
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCECONVERTER_T1206905398_H
#ifndef STRINGCONVERTER_T4160660387_H
#define STRINGCONVERTER_T4160660387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.StringConverter
struct  StringConverter_t4160660387  : public TypeConverter_t678871804
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCONVERTER_T4160660387_H
#ifndef TYPEINFO_T1977296886_H
#define TYPEINFO_T1977296886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeInfo
struct  TypeInfo_t1977296886  : public Info_t2348443746
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T1977296886_H
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
#ifndef TYPECONVERTERATTRIBUTE_T3626061009_H
#define TYPECONVERTERATTRIBUTE_T3626061009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverterAttribute
struct  TypeConverterAttribute_t3626061009  : public Attribute_t4191498700
{
public:
	// System.String System.ComponentModel.TypeConverterAttribute::converter_type
	String_t* ___converter_type_1;

public:
	inline static int32_t get_offset_of_converter_type_1() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t3626061009, ___converter_type_1)); }
	inline String_t* get_converter_type_1() const { return ___converter_type_1; }
	inline String_t** get_address_of_converter_type_1() { return &___converter_type_1; }
	inline void set_converter_type_1(String_t* value)
	{
		___converter_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___converter_type_1), value);
	}
};

struct TypeConverterAttribute_t3626061009_StaticFields
{
public:
	// System.ComponentModel.TypeConverterAttribute System.ComponentModel.TypeConverterAttribute::Default
	TypeConverterAttribute_t3626061009 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t3626061009_StaticFields, ___Default_0)); }
	inline TypeConverterAttribute_t3626061009 * get_Default_0() const { return ___Default_0; }
	inline TypeConverterAttribute_t3626061009 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(TypeConverterAttribute_t3626061009 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTERATTRIBUTE_T3626061009_H
#ifndef WEAKOBJECTWRAPPERCOMPARER_T4089202863_H
#define WEAKOBJECTWRAPPERCOMPARER_T4089202863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.WeakObjectWrapperComparer
struct  WeakObjectWrapperComparer_t4089202863  : public EqualityComparer_1_t1917333448
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKOBJECTWRAPPERCOMPARER_T4089202863_H
#ifndef DEFAULTVALUEATTRIBUTE_T2752469037_H
#define DEFAULTVALUEATTRIBUTE_T2752469037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultValueAttribute
struct  DefaultValueAttribute_t2752469037  : public Attribute_t4191498700
{
public:
	// System.Object System.ComponentModel.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t2752469037, ___DefaultValue_0)); }
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
#endif // DEFAULTVALUEATTRIBUTE_T2752469037_H
#ifndef TIMESPANCONVERTER_T3152958023_H
#define TIMESPANCONVERTER_T3152958023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TimeSpanConverter
struct  TimeSpanConverter_t3152958023  : public TypeConverter_t678871804
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANCONVERTER_T3152958023_H
#ifndef DATETIMECONVERTER_T1677991688_H
#define DATETIMECONVERTER_T1677991688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeConverter
struct  DateTimeConverter_t1677991688  : public TypeConverter_t678871804
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONVERTER_T1677991688_H
#ifndef U24ARRAYTYPEU243132_T1385714239_H
#define U24ARRAYTYPEU243132_T1385714239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$3132
struct  U24ArrayTypeU243132_t1385714239 
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
		uint8_t U24ArrayTypeU243132_t1385714239__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU243132_T1385714239_H
#ifndef U24ARRAYTYPEU2496_T1770408305_H
#define U24ARRAYTYPEU2496_T1770408305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$96
struct  U24ArrayTypeU2496_t1770408305 
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
		uint8_t U24ArrayTypeU2496_t1770408305__padding[96];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2496_T1770408305_H
#ifndef U24ARRAYTYPEU24256_T3458429430_H
#define U24ARRAYTYPEU24256_T3458429430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t3458429430 
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
		uint8_t U24ArrayTypeU24256_t3458429430__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T3458429430_H
#ifndef U24ARRAYTYPEU24128_T3818032693_H
#define U24ARRAYTYPEU24128_T3818032693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$128
struct  U24ArrayTypeU24128_t3818032693 
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
		uint8_t U24ArrayTypeU24128_t3818032693__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24128_T3818032693_H
#ifndef U24ARRAYTYPEU2452_T134887281_H
#define U24ARRAYTYPEU2452_T134887281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$52
struct  U24ArrayTypeU2452_t134887281 
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
		uint8_t U24ArrayTypeU2452_t134887281__padding[52];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2452_T134887281_H
#ifndef __IL2CPPCOMDELEGATE_T2546286921_H
#define __IL2CPPCOMDELEGATE_T2546286921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComDelegate
struct  __Il2CppComDelegate_t2546286921  : public Il2CppComObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __IL2CPPCOMDELEGATE_T2546286921_H
#ifndef MONOTODOATTRIBUTE_T658195311_H
#define MONOTODOATTRIBUTE_T658195311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t658195311  : public Attribute_t4191498700
{
public:
	// System.String System.MonoTODOAttribute::comment
	String_t* ___comment_0;

public:
	inline static int32_t get_offset_of_comment_0() { return static_cast<int32_t>(offsetof(MonoTODOAttribute_t658195311, ___comment_0)); }
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
#endif // MONOTODOATTRIBUTE_T658195311_H
#ifndef NAMEVALUECOLLECTION_T2733453293_H
#define NAMEVALUECOLLECTION_T2733453293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameValueCollection
struct  NameValueCollection_t2733453293  : public NameObjectCollectionBase_t693805898
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAllKeys
	StringU5BU5D_t2785173003* ___cachedAllKeys_10;
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAll
	StringU5BU5D_t2785173003* ___cachedAll_11;

public:
	inline static int32_t get_offset_of_cachedAllKeys_10() { return static_cast<int32_t>(offsetof(NameValueCollection_t2733453293, ___cachedAllKeys_10)); }
	inline StringU5BU5D_t2785173003* get_cachedAllKeys_10() const { return ___cachedAllKeys_10; }
	inline StringU5BU5D_t2785173003** get_address_of_cachedAllKeys_10() { return &___cachedAllKeys_10; }
	inline void set_cachedAllKeys_10(StringU5BU5D_t2785173003* value)
	{
		___cachedAllKeys_10 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAllKeys_10), value);
	}

	inline static int32_t get_offset_of_cachedAll_11() { return static_cast<int32_t>(offsetof(NameValueCollection_t2733453293, ___cachedAll_11)); }
	inline StringU5BU5D_t2785173003* get_cachedAll_11() const { return ___cachedAll_11; }
	inline StringU5BU5D_t2785173003** get_address_of_cachedAll_11() { return &___cachedAll_11; }
	inline void set_cachedAll_11(StringU5BU5D_t2785173003* value)
	{
		___cachedAll_11 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAll_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEVALUECOLLECTION_T2733453293_H
#ifndef U24ARRAYTYPEU242048_T1818205768_H
#define U24ARRAYTYPEU242048_T1818205768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$2048
struct  U24ArrayTypeU242048_t1818205768 
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
		uint8_t U24ArrayTypeU242048_t1818205768__padding[2048];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU242048_T1818205768_H
#ifndef BASENUMBERCONVERTER_T3343211260_H
#define BASENUMBERCONVERTER_T3343211260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t3343211260  : public TypeConverter_t678871804
{
public:
	// System.Type System.ComponentModel.BaseNumberConverter::InnerType
	Type_t * ___InnerType_0;

public:
	inline static int32_t get_offset_of_InnerType_0() { return static_cast<int32_t>(offsetof(BaseNumberConverter_t3343211260, ___InnerType_0)); }
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
#endif // BASENUMBERCONVERTER_T3343211260_H
#ifndef BOOLEANCONVERTER_T3305201727_H
#define BOOLEANCONVERTER_T3305201727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BooleanConverter
struct  BooleanConverter_t3305201727  : public TypeConverter_t678871804
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANCONVERTER_T3305201727_H
#ifndef U24ARRAYTYPEU241024_T1097422637_H
#define U24ARRAYTYPEU241024_T1097422637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t1097422637 
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
		uint8_t U24ArrayTypeU241024_t1097422637__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T1097422637_H
#ifndef U24ARRAYTYPEU24640_T2391909769_H
#define U24ARRAYTYPEU24640_T2391909769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$640
struct  U24ArrayTypeU24640_t2391909769 
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
		uint8_t U24ArrayTypeU24640_t2391909769__padding[640];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24640_T2391909769_H
#ifndef U24ARRAYTYPEU24124_T711392323_H
#define U24ARRAYTYPEU24124_T711392323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$124
struct  U24ArrayTypeU24124_t711392323 
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
		uint8_t U24ArrayTypeU24124_t711392323__padding[124];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24124_T711392323_H
#ifndef CHARCONVERTER_T514064815_H
#define CHARCONVERTER_T514064815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CharConverter
struct  CharConverter_t514064815  : public TypeConverter_t678871804
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARCONVERTER_T514064815_H
#ifndef U24ARRAYTYPEU248_T1829363514_H
#define U24ARRAYTYPEU248_T1829363514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$8
struct  U24ArrayTypeU248_t1829363514 
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
		uint8_t U24ArrayTypeU248_t1829363514__padding[8];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU248_T1829363514_H
#ifndef U24ARRAYTYPEU24136_T1068990496_H
#define U24ARRAYTYPEU24136_T1068990496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t1068990496 
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
		uint8_t U24ArrayTypeU24136_t1068990496__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T1068990496_H
#ifndef U24ARRAYTYPEU2412_T2042775225_H
#define U24ARRAYTYPEU2412_T2042775225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t2042775225 
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
		uint8_t U24ArrayTypeU2412_t2042775225__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T2042775225_H
#ifndef COLLECTIONCONVERTER_T3797072146_H
#define COLLECTIONCONVERTER_T3797072146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionConverter
struct  CollectionConverter_t3797072146  : public TypeConverter_t678871804
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCONVERTER_T3797072146_H
#ifndef COMPONENTCOLLECTION_T1171289816_H
#define COMPONENTCOLLECTION_T1171289816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentCollection
struct  ComponentCollection_t1171289816  : public ReadOnlyCollectionBase_t2277522300
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCOLLECTION_T1171289816_H
#ifndef U24ARRAYTYPEU2464_T1737748068_H
#define U24ARRAYTYPEU2464_T1737748068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$64
struct  U24ArrayTypeU2464_t1737748068 
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
		uint8_t U24ArrayTypeU2464_t1737748068__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2464_T1737748068_H
#ifndef U24ARRAYTYPEU2448_T3810120058_H
#define U24ARRAYTYPEU2448_T3810120058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$48
struct  U24ArrayTypeU2448_t3810120058 
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
		uint8_t U24ArrayTypeU2448_t3810120058__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2448_T3810120058_H
#ifndef U24ARRAYTYPEU2432_T3867694266_H
#define U24ARRAYTYPEU2432_T3867694266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$32
struct  U24ArrayTypeU2432_t3867694266 
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
		uint8_t U24ArrayTypeU2432_t3867694266__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2432_T3867694266_H
#ifndef U24ARRAYTYPEU2420_T180629374_H
#define U24ARRAYTYPEU2420_T180629374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$20
struct  U24ArrayTypeU2420_t180629374 
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
		uint8_t U24ArrayTypeU2420_t180629374__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2420_T180629374_H
#ifndef U24ARRAYTYPEU2472_T3715424881_H
#define U24ARRAYTYPEU2472_T3715424881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$72
struct  U24ArrayTypeU2472_t3715424881 
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
		uint8_t U24ArrayTypeU2472_t3715424881__padding[72];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2472_T3715424881_H
#ifndef CULTUREINFOCONVERTER_T2815088593_H
#define CULTUREINFOCONVERTER_T2815088593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter
struct  CultureInfoConverter_t2815088593  : public TypeConverter_t678871804
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCONVERTER_T2815088593_H
#ifndef DECIMALCONVERTER_T1281679114_H
#define DECIMALCONVERTER_T1281679114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DecimalConverter
struct  DecimalConverter_t1281679114  : public BaseNumberConverter_t3343211260
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONVERTER_T1281679114_H
#ifndef ADDRESSFAMILY_T3513728688_H
#define ADDRESSFAMILY_T3513728688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.AddressFamily
struct  AddressFamily_t3513728688 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AddressFamily_t3513728688, ___value___1)); }
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
#endif // ADDRESSFAMILY_T3513728688_H
#ifndef SSLPOLICYERRORS_T3203185646_H
#define SSLPOLICYERRORS_T3203185646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslPolicyErrors
struct  SslPolicyErrors_t3203185646 
{
public:
	// System.Int32 System.Net.Security.SslPolicyErrors::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SslPolicyErrors_t3203185646, ___value___1)); }
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
#endif // SSLPOLICYERRORS_T3203185646_H
#ifndef UINT64CONVERTER_T1706083941_H
#define UINT64CONVERTER_T1706083941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt64Converter
struct  UInt64Converter_t1706083941  : public BaseNumberConverter_t3343211260
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64CONVERTER_T1706083941_H
#ifndef TRACELEVEL_T1342530068_H
#define TRACELEVEL_T1342530068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceLevel
struct  TraceLevel_t1342530068 
{
public:
	// System.Int32 System.Diagnostics.TraceLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TraceLevel_t1342530068, ___value___1)); }
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
#endif // TRACELEVEL_T1342530068_H
#ifndef UINT32CONVERTER_T3112510687_H
#define UINT32CONVERTER_T3112510687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt32Converter
struct  UInt32Converter_t3112510687  : public BaseNumberConverter_t3343211260
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32CONVERTER_T3112510687_H
#ifndef UINT16CONVERTER_T4249971558_H
#define UINT16CONVERTER_T4249971558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt16Converter
struct  UInt16Converter_t4249971558  : public BaseNumberConverter_t3343211260
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16CONVERTER_T4249971558_H
#ifndef ARRAYCONVERTER_T3811188921_H
#define ARRAYCONVERTER_T3811188921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter
struct  ArrayConverter_t3811188921  : public CollectionConverter_t3797072146
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYCONVERTER_T3811188921_H
#ifndef SINGLECONVERTER_T2827765395_H
#define SINGLECONVERTER_T2827765395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SingleConverter
struct  SingleConverter_t2827765395  : public BaseNumberConverter_t3343211260
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLECONVERTER_T2827765395_H
#ifndef COMPONENTCONVERTER_T2288476488_H
#define COMPONENTCONVERTER_T2288476488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentConverter
struct  ComponentConverter_t2288476488  : public ReferenceConverter_t1206905398
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCONVERTER_T2288476488_H
#ifndef SBYTECONVERTER_T1592798354_H
#define SBYTECONVERTER_T1592798354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SByteConverter
struct  SByteConverter_t1592798354  : public BaseNumberConverter_t3343211260
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTECONVERTER_T1592798354_H
#ifndef BYTECONVERTER_T1748156454_H
#define BYTECONVERTER_T1748156454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ByteConverter
struct  ByteConverter_t1748156454  : public BaseNumberConverter_t3343211260
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTECONVERTER_T1748156454_H
#ifndef INT64CONVERTER_T1815633406_H
#define INT64CONVERTER_T1815633406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int64Converter
struct  Int64Converter_t1815633406  : public BaseNumberConverter_t3343211260
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64CONVERTER_T1815633406_H
#ifndef AUTHENTICATIONLEVEL_T3708093583_H
#define AUTHENTICATIONLEVEL_T3708093583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticationLevel
struct  AuthenticationLevel_t3708093583 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AuthenticationLevel_t3708093583, ___value___1)); }
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
#endif // AUTHENTICATIONLEVEL_T3708093583_H
#ifndef DOUBLECONVERTER_T584461740_H
#define DOUBLECONVERTER_T584461740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoubleConverter
struct  DoubleConverter_t584461740  : public BaseNumberConverter_t3343211260
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLECONVERTER_T584461740_H
#ifndef INT32CONVERTER_T3167476833_H
#define INT32CONVERTER_T3167476833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int32Converter
struct  Int32Converter_t3167476833  : public BaseNumberConverter_t3343211260
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32CONVERTER_T3167476833_H
#ifndef INT16CONVERTER_T3564248651_H
#define INT16CONVERTER_T3564248651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int16Converter
struct  Int16Converter_t3564248651  : public BaseNumberConverter_t3343211260
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16CONVERTER_T3564248651_H
#ifndef EDITORBROWSABLESTATE_T766160919_H
#define EDITORBROWSABLESTATE_T766160919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableState
struct  EditorBrowsableState_t766160919 
{
public:
	// System.Int32 System.ComponentModel.EditorBrowsableState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EditorBrowsableState_t766160919, ___value___1)); }
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
#endif // EDITORBROWSABLESTATE_T766160919_H
#ifndef FILEACCESS_T2195905888_H
#define FILEACCESS_T2195905888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t2195905888 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t2195905888, ___value___1)); }
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
#endif // FILEACCESS_T2195905888_H
#ifndef WEBREQUEST_T1715009609_H
#define WEBREQUEST_T1715009609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebRequest
struct  WebRequest_t1715009609  : public MarshalByRefObject_t2659341205
{
public:
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::authentication_level
	int32_t ___authentication_level_4;

public:
	inline static int32_t get_offset_of_authentication_level_4() { return static_cast<int32_t>(offsetof(WebRequest_t1715009609, ___authentication_level_4)); }
	inline int32_t get_authentication_level_4() const { return ___authentication_level_4; }
	inline int32_t* get_address_of_authentication_level_4() { return &___authentication_level_4; }
	inline void set_authentication_level_4(int32_t value)
	{
		___authentication_level_4 = value;
	}
};

struct WebRequest_t1715009609_StaticFields
{
public:
	// System.Collections.Specialized.HybridDictionary System.Net.WebRequest::prefixes
	HybridDictionary_t895037008 * ___prefixes_1;
	// System.Boolean System.Net.WebRequest::isDefaultWebProxySet
	bool ___isDefaultWebProxySet_2;
	// System.Net.IWebProxy System.Net.WebRequest::defaultWebProxy
	RuntimeObject* ___defaultWebProxy_3;
	// System.Object System.Net.WebRequest::lockobj
	RuntimeObject * ___lockobj_5;

public:
	inline static int32_t get_offset_of_prefixes_1() { return static_cast<int32_t>(offsetof(WebRequest_t1715009609_StaticFields, ___prefixes_1)); }
	inline HybridDictionary_t895037008 * get_prefixes_1() const { return ___prefixes_1; }
	inline HybridDictionary_t895037008 ** get_address_of_prefixes_1() { return &___prefixes_1; }
	inline void set_prefixes_1(HybridDictionary_t895037008 * value)
	{
		___prefixes_1 = value;
		Il2CppCodeGenWriteBarrier((&___prefixes_1), value);
	}

	inline static int32_t get_offset_of_isDefaultWebProxySet_2() { return static_cast<int32_t>(offsetof(WebRequest_t1715009609_StaticFields, ___isDefaultWebProxySet_2)); }
	inline bool get_isDefaultWebProxySet_2() const { return ___isDefaultWebProxySet_2; }
	inline bool* get_address_of_isDefaultWebProxySet_2() { return &___isDefaultWebProxySet_2; }
	inline void set_isDefaultWebProxySet_2(bool value)
	{
		___isDefaultWebProxySet_2 = value;
	}

	inline static int32_t get_offset_of_defaultWebProxy_3() { return static_cast<int32_t>(offsetof(WebRequest_t1715009609_StaticFields, ___defaultWebProxy_3)); }
	inline RuntimeObject* get_defaultWebProxy_3() const { return ___defaultWebProxy_3; }
	inline RuntimeObject** get_address_of_defaultWebProxy_3() { return &___defaultWebProxy_3; }
	inline void set_defaultWebProxy_3(RuntimeObject* value)
	{
		___defaultWebProxy_3 = value;
		Il2CppCodeGenWriteBarrier((&___defaultWebProxy_3), value);
	}

	inline static int32_t get_offset_of_lockobj_5() { return static_cast<int32_t>(offsetof(WebRequest_t1715009609_StaticFields, ___lockobj_5)); }
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
#endif // WEBREQUEST_T1715009609_H
#ifndef EDITORBROWSABLEATTRIBUTE_T1184692013_H
#define EDITORBROWSABLEATTRIBUTE_T1184692013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableAttribute
struct  EditorBrowsableAttribute_t1184692013  : public Attribute_t4191498700
{
public:
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(EditorBrowsableAttribute_t1184692013, ___state_0)); }
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
#endif // EDITORBROWSABLEATTRIBUTE_T1184692013_H
#ifndef IPADDRESS_T901889072_H
#define IPADDRESS_T901889072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPAddress
struct  IPAddress_t901889072  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_0;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_1;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t689615629* ___m_Numbers_2;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_3;

public:
	inline static int32_t get_offset_of_m_Address_0() { return static_cast<int32_t>(offsetof(IPAddress_t901889072, ___m_Address_0)); }
	inline int64_t get_m_Address_0() const { return ___m_Address_0; }
	inline int64_t* get_address_of_m_Address_0() { return &___m_Address_0; }
	inline void set_m_Address_0(int64_t value)
	{
		___m_Address_0 = value;
	}

	inline static int32_t get_offset_of_m_Family_1() { return static_cast<int32_t>(offsetof(IPAddress_t901889072, ___m_Family_1)); }
	inline int32_t get_m_Family_1() const { return ___m_Family_1; }
	inline int32_t* get_address_of_m_Family_1() { return &___m_Family_1; }
	inline void set_m_Family_1(int32_t value)
	{
		___m_Family_1 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_2() { return static_cast<int32_t>(offsetof(IPAddress_t901889072, ___m_Numbers_2)); }
	inline UInt16U5BU5D_t689615629* get_m_Numbers_2() const { return ___m_Numbers_2; }
	inline UInt16U5BU5D_t689615629** get_address_of_m_Numbers_2() { return &___m_Numbers_2; }
	inline void set_m_Numbers_2(UInt16U5BU5D_t689615629* value)
	{
		___m_Numbers_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Numbers_2), value);
	}

	inline static int32_t get_offset_of_m_ScopeId_3() { return static_cast<int32_t>(offsetof(IPAddress_t901889072, ___m_ScopeId_3)); }
	inline int64_t get_m_ScopeId_3() const { return ___m_ScopeId_3; }
	inline int64_t* get_address_of_m_ScopeId_3() { return &___m_ScopeId_3; }
	inline void set_m_ScopeId_3(int64_t value)
	{
		___m_ScopeId_3 = value;
	}
};

struct IPAddress_t901889072_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t901889072 * ___Any_4;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t901889072 * ___Broadcast_5;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t901889072 * ___Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t901889072 * ___None_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t901889072 * ___IPv6Any_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t901889072 * ___IPv6Loopback_9;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t901889072 * ___IPv6None_10;

public:
	inline static int32_t get_offset_of_Any_4() { return static_cast<int32_t>(offsetof(IPAddress_t901889072_StaticFields, ___Any_4)); }
	inline IPAddress_t901889072 * get_Any_4() const { return ___Any_4; }
	inline IPAddress_t901889072 ** get_address_of_Any_4() { return &___Any_4; }
	inline void set_Any_4(IPAddress_t901889072 * value)
	{
		___Any_4 = value;
		Il2CppCodeGenWriteBarrier((&___Any_4), value);
	}

	inline static int32_t get_offset_of_Broadcast_5() { return static_cast<int32_t>(offsetof(IPAddress_t901889072_StaticFields, ___Broadcast_5)); }
	inline IPAddress_t901889072 * get_Broadcast_5() const { return ___Broadcast_5; }
	inline IPAddress_t901889072 ** get_address_of_Broadcast_5() { return &___Broadcast_5; }
	inline void set_Broadcast_5(IPAddress_t901889072 * value)
	{
		___Broadcast_5 = value;
		Il2CppCodeGenWriteBarrier((&___Broadcast_5), value);
	}

	inline static int32_t get_offset_of_Loopback_6() { return static_cast<int32_t>(offsetof(IPAddress_t901889072_StaticFields, ___Loopback_6)); }
	inline IPAddress_t901889072 * get_Loopback_6() const { return ___Loopback_6; }
	inline IPAddress_t901889072 ** get_address_of_Loopback_6() { return &___Loopback_6; }
	inline void set_Loopback_6(IPAddress_t901889072 * value)
	{
		___Loopback_6 = value;
		Il2CppCodeGenWriteBarrier((&___Loopback_6), value);
	}

	inline static int32_t get_offset_of_None_7() { return static_cast<int32_t>(offsetof(IPAddress_t901889072_StaticFields, ___None_7)); }
	inline IPAddress_t901889072 * get_None_7() const { return ___None_7; }
	inline IPAddress_t901889072 ** get_address_of_None_7() { return &___None_7; }
	inline void set_None_7(IPAddress_t901889072 * value)
	{
		___None_7 = value;
		Il2CppCodeGenWriteBarrier((&___None_7), value);
	}

	inline static int32_t get_offset_of_IPv6Any_8() { return static_cast<int32_t>(offsetof(IPAddress_t901889072_StaticFields, ___IPv6Any_8)); }
	inline IPAddress_t901889072 * get_IPv6Any_8() const { return ___IPv6Any_8; }
	inline IPAddress_t901889072 ** get_address_of_IPv6Any_8() { return &___IPv6Any_8; }
	inline void set_IPv6Any_8(IPAddress_t901889072 * value)
	{
		___IPv6Any_8 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Any_8), value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_9() { return static_cast<int32_t>(offsetof(IPAddress_t901889072_StaticFields, ___IPv6Loopback_9)); }
	inline IPAddress_t901889072 * get_IPv6Loopback_9() const { return ___IPv6Loopback_9; }
	inline IPAddress_t901889072 ** get_address_of_IPv6Loopback_9() { return &___IPv6Loopback_9; }
	inline void set_IPv6Loopback_9(IPAddress_t901889072 * value)
	{
		___IPv6Loopback_9 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Loopback_9), value);
	}

	inline static int32_t get_offset_of_IPv6None_10() { return static_cast<int32_t>(offsetof(IPAddress_t901889072_StaticFields, ___IPv6None_10)); }
	inline IPAddress_t901889072 * get_IPv6None_10() const { return ___IPv6None_10; }
	inline IPAddress_t901889072 ** get_address_of_IPv6None_10() { return &___IPv6None_10; }
	inline void set_IPv6None_10(IPAddress_t901889072 * value)
	{
		___IPv6None_10 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6None_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPADDRESS_T901889072_H
#ifndef FTPWEBREQUEST_T1306597573_H
#define FTPWEBREQUEST_T1306597573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FtpWebRequest
struct  FtpWebRequest_t1306597573  : public WebRequest_t1715009609
{
public:
	// System.Uri System.Net.FtpWebRequest::requestUri
	Uri_t1876633617 * ___requestUri_6;
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
	RemoteCertificateValidationCallback_t1295809792 * ___callback_15;

public:
	inline static int32_t get_offset_of_requestUri_6() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1306597573, ___requestUri_6)); }
	inline Uri_t1876633617 * get_requestUri_6() const { return ___requestUri_6; }
	inline Uri_t1876633617 ** get_address_of_requestUri_6() { return &___requestUri_6; }
	inline void set_requestUri_6(Uri_t1876633617 * value)
	{
		___requestUri_6 = value;
		Il2CppCodeGenWriteBarrier((&___requestUri_6), value);
	}

	inline static int32_t get_offset_of_proxy_7() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1306597573, ___proxy_7)); }
	inline RuntimeObject* get_proxy_7() const { return ___proxy_7; }
	inline RuntimeObject** get_address_of_proxy_7() { return &___proxy_7; }
	inline void set_proxy_7(RuntimeObject* value)
	{
		___proxy_7 = value;
		Il2CppCodeGenWriteBarrier((&___proxy_7), value);
	}

	inline static int32_t get_offset_of_timeout_8() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1306597573, ___timeout_8)); }
	inline int32_t get_timeout_8() const { return ___timeout_8; }
	inline int32_t* get_address_of_timeout_8() { return &___timeout_8; }
	inline void set_timeout_8(int32_t value)
	{
		___timeout_8 = value;
	}

	inline static int32_t get_offset_of_rwTimeout_9() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1306597573, ___rwTimeout_9)); }
	inline int32_t get_rwTimeout_9() const { return ___rwTimeout_9; }
	inline int32_t* get_address_of_rwTimeout_9() { return &___rwTimeout_9; }
	inline void set_rwTimeout_9(int32_t value)
	{
		___rwTimeout_9 = value;
	}

	inline static int32_t get_offset_of_binary_10() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1306597573, ___binary_10)); }
	inline bool get_binary_10() const { return ___binary_10; }
	inline bool* get_address_of_binary_10() { return &___binary_10; }
	inline void set_binary_10(bool value)
	{
		___binary_10 = value;
	}

	inline static int32_t get_offset_of_usePassive_11() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1306597573, ___usePassive_11)); }
	inline bool get_usePassive_11() const { return ___usePassive_11; }
	inline bool* get_address_of_usePassive_11() { return &___usePassive_11; }
	inline void set_usePassive_11(bool value)
	{
		___usePassive_11 = value;
	}

	inline static int32_t get_offset_of_method_12() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1306597573, ___method_12)); }
	inline String_t* get_method_12() const { return ___method_12; }
	inline String_t** get_address_of_method_12() { return &___method_12; }
	inline void set_method_12(String_t* value)
	{
		___method_12 = value;
		Il2CppCodeGenWriteBarrier((&___method_12), value);
	}

	inline static int32_t get_offset_of_locker_13() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1306597573, ___locker_13)); }
	inline RuntimeObject * get_locker_13() const { return ___locker_13; }
	inline RuntimeObject ** get_address_of_locker_13() { return &___locker_13; }
	inline void set_locker_13(RuntimeObject * value)
	{
		___locker_13 = value;
		Il2CppCodeGenWriteBarrier((&___locker_13), value);
	}

	inline static int32_t get_offset_of_callback_15() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1306597573, ___callback_15)); }
	inline RemoteCertificateValidationCallback_t1295809792 * get_callback_15() const { return ___callback_15; }
	inline RemoteCertificateValidationCallback_t1295809792 ** get_address_of_callback_15() { return &___callback_15; }
	inline void set_callback_15(RemoteCertificateValidationCallback_t1295809792 * value)
	{
		___callback_15 = value;
		Il2CppCodeGenWriteBarrier((&___callback_15), value);
	}
};

struct FtpWebRequest_t1306597573_StaticFields
{
public:
	// System.String[] System.Net.FtpWebRequest::supportedCommands
	StringU5BU5D_t2785173003* ___supportedCommands_14;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.FtpWebRequest::<>f__am$cache1C
	RemoteCertificateValidationCallback_t1295809792 * ___U3CU3Ef__amU24cache1C_16;

public:
	inline static int32_t get_offset_of_supportedCommands_14() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1306597573_StaticFields, ___supportedCommands_14)); }
	inline StringU5BU5D_t2785173003* get_supportedCommands_14() const { return ___supportedCommands_14; }
	inline StringU5BU5D_t2785173003** get_address_of_supportedCommands_14() { return &___supportedCommands_14; }
	inline void set_supportedCommands_14(StringU5BU5D_t2785173003* value)
	{
		___supportedCommands_14 = value;
		Il2CppCodeGenWriteBarrier((&___supportedCommands_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1C_16() { return static_cast<int32_t>(offsetof(FtpWebRequest_t1306597573_StaticFields, ___U3CU3Ef__amU24cache1C_16)); }
	inline RemoteCertificateValidationCallback_t1295809792 * get_U3CU3Ef__amU24cache1C_16() const { return ___U3CU3Ef__amU24cache1C_16; }
	inline RemoteCertificateValidationCallback_t1295809792 ** get_address_of_U3CU3Ef__amU24cache1C_16() { return &___U3CU3Ef__amU24cache1C_16; }
	inline void set_U3CU3Ef__amU24cache1C_16(RemoteCertificateValidationCallback_t1295809792 * value)
	{
		___U3CU3Ef__amU24cache1C_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1C_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FTPWEBREQUEST_T1306597573_H
#ifndef FILEWEBREQUEST_T3621623825_H
#define FILEWEBREQUEST_T3621623825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FileWebRequest
struct  FileWebRequest_t3621623825  : public WebRequest_t1715009609
{
public:
	// System.Uri System.Net.FileWebRequest::uri
	Uri_t1876633617 * ___uri_6;
	// System.Net.WebHeaderCollection System.Net.FileWebRequest::webHeaders
	WebHeaderCollection_t378952152 * ___webHeaders_7;
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
	inline static int32_t get_offset_of_uri_6() { return static_cast<int32_t>(offsetof(FileWebRequest_t3621623825, ___uri_6)); }
	inline Uri_t1876633617 * get_uri_6() const { return ___uri_6; }
	inline Uri_t1876633617 ** get_address_of_uri_6() { return &___uri_6; }
	inline void set_uri_6(Uri_t1876633617 * value)
	{
		___uri_6 = value;
		Il2CppCodeGenWriteBarrier((&___uri_6), value);
	}

	inline static int32_t get_offset_of_webHeaders_7() { return static_cast<int32_t>(offsetof(FileWebRequest_t3621623825, ___webHeaders_7)); }
	inline WebHeaderCollection_t378952152 * get_webHeaders_7() const { return ___webHeaders_7; }
	inline WebHeaderCollection_t378952152 ** get_address_of_webHeaders_7() { return &___webHeaders_7; }
	inline void set_webHeaders_7(WebHeaderCollection_t378952152 * value)
	{
		___webHeaders_7 = value;
		Il2CppCodeGenWriteBarrier((&___webHeaders_7), value);
	}

	inline static int32_t get_offset_of_connectionGroup_8() { return static_cast<int32_t>(offsetof(FileWebRequest_t3621623825, ___connectionGroup_8)); }
	inline String_t* get_connectionGroup_8() const { return ___connectionGroup_8; }
	inline String_t** get_address_of_connectionGroup_8() { return &___connectionGroup_8; }
	inline void set_connectionGroup_8(String_t* value)
	{
		___connectionGroup_8 = value;
		Il2CppCodeGenWriteBarrier((&___connectionGroup_8), value);
	}

	inline static int32_t get_offset_of_contentLength_9() { return static_cast<int32_t>(offsetof(FileWebRequest_t3621623825, ___contentLength_9)); }
	inline int64_t get_contentLength_9() const { return ___contentLength_9; }
	inline int64_t* get_address_of_contentLength_9() { return &___contentLength_9; }
	inline void set_contentLength_9(int64_t value)
	{
		___contentLength_9 = value;
	}

	inline static int32_t get_offset_of_fileAccess_10() { return static_cast<int32_t>(offsetof(FileWebRequest_t3621623825, ___fileAccess_10)); }
	inline int32_t get_fileAccess_10() const { return ___fileAccess_10; }
	inline int32_t* get_address_of_fileAccess_10() { return &___fileAccess_10; }
	inline void set_fileAccess_10(int32_t value)
	{
		___fileAccess_10 = value;
	}

	inline static int32_t get_offset_of_method_11() { return static_cast<int32_t>(offsetof(FileWebRequest_t3621623825, ___method_11)); }
	inline String_t* get_method_11() const { return ___method_11; }
	inline String_t** get_address_of_method_11() { return &___method_11; }
	inline void set_method_11(String_t* value)
	{
		___method_11 = value;
		Il2CppCodeGenWriteBarrier((&___method_11), value);
	}

	inline static int32_t get_offset_of_proxy_12() { return static_cast<int32_t>(offsetof(FileWebRequest_t3621623825, ___proxy_12)); }
	inline RuntimeObject* get_proxy_12() const { return ___proxy_12; }
	inline RuntimeObject** get_address_of_proxy_12() { return &___proxy_12; }
	inline void set_proxy_12(RuntimeObject* value)
	{
		___proxy_12 = value;
		Il2CppCodeGenWriteBarrier((&___proxy_12), value);
	}

	inline static int32_t get_offset_of_preAuthenticate_13() { return static_cast<int32_t>(offsetof(FileWebRequest_t3621623825, ___preAuthenticate_13)); }
	inline bool get_preAuthenticate_13() const { return ___preAuthenticate_13; }
	inline bool* get_address_of_preAuthenticate_13() { return &___preAuthenticate_13; }
	inline void set_preAuthenticate_13(bool value)
	{
		___preAuthenticate_13 = value;
	}

	inline static int32_t get_offset_of_timeout_14() { return static_cast<int32_t>(offsetof(FileWebRequest_t3621623825, ___timeout_14)); }
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
#endif // FILEWEBREQUEST_T3621623825_H
#ifndef HTTPWEBREQUEST_T577683124_H
#define HTTPWEBREQUEST_T577683124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpWebRequest
struct  HttpWebRequest_t577683124  : public WebRequest_t1715009609
{
public:
	// System.Uri System.Net.HttpWebRequest::requestUri
	Uri_t1876633617 * ___requestUri_6;
	// System.Uri System.Net.HttpWebRequest::actualUri
	Uri_t1876633617 * ___actualUri_7;
	// System.Boolean System.Net.HttpWebRequest::hostChanged
	bool ___hostChanged_8;
	// System.Boolean System.Net.HttpWebRequest::allowAutoRedirect
	bool ___allowAutoRedirect_9;
	// System.Boolean System.Net.HttpWebRequest::allowBuffering
	bool ___allowBuffering_10;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::certificates
	X509CertificateCollection_t693532176 * ___certificates_11;
	// System.String System.Net.HttpWebRequest::connectionGroup
	String_t* ___connectionGroup_12;
	// System.Int64 System.Net.HttpWebRequest::contentLength
	int64_t ___contentLength_13;
	// System.Net.WebHeaderCollection System.Net.HttpWebRequest::webHeaders
	WebHeaderCollection_t378952152 * ___webHeaders_14;
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
	Version_t3640501616 * ___version_21;
	// System.Net.IWebProxy System.Net.HttpWebRequest::proxy
	RuntimeObject* ___proxy_22;
	// System.Boolean System.Net.HttpWebRequest::sendChunked
	bool ___sendChunked_23;
	// System.Net.ServicePoint System.Net.HttpWebRequest::servicePoint
	ServicePoint_t621399477 * ___servicePoint_24;
	// System.Int32 System.Net.HttpWebRequest::timeout
	int32_t ___timeout_25;
	// System.Int32 System.Net.HttpWebRequest::redirects
	int32_t ___redirects_26;
	// System.Object System.Net.HttpWebRequest::locker
	RuntimeObject * ___locker_27;
	// System.Int32 System.Net.HttpWebRequest::readWriteTimeout
	int32_t ___readWriteTimeout_29;

public:
	inline static int32_t get_offset_of_requestUri_6() { return static_cast<int32_t>(offsetof(HttpWebRequest_t577683124, ___requestUri_6)); }
	inline Uri_t1876633617 * get_requestUri_6() const { return ___requestUri_6; }
	inline Uri_t1876633617 ** get_address_of_requestUri_6() { return &___requestUri_6; }
	inline void set_requestUri_6(Uri_t1876633617 * value)
	{
		___requestUri_6 = value;
		Il2CppCodeGenWriteBarrier((&___requestUri_6), value);
	}

	inline static int32_t get_offset_of_actualUri_7() { return static_cast<int32_t>(offsetof(HttpWebRequest_t577683124, ___actualUri_7)); }
	inline Uri_t1876633617 * get_actualUri_7() const { return ___actualUri_7; }
	inline Uri_t1876633617 ** get_address_of_actualUri_7() { return &___actualUri_7; }
	inline void set_actualUri_7(Uri_t1876633617 * value)
	{
		___actualUri_7 = value;
		Il2CppCodeGenWriteBarrier((&___actualUri_7), value);
	}

	inline static int32_t get_offset_of_hostChanged_8() { return static_cast<int32_t>(offsetof(HttpWebRequest_t577683124, ___hostChanged_8)); }
	inline bool get_hostChanged_8() const { return ___hostChanged_8; }
	inline bool* get_address_of_hostChanged_8() { return &___hostChanged_8; }
	inline void set_hostChanged_8(bool value)
	{
		___hostChanged_8 = value;
	}

	inline static int32_t get_offset_of_allowAutoRedirect_9() { return static_cast<int32_t>(offsetof(HttpWebRequest_t577683124, ___allowAutoRedirect_9)); }
	inline bool get_allowAutoRedirect_9() const { return ___allowAutoRedirect_9; }
	inline bool* get_address_of_allowAutoRedirect_9() { return &___allowAutoRedirect_9; }
	inline void set_allowAutoRedirect_9(bool value)
	{
		___allowAutoRedirect_9 = value;
	}

	inline static int32_t get_offset_of_allowBuffering_10() { return static_cast<int32_t>(offsetof(HttpWebRequest_t577683124, ___allowBuffering_10)); }
	inline bool get_allowBuffering_10() const { return ___allowBuffering_10; }
	inline bool* get_address_of_allowBuffering_10() { return &___allowBuffering_10; }
	inline void set_allowBuffering_10(bool value)
	{
		___allowBuffering_10 = value;
	}

	inline static int32_t get_offset_of_certificates_11() { return static_cast<int32_t>(offsetof(HttpWebRequest_t577683124, ___certificates_11)); }
	inline X509CertificateCollection_t693532176 * get_certificates_11() const { return ___certificates_11; }
	inline X509CertificateCollection_t693532176 ** get_address_of_certificates_11() { return &___certificates_11; }
	inline void set_certificates_11(X509CertificateCollection_t693532176 * value)
	{
		___certificates_11 = value;
		Il2CppCodeGenWriteBarrier((&___certificates_11), value);
	}

	inline static int32_t get_offset_of_connectionGroup_12() { return static_cast<int32_t>(offsetof(HttpWebRequest_t577683124, ___connectionGroup_12)); }
	inline String_t* get_connectionGroup_12() const { return ___connectionGroup_12; }
	inline String_t** get_address_of_connectionGroup_12() { return &___connectionGroup_12; }
	inline void set_connectionGroup_12(String_t* value)
	{
		___connectionGroup_12 = value;
		Il2CppCodeGenWriteBarrier((&___connectionGroup_12), value);
	}

	inline static int32_t get_offset_of_contentLength_13() { return static_cast<int32_t>(offsetof(HttpWebRequest_t577683124, ___contentLength_13)); }
	inline int64_t get_contentLength_13() const { return ___contentLength_13; }
	inline int64_t* get_address_of_contentLength_13() { return &___contentLength_13; }
	inline void set_contentLength_13(int64_t value)
	{
		___contentLength_13 = value;
	}

	inline static int32_t get_offset_of_webHeaders_14() { return static_cast<int32_t>(offsetof(HttpWebRequest_t577683124, ___webHeaders_14)); }
	inline WebHeaderCollection_t378952152 * get_webHeaders_14() const { return ___webHeaders_14; }
	inline WebHeaderCollection_t378952152 ** get_address_of_webHeaders_14() { return &___webHeaders_14; }
	inline void set_webHeaders_14(WebHeaderCollection_t378952152 * value)
	{
		___webHeaders_14 = value;
		Il2CppCodeGenWriteBarrier((&___webHeaders_14), value);
	}

	inline static int32_t get_offset_of_keepAlive_15() { return static_cast<int32_t>(offsetof(HttpWebRequest_t577683124, ___keepAlive_15)); }
	inline bool get_keepAlive_15() const { return ___keepAlive_15; }
	inline bool* get_address_of_keepAlive_15() { return &___keepAlive_15; }
	inline void set_keepAlive_15(bool value)
	{
		___keepAlive_15 = value;
	}

	inline static int32_t get_offset_of_maxAutoRedirect_16() { return static_cast<int32_t>(offsetof(HttpWebRequest_t577683124, ___maxAutoRedirect_16)); }
	inline int32_t get_maxAutoRedirect_16() const { return ___maxAutoRedirect_16; }
	inline int32_t* get_address_of_maxAutoRedirect_16() { return &___maxAutoRedirect_16; }
	inline void set_maxAutoRedirect_16(int32_t value)
	{
		___maxAutoRedirect_16 = value;
	}

	inline static int32_t get_offset_of_mediaType_17() { return static_cast<int32_t>(offsetof(HttpWebRequest_t577683124, ___mediaType_17)); }
	inline String_t* get_mediaType_17() const { return ___mediaType_17; }
	inline String_t** get_address_of_mediaType_17() { return &___mediaType_17; }
	inline void set_mediaType_17(String_t* value)
	{
		___mediaType_17 = value;
		Il2CppCodeGenWriteBarrier((&___mediaType_17), value);
	}

	inline static int32_t get_offset_of_method_18() { return static_cast<int32_t>(offsetof(HttpWebRequest_t577683124, ___method_18)); }
	inline String_t* get_method_18() const { return ___method_18; }
	inline String_t** get_address_of_method_18() { return &___method_18; }
	inline void set_method_18(String_t* value)
	{
		___method_18 = value;
		Il2CppCodeGenWriteBarrier((&___method_18), value);
	}

	inline static int32_t get_offset_of_initialMethod_19() { return static_cast<int32_t>(offsetof(HttpWebRequest_t577683124, ___initialMethod_19)); }
	inline String_t* get_initialMethod_19() const { return ___initialMethod_19; }
	inline String_t** get_address_of_initialMethod_19() { return &___initialMethod_19; }
	inline void set_initialMethod_19(String_t* value)
	{
		___initialMethod_19 = value;
		Il2CppCodeGenWriteBarrier((&___initialMethod_19), value);
	}

	inline static int32_t get_offset_of_pipelined_20() { return static_cast<int32_t>(offsetof(HttpWebRequest_t577683124, ___pipelined_20)); }
	inline bool get_pipelined_20() const { return ___pipelined_20; }
	inline bool* get_address_of_pipelined_20() { return &___pipelined_20; }
	inline void set_pipelined_20(bool value)
	{
		___pipelined_20 = value;
	}

	inline static int32_t get_offset_of_version_21() { return static_cast<int32_t>(offsetof(HttpWebRequest_t577683124, ___version_21)); }
	inline Version_t3640501616 * get_version_21() const { return ___version_21; }
	inline Version_t3640501616 ** get_address_of_version_21() { return &___version_21; }
	inline void set_version_21(Version_t3640501616 * value)
	{
		___version_21 = value;
		Il2CppCodeGenWriteBarrier((&___version_21), value);
	}

	inline static int32_t get_offset_of_proxy_22() { return static_cast<int32_t>(offsetof(HttpWebRequest_t577683124, ___proxy_22)); }
	inline RuntimeObject* get_proxy_22() const { return ___proxy_22; }
	inline RuntimeObject** get_address_of_proxy_22() { return &___proxy_22; }
	inline void set_proxy_22(RuntimeObject* value)
	{
		___proxy_22 = value;
		Il2CppCodeGenWriteBarrier((&___proxy_22), value);
	}

	inline static int32_t get_offset_of_sendChunked_23() { return static_cast<int32_t>(offsetof(HttpWebRequest_t577683124, ___sendChunked_23)); }
	inline bool get_sendChunked_23() const { return ___sendChunked_23; }
	inline bool* get_address_of_sendChunked_23() { return &___sendChunked_23; }
	inline void set_sendChunked_23(bool value)
	{
		___sendChunked_23 = value;
	}

	inline static int32_t get_offset_of_servicePoint_24() { return static_cast<int32_t>(offsetof(HttpWebRequest_t577683124, ___servicePoint_24)); }
	inline ServicePoint_t621399477 * get_servicePoint_24() const { return ___servicePoint_24; }
	inline ServicePoint_t621399477 ** get_address_of_servicePoint_24() { return &___servicePoint_24; }
	inline void set_servicePoint_24(ServicePoint_t621399477 * value)
	{
		___servicePoint_24 = value;
		Il2CppCodeGenWriteBarrier((&___servicePoint_24), value);
	}

	inline static int32_t get_offset_of_timeout_25() { return static_cast<int32_t>(offsetof(HttpWebRequest_t577683124, ___timeout_25)); }
	inline int32_t get_timeout_25() const { return ___timeout_25; }
	inline int32_t* get_address_of_timeout_25() { return &___timeout_25; }
	inline void set_timeout_25(int32_t value)
	{
		___timeout_25 = value;
	}

	inline static int32_t get_offset_of_redirects_26() { return static_cast<int32_t>(offsetof(HttpWebRequest_t577683124, ___redirects_26)); }
	inline int32_t get_redirects_26() const { return ___redirects_26; }
	inline int32_t* get_address_of_redirects_26() { return &___redirects_26; }
	inline void set_redirects_26(int32_t value)
	{
		___redirects_26 = value;
	}

	inline static int32_t get_offset_of_locker_27() { return static_cast<int32_t>(offsetof(HttpWebRequest_t577683124, ___locker_27)); }
	inline RuntimeObject * get_locker_27() const { return ___locker_27; }
	inline RuntimeObject ** get_address_of_locker_27() { return &___locker_27; }
	inline void set_locker_27(RuntimeObject * value)
	{
		___locker_27 = value;
		Il2CppCodeGenWriteBarrier((&___locker_27), value);
	}

	inline static int32_t get_offset_of_readWriteTimeout_29() { return static_cast<int32_t>(offsetof(HttpWebRequest_t577683124, ___readWriteTimeout_29)); }
	inline int32_t get_readWriteTimeout_29() const { return ___readWriteTimeout_29; }
	inline int32_t* get_address_of_readWriteTimeout_29() { return &___readWriteTimeout_29; }
	inline void set_readWriteTimeout_29(int32_t value)
	{
		___readWriteTimeout_29 = value;
	}
};

struct HttpWebRequest_t577683124_StaticFields
{
public:
	// System.Int32 System.Net.HttpWebRequest::defaultMaxResponseHeadersLength
	int32_t ___defaultMaxResponseHeadersLength_28;

public:
	inline static int32_t get_offset_of_defaultMaxResponseHeadersLength_28() { return static_cast<int32_t>(offsetof(HttpWebRequest_t577683124_StaticFields, ___defaultMaxResponseHeadersLength_28)); }
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
#endif // HTTPWEBREQUEST_T577683124_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize900 = { sizeof (U24ArrayTypeU243132_t1385714239)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU243132_t1385714239 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize901 = { sizeof (U24ArrayTypeU2420_t180629374)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2420_t180629374 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize902 = { sizeof (U24ArrayTypeU2432_t3867694266)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2432_t3867694266 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize903 = { sizeof (U24ArrayTypeU2448_t3810120058)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2448_t3810120058 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize904 = { sizeof (U24ArrayTypeU2464_t1737748068)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2464_t1737748068 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize905 = { sizeof (U24ArrayTypeU2412_t2042775225)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2412_t2042775225 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize906 = { sizeof (U24ArrayTypeU24136_t1068990496)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24136_t1068990496 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize907 = { sizeof (U24ArrayTypeU248_t1829363514)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU248_t1829363514 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize908 = { sizeof (U24ArrayTypeU2472_t3715424881)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2472_t3715424881 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize909 = { sizeof (U24ArrayTypeU24124_t711392323)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24124_t711392323 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize910 = { sizeof (U24ArrayTypeU2496_t1770408305)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2496_t1770408305 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize911 = { sizeof (U24ArrayTypeU242048_t1818205768)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU242048_t1818205768 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize912 = { sizeof (U24ArrayTypeU24256_t3458429430)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t3458429430 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize913 = { sizeof (U24ArrayTypeU241024_t1097422637)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU241024_t1097422637 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize914 = { sizeof (U24ArrayTypeU24640_t2391909769)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24640_t2391909769 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize915 = { sizeof (U24ArrayTypeU24128_t3818032693)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24128_t3818032693 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize916 = { sizeof (U24ArrayTypeU2452_t134887281)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2452_t134887281 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize917 = { sizeof (Il2CppComObject), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize918 = { sizeof (__Il2CppComDelegate_t2546286921), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize919 = { sizeof (U3CModuleU3E_t3825170571), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize920 = { sizeof (Locale_t49023511), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize921 = { sizeof (MonoTODOAttribute_t658195311), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable921[1] = 
{
	MonoTODOAttribute_t658195311::get_offset_of_comment_0(),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize929 = { sizeof (HybridDictionary_t895037008), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable929[3] = 
{
	HybridDictionary_t895037008::get_offset_of_caseInsensitive_0(),
	HybridDictionary_t895037008::get_offset_of_hashtable_1(),
	HybridDictionary_t895037008::get_offset_of_list_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize930 = { sizeof (ListDictionary_t326356809), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable930[4] = 
{
	ListDictionary_t326356809::get_offset_of_count_0(),
	ListDictionary_t326356809::get_offset_of_version_1(),
	ListDictionary_t326356809::get_offset_of_head_2(),
	ListDictionary_t326356809::get_offset_of_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize931 = { sizeof (DictionaryNode_t377398040), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable931[3] = 
{
	DictionaryNode_t377398040::get_offset_of_key_0(),
	DictionaryNode_t377398040::get_offset_of_value_1(),
	DictionaryNode_t377398040::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize932 = { sizeof (DictionaryNodeEnumerator_t2505452627), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable932[4] = 
{
	DictionaryNodeEnumerator_t2505452627::get_offset_of_dict_0(),
	DictionaryNodeEnumerator_t2505452627::get_offset_of_isAtStart_1(),
	DictionaryNodeEnumerator_t2505452627::get_offset_of_current_2(),
	DictionaryNodeEnumerator_t2505452627::get_offset_of_version_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize933 = { sizeof (NameObjectCollectionBase_t693805898), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable933[10] = 
{
	NameObjectCollectionBase_t693805898::get_offset_of_m_ItemsContainer_0(),
	NameObjectCollectionBase_t693805898::get_offset_of_m_NullKeyItem_1(),
	NameObjectCollectionBase_t693805898::get_offset_of_m_ItemsArray_2(),
	NameObjectCollectionBase_t693805898::get_offset_of_m_hashprovider_3(),
	NameObjectCollectionBase_t693805898::get_offset_of_m_comparer_4(),
	NameObjectCollectionBase_t693805898::get_offset_of_m_defCapacity_5(),
	NameObjectCollectionBase_t693805898::get_offset_of_m_readonly_6(),
	NameObjectCollectionBase_t693805898::get_offset_of_infoCopy_7(),
	NameObjectCollectionBase_t693805898::get_offset_of_keyscoll_8(),
	NameObjectCollectionBase_t693805898::get_offset_of_equality_comparer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize934 = { sizeof (_Item_t3861182434), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable934[2] = 
{
	_Item_t3861182434::get_offset_of_key_0(),
	_Item_t3861182434::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize935 = { sizeof (_KeysEnumerator_t942091578), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable935[2] = 
{
	_KeysEnumerator_t942091578::get_offset_of_m_collection_0(),
	_KeysEnumerator_t942091578::get_offset_of_m_position_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize936 = { sizeof (KeysCollection_t3520860872), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable936[1] = 
{
	KeysCollection_t3520860872::get_offset_of_m_collection_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize937 = { sizeof (NameValueCollection_t2733453293), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable937[2] = 
{
	NameValueCollection_t2733453293::get_offset_of_cachedAllKeys_10(),
	NameValueCollection_t2733453293::get_offset_of_cachedAll_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize938 = { sizeof (InstanceDescriptor_t3441287712), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable938[3] = 
{
	InstanceDescriptor_t3441287712::get_offset_of_member_0(),
	InstanceDescriptor_t3441287712::get_offset_of_arguments_1(),
	InstanceDescriptor_t3441287712::get_offset_of_isComplete_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize939 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize940 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize941 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize942 = { sizeof (ArrayConverter_t3811188921), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize943 = { sizeof (AttributeCollection_t784546342), -1, sizeof(AttributeCollection_t784546342_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable943[2] = 
{
	AttributeCollection_t784546342::get_offset_of_attrList_0(),
	AttributeCollection_t784546342_StaticFields::get_offset_of_Empty_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize944 = { sizeof (BaseNumberConverter_t3343211260), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable944[1] = 
{
	BaseNumberConverter_t3343211260::get_offset_of_InnerType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize945 = { sizeof (BooleanConverter_t3305201727), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize946 = { sizeof (ByteConverter_t1748156454), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize947 = { sizeof (CharConverter_t514064815), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize948 = { sizeof (CollectionConverter_t3797072146), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize949 = { sizeof (ComponentCollection_t1171289816), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize950 = { sizeof (ComponentConverter_t2288476488), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize951 = { sizeof (CultureInfoConverter_t2815088593), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize952 = { sizeof (DateTimeConverter_t1677991688), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize953 = { sizeof (DecimalConverter_t1281679114), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize954 = { sizeof (DefaultValueAttribute_t2752469037), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable954[1] = 
{
	DefaultValueAttribute_t2752469037::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize955 = { sizeof (DoubleConverter_t584461740), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize956 = { sizeof (EditorBrowsableAttribute_t1184692013), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable956[1] = 
{
	EditorBrowsableAttribute_t1184692013::get_offset_of_state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize957 = { sizeof (EditorBrowsableState_t766160919)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable957[4] = 
{
	EditorBrowsableState_t766160919::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize958 = { sizeof (EnumConverter_t1805872476), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable958[1] = 
{
	EnumConverter_t1805872476::get_offset_of_type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize959 = { sizeof (GuidConverter_t3937718446), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize960 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize961 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize962 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize963 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize964 = { sizeof (Int16Converter_t3564248651), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize965 = { sizeof (Int32Converter_t3167476833), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize966 = { sizeof (Int64Converter_t1815633406), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize967 = { sizeof (NullableConverter_t2739239978), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable967[3] = 
{
	NullableConverter_t2739239978::get_offset_of_nullableType_0(),
	NullableConverter_t2739239978::get_offset_of_underlyingType_1(),
	NullableConverter_t2739239978::get_offset_of_underlyingTypeConverter_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize968 = { sizeof (ReferenceConverter_t1206905398), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize969 = { sizeof (SByteConverter_t1592798354), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize970 = { sizeof (SingleConverter_t2827765395), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize971 = { sizeof (StringConverter_t4160660387), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize972 = { sizeof (TimeSpanConverter_t3152958023), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize973 = { sizeof (TypeConverter_t678871804), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize974 = { sizeof (TypeConverterAttribute_t3626061009), -1, sizeof(TypeConverterAttribute_t3626061009_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable974[2] = 
{
	TypeConverterAttribute_t3626061009_StaticFields::get_offset_of_Default_0(),
	TypeConverterAttribute_t3626061009::get_offset_of_converter_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize975 = { sizeof (TypeDescriptionProvider_t4125853025), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize976 = { sizeof (TypeDescriptor_t2576052152), -1, sizeof(TypeDescriptor_t2576052152_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable976[8] = 
{
	TypeDescriptor_t2576052152_StaticFields::get_offset_of_creatingDefaultConverters_0(),
	TypeDescriptor_t2576052152_StaticFields::get_offset_of_defaultConverters_1(),
	TypeDescriptor_t2576052152_StaticFields::get_offset_of_componentTable_2(),
	TypeDescriptor_t2576052152_StaticFields::get_offset_of_typeTable_3(),
	TypeDescriptor_t2576052152_StaticFields::get_offset_of_typeDescriptionProvidersLock_4(),
	TypeDescriptor_t2576052152_StaticFields::get_offset_of_typeDescriptionProviders_5(),
	TypeDescriptor_t2576052152_StaticFields::get_offset_of_componentDescriptionProvidersLock_6(),
	TypeDescriptor_t2576052152_StaticFields::get_offset_of_componentDescriptionProviders_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize977 = { sizeof (Info_t2348443746), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable977[2] = 
{
	Info_t2348443746::get_offset_of__infoType_0(),
	Info_t2348443746::get_offset_of__attributes_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize978 = { sizeof (TypeInfo_t1977296886), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize979 = { sizeof (UInt16Converter_t4249971558), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize980 = { sizeof (UInt32Converter_t3112510687), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize981 = { sizeof (UInt64Converter_t1706083941), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize982 = { sizeof (WeakObjectWrapper_t1427850386), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable982[2] = 
{
	WeakObjectWrapper_t1427850386::get_offset_of_U3CTargetHashCodeU3Ek__BackingField_0(),
	WeakObjectWrapper_t1427850386::get_offset_of_U3CWeakU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize983 = { sizeof (WeakObjectWrapperComparer_t4089202863), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize984 = { sizeof (TraceLevel_t1342530068)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable984[6] = 
{
	TraceLevel_t1342530068::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize985 = { sizeof (AuthenticationLevel_t3708093583)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable985[4] = 
{
	AuthenticationLevel_t3708093583::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize986 = { sizeof (SslPolicyErrors_t3203185646)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable986[5] = 
{
	SslPolicyErrors_t3203185646::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize987 = { sizeof (AddressFamily_t3513728688)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable987[32] = 
{
	AddressFamily_t3513728688::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize988 = { sizeof (DefaultCertificatePolicy_t398677236), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize989 = { sizeof (FileWebRequest_t3621623825), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable989[9] = 
{
	FileWebRequest_t3621623825::get_offset_of_uri_6(),
	FileWebRequest_t3621623825::get_offset_of_webHeaders_7(),
	FileWebRequest_t3621623825::get_offset_of_connectionGroup_8(),
	FileWebRequest_t3621623825::get_offset_of_contentLength_9(),
	FileWebRequest_t3621623825::get_offset_of_fileAccess_10(),
	FileWebRequest_t3621623825::get_offset_of_method_11(),
	FileWebRequest_t3621623825::get_offset_of_proxy_12(),
	FileWebRequest_t3621623825::get_offset_of_preAuthenticate_13(),
	FileWebRequest_t3621623825::get_offset_of_timeout_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize990 = { sizeof (FileWebRequestCreator_t1747718398), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize991 = { sizeof (FtpRequestCreator_t3000993211), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize992 = { sizeof (FtpWebRequest_t1306597573), -1, sizeof(FtpWebRequest_t1306597573_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable992[11] = 
{
	FtpWebRequest_t1306597573::get_offset_of_requestUri_6(),
	FtpWebRequest_t1306597573::get_offset_of_proxy_7(),
	FtpWebRequest_t1306597573::get_offset_of_timeout_8(),
	FtpWebRequest_t1306597573::get_offset_of_rwTimeout_9(),
	FtpWebRequest_t1306597573::get_offset_of_binary_10(),
	FtpWebRequest_t1306597573::get_offset_of_usePassive_11(),
	FtpWebRequest_t1306597573::get_offset_of_method_12(),
	FtpWebRequest_t1306597573::get_offset_of_locker_13(),
	FtpWebRequest_t1306597573_StaticFields::get_offset_of_supportedCommands_14(),
	FtpWebRequest_t1306597573::get_offset_of_callback_15(),
	FtpWebRequest_t1306597573_StaticFields::get_offset_of_U3CU3Ef__amU24cache1C_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize993 = { sizeof (GlobalProxySelection_t1946661320), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize994 = { sizeof (HttpRequestCreator_t2081221849), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize995 = { sizeof (HttpVersion_t3329228730), -1, sizeof(HttpVersion_t3329228730_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable995[2] = 
{
	HttpVersion_t3329228730_StaticFields::get_offset_of_Version10_0(),
	HttpVersion_t3329228730_StaticFields::get_offset_of_Version11_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize996 = { sizeof (HttpWebRequest_t577683124), -1, sizeof(HttpWebRequest_t577683124_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable996[24] = 
{
	HttpWebRequest_t577683124::get_offset_of_requestUri_6(),
	HttpWebRequest_t577683124::get_offset_of_actualUri_7(),
	HttpWebRequest_t577683124::get_offset_of_hostChanged_8(),
	HttpWebRequest_t577683124::get_offset_of_allowAutoRedirect_9(),
	HttpWebRequest_t577683124::get_offset_of_allowBuffering_10(),
	HttpWebRequest_t577683124::get_offset_of_certificates_11(),
	HttpWebRequest_t577683124::get_offset_of_connectionGroup_12(),
	HttpWebRequest_t577683124::get_offset_of_contentLength_13(),
	HttpWebRequest_t577683124::get_offset_of_webHeaders_14(),
	HttpWebRequest_t577683124::get_offset_of_keepAlive_15(),
	HttpWebRequest_t577683124::get_offset_of_maxAutoRedirect_16(),
	HttpWebRequest_t577683124::get_offset_of_mediaType_17(),
	HttpWebRequest_t577683124::get_offset_of_method_18(),
	HttpWebRequest_t577683124::get_offset_of_initialMethod_19(),
	HttpWebRequest_t577683124::get_offset_of_pipelined_20(),
	HttpWebRequest_t577683124::get_offset_of_version_21(),
	HttpWebRequest_t577683124::get_offset_of_proxy_22(),
	HttpWebRequest_t577683124::get_offset_of_sendChunked_23(),
	HttpWebRequest_t577683124::get_offset_of_servicePoint_24(),
	HttpWebRequest_t577683124::get_offset_of_timeout_25(),
	HttpWebRequest_t577683124::get_offset_of_redirects_26(),
	HttpWebRequest_t577683124::get_offset_of_locker_27(),
	HttpWebRequest_t577683124_StaticFields::get_offset_of_defaultMaxResponseHeadersLength_28(),
	HttpWebRequest_t577683124::get_offset_of_readWriteTimeout_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize997 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize998 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize999 = { sizeof (IPAddress_t901889072), -1, sizeof(IPAddress_t901889072_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable999[11] = 
{
	IPAddress_t901889072::get_offset_of_m_Address_0(),
	IPAddress_t901889072::get_offset_of_m_Family_1(),
	IPAddress_t901889072::get_offset_of_m_Numbers_2(),
	IPAddress_t901889072::get_offset_of_m_ScopeId_3(),
	IPAddress_t901889072_StaticFields::get_offset_of_Any_4(),
	IPAddress_t901889072_StaticFields::get_offset_of_Broadcast_5(),
	IPAddress_t901889072_StaticFields::get_offset_of_Loopback_6(),
	IPAddress_t901889072_StaticFields::get_offset_of_None_7(),
	IPAddress_t901889072_StaticFields::get_offset_of_IPv6Any_8(),
	IPAddress_t901889072_StaticFields::get_offset_of_IPv6Loopback_9(),
	IPAddress_t901889072_StaticFields::get_offset_of_IPv6None_10(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
