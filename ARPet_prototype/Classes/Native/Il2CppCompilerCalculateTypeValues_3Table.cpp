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
// System.Byte[]
struct ByteU5BU5D_t1747675394;
// System.Reflection.Emit.LocalBuilder[]
struct LocalBuilderU5BU5D_t682407011;
// System.Reflection.Emit.ILTokenInfo[]
struct ILTokenInfoU5BU5D_t1008747575;
// System.Reflection.Emit.ILGenerator/LabelData[]
struct LabelDataU5BU5D_t3292901215;
// System.Reflection.Emit.ILGenerator/LabelFixup[]
struct LabelFixupU5BU5D_t237637597;
// System.Reflection.Module
struct Module_t1986566517;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t3721916897;
// System.IntPtr[]
struct IntPtrU5BU5D_t3835338937;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t2003952482;
// System.Resources.IResourceReader
struct IResourceReader_t3859252954;
// System.Collections.Hashtable
struct Hashtable_t4257801040;
// System.Resources.ResourceReader
struct ResourceReader_t1547862611;
// System.IO.BinaryReader
struct BinaryReader_t3716067992;
// System.Runtime.Serialization.IFormatter
struct IFormatter_t57052198;
// System.String[]
struct StringU5BU5D_t4098010803;
// System.Int32[]
struct Int32U5BU5D_t953163696;
// System.Resources.ResourceReader/ResourceInfo[]
struct ResourceInfoU5BU5D_t328420332;
// System.Resources.ResourceReader/ResourceCacheItem[]
struct ResourceCacheItemU5BU5D_t2182818590;
// System.Security.Cryptography.RSA
struct RSA_t3932414011;
// System.Void
struct Void_t2043929967;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1211456807;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t2057365539;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t757038594;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t235649770;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t730888156;
// System.Boolean[]
struct BooleanU5BU5D_t2899405792;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t1598022474;
// System.Char[]
struct CharU5BU5D_t2718253689;
// System.Version
struct Version_t3179844488;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t2695504579;
// System.Security.Policy.Evidence
struct Evidence_t2064415453;
// System.Security.PermissionSet
struct PermissionSet_t3198080310;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2682468165;
// System.Type[]
struct TypeU5BU5D_t3431083906;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1322358382;
// System.Reflection.Emit.ParameterBuilder[]
struct ParameterBuilderU5BU5D_t882234856;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t4073622788;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t4066568247;
// System.Reflection.MemberFilter
struct MemberFilter_t146701085;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t4066821019;
// System.Globalization.CultureInfo
struct CultureInfo_t787461153;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t1212754456;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t30928047;
// System.Reflection.TypeFilter
struct TypeFilter_t4229116418;
// System.Reflection.Assembly
struct Assembly_t2532343014;
// System.Delegate
struct Delegate_t658074495;
// System.IAsyncResult
struct IAsyncResult_t4214188397;
// System.AsyncCallback
struct AsyncCallback_t1404833180;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t4260951374;
// System.Reflection.Emit.TypeBuilder[]
struct TypeBuilderU5BU5D_t4259925019;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t990831231;
// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct ModuleBuilderTokenGenerator_t3550488292;
// System.Diagnostics.SymbolStore.ISymbolWriter
struct ISymbolWriter_t2263303517;
// System.Reflection.Emit.MethodBuilder[]
struct MethodBuilderU5BU5D_t3498833925;
// System.Reflection.Emit.ConstructorBuilder[]
struct ConstructorBuilderU5BU5D_t2840939026;
// System.Reflection.Emit.FieldBuilder[]
struct FieldBuilderU5BU5D_t4218445047;




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
#ifndef ILGENERATOR_T1598022474_H
#define ILGENERATOR_T1598022474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILGenerator
struct  ILGenerator_t1598022474  : public RuntimeObject
{
public:
	// System.Byte[] System.Reflection.Emit.ILGenerator::code
	ByteU5BU5D_t1747675394* ___code_1;
	// System.Int32 System.Reflection.Emit.ILGenerator::code_len
	int32_t ___code_len_2;
	// System.Int32 System.Reflection.Emit.ILGenerator::max_stack
	int32_t ___max_stack_3;
	// System.Int32 System.Reflection.Emit.ILGenerator::cur_stack
	int32_t ___cur_stack_4;
	// System.Reflection.Emit.LocalBuilder[] System.Reflection.Emit.ILGenerator::locals
	LocalBuilderU5BU5D_t682407011* ___locals_5;
	// System.Int32 System.Reflection.Emit.ILGenerator::num_token_fixups
	int32_t ___num_token_fixups_6;
	// System.Reflection.Emit.ILTokenInfo[] System.Reflection.Emit.ILGenerator::token_fixups
	ILTokenInfoU5BU5D_t1008747575* ___token_fixups_7;
	// System.Reflection.Emit.ILGenerator/LabelData[] System.Reflection.Emit.ILGenerator::labels
	LabelDataU5BU5D_t3292901215* ___labels_8;
	// System.Int32 System.Reflection.Emit.ILGenerator::num_labels
	int32_t ___num_labels_9;
	// System.Reflection.Emit.ILGenerator/LabelFixup[] System.Reflection.Emit.ILGenerator::fixups
	LabelFixupU5BU5D_t237637597* ___fixups_10;
	// System.Int32 System.Reflection.Emit.ILGenerator::num_fixups
	int32_t ___num_fixups_11;
	// System.Reflection.Module System.Reflection.Emit.ILGenerator::module
	Module_t1986566517 * ___module_12;
	// System.Reflection.Emit.TokenGenerator System.Reflection.Emit.ILGenerator::token_gen
	RuntimeObject* ___token_gen_13;

public:
	inline static int32_t get_offset_of_code_1() { return static_cast<int32_t>(offsetof(ILGenerator_t1598022474, ___code_1)); }
	inline ByteU5BU5D_t1747675394* get_code_1() const { return ___code_1; }
	inline ByteU5BU5D_t1747675394** get_address_of_code_1() { return &___code_1; }
	inline void set_code_1(ByteU5BU5D_t1747675394* value)
	{
		___code_1 = value;
		Il2CppCodeGenWriteBarrier((&___code_1), value);
	}

	inline static int32_t get_offset_of_code_len_2() { return static_cast<int32_t>(offsetof(ILGenerator_t1598022474, ___code_len_2)); }
	inline int32_t get_code_len_2() const { return ___code_len_2; }
	inline int32_t* get_address_of_code_len_2() { return &___code_len_2; }
	inline void set_code_len_2(int32_t value)
	{
		___code_len_2 = value;
	}

	inline static int32_t get_offset_of_max_stack_3() { return static_cast<int32_t>(offsetof(ILGenerator_t1598022474, ___max_stack_3)); }
	inline int32_t get_max_stack_3() const { return ___max_stack_3; }
	inline int32_t* get_address_of_max_stack_3() { return &___max_stack_3; }
	inline void set_max_stack_3(int32_t value)
	{
		___max_stack_3 = value;
	}

	inline static int32_t get_offset_of_cur_stack_4() { return static_cast<int32_t>(offsetof(ILGenerator_t1598022474, ___cur_stack_4)); }
	inline int32_t get_cur_stack_4() const { return ___cur_stack_4; }
	inline int32_t* get_address_of_cur_stack_4() { return &___cur_stack_4; }
	inline void set_cur_stack_4(int32_t value)
	{
		___cur_stack_4 = value;
	}

	inline static int32_t get_offset_of_locals_5() { return static_cast<int32_t>(offsetof(ILGenerator_t1598022474, ___locals_5)); }
	inline LocalBuilderU5BU5D_t682407011* get_locals_5() const { return ___locals_5; }
	inline LocalBuilderU5BU5D_t682407011** get_address_of_locals_5() { return &___locals_5; }
	inline void set_locals_5(LocalBuilderU5BU5D_t682407011* value)
	{
		___locals_5 = value;
		Il2CppCodeGenWriteBarrier((&___locals_5), value);
	}

	inline static int32_t get_offset_of_num_token_fixups_6() { return static_cast<int32_t>(offsetof(ILGenerator_t1598022474, ___num_token_fixups_6)); }
	inline int32_t get_num_token_fixups_6() const { return ___num_token_fixups_6; }
	inline int32_t* get_address_of_num_token_fixups_6() { return &___num_token_fixups_6; }
	inline void set_num_token_fixups_6(int32_t value)
	{
		___num_token_fixups_6 = value;
	}

	inline static int32_t get_offset_of_token_fixups_7() { return static_cast<int32_t>(offsetof(ILGenerator_t1598022474, ___token_fixups_7)); }
	inline ILTokenInfoU5BU5D_t1008747575* get_token_fixups_7() const { return ___token_fixups_7; }
	inline ILTokenInfoU5BU5D_t1008747575** get_address_of_token_fixups_7() { return &___token_fixups_7; }
	inline void set_token_fixups_7(ILTokenInfoU5BU5D_t1008747575* value)
	{
		___token_fixups_7 = value;
		Il2CppCodeGenWriteBarrier((&___token_fixups_7), value);
	}

	inline static int32_t get_offset_of_labels_8() { return static_cast<int32_t>(offsetof(ILGenerator_t1598022474, ___labels_8)); }
	inline LabelDataU5BU5D_t3292901215* get_labels_8() const { return ___labels_8; }
	inline LabelDataU5BU5D_t3292901215** get_address_of_labels_8() { return &___labels_8; }
	inline void set_labels_8(LabelDataU5BU5D_t3292901215* value)
	{
		___labels_8 = value;
		Il2CppCodeGenWriteBarrier((&___labels_8), value);
	}

	inline static int32_t get_offset_of_num_labels_9() { return static_cast<int32_t>(offsetof(ILGenerator_t1598022474, ___num_labels_9)); }
	inline int32_t get_num_labels_9() const { return ___num_labels_9; }
	inline int32_t* get_address_of_num_labels_9() { return &___num_labels_9; }
	inline void set_num_labels_9(int32_t value)
	{
		___num_labels_9 = value;
	}

	inline static int32_t get_offset_of_fixups_10() { return static_cast<int32_t>(offsetof(ILGenerator_t1598022474, ___fixups_10)); }
	inline LabelFixupU5BU5D_t237637597* get_fixups_10() const { return ___fixups_10; }
	inline LabelFixupU5BU5D_t237637597** get_address_of_fixups_10() { return &___fixups_10; }
	inline void set_fixups_10(LabelFixupU5BU5D_t237637597* value)
	{
		___fixups_10 = value;
		Il2CppCodeGenWriteBarrier((&___fixups_10), value);
	}

	inline static int32_t get_offset_of_num_fixups_11() { return static_cast<int32_t>(offsetof(ILGenerator_t1598022474, ___num_fixups_11)); }
	inline int32_t get_num_fixups_11() const { return ___num_fixups_11; }
	inline int32_t* get_address_of_num_fixups_11() { return &___num_fixups_11; }
	inline void set_num_fixups_11(int32_t value)
	{
		___num_fixups_11 = value;
	}

	inline static int32_t get_offset_of_module_12() { return static_cast<int32_t>(offsetof(ILGenerator_t1598022474, ___module_12)); }
	inline Module_t1986566517 * get_module_12() const { return ___module_12; }
	inline Module_t1986566517 ** get_address_of_module_12() { return &___module_12; }
	inline void set_module_12(Module_t1986566517 * value)
	{
		___module_12 = value;
		Il2CppCodeGenWriteBarrier((&___module_12), value);
	}

	inline static int32_t get_offset_of_token_gen_13() { return static_cast<int32_t>(offsetof(ILGenerator_t1598022474, ___token_gen_13)); }
	inline RuntimeObject* get_token_gen_13() const { return ___token_gen_13; }
	inline RuntimeObject** get_address_of_token_gen_13() { return &___token_gen_13; }
	inline void set_token_gen_13(RuntimeObject* value)
	{
		___token_gen_13 = value;
		Il2CppCodeGenWriteBarrier((&___token_gen_13), value);
	}
};

struct ILGenerator_t1598022474_StaticFields
{
public:
	// System.Type System.Reflection.Emit.ILGenerator::void_type
	Type_t * ___void_type_0;

public:
	inline static int32_t get_offset_of_void_type_0() { return static_cast<int32_t>(offsetof(ILGenerator_t1598022474_StaticFields, ___void_type_0)); }
	inline Type_t * get_void_type_0() const { return ___void_type_0; }
	inline Type_t ** get_address_of_void_type_0() { return &___void_type_0; }
	inline void set_void_type_0(Type_t * value)
	{
		___void_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___void_type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ILGENERATOR_T1598022474_H
#ifndef EXCEPTION_T3198312832_H
#define EXCEPTION_T3198312832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t3198312832  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t3835338937* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t3198312832 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t3198312832, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t3835338937* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t3835338937** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t3835338937* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t3198312832, ___inner_exception_1)); }
	inline Exception_t3198312832 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t3198312832 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t3198312832 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t3198312832, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t3198312832, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t3198312832, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t3198312832, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t3198312832, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t3198312832, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t3198312832, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t3198312832, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t3198312832, ____data_10)); }
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
#endif // EXCEPTION_T3198312832_H
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
#ifndef ATTRIBUTE_T1661048433_H
#define ATTRIBUTE_T1661048433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t1661048433  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T1661048433_H
#ifndef VALUETYPE_T3696140014_H
#define VALUETYPE_T3696140014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3696140014  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3696140014_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3696140014_marshaled_com
{
};
#endif // VALUETYPE_T3696140014_H
#ifndef RESOURCESET_T2540623889_H
#define RESOURCESET_T2540623889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceSet
struct  ResourceSet_t2540623889  : public RuntimeObject
{
public:
	// System.Resources.IResourceReader System.Resources.ResourceSet::Reader
	RuntimeObject* ___Reader_0;
	// System.Collections.Hashtable System.Resources.ResourceSet::Table
	Hashtable_t4257801040 * ___Table_1;
	// System.Boolean System.Resources.ResourceSet::resources_read
	bool ___resources_read_2;
	// System.Boolean System.Resources.ResourceSet::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_Reader_0() { return static_cast<int32_t>(offsetof(ResourceSet_t2540623889, ___Reader_0)); }
	inline RuntimeObject* get_Reader_0() const { return ___Reader_0; }
	inline RuntimeObject** get_address_of_Reader_0() { return &___Reader_0; }
	inline void set_Reader_0(RuntimeObject* value)
	{
		___Reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___Reader_0), value);
	}

	inline static int32_t get_offset_of_Table_1() { return static_cast<int32_t>(offsetof(ResourceSet_t2540623889, ___Table_1)); }
	inline Hashtable_t4257801040 * get_Table_1() const { return ___Table_1; }
	inline Hashtable_t4257801040 ** get_address_of_Table_1() { return &___Table_1; }
	inline void set_Table_1(Hashtable_t4257801040 * value)
	{
		___Table_1 = value;
		Il2CppCodeGenWriteBarrier((&___Table_1), value);
	}

	inline static int32_t get_offset_of_resources_read_2() { return static_cast<int32_t>(offsetof(ResourceSet_t2540623889, ___resources_read_2)); }
	inline bool get_resources_read_2() const { return ___resources_read_2; }
	inline bool* get_address_of_resources_read_2() { return &___resources_read_2; }
	inline void set_resources_read_2(bool value)
	{
		___resources_read_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(ResourceSet_t2540623889, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCESET_T2540623889_H
#ifndef RESOURCEENUMERATOR_T3548400174_H
#define RESOURCEENUMERATOR_T3548400174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceEnumerator
struct  ResourceEnumerator_t3548400174  : public RuntimeObject
{
public:
	// System.Resources.ResourceReader System.Resources.ResourceReader/ResourceEnumerator::reader
	ResourceReader_t1547862611 * ___reader_0;
	// System.Int32 System.Resources.ResourceReader/ResourceEnumerator::index
	int32_t ___index_1;
	// System.Boolean System.Resources.ResourceReader/ResourceEnumerator::finished
	bool ___finished_2;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t3548400174, ___reader_0)); }
	inline ResourceReader_t1547862611 * get_reader_0() const { return ___reader_0; }
	inline ResourceReader_t1547862611 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(ResourceReader_t1547862611 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t3548400174, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_finished_2() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t3548400174, ___finished_2)); }
	inline bool get_finished_2() const { return ___finished_2; }
	inline bool* get_address_of_finished_2() { return &___finished_2; }
	inline void set_finished_2(bool value)
	{
		___finished_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEENUMERATOR_T3548400174_H
#ifndef RESOURCEREADER_T1547862611_H
#define RESOURCEREADER_T1547862611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader
struct  ResourceReader_t1547862611  : public RuntimeObject
{
public:
	// System.IO.BinaryReader System.Resources.ResourceReader::reader
	BinaryReader_t3716067992 * ___reader_0;
	// System.Object System.Resources.ResourceReader::readerLock
	RuntimeObject * ___readerLock_1;
	// System.Runtime.Serialization.IFormatter System.Resources.ResourceReader::formatter
	RuntimeObject* ___formatter_2;
	// System.Int32 System.Resources.ResourceReader::resourceCount
	int32_t ___resourceCount_3;
	// System.Int32 System.Resources.ResourceReader::typeCount
	int32_t ___typeCount_4;
	// System.String[] System.Resources.ResourceReader::typeNames
	StringU5BU5D_t4098010803* ___typeNames_5;
	// System.Int32[] System.Resources.ResourceReader::hashes
	Int32U5BU5D_t953163696* ___hashes_6;
	// System.Resources.ResourceReader/ResourceInfo[] System.Resources.ResourceReader::infos
	ResourceInfoU5BU5D_t328420332* ___infos_7;
	// System.Int32 System.Resources.ResourceReader::dataSectionOffset
	int32_t ___dataSectionOffset_8;
	// System.Int64 System.Resources.ResourceReader::nameSectionOffset
	int64_t ___nameSectionOffset_9;
	// System.Int32 System.Resources.ResourceReader::resource_ver
	int32_t ___resource_ver_10;
	// System.Resources.ResourceReader/ResourceCacheItem[] System.Resources.ResourceReader::cache
	ResourceCacheItemU5BU5D_t2182818590* ___cache_11;
	// System.Object System.Resources.ResourceReader::cache_lock
	RuntimeObject * ___cache_lock_12;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceReader_t1547862611, ___reader_0)); }
	inline BinaryReader_t3716067992 * get_reader_0() const { return ___reader_0; }
	inline BinaryReader_t3716067992 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(BinaryReader_t3716067992 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_readerLock_1() { return static_cast<int32_t>(offsetof(ResourceReader_t1547862611, ___readerLock_1)); }
	inline RuntimeObject * get_readerLock_1() const { return ___readerLock_1; }
	inline RuntimeObject ** get_address_of_readerLock_1() { return &___readerLock_1; }
	inline void set_readerLock_1(RuntimeObject * value)
	{
		___readerLock_1 = value;
		Il2CppCodeGenWriteBarrier((&___readerLock_1), value);
	}

	inline static int32_t get_offset_of_formatter_2() { return static_cast<int32_t>(offsetof(ResourceReader_t1547862611, ___formatter_2)); }
	inline RuntimeObject* get_formatter_2() const { return ___formatter_2; }
	inline RuntimeObject** get_address_of_formatter_2() { return &___formatter_2; }
	inline void set_formatter_2(RuntimeObject* value)
	{
		___formatter_2 = value;
		Il2CppCodeGenWriteBarrier((&___formatter_2), value);
	}

	inline static int32_t get_offset_of_resourceCount_3() { return static_cast<int32_t>(offsetof(ResourceReader_t1547862611, ___resourceCount_3)); }
	inline int32_t get_resourceCount_3() const { return ___resourceCount_3; }
	inline int32_t* get_address_of_resourceCount_3() { return &___resourceCount_3; }
	inline void set_resourceCount_3(int32_t value)
	{
		___resourceCount_3 = value;
	}

	inline static int32_t get_offset_of_typeCount_4() { return static_cast<int32_t>(offsetof(ResourceReader_t1547862611, ___typeCount_4)); }
	inline int32_t get_typeCount_4() const { return ___typeCount_4; }
	inline int32_t* get_address_of_typeCount_4() { return &___typeCount_4; }
	inline void set_typeCount_4(int32_t value)
	{
		___typeCount_4 = value;
	}

	inline static int32_t get_offset_of_typeNames_5() { return static_cast<int32_t>(offsetof(ResourceReader_t1547862611, ___typeNames_5)); }
	inline StringU5BU5D_t4098010803* get_typeNames_5() const { return ___typeNames_5; }
	inline StringU5BU5D_t4098010803** get_address_of_typeNames_5() { return &___typeNames_5; }
	inline void set_typeNames_5(StringU5BU5D_t4098010803* value)
	{
		___typeNames_5 = value;
		Il2CppCodeGenWriteBarrier((&___typeNames_5), value);
	}

	inline static int32_t get_offset_of_hashes_6() { return static_cast<int32_t>(offsetof(ResourceReader_t1547862611, ___hashes_6)); }
	inline Int32U5BU5D_t953163696* get_hashes_6() const { return ___hashes_6; }
	inline Int32U5BU5D_t953163696** get_address_of_hashes_6() { return &___hashes_6; }
	inline void set_hashes_6(Int32U5BU5D_t953163696* value)
	{
		___hashes_6 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_6), value);
	}

	inline static int32_t get_offset_of_infos_7() { return static_cast<int32_t>(offsetof(ResourceReader_t1547862611, ___infos_7)); }
	inline ResourceInfoU5BU5D_t328420332* get_infos_7() const { return ___infos_7; }
	inline ResourceInfoU5BU5D_t328420332** get_address_of_infos_7() { return &___infos_7; }
	inline void set_infos_7(ResourceInfoU5BU5D_t328420332* value)
	{
		___infos_7 = value;
		Il2CppCodeGenWriteBarrier((&___infos_7), value);
	}

	inline static int32_t get_offset_of_dataSectionOffset_8() { return static_cast<int32_t>(offsetof(ResourceReader_t1547862611, ___dataSectionOffset_8)); }
	inline int32_t get_dataSectionOffset_8() const { return ___dataSectionOffset_8; }
	inline int32_t* get_address_of_dataSectionOffset_8() { return &___dataSectionOffset_8; }
	inline void set_dataSectionOffset_8(int32_t value)
	{
		___dataSectionOffset_8 = value;
	}

	inline static int32_t get_offset_of_nameSectionOffset_9() { return static_cast<int32_t>(offsetof(ResourceReader_t1547862611, ___nameSectionOffset_9)); }
	inline int64_t get_nameSectionOffset_9() const { return ___nameSectionOffset_9; }
	inline int64_t* get_address_of_nameSectionOffset_9() { return &___nameSectionOffset_9; }
	inline void set_nameSectionOffset_9(int64_t value)
	{
		___nameSectionOffset_9 = value;
	}

	inline static int32_t get_offset_of_resource_ver_10() { return static_cast<int32_t>(offsetof(ResourceReader_t1547862611, ___resource_ver_10)); }
	inline int32_t get_resource_ver_10() const { return ___resource_ver_10; }
	inline int32_t* get_address_of_resource_ver_10() { return &___resource_ver_10; }
	inline void set_resource_ver_10(int32_t value)
	{
		___resource_ver_10 = value;
	}

	inline static int32_t get_offset_of_cache_11() { return static_cast<int32_t>(offsetof(ResourceReader_t1547862611, ___cache_11)); }
	inline ResourceCacheItemU5BU5D_t2182818590* get_cache_11() const { return ___cache_11; }
	inline ResourceCacheItemU5BU5D_t2182818590** get_address_of_cache_11() { return &___cache_11; }
	inline void set_cache_11(ResourceCacheItemU5BU5D_t2182818590* value)
	{
		___cache_11 = value;
		Il2CppCodeGenWriteBarrier((&___cache_11), value);
	}

	inline static int32_t get_offset_of_cache_lock_12() { return static_cast<int32_t>(offsetof(ResourceReader_t1547862611, ___cache_lock_12)); }
	inline RuntimeObject * get_cache_lock_12() const { return ___cache_lock_12; }
	inline RuntimeObject ** get_address_of_cache_lock_12() { return &___cache_lock_12; }
	inline void set_cache_lock_12(RuntimeObject * value)
	{
		___cache_lock_12 = value;
		Il2CppCodeGenWriteBarrier((&___cache_lock_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEREADER_T1547862611_H
#ifndef RESOURCEMANAGER_T860560018_H
#define RESOURCEMANAGER_T860560018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceManager
struct  ResourceManager_t860560018  : public RuntimeObject
{
public:
	// System.Type System.Resources.ResourceManager::resourceSetType
	Type_t * ___resourceSetType_4;

public:
	inline static int32_t get_offset_of_resourceSetType_4() { return static_cast<int32_t>(offsetof(ResourceManager_t860560018, ___resourceSetType_4)); }
	inline Type_t * get_resourceSetType_4() const { return ___resourceSetType_4; }
	inline Type_t ** get_address_of_resourceSetType_4() { return &___resourceSetType_4; }
	inline void set_resourceSetType_4(Type_t * value)
	{
		___resourceSetType_4 = value;
		Il2CppCodeGenWriteBarrier((&___resourceSetType_4), value);
	}
};

struct ResourceManager_t860560018_StaticFields
{
public:
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceCache
	Hashtable_t4257801040 * ___ResourceCache_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::NonExistent
	Hashtable_t4257801040 * ___NonExistent_1;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_2;
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_3;

public:
	inline static int32_t get_offset_of_ResourceCache_0() { return static_cast<int32_t>(offsetof(ResourceManager_t860560018_StaticFields, ___ResourceCache_0)); }
	inline Hashtable_t4257801040 * get_ResourceCache_0() const { return ___ResourceCache_0; }
	inline Hashtable_t4257801040 ** get_address_of_ResourceCache_0() { return &___ResourceCache_0; }
	inline void set_ResourceCache_0(Hashtable_t4257801040 * value)
	{
		___ResourceCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceCache_0), value);
	}

	inline static int32_t get_offset_of_NonExistent_1() { return static_cast<int32_t>(offsetof(ResourceManager_t860560018_StaticFields, ___NonExistent_1)); }
	inline Hashtable_t4257801040 * get_NonExistent_1() const { return ___NonExistent_1; }
	inline Hashtable_t4257801040 ** get_address_of_NonExistent_1() { return &___NonExistent_1; }
	inline void set_NonExistent_1(Hashtable_t4257801040 * value)
	{
		___NonExistent_1 = value;
		Il2CppCodeGenWriteBarrier((&___NonExistent_1), value);
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_2() { return static_cast<int32_t>(offsetof(ResourceManager_t860560018_StaticFields, ___HeaderVersionNumber_2)); }
	inline int32_t get_HeaderVersionNumber_2() const { return ___HeaderVersionNumber_2; }
	inline int32_t* get_address_of_HeaderVersionNumber_2() { return &___HeaderVersionNumber_2; }
	inline void set_HeaderVersionNumber_2(int32_t value)
	{
		___HeaderVersionNumber_2 = value;
	}

	inline static int32_t get_offset_of_MagicNumber_3() { return static_cast<int32_t>(offsetof(ResourceManager_t860560018_StaticFields, ___MagicNumber_3)); }
	inline int32_t get_MagicNumber_3() const { return ___MagicNumber_3; }
	inline int32_t* get_address_of_MagicNumber_3() { return &___MagicNumber_3; }
	inline void set_MagicNumber_3(int32_t value)
	{
		___MagicNumber_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEMANAGER_T860560018_H
#ifndef STRONGNAMEKEYPAIR_T1212754456_H
#define STRONGNAMEKEYPAIR_T1212754456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.StrongNameKeyPair
struct  StrongNameKeyPair_t1212754456  : public RuntimeObject
{
public:
	// System.Byte[] System.Reflection.StrongNameKeyPair::_publicKey
	ByteU5BU5D_t1747675394* ____publicKey_0;
	// System.String System.Reflection.StrongNameKeyPair::_keyPairContainer
	String_t* ____keyPairContainer_1;
	// System.Boolean System.Reflection.StrongNameKeyPair::_keyPairExported
	bool ____keyPairExported_2;
	// System.Byte[] System.Reflection.StrongNameKeyPair::_keyPairArray
	ByteU5BU5D_t1747675394* ____keyPairArray_3;
	// System.Security.Cryptography.RSA System.Reflection.StrongNameKeyPair::_rsa
	RSA_t3932414011 * ____rsa_4;

public:
	inline static int32_t get_offset_of__publicKey_0() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t1212754456, ____publicKey_0)); }
	inline ByteU5BU5D_t1747675394* get__publicKey_0() const { return ____publicKey_0; }
	inline ByteU5BU5D_t1747675394** get_address_of__publicKey_0() { return &____publicKey_0; }
	inline void set__publicKey_0(ByteU5BU5D_t1747675394* value)
	{
		____publicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____publicKey_0), value);
	}

	inline static int32_t get_offset_of__keyPairContainer_1() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t1212754456, ____keyPairContainer_1)); }
	inline String_t* get__keyPairContainer_1() const { return ____keyPairContainer_1; }
	inline String_t** get_address_of__keyPairContainer_1() { return &____keyPairContainer_1; }
	inline void set__keyPairContainer_1(String_t* value)
	{
		____keyPairContainer_1 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairContainer_1), value);
	}

	inline static int32_t get_offset_of__keyPairExported_2() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t1212754456, ____keyPairExported_2)); }
	inline bool get__keyPairExported_2() const { return ____keyPairExported_2; }
	inline bool* get_address_of__keyPairExported_2() { return &____keyPairExported_2; }
	inline void set__keyPairExported_2(bool value)
	{
		____keyPairExported_2 = value;
	}

	inline static int32_t get_offset_of__keyPairArray_3() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t1212754456, ____keyPairArray_3)); }
	inline ByteU5BU5D_t1747675394* get__keyPairArray_3() const { return ____keyPairArray_3; }
	inline ByteU5BU5D_t1747675394** get_address_of__keyPairArray_3() { return &____keyPairArray_3; }
	inline void set__keyPairArray_3(ByteU5BU5D_t1747675394* value)
	{
		____keyPairArray_3 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairArray_3), value);
	}

	inline static int32_t get_offset_of__rsa_4() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t1212754456, ____rsa_4)); }
	inline RSA_t3932414011 * get__rsa_4() const { return ____rsa_4; }
	inline RSA_t3932414011 ** get_address_of__rsa_4() { return &____rsa_4; }
	inline void set__rsa_4(RSA_t3932414011 * value)
	{
		____rsa_4 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEKEYPAIR_T1212754456_H
#ifndef POINTER_T1260526926_H
#define POINTER_T1260526926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Pointer
struct  Pointer_t1260526926  : public RuntimeObject
{
public:
	// System.Void* System.Reflection.Pointer::data
	void* ___data_0;
	// System.Type System.Reflection.Pointer::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Pointer_t1260526926, ___data_0)); }
	inline void* get_data_0() const { return ___data_0; }
	inline void** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(void* value)
	{
		___data_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(Pointer_t1260526926, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTER_T1260526926_H
#ifndef LOCALVARIABLEINFO_T1270942175_H
#define LOCALVARIABLEINFO_T1270942175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.LocalVariableInfo
struct  LocalVariableInfo_t1270942175  : public RuntimeObject
{
public:
	// System.Type System.Reflection.LocalVariableInfo::type
	Type_t * ___type_0;
	// System.Boolean System.Reflection.LocalVariableInfo::is_pinned
	bool ___is_pinned_1;
	// System.UInt16 System.Reflection.LocalVariableInfo::position
	uint16_t ___position_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(LocalVariableInfo_t1270942175, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_is_pinned_1() { return static_cast<int32_t>(offsetof(LocalVariableInfo_t1270942175, ___is_pinned_1)); }
	inline bool get_is_pinned_1() const { return ___is_pinned_1; }
	inline bool* get_address_of_is_pinned_1() { return &___is_pinned_1; }
	inline void set_is_pinned_1(bool value)
	{
		___is_pinned_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(LocalVariableInfo_t1270942175, ___position_2)); }
	inline uint16_t get_position_2() const { return ___position_2; }
	inline uint16_t* get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(uint16_t value)
	{
		___position_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALVARIABLEINFO_T1270942175_H
#ifndef CUSTOMATTRIBUTEDATA_T1618831278_H
#define CUSTOMATTRIBUTEDATA_T1618831278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t1618831278  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t1211456807 * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1618831278, ___ctorInfo_0)); }
	inline ConstructorInfo_t1211456807 * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t1211456807 ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t1211456807 * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctorInfo_0), value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1618831278, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((&___ctorArgs_1), value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1618831278, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((&___namedArgs_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEDATA_T1618831278_H
#ifndef BINDER_T886820729_H
#define BINDER_T886820729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder
struct  Binder_t886820729  : public RuntimeObject
{
public:

public:
};

struct Binder_t886820729_StaticFields
{
public:
	// System.Reflection.Binder System.Reflection.Binder::default_binder
	Binder_t886820729 * ___default_binder_0;

public:
	inline static int32_t get_offset_of_default_binder_0() { return static_cast<int32_t>(offsetof(Binder_t886820729_StaticFields, ___default_binder_0)); }
	inline Binder_t886820729 * get_default_binder_0() const { return ___default_binder_0; }
	inline Binder_t886820729 ** get_address_of_default_binder_0() { return &___default_binder_0; }
	inline void set_default_binder_0(Binder_t886820729 * value)
	{
		___default_binder_0 = value;
		Il2CppCodeGenWriteBarrier((&___default_binder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDER_T886820729_H
#ifndef RESOLVEEVENTHOLDER_T2695504579_H
#define RESOLVEEVENTHOLDER_T2695504579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly/ResolveEventHolder
struct  ResolveEventHolder_t2695504579  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHOLDER_T2695504579_H
#ifndef MISSING_T2761594835_H
#define MISSING_T2761594835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Missing
struct  Missing_t2761594835  : public RuntimeObject
{
public:

public:
};

struct Missing_t2761594835_StaticFields
{
public:
	// System.Reflection.Missing System.Reflection.Missing::Value
	Missing_t2761594835 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Missing_t2761594835_StaticFields, ___Value_0)); }
	inline Missing_t2761594835 * get_Value_0() const { return ___Value_0; }
	inline Missing_t2761594835 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(Missing_t2761594835 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSING_T2761594835_H
#ifndef MODULEBUILDERTOKENGENERATOR_T3550488292_H
#define MODULEBUILDERTOKENGENERATOR_T3550488292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct  ModuleBuilderTokenGenerator_t3550488292  : public RuntimeObject
{
public:
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.ModuleBuilderTokenGenerator::mb
	ModuleBuilder_t235649770 * ___mb_0;

public:
	inline static int32_t get_offset_of_mb_0() { return static_cast<int32_t>(offsetof(ModuleBuilderTokenGenerator_t3550488292, ___mb_0)); }
	inline ModuleBuilder_t235649770 * get_mb_0() const { return ___mb_0; }
	inline ModuleBuilder_t235649770 ** get_address_of_mb_0() { return &___mb_0; }
	inline void set_mb_0(ModuleBuilder_t235649770 * value)
	{
		___mb_0 = value;
		Il2CppCodeGenWriteBarrier((&___mb_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULEBUILDERTOKENGENERATOR_T3550488292_H
#ifndef OPCODENAMES_T3930806498_H
#define OPCODENAMES_T3930806498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.OpCodeNames
struct  OpCodeNames_t3930806498  : public RuntimeObject
{
public:

public:
};

struct OpCodeNames_t3930806498_StaticFields
{
public:
	// System.String[] System.Reflection.Emit.OpCodeNames::names
	StringU5BU5D_t4098010803* ___names_0;

public:
	inline static int32_t get_offset_of_names_0() { return static_cast<int32_t>(offsetof(OpCodeNames_t3930806498_StaticFields, ___names_0)); }
	inline StringU5BU5D_t4098010803* get_names_0() const { return ___names_0; }
	inline StringU5BU5D_t4098010803** get_address_of_names_0() { return &___names_0; }
	inline void set_names_0(StringU5BU5D_t4098010803* value)
	{
		___names_0 = value;
		Il2CppCodeGenWriteBarrier((&___names_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCODENAMES_T3930806498_H
#ifndef RUNTIMERESOURCESET_T322033381_H
#define RUNTIMERESOURCESET_T322033381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.RuntimeResourceSet
struct  RuntimeResourceSet_t322033381  : public ResourceSet_t2540623889
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMERESOURCESET_T322033381_H
#ifndef TARGETPARAMETERCOUNTEXCEPTION_T704239062_H
#define TARGETPARAMETERCOUNTEXCEPTION_T704239062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetParameterCountException
struct  TargetParameterCountException_t704239062  : public Exception_t3198312832
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETPARAMETERCOUNTEXCEPTION_T704239062_H
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T734198029_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T734198029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t734198029 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t734198029, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t734198029, ___value_1)); }
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
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t734198029_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t734198029_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T734198029_H
#ifndef TARGETINVOCATIONEXCEPTION_T823534325_H
#define TARGETINVOCATIONEXCEPTION_T823534325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetInvocationException
struct  TargetInvocationException_t823534325  : public Exception_t3198312832
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETINVOCATIONEXCEPTION_T823534325_H
#ifndef EVENTINFO_T_H
#define EVENTINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo
struct  EventInfo_t  : public MemberInfo_t
{
public:
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_t730888156 * ___cached_add_event_0;

public:
	inline static int32_t get_offset_of_cached_add_event_0() { return static_cast<int32_t>(offsetof(EventInfo_t, ___cached_add_event_0)); }
	inline AddEventAdapter_t730888156 * get_cached_add_event_0() const { return ___cached_add_event_0; }
	inline AddEventAdapter_t730888156 ** get_address_of_cached_add_event_0() { return &___cached_add_event_0; }
	inline void set_cached_add_event_0(AddEventAdapter_t730888156 * value)
	{
		___cached_add_event_0 = value;
		Il2CppCodeGenWriteBarrier((&___cached_add_event_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTINFO_T_H
#ifndef TARGETEXCEPTION_T2768158429_H
#define TARGETEXCEPTION_T2768158429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetException
struct  TargetException_t2768158429  : public Exception_t3198312832
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETEXCEPTION_T2768158429_H
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
#ifndef NEUTRALRESOURCESLANGUAGEATTRIBUTE_T1660801575_H
#define NEUTRALRESOURCESLANGUAGEATTRIBUTE_T1660801575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.NeutralResourcesLanguageAttribute
struct  NeutralResourcesLanguageAttribute_t1660801575  : public Attribute_t1661048433
{
public:
	// System.String System.Resources.NeutralResourcesLanguageAttribute::culture
	String_t* ___culture_0;

public:
	inline static int32_t get_offset_of_culture_0() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t1660801575, ___culture_0)); }
	inline String_t* get_culture_0() const { return ___culture_0; }
	inline String_t** get_address_of_culture_0() { return &___culture_0; }
	inline void set_culture_0(String_t* value)
	{
		___culture_0 = value;
		Il2CppCodeGenWriteBarrier((&___culture_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEUTRALRESOURCESLANGUAGEATTRIBUTE_T1660801575_H
#ifndef LABELDATA_T3840747898_H
#define LABELDATA_T3840747898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILGenerator/LabelData
struct  LabelData_t3840747898 
{
public:
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelData::addr
	int32_t ___addr_0;
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelData::maxStack
	int32_t ___maxStack_1;

public:
	inline static int32_t get_offset_of_addr_0() { return static_cast<int32_t>(offsetof(LabelData_t3840747898, ___addr_0)); }
	inline int32_t get_addr_0() const { return ___addr_0; }
	inline int32_t* get_address_of_addr_0() { return &___addr_0; }
	inline void set_addr_0(int32_t value)
	{
		___addr_0 = value;
	}

	inline static int32_t get_offset_of_maxStack_1() { return static_cast<int32_t>(offsetof(LabelData_t3840747898, ___maxStack_1)); }
	inline int32_t get_maxStack_1() const { return ___maxStack_1; }
	inline int32_t* get_address_of_maxStack_1() { return &___maxStack_1; }
	inline void set_maxStack_1(int32_t value)
	{
		___maxStack_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABELDATA_T3840747898_H
#ifndef METHODBASE_T3920293494_H
#define METHODBASE_T3920293494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t3920293494  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T3920293494_H
#ifndef METHODTOKEN_T717913129_H
#define METHODTOKEN_T717913129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.MethodToken
struct  MethodToken_t717913129 
{
public:
	// System.Int32 System.Reflection.Emit.MethodToken::tokValue
	int32_t ___tokValue_0;

public:
	inline static int32_t get_offset_of_tokValue_0() { return static_cast<int32_t>(offsetof(MethodToken_t717913129, ___tokValue_0)); }
	inline int32_t get_tokValue_0() const { return ___tokValue_0; }
	inline int32_t* get_address_of_tokValue_0() { return &___tokValue_0; }
	inline void set_tokValue_0(int32_t value)
	{
		___tokValue_0 = value;
	}
};

struct MethodToken_t717913129_StaticFields
{
public:
	// System.Reflection.Emit.MethodToken System.Reflection.Emit.MethodToken::Empty
	MethodToken_t717913129  ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(MethodToken_t717913129_StaticFields, ___Empty_1)); }
	inline MethodToken_t717913129  get_Empty_1() const { return ___Empty_1; }
	inline MethodToken_t717913129 * get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(MethodToken_t717913129  value)
	{
		___Empty_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODTOKEN_T717913129_H
#ifndef PARAMETERMODIFIER_T4067337784_H
#define PARAMETERMODIFIER_T4067337784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterModifier
struct  ParameterModifier_t4067337784 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byref
	BooleanU5BU5D_t2899405792* ____byref_0;

public:
	inline static int32_t get_offset_of__byref_0() { return static_cast<int32_t>(offsetof(ParameterModifier_t4067337784, ____byref_0)); }
	inline BooleanU5BU5D_t2899405792* get__byref_0() const { return ____byref_0; }
	inline BooleanU5BU5D_t2899405792** get_address_of__byref_0() { return &____byref_0; }
	inline void set__byref_0(BooleanU5BU5D_t2899405792* value)
	{
		____byref_0 = value;
		Il2CppCodeGenWriteBarrier((&____byref_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t4067337784_marshaled_pinvoke
{
	int32_t* ____byref_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t4067337784_marshaled_com
{
	int32_t* ____byref_0;
};
#endif // PARAMETERMODIFIER_T4067337784_H
#ifndef COMPILATIONRELAXATIONSATTRIBUTE_T310145768_H
#define COMPILATIONRELAXATIONSATTRIBUTE_T310145768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct  CompilationRelaxationsAttribute_t310145768  : public Attribute_t1661048433
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::relax
	int32_t ___relax_0;

public:
	inline static int32_t get_offset_of_relax_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t310145768, ___relax_0)); }
	inline int32_t get_relax_0() const { return ___relax_0; }
	inline int32_t* get_address_of_relax_0() { return &___relax_0; }
	inline void set_relax_0(int32_t value)
	{
		___relax_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILATIONRELAXATIONSATTRIBUTE_T310145768_H
#ifndef LABEL_T2973667320_H
#define LABEL_T2973667320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.Label
struct  Label_t2973667320 
{
public:
	// System.Int32 System.Reflection.Emit.Label::label
	int32_t ___label_0;

public:
	inline static int32_t get_offset_of_label_0() { return static_cast<int32_t>(offsetof(Label_t2973667320, ___label_0)); }
	inline int32_t get_label_0() const { return ___label_0; }
	inline int32_t* get_address_of_label_0() { return &___label_0; }
	inline void set_label_0(int32_t value)
	{
		___label_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABEL_T2973667320_H
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
#ifndef SYSTEMEXCEPTION_T2262094144_H
#define SYSTEMEXCEPTION_T2262094144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t2262094144  : public Exception_t3198312832
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T2262094144_H
#ifndef LOCALBUILDER_T2223697350_H
#define LOCALBUILDER_T2223697350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.LocalBuilder
struct  LocalBuilder_t2223697350  : public LocalVariableInfo_t1270942175
{
public:
	// System.Reflection.Emit.ILGenerator System.Reflection.Emit.LocalBuilder::ilgen
	ILGenerator_t1598022474 * ___ilgen_3;

public:
	inline static int32_t get_offset_of_ilgen_3() { return static_cast<int32_t>(offsetof(LocalBuilder_t2223697350, ___ilgen_3)); }
	inline ILGenerator_t1598022474 * get_ilgen_3() const { return ___ilgen_3; }
	inline ILGenerator_t1598022474 ** get_address_of_ilgen_3() { return &___ilgen_3; }
	inline void set_ilgen_3(ILGenerator_t1598022474 * value)
	{
		___ilgen_3 = value;
		Il2CppCodeGenWriteBarrier((&___ilgen_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALBUILDER_T2223697350_H
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
#ifndef OPCODE_T171716939_H
#define OPCODE_T171716939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.OpCode
struct  OpCode_t171716939 
{
public:
	// System.Byte System.Reflection.Emit.OpCode::op1
	uint8_t ___op1_0;
	// System.Byte System.Reflection.Emit.OpCode::op2
	uint8_t ___op2_1;
	// System.Byte System.Reflection.Emit.OpCode::push
	uint8_t ___push_2;
	// System.Byte System.Reflection.Emit.OpCode::pop
	uint8_t ___pop_3;
	// System.Byte System.Reflection.Emit.OpCode::size
	uint8_t ___size_4;
	// System.Byte System.Reflection.Emit.OpCode::type
	uint8_t ___type_5;
	// System.Byte System.Reflection.Emit.OpCode::args
	uint8_t ___args_6;
	// System.Byte System.Reflection.Emit.OpCode::flow
	uint8_t ___flow_7;

public:
	inline static int32_t get_offset_of_op1_0() { return static_cast<int32_t>(offsetof(OpCode_t171716939, ___op1_0)); }
	inline uint8_t get_op1_0() const { return ___op1_0; }
	inline uint8_t* get_address_of_op1_0() { return &___op1_0; }
	inline void set_op1_0(uint8_t value)
	{
		___op1_0 = value;
	}

	inline static int32_t get_offset_of_op2_1() { return static_cast<int32_t>(offsetof(OpCode_t171716939, ___op2_1)); }
	inline uint8_t get_op2_1() const { return ___op2_1; }
	inline uint8_t* get_address_of_op2_1() { return &___op2_1; }
	inline void set_op2_1(uint8_t value)
	{
		___op2_1 = value;
	}

	inline static int32_t get_offset_of_push_2() { return static_cast<int32_t>(offsetof(OpCode_t171716939, ___push_2)); }
	inline uint8_t get_push_2() const { return ___push_2; }
	inline uint8_t* get_address_of_push_2() { return &___push_2; }
	inline void set_push_2(uint8_t value)
	{
		___push_2 = value;
	}

	inline static int32_t get_offset_of_pop_3() { return static_cast<int32_t>(offsetof(OpCode_t171716939, ___pop_3)); }
	inline uint8_t get_pop_3() const { return ___pop_3; }
	inline uint8_t* get_address_of_pop_3() { return &___pop_3; }
	inline void set_pop_3(uint8_t value)
	{
		___pop_3 = value;
	}

	inline static int32_t get_offset_of_size_4() { return static_cast<int32_t>(offsetof(OpCode_t171716939, ___size_4)); }
	inline uint8_t get_size_4() const { return ___size_4; }
	inline uint8_t* get_address_of_size_4() { return &___size_4; }
	inline void set_size_4(uint8_t value)
	{
		___size_4 = value;
	}

	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(OpCode_t171716939, ___type_5)); }
	inline uint8_t get_type_5() const { return ___type_5; }
	inline uint8_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(uint8_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_args_6() { return static_cast<int32_t>(offsetof(OpCode_t171716939, ___args_6)); }
	inline uint8_t get_args_6() const { return ___args_6; }
	inline uint8_t* get_address_of_args_6() { return &___args_6; }
	inline void set_args_6(uint8_t value)
	{
		___args_6 = value;
	}

	inline static int32_t get_offset_of_flow_7() { return static_cast<int32_t>(offsetof(OpCode_t171716939, ___flow_7)); }
	inline uint8_t get_flow_7() const { return ___flow_7; }
	inline uint8_t* get_address_of_flow_7() { return &___flow_7; }
	inline void set_flow_7(uint8_t value)
	{
		___flow_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCODE_T171716939_H
#ifndef ENUM_T1022076835_H
#define ENUM_T1022076835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1022076835  : public ValueType_t3696140014
{
public:

public:
};

struct Enum_t1022076835_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2718253689* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1022076835_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2718253689* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2718253689** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2718253689* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1022076835_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1022076835_marshaled_com
{
};
#endif // ENUM_T1022076835_H
#ifndef ASSEMBLYFILEVERSIONATTRIBUTE_T2207005673_H
#define ASSEMBLYFILEVERSIONATTRIBUTE_T2207005673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyFileVersionAttribute
struct  AssemblyFileVersionAttribute_t2207005673  : public Attribute_t1661048433
{
public:
	// System.String System.Reflection.AssemblyFileVersionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyFileVersionAttribute_t2207005673, ___name_0)); }
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
#endif // ASSEMBLYFILEVERSIONATTRIBUTE_T2207005673_H
#ifndef RESOURCEINFO_T2987941937_H
#define RESOURCEINFO_T2987941937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceInfo
struct  ResourceInfo_t2987941937 
{
public:
	// System.Int64 System.Resources.ResourceReader/ResourceInfo::ValuePosition
	int64_t ___ValuePosition_0;
	// System.String System.Resources.ResourceReader/ResourceInfo::ResourceName
	String_t* ___ResourceName_1;
	// System.Int32 System.Resources.ResourceReader/ResourceInfo::TypeIndex
	int32_t ___TypeIndex_2;

public:
	inline static int32_t get_offset_of_ValuePosition_0() { return static_cast<int32_t>(offsetof(ResourceInfo_t2987941937, ___ValuePosition_0)); }
	inline int64_t get_ValuePosition_0() const { return ___ValuePosition_0; }
	inline int64_t* get_address_of_ValuePosition_0() { return &___ValuePosition_0; }
	inline void set_ValuePosition_0(int64_t value)
	{
		___ValuePosition_0 = value;
	}

	inline static int32_t get_offset_of_ResourceName_1() { return static_cast<int32_t>(offsetof(ResourceInfo_t2987941937, ___ResourceName_1)); }
	inline String_t* get_ResourceName_1() const { return ___ResourceName_1; }
	inline String_t** get_address_of_ResourceName_1() { return &___ResourceName_1; }
	inline void set_ResourceName_1(String_t* value)
	{
		___ResourceName_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_1), value);
	}

	inline static int32_t get_offset_of_TypeIndex_2() { return static_cast<int32_t>(offsetof(ResourceInfo_t2987941937, ___TypeIndex_2)); }
	inline int32_t get_TypeIndex_2() const { return ___TypeIndex_2; }
	inline int32_t* get_address_of_TypeIndex_2() { return &___TypeIndex_2; }
	inline void set_TypeIndex_2(int32_t value)
	{
		___TypeIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t2987941937_marshaled_pinvoke
{
	int64_t ___ValuePosition_0;
	char* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t2987941937_marshaled_com
{
	int64_t ___ValuePosition_0;
	Il2CppChar* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
#endif // RESOURCEINFO_T2987941937_H
#ifndef ASSEMBLYCOPYRIGHTATTRIBUTE_T2842406235_H
#define ASSEMBLYCOPYRIGHTATTRIBUTE_T2842406235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCopyrightAttribute
struct  AssemblyCopyrightAttribute_t2842406235  : public Attribute_t1661048433
{
public:
	// System.String System.Reflection.AssemblyCopyrightAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyCopyrightAttribute_t2842406235, ___name_0)); }
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
#endif // ASSEMBLYCOPYRIGHTATTRIBUTE_T2842406235_H
#ifndef ASSEMBLYDEFAULTALIASATTRIBUTE_T1498533740_H
#define ASSEMBLYDEFAULTALIASATTRIBUTE_T1498533740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDefaultAliasAttribute
struct  AssemblyDefaultAliasAttribute_t1498533740  : public Attribute_t1661048433
{
public:
	// System.String System.Reflection.AssemblyDefaultAliasAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyDefaultAliasAttribute_t1498533740, ___name_0)); }
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
#endif // ASSEMBLYDEFAULTALIASATTRIBUTE_T1498533740_H
#ifndef DEFAULT_T739737702_H
#define DEFAULT_T739737702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder/Default
struct  Default_t739737702  : public Binder_t886820729
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULT_T739737702_H
#ifndef ASSEMBLYDELAYSIGNATTRIBUTE_T2982835626_H
#define ASSEMBLYDELAYSIGNATTRIBUTE_T2982835626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDelaySignAttribute
struct  AssemblyDelaySignAttribute_t2982835626  : public Attribute_t1661048433
{
public:
	// System.Boolean System.Reflection.AssemblyDelaySignAttribute::delay
	bool ___delay_0;

public:
	inline static int32_t get_offset_of_delay_0() { return static_cast<int32_t>(offsetof(AssemblyDelaySignAttribute_t2982835626, ___delay_0)); }
	inline bool get_delay_0() const { return ___delay_0; }
	inline bool* get_address_of_delay_0() { return &___delay_0; }
	inline void set_delay_0(bool value)
	{
		___delay_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDELAYSIGNATTRIBUTE_T2982835626_H
#ifndef ASSEMBLYDESCRIPTIONATTRIBUTE_T1055610871_H
#define ASSEMBLYDESCRIPTIONATTRIBUTE_T1055610871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDescriptionAttribute
struct  AssemblyDescriptionAttribute_t1055610871  : public Attribute_t1661048433
{
public:
	// System.String System.Reflection.AssemblyDescriptionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyDescriptionAttribute_t1055610871, ___name_0)); }
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
#endif // ASSEMBLYDESCRIPTIONATTRIBUTE_T1055610871_H
#ifndef RESOURCECACHEITEM_T238780263_H
#define RESOURCECACHEITEM_T238780263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceCacheItem
struct  ResourceCacheItem_t238780263 
{
public:
	// System.String System.Resources.ResourceReader/ResourceCacheItem::ResourceName
	String_t* ___ResourceName_0;
	// System.Object System.Resources.ResourceReader/ResourceCacheItem::ResourceValue
	RuntimeObject * ___ResourceValue_1;

public:
	inline static int32_t get_offset_of_ResourceName_0() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t238780263, ___ResourceName_0)); }
	inline String_t* get_ResourceName_0() const { return ___ResourceName_0; }
	inline String_t** get_address_of_ResourceName_0() { return &___ResourceName_0; }
	inline void set_ResourceName_0(String_t* value)
	{
		___ResourceName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_0), value);
	}

	inline static int32_t get_offset_of_ResourceValue_1() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t238780263, ___ResourceValue_1)); }
	inline RuntimeObject * get_ResourceValue_1() const { return ___ResourceValue_1; }
	inline RuntimeObject ** get_address_of_ResourceValue_1() { return &___ResourceValue_1; }
	inline void set_ResourceValue_1(RuntimeObject * value)
	{
		___ResourceValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t238780263_marshaled_pinvoke
{
	char* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t238780263_marshaled_com
{
	Il2CppChar* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
#endif // RESOURCECACHEITEM_T238780263_H
#ifndef ASSEMBLYCONFIGURATIONATTRIBUTE_T1185838799_H
#define ASSEMBLYCONFIGURATIONATTRIBUTE_T1185838799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyConfigurationAttribute
struct  AssemblyConfigurationAttribute_t1185838799  : public Attribute_t1661048433
{
public:
	// System.String System.Reflection.AssemblyConfigurationAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyConfigurationAttribute_t1185838799, ___name_0)); }
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
#endif // ASSEMBLYCONFIGURATIONATTRIBUTE_T1185838799_H
#ifndef ASSEMBLYCOMPANYATTRIBUTE_T3282172571_H
#define ASSEMBLYCOMPANYATTRIBUTE_T3282172571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCompanyAttribute
struct  AssemblyCompanyAttribute_t3282172571  : public Attribute_t1661048433
{
public:
	// System.String System.Reflection.AssemblyCompanyAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyCompanyAttribute_t3282172571, ___name_0)); }
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
#endif // ASSEMBLYCOMPANYATTRIBUTE_T3282172571_H
#ifndef ASSEMBLYKEYFILEATTRIBUTE_T3002270162_H
#define ASSEMBLYKEYFILEATTRIBUTE_T3002270162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyKeyFileAttribute
struct  AssemblyKeyFileAttribute_t3002270162  : public Attribute_t1661048433
{
public:
	// System.String System.Reflection.AssemblyKeyFileAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyKeyFileAttribute_t3002270162, ___name_0)); }
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
#endif // ASSEMBLYKEYFILEATTRIBUTE_T3002270162_H
#ifndef VOID_T2043929967_H
#define VOID_T2043929967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t2043929967 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T2043929967_H
#ifndef ASSEMBLYPRODUCTATTRIBUTE_T74349939_H
#define ASSEMBLYPRODUCTATTRIBUTE_T74349939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyProductAttribute
struct  AssemblyProductAttribute_t74349939  : public Attribute_t1661048433
{
public:
	// System.String System.Reflection.AssemblyProductAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyProductAttribute_t74349939, ___name_0)); }
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
#endif // ASSEMBLYPRODUCTATTRIBUTE_T74349939_H
#ifndef ASSEMBLYTITLEATTRIBUTE_T1900193295_H
#define ASSEMBLYTITLEATTRIBUTE_T1900193295_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyTitleAttribute
struct  AssemblyTitleAttribute_t1900193295  : public Attribute_t1661048433
{
public:
	// System.String System.Reflection.AssemblyTitleAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyTitleAttribute_t1900193295, ___name_0)); }
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
#endif // ASSEMBLYTITLEATTRIBUTE_T1900193295_H
#ifndef ASSEMBLYTRADEMARKATTRIBUTE_T1832460252_H
#define ASSEMBLYTRADEMARKATTRIBUTE_T1832460252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyTrademarkAttribute
struct  AssemblyTrademarkAttribute_t1832460252  : public Attribute_t1661048433
{
public:
	// System.String System.Reflection.AssemblyTrademarkAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyTrademarkAttribute_t1832460252, ___name_0)); }
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
#endif // ASSEMBLYTRADEMARKATTRIBUTE_T1832460252_H
#ifndef SATELLITECONTRACTVERSIONATTRIBUTE_T2005723103_H
#define SATELLITECONTRACTVERSIONATTRIBUTE_T2005723103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.SatelliteContractVersionAttribute
struct  SatelliteContractVersionAttribute_t2005723103  : public Attribute_t1661048433
{
public:
	// System.Version System.Resources.SatelliteContractVersionAttribute::ver
	Version_t3179844488 * ___ver_0;

public:
	inline static int32_t get_offset_of_ver_0() { return static_cast<int32_t>(offsetof(SatelliteContractVersionAttribute_t2005723103, ___ver_0)); }
	inline Version_t3179844488 * get_ver_0() const { return ___ver_0; }
	inline Version_t3179844488 ** get_address_of_ver_0() { return &___ver_0; }
	inline void set_ver_0(Version_t3179844488 * value)
	{
		___ver_0 = value;
		Il2CppCodeGenWriteBarrier((&___ver_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SATELLITECONTRACTVERSIONATTRIBUTE_T2005723103_H
#ifndef LABELFIXUP_T1062723668_H
#define LABELFIXUP_T1062723668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILGenerator/LabelFixup
struct  LabelFixup_t1062723668 
{
public:
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelFixup::offset
	int32_t ___offset_0;
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelFixup::pos
	int32_t ___pos_1;
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelFixup::label_idx
	int32_t ___label_idx_2;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(LabelFixup_t1062723668, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(LabelFixup_t1062723668, ___pos_1)); }
	inline int32_t get_pos_1() const { return ___pos_1; }
	inline int32_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(int32_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_label_idx_2() { return static_cast<int32_t>(offsetof(LabelFixup_t1062723668, ___label_idx_2)); }
	inline int32_t get_label_idx_2() const { return ___label_idx_2; }
	inline int32_t* get_address_of_label_idx_2() { return &___label_idx_2; }
	inline void set_label_idx_2(int32_t value)
	{
		___label_idx_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABELFIXUP_T1062723668_H
#ifndef ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T3845070506_H
#define ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T3845070506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyInformationalVersionAttribute
struct  AssemblyInformationalVersionAttribute_t3845070506  : public Attribute_t1661048433
{
public:
	// System.String System.Reflection.AssemblyInformationalVersionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyInformationalVersionAttribute_t3845070506, ___name_0)); }
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
#endif // ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T3845070506_H
#ifndef PARAMETERATTRIBUTES_T2162507505_H
#define PARAMETERATTRIBUTES_T2162507505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t2162507505 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterAttributes_t2162507505, ___value___1)); }
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
#endif // PARAMETERATTRIBUTES_T2162507505_H
#ifndef PREDEFINEDRESOURCETYPE_T1512938623_H
#define PREDEFINEDRESOURCETYPE_T1512938623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.PredefinedResourceType
struct  PredefinedResourceType_t1512938623 
{
public:
	// System.Int32 System.Resources.PredefinedResourceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PredefinedResourceType_t1512938623, ___value___1)); }
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
#endif // PREDEFINEDRESOURCETYPE_T1512938623_H
#ifndef PROPERTYATTRIBUTES_T4204890147_H
#define PROPERTYATTRIBUTES_T4204890147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyAttributes
struct  PropertyAttributes_t4204890147 
{
public:
	// System.Int32 System.Reflection.PropertyAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PropertyAttributes_t4204890147, ___value___1)); }
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
#endif // PROPERTYATTRIBUTES_T4204890147_H
#ifndef PROCESSORARCHITECTURE_T1439328349_H
#define PROCESSORARCHITECTURE_T1439328349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ProcessorArchitecture
struct  ProcessorArchitecture_t1439328349 
{
public:
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProcessorArchitecture_t1439328349, ___value___1)); }
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
#endif // PROCESSORARCHITECTURE_T1439328349_H
#ifndef RESOURCEATTRIBUTES_T1527120123_H
#define RESOURCEATTRIBUTES_T1527120123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ResourceAttributes
struct  ResourceAttributes_t1527120123 
{
public:
	// System.Int32 System.Reflection.ResourceAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ResourceAttributes_t1527120123, ___value___1)); }
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
#endif // RESOURCEATTRIBUTES_T1527120123_H
#ifndef PINFO_T2668315481_H
#define PINFO_T2668315481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PInfo
struct  PInfo_t2668315481 
{
public:
	// System.Int32 System.Reflection.PInfo::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PInfo_t2668315481, ___value___1)); }
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
#endif // PINFO_T2668315481_H
#ifndef COMPILATIONRELAXATIONS_T1236319864_H
#define COMPILATIONRELAXATIONS_T1236319864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxations
struct  CompilationRelaxations_t1236319864 
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxations::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompilationRelaxations_t1236319864, ___value___1)); }
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
#endif // COMPILATIONRELAXATIONS_T1236319864_H
#ifndef OPCODES_T1901716662_H
#define OPCODES_T1901716662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.OpCodes
struct  OpCodes_t1901716662  : public RuntimeObject
{
public:

public:
};

struct OpCodes_t1901716662_StaticFields
{
public:
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Nop
	OpCode_t171716939  ___Nop_0;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Break
	OpCode_t171716939  ___Break_1;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_0
	OpCode_t171716939  ___Ldarg_0_2;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_1
	OpCode_t171716939  ___Ldarg_1_3;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_2
	OpCode_t171716939  ___Ldarg_2_4;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_3
	OpCode_t171716939  ___Ldarg_3_5;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_0
	OpCode_t171716939  ___Ldloc_0_6;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_1
	OpCode_t171716939  ___Ldloc_1_7;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_2
	OpCode_t171716939  ___Ldloc_2_8;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_3
	OpCode_t171716939  ___Ldloc_3_9;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_0
	OpCode_t171716939  ___Stloc_0_10;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_1
	OpCode_t171716939  ___Stloc_1_11;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_2
	OpCode_t171716939  ___Stloc_2_12;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_3
	OpCode_t171716939  ___Stloc_3_13;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_S
	OpCode_t171716939  ___Ldarg_S_14;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarga_S
	OpCode_t171716939  ___Ldarga_S_15;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Starg_S
	OpCode_t171716939  ___Starg_S_16;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_S
	OpCode_t171716939  ___Ldloc_S_17;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloca_S
	OpCode_t171716939  ___Ldloca_S_18;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_S
	OpCode_t171716939  ___Stloc_S_19;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldnull
	OpCode_t171716939  ___Ldnull_20;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_M1
	OpCode_t171716939  ___Ldc_I4_M1_21;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_0
	OpCode_t171716939  ___Ldc_I4_0_22;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_1
	OpCode_t171716939  ___Ldc_I4_1_23;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_2
	OpCode_t171716939  ___Ldc_I4_2_24;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_3
	OpCode_t171716939  ___Ldc_I4_3_25;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_4
	OpCode_t171716939  ___Ldc_I4_4_26;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_5
	OpCode_t171716939  ___Ldc_I4_5_27;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_6
	OpCode_t171716939  ___Ldc_I4_6_28;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_7
	OpCode_t171716939  ___Ldc_I4_7_29;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_8
	OpCode_t171716939  ___Ldc_I4_8_30;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_S
	OpCode_t171716939  ___Ldc_I4_S_31;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4
	OpCode_t171716939  ___Ldc_I4_32;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I8
	OpCode_t171716939  ___Ldc_I8_33;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_R4
	OpCode_t171716939  ___Ldc_R4_34;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_R8
	OpCode_t171716939  ___Ldc_R8_35;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Dup
	OpCode_t171716939  ___Dup_36;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Pop
	OpCode_t171716939  ___Pop_37;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Jmp
	OpCode_t171716939  ___Jmp_38;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Call
	OpCode_t171716939  ___Call_39;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Calli
	OpCode_t171716939  ___Calli_40;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ret
	OpCode_t171716939  ___Ret_41;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Br_S
	OpCode_t171716939  ___Br_S_42;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Brfalse_S
	OpCode_t171716939  ___Brfalse_S_43;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Brtrue_S
	OpCode_t171716939  ___Brtrue_S_44;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Beq_S
	OpCode_t171716939  ___Beq_S_45;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bge_S
	OpCode_t171716939  ___Bge_S_46;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bgt_S
	OpCode_t171716939  ___Bgt_S_47;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ble_S
	OpCode_t171716939  ___Ble_S_48;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Blt_S
	OpCode_t171716939  ___Blt_S_49;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bne_Un_S
	OpCode_t171716939  ___Bne_Un_S_50;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bge_Un_S
	OpCode_t171716939  ___Bge_Un_S_51;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bgt_Un_S
	OpCode_t171716939  ___Bgt_Un_S_52;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ble_Un_S
	OpCode_t171716939  ___Ble_Un_S_53;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Blt_Un_S
	OpCode_t171716939  ___Blt_Un_S_54;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Br
	OpCode_t171716939  ___Br_55;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Brfalse
	OpCode_t171716939  ___Brfalse_56;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Brtrue
	OpCode_t171716939  ___Brtrue_57;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Beq
	OpCode_t171716939  ___Beq_58;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bge
	OpCode_t171716939  ___Bge_59;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bgt
	OpCode_t171716939  ___Bgt_60;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ble
	OpCode_t171716939  ___Ble_61;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Blt
	OpCode_t171716939  ___Blt_62;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bne_Un
	OpCode_t171716939  ___Bne_Un_63;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bge_Un
	OpCode_t171716939  ___Bge_Un_64;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bgt_Un
	OpCode_t171716939  ___Bgt_Un_65;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ble_Un
	OpCode_t171716939  ___Ble_Un_66;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Blt_Un
	OpCode_t171716939  ___Blt_Un_67;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Switch
	OpCode_t171716939  ___Switch_68;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I1
	OpCode_t171716939  ___Ldind_I1_69;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_U1
	OpCode_t171716939  ___Ldind_U1_70;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I2
	OpCode_t171716939  ___Ldind_I2_71;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_U2
	OpCode_t171716939  ___Ldind_U2_72;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I4
	OpCode_t171716939  ___Ldind_I4_73;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_U4
	OpCode_t171716939  ___Ldind_U4_74;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I8
	OpCode_t171716939  ___Ldind_I8_75;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I
	OpCode_t171716939  ___Ldind_I_76;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_R4
	OpCode_t171716939  ___Ldind_R4_77;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_R8
	OpCode_t171716939  ___Ldind_R8_78;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_Ref
	OpCode_t171716939  ___Ldind_Ref_79;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_Ref
	OpCode_t171716939  ___Stind_Ref_80;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I1
	OpCode_t171716939  ___Stind_I1_81;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I2
	OpCode_t171716939  ___Stind_I2_82;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I4
	OpCode_t171716939  ___Stind_I4_83;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I8
	OpCode_t171716939  ___Stind_I8_84;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_R4
	OpCode_t171716939  ___Stind_R4_85;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_R8
	OpCode_t171716939  ___Stind_R8_86;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Add
	OpCode_t171716939  ___Add_87;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Sub
	OpCode_t171716939  ___Sub_88;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Mul
	OpCode_t171716939  ___Mul_89;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Div
	OpCode_t171716939  ___Div_90;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Div_Un
	OpCode_t171716939  ___Div_Un_91;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Rem
	OpCode_t171716939  ___Rem_92;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Rem_Un
	OpCode_t171716939  ___Rem_Un_93;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::And
	OpCode_t171716939  ___And_94;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Or
	OpCode_t171716939  ___Or_95;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Xor
	OpCode_t171716939  ___Xor_96;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Shl
	OpCode_t171716939  ___Shl_97;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Shr
	OpCode_t171716939  ___Shr_98;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Shr_Un
	OpCode_t171716939  ___Shr_Un_99;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Neg
	OpCode_t171716939  ___Neg_100;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Not
	OpCode_t171716939  ___Not_101;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I1
	OpCode_t171716939  ___Conv_I1_102;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I2
	OpCode_t171716939  ___Conv_I2_103;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I4
	OpCode_t171716939  ___Conv_I4_104;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I8
	OpCode_t171716939  ___Conv_I8_105;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_R4
	OpCode_t171716939  ___Conv_R4_106;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_R8
	OpCode_t171716939  ___Conv_R8_107;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U4
	OpCode_t171716939  ___Conv_U4_108;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U8
	OpCode_t171716939  ___Conv_U8_109;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Callvirt
	OpCode_t171716939  ___Callvirt_110;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Cpobj
	OpCode_t171716939  ___Cpobj_111;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldobj
	OpCode_t171716939  ___Ldobj_112;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldstr
	OpCode_t171716939  ___Ldstr_113;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Newobj
	OpCode_t171716939  ___Newobj_114;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Castclass
	OpCode_t171716939  ___Castclass_115;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Isinst
	OpCode_t171716939  ___Isinst_116;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_R_Un
	OpCode_t171716939  ___Conv_R_Un_117;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Unbox
	OpCode_t171716939  ___Unbox_118;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Throw
	OpCode_t171716939  ___Throw_119;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldfld
	OpCode_t171716939  ___Ldfld_120;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldflda
	OpCode_t171716939  ___Ldflda_121;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stfld
	OpCode_t171716939  ___Stfld_122;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldsfld
	OpCode_t171716939  ___Ldsfld_123;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldsflda
	OpCode_t171716939  ___Ldsflda_124;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stsfld
	OpCode_t171716939  ___Stsfld_125;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stobj
	OpCode_t171716939  ___Stobj_126;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I1_Un
	OpCode_t171716939  ___Conv_Ovf_I1_Un_127;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I2_Un
	OpCode_t171716939  ___Conv_Ovf_I2_Un_128;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I4_Un
	OpCode_t171716939  ___Conv_Ovf_I4_Un_129;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I8_Un
	OpCode_t171716939  ___Conv_Ovf_I8_Un_130;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U1_Un
	OpCode_t171716939  ___Conv_Ovf_U1_Un_131;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U2_Un
	OpCode_t171716939  ___Conv_Ovf_U2_Un_132;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U4_Un
	OpCode_t171716939  ___Conv_Ovf_U4_Un_133;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U8_Un
	OpCode_t171716939  ___Conv_Ovf_U8_Un_134;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I_Un
	OpCode_t171716939  ___Conv_Ovf_I_Un_135;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U_Un
	OpCode_t171716939  ___Conv_Ovf_U_Un_136;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Box
	OpCode_t171716939  ___Box_137;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Newarr
	OpCode_t171716939  ___Newarr_138;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldlen
	OpCode_t171716939  ___Ldlen_139;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelema
	OpCode_t171716939  ___Ldelema_140;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I1
	OpCode_t171716939  ___Ldelem_I1_141;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_U1
	OpCode_t171716939  ___Ldelem_U1_142;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I2
	OpCode_t171716939  ___Ldelem_I2_143;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_U2
	OpCode_t171716939  ___Ldelem_U2_144;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I4
	OpCode_t171716939  ___Ldelem_I4_145;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_U4
	OpCode_t171716939  ___Ldelem_U4_146;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I8
	OpCode_t171716939  ___Ldelem_I8_147;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I
	OpCode_t171716939  ___Ldelem_I_148;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_R4
	OpCode_t171716939  ___Ldelem_R4_149;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_R8
	OpCode_t171716939  ___Ldelem_R8_150;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_Ref
	OpCode_t171716939  ___Ldelem_Ref_151;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I
	OpCode_t171716939  ___Stelem_I_152;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I1
	OpCode_t171716939  ___Stelem_I1_153;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I2
	OpCode_t171716939  ___Stelem_I2_154;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I4
	OpCode_t171716939  ___Stelem_I4_155;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I8
	OpCode_t171716939  ___Stelem_I8_156;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_R4
	OpCode_t171716939  ___Stelem_R4_157;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_R8
	OpCode_t171716939  ___Stelem_R8_158;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_Ref
	OpCode_t171716939  ___Stelem_Ref_159;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem
	OpCode_t171716939  ___Ldelem_160;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem
	OpCode_t171716939  ___Stelem_161;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Unbox_Any
	OpCode_t171716939  ___Unbox_Any_162;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I1
	OpCode_t171716939  ___Conv_Ovf_I1_163;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U1
	OpCode_t171716939  ___Conv_Ovf_U1_164;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I2
	OpCode_t171716939  ___Conv_Ovf_I2_165;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U2
	OpCode_t171716939  ___Conv_Ovf_U2_166;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I4
	OpCode_t171716939  ___Conv_Ovf_I4_167;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U4
	OpCode_t171716939  ___Conv_Ovf_U4_168;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I8
	OpCode_t171716939  ___Conv_Ovf_I8_169;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U8
	OpCode_t171716939  ___Conv_Ovf_U8_170;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Refanyval
	OpCode_t171716939  ___Refanyval_171;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ckfinite
	OpCode_t171716939  ___Ckfinite_172;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Mkrefany
	OpCode_t171716939  ___Mkrefany_173;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldtoken
	OpCode_t171716939  ___Ldtoken_174;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U2
	OpCode_t171716939  ___Conv_U2_175;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U1
	OpCode_t171716939  ___Conv_U1_176;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I
	OpCode_t171716939  ___Conv_I_177;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I
	OpCode_t171716939  ___Conv_Ovf_I_178;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U
	OpCode_t171716939  ___Conv_Ovf_U_179;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Add_Ovf
	OpCode_t171716939  ___Add_Ovf_180;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Add_Ovf_Un
	OpCode_t171716939  ___Add_Ovf_Un_181;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Mul_Ovf
	OpCode_t171716939  ___Mul_Ovf_182;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Mul_Ovf_Un
	OpCode_t171716939  ___Mul_Ovf_Un_183;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Sub_Ovf
	OpCode_t171716939  ___Sub_Ovf_184;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Sub_Ovf_Un
	OpCode_t171716939  ___Sub_Ovf_Un_185;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Endfinally
	OpCode_t171716939  ___Endfinally_186;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Leave
	OpCode_t171716939  ___Leave_187;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Leave_S
	OpCode_t171716939  ___Leave_S_188;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I
	OpCode_t171716939  ___Stind_I_189;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U
	OpCode_t171716939  ___Conv_U_190;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix7
	OpCode_t171716939  ___Prefix7_191;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix6
	OpCode_t171716939  ___Prefix6_192;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix5
	OpCode_t171716939  ___Prefix5_193;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix4
	OpCode_t171716939  ___Prefix4_194;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix3
	OpCode_t171716939  ___Prefix3_195;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix2
	OpCode_t171716939  ___Prefix2_196;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix1
	OpCode_t171716939  ___Prefix1_197;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefixref
	OpCode_t171716939  ___Prefixref_198;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Arglist
	OpCode_t171716939  ___Arglist_199;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ceq
	OpCode_t171716939  ___Ceq_200;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Cgt
	OpCode_t171716939  ___Cgt_201;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Cgt_Un
	OpCode_t171716939  ___Cgt_Un_202;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Clt
	OpCode_t171716939  ___Clt_203;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Clt_Un
	OpCode_t171716939  ___Clt_Un_204;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldftn
	OpCode_t171716939  ___Ldftn_205;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldvirtftn
	OpCode_t171716939  ___Ldvirtftn_206;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg
	OpCode_t171716939  ___Ldarg_207;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarga
	OpCode_t171716939  ___Ldarga_208;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Starg
	OpCode_t171716939  ___Starg_209;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc
	OpCode_t171716939  ___Ldloc_210;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloca
	OpCode_t171716939  ___Ldloca_211;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc
	OpCode_t171716939  ___Stloc_212;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Localloc
	OpCode_t171716939  ___Localloc_213;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Endfilter
	OpCode_t171716939  ___Endfilter_214;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Unaligned
	OpCode_t171716939  ___Unaligned_215;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Volatile
	OpCode_t171716939  ___Volatile_216;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Tailcall
	OpCode_t171716939  ___Tailcall_217;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Initobj
	OpCode_t171716939  ___Initobj_218;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Constrained
	OpCode_t171716939  ___Constrained_219;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Cpblk
	OpCode_t171716939  ___Cpblk_220;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Initblk
	OpCode_t171716939  ___Initblk_221;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Rethrow
	OpCode_t171716939  ___Rethrow_222;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Sizeof
	OpCode_t171716939  ___Sizeof_223;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Refanytype
	OpCode_t171716939  ___Refanytype_224;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Readonly
	OpCode_t171716939  ___Readonly_225;

public:
	inline static int32_t get_offset_of_Nop_0() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Nop_0)); }
	inline OpCode_t171716939  get_Nop_0() const { return ___Nop_0; }
	inline OpCode_t171716939 * get_address_of_Nop_0() { return &___Nop_0; }
	inline void set_Nop_0(OpCode_t171716939  value)
	{
		___Nop_0 = value;
	}

	inline static int32_t get_offset_of_Break_1() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Break_1)); }
	inline OpCode_t171716939  get_Break_1() const { return ___Break_1; }
	inline OpCode_t171716939 * get_address_of_Break_1() { return &___Break_1; }
	inline void set_Break_1(OpCode_t171716939  value)
	{
		___Break_1 = value;
	}

	inline static int32_t get_offset_of_Ldarg_0_2() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldarg_0_2)); }
	inline OpCode_t171716939  get_Ldarg_0_2() const { return ___Ldarg_0_2; }
	inline OpCode_t171716939 * get_address_of_Ldarg_0_2() { return &___Ldarg_0_2; }
	inline void set_Ldarg_0_2(OpCode_t171716939  value)
	{
		___Ldarg_0_2 = value;
	}

	inline static int32_t get_offset_of_Ldarg_1_3() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldarg_1_3)); }
	inline OpCode_t171716939  get_Ldarg_1_3() const { return ___Ldarg_1_3; }
	inline OpCode_t171716939 * get_address_of_Ldarg_1_3() { return &___Ldarg_1_3; }
	inline void set_Ldarg_1_3(OpCode_t171716939  value)
	{
		___Ldarg_1_3 = value;
	}

	inline static int32_t get_offset_of_Ldarg_2_4() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldarg_2_4)); }
	inline OpCode_t171716939  get_Ldarg_2_4() const { return ___Ldarg_2_4; }
	inline OpCode_t171716939 * get_address_of_Ldarg_2_4() { return &___Ldarg_2_4; }
	inline void set_Ldarg_2_4(OpCode_t171716939  value)
	{
		___Ldarg_2_4 = value;
	}

	inline static int32_t get_offset_of_Ldarg_3_5() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldarg_3_5)); }
	inline OpCode_t171716939  get_Ldarg_3_5() const { return ___Ldarg_3_5; }
	inline OpCode_t171716939 * get_address_of_Ldarg_3_5() { return &___Ldarg_3_5; }
	inline void set_Ldarg_3_5(OpCode_t171716939  value)
	{
		___Ldarg_3_5 = value;
	}

	inline static int32_t get_offset_of_Ldloc_0_6() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldloc_0_6)); }
	inline OpCode_t171716939  get_Ldloc_0_6() const { return ___Ldloc_0_6; }
	inline OpCode_t171716939 * get_address_of_Ldloc_0_6() { return &___Ldloc_0_6; }
	inline void set_Ldloc_0_6(OpCode_t171716939  value)
	{
		___Ldloc_0_6 = value;
	}

	inline static int32_t get_offset_of_Ldloc_1_7() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldloc_1_7)); }
	inline OpCode_t171716939  get_Ldloc_1_7() const { return ___Ldloc_1_7; }
	inline OpCode_t171716939 * get_address_of_Ldloc_1_7() { return &___Ldloc_1_7; }
	inline void set_Ldloc_1_7(OpCode_t171716939  value)
	{
		___Ldloc_1_7 = value;
	}

	inline static int32_t get_offset_of_Ldloc_2_8() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldloc_2_8)); }
	inline OpCode_t171716939  get_Ldloc_2_8() const { return ___Ldloc_2_8; }
	inline OpCode_t171716939 * get_address_of_Ldloc_2_8() { return &___Ldloc_2_8; }
	inline void set_Ldloc_2_8(OpCode_t171716939  value)
	{
		___Ldloc_2_8 = value;
	}

	inline static int32_t get_offset_of_Ldloc_3_9() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldloc_3_9)); }
	inline OpCode_t171716939  get_Ldloc_3_9() const { return ___Ldloc_3_9; }
	inline OpCode_t171716939 * get_address_of_Ldloc_3_9() { return &___Ldloc_3_9; }
	inline void set_Ldloc_3_9(OpCode_t171716939  value)
	{
		___Ldloc_3_9 = value;
	}

	inline static int32_t get_offset_of_Stloc_0_10() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stloc_0_10)); }
	inline OpCode_t171716939  get_Stloc_0_10() const { return ___Stloc_0_10; }
	inline OpCode_t171716939 * get_address_of_Stloc_0_10() { return &___Stloc_0_10; }
	inline void set_Stloc_0_10(OpCode_t171716939  value)
	{
		___Stloc_0_10 = value;
	}

	inline static int32_t get_offset_of_Stloc_1_11() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stloc_1_11)); }
	inline OpCode_t171716939  get_Stloc_1_11() const { return ___Stloc_1_11; }
	inline OpCode_t171716939 * get_address_of_Stloc_1_11() { return &___Stloc_1_11; }
	inline void set_Stloc_1_11(OpCode_t171716939  value)
	{
		___Stloc_1_11 = value;
	}

	inline static int32_t get_offset_of_Stloc_2_12() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stloc_2_12)); }
	inline OpCode_t171716939  get_Stloc_2_12() const { return ___Stloc_2_12; }
	inline OpCode_t171716939 * get_address_of_Stloc_2_12() { return &___Stloc_2_12; }
	inline void set_Stloc_2_12(OpCode_t171716939  value)
	{
		___Stloc_2_12 = value;
	}

	inline static int32_t get_offset_of_Stloc_3_13() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stloc_3_13)); }
	inline OpCode_t171716939  get_Stloc_3_13() const { return ___Stloc_3_13; }
	inline OpCode_t171716939 * get_address_of_Stloc_3_13() { return &___Stloc_3_13; }
	inline void set_Stloc_3_13(OpCode_t171716939  value)
	{
		___Stloc_3_13 = value;
	}

	inline static int32_t get_offset_of_Ldarg_S_14() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldarg_S_14)); }
	inline OpCode_t171716939  get_Ldarg_S_14() const { return ___Ldarg_S_14; }
	inline OpCode_t171716939 * get_address_of_Ldarg_S_14() { return &___Ldarg_S_14; }
	inline void set_Ldarg_S_14(OpCode_t171716939  value)
	{
		___Ldarg_S_14 = value;
	}

	inline static int32_t get_offset_of_Ldarga_S_15() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldarga_S_15)); }
	inline OpCode_t171716939  get_Ldarga_S_15() const { return ___Ldarga_S_15; }
	inline OpCode_t171716939 * get_address_of_Ldarga_S_15() { return &___Ldarga_S_15; }
	inline void set_Ldarga_S_15(OpCode_t171716939  value)
	{
		___Ldarga_S_15 = value;
	}

	inline static int32_t get_offset_of_Starg_S_16() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Starg_S_16)); }
	inline OpCode_t171716939  get_Starg_S_16() const { return ___Starg_S_16; }
	inline OpCode_t171716939 * get_address_of_Starg_S_16() { return &___Starg_S_16; }
	inline void set_Starg_S_16(OpCode_t171716939  value)
	{
		___Starg_S_16 = value;
	}

	inline static int32_t get_offset_of_Ldloc_S_17() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldloc_S_17)); }
	inline OpCode_t171716939  get_Ldloc_S_17() const { return ___Ldloc_S_17; }
	inline OpCode_t171716939 * get_address_of_Ldloc_S_17() { return &___Ldloc_S_17; }
	inline void set_Ldloc_S_17(OpCode_t171716939  value)
	{
		___Ldloc_S_17 = value;
	}

	inline static int32_t get_offset_of_Ldloca_S_18() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldloca_S_18)); }
	inline OpCode_t171716939  get_Ldloca_S_18() const { return ___Ldloca_S_18; }
	inline OpCode_t171716939 * get_address_of_Ldloca_S_18() { return &___Ldloca_S_18; }
	inline void set_Ldloca_S_18(OpCode_t171716939  value)
	{
		___Ldloca_S_18 = value;
	}

	inline static int32_t get_offset_of_Stloc_S_19() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stloc_S_19)); }
	inline OpCode_t171716939  get_Stloc_S_19() const { return ___Stloc_S_19; }
	inline OpCode_t171716939 * get_address_of_Stloc_S_19() { return &___Stloc_S_19; }
	inline void set_Stloc_S_19(OpCode_t171716939  value)
	{
		___Stloc_S_19 = value;
	}

	inline static int32_t get_offset_of_Ldnull_20() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldnull_20)); }
	inline OpCode_t171716939  get_Ldnull_20() const { return ___Ldnull_20; }
	inline OpCode_t171716939 * get_address_of_Ldnull_20() { return &___Ldnull_20; }
	inline void set_Ldnull_20(OpCode_t171716939  value)
	{
		___Ldnull_20 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_M1_21() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldc_I4_M1_21)); }
	inline OpCode_t171716939  get_Ldc_I4_M1_21() const { return ___Ldc_I4_M1_21; }
	inline OpCode_t171716939 * get_address_of_Ldc_I4_M1_21() { return &___Ldc_I4_M1_21; }
	inline void set_Ldc_I4_M1_21(OpCode_t171716939  value)
	{
		___Ldc_I4_M1_21 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_0_22() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldc_I4_0_22)); }
	inline OpCode_t171716939  get_Ldc_I4_0_22() const { return ___Ldc_I4_0_22; }
	inline OpCode_t171716939 * get_address_of_Ldc_I4_0_22() { return &___Ldc_I4_0_22; }
	inline void set_Ldc_I4_0_22(OpCode_t171716939  value)
	{
		___Ldc_I4_0_22 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_1_23() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldc_I4_1_23)); }
	inline OpCode_t171716939  get_Ldc_I4_1_23() const { return ___Ldc_I4_1_23; }
	inline OpCode_t171716939 * get_address_of_Ldc_I4_1_23() { return &___Ldc_I4_1_23; }
	inline void set_Ldc_I4_1_23(OpCode_t171716939  value)
	{
		___Ldc_I4_1_23 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_2_24() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldc_I4_2_24)); }
	inline OpCode_t171716939  get_Ldc_I4_2_24() const { return ___Ldc_I4_2_24; }
	inline OpCode_t171716939 * get_address_of_Ldc_I4_2_24() { return &___Ldc_I4_2_24; }
	inline void set_Ldc_I4_2_24(OpCode_t171716939  value)
	{
		___Ldc_I4_2_24 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_3_25() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldc_I4_3_25)); }
	inline OpCode_t171716939  get_Ldc_I4_3_25() const { return ___Ldc_I4_3_25; }
	inline OpCode_t171716939 * get_address_of_Ldc_I4_3_25() { return &___Ldc_I4_3_25; }
	inline void set_Ldc_I4_3_25(OpCode_t171716939  value)
	{
		___Ldc_I4_3_25 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_4_26() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldc_I4_4_26)); }
	inline OpCode_t171716939  get_Ldc_I4_4_26() const { return ___Ldc_I4_4_26; }
	inline OpCode_t171716939 * get_address_of_Ldc_I4_4_26() { return &___Ldc_I4_4_26; }
	inline void set_Ldc_I4_4_26(OpCode_t171716939  value)
	{
		___Ldc_I4_4_26 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_5_27() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldc_I4_5_27)); }
	inline OpCode_t171716939  get_Ldc_I4_5_27() const { return ___Ldc_I4_5_27; }
	inline OpCode_t171716939 * get_address_of_Ldc_I4_5_27() { return &___Ldc_I4_5_27; }
	inline void set_Ldc_I4_5_27(OpCode_t171716939  value)
	{
		___Ldc_I4_5_27 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_6_28() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldc_I4_6_28)); }
	inline OpCode_t171716939  get_Ldc_I4_6_28() const { return ___Ldc_I4_6_28; }
	inline OpCode_t171716939 * get_address_of_Ldc_I4_6_28() { return &___Ldc_I4_6_28; }
	inline void set_Ldc_I4_6_28(OpCode_t171716939  value)
	{
		___Ldc_I4_6_28 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_7_29() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldc_I4_7_29)); }
	inline OpCode_t171716939  get_Ldc_I4_7_29() const { return ___Ldc_I4_7_29; }
	inline OpCode_t171716939 * get_address_of_Ldc_I4_7_29() { return &___Ldc_I4_7_29; }
	inline void set_Ldc_I4_7_29(OpCode_t171716939  value)
	{
		___Ldc_I4_7_29 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_8_30() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldc_I4_8_30)); }
	inline OpCode_t171716939  get_Ldc_I4_8_30() const { return ___Ldc_I4_8_30; }
	inline OpCode_t171716939 * get_address_of_Ldc_I4_8_30() { return &___Ldc_I4_8_30; }
	inline void set_Ldc_I4_8_30(OpCode_t171716939  value)
	{
		___Ldc_I4_8_30 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_S_31() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldc_I4_S_31)); }
	inline OpCode_t171716939  get_Ldc_I4_S_31() const { return ___Ldc_I4_S_31; }
	inline OpCode_t171716939 * get_address_of_Ldc_I4_S_31() { return &___Ldc_I4_S_31; }
	inline void set_Ldc_I4_S_31(OpCode_t171716939  value)
	{
		___Ldc_I4_S_31 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_32() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldc_I4_32)); }
	inline OpCode_t171716939  get_Ldc_I4_32() const { return ___Ldc_I4_32; }
	inline OpCode_t171716939 * get_address_of_Ldc_I4_32() { return &___Ldc_I4_32; }
	inline void set_Ldc_I4_32(OpCode_t171716939  value)
	{
		___Ldc_I4_32 = value;
	}

	inline static int32_t get_offset_of_Ldc_I8_33() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldc_I8_33)); }
	inline OpCode_t171716939  get_Ldc_I8_33() const { return ___Ldc_I8_33; }
	inline OpCode_t171716939 * get_address_of_Ldc_I8_33() { return &___Ldc_I8_33; }
	inline void set_Ldc_I8_33(OpCode_t171716939  value)
	{
		___Ldc_I8_33 = value;
	}

	inline static int32_t get_offset_of_Ldc_R4_34() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldc_R4_34)); }
	inline OpCode_t171716939  get_Ldc_R4_34() const { return ___Ldc_R4_34; }
	inline OpCode_t171716939 * get_address_of_Ldc_R4_34() { return &___Ldc_R4_34; }
	inline void set_Ldc_R4_34(OpCode_t171716939  value)
	{
		___Ldc_R4_34 = value;
	}

	inline static int32_t get_offset_of_Ldc_R8_35() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldc_R8_35)); }
	inline OpCode_t171716939  get_Ldc_R8_35() const { return ___Ldc_R8_35; }
	inline OpCode_t171716939 * get_address_of_Ldc_R8_35() { return &___Ldc_R8_35; }
	inline void set_Ldc_R8_35(OpCode_t171716939  value)
	{
		___Ldc_R8_35 = value;
	}

	inline static int32_t get_offset_of_Dup_36() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Dup_36)); }
	inline OpCode_t171716939  get_Dup_36() const { return ___Dup_36; }
	inline OpCode_t171716939 * get_address_of_Dup_36() { return &___Dup_36; }
	inline void set_Dup_36(OpCode_t171716939  value)
	{
		___Dup_36 = value;
	}

	inline static int32_t get_offset_of_Pop_37() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Pop_37)); }
	inline OpCode_t171716939  get_Pop_37() const { return ___Pop_37; }
	inline OpCode_t171716939 * get_address_of_Pop_37() { return &___Pop_37; }
	inline void set_Pop_37(OpCode_t171716939  value)
	{
		___Pop_37 = value;
	}

	inline static int32_t get_offset_of_Jmp_38() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Jmp_38)); }
	inline OpCode_t171716939  get_Jmp_38() const { return ___Jmp_38; }
	inline OpCode_t171716939 * get_address_of_Jmp_38() { return &___Jmp_38; }
	inline void set_Jmp_38(OpCode_t171716939  value)
	{
		___Jmp_38 = value;
	}

	inline static int32_t get_offset_of_Call_39() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Call_39)); }
	inline OpCode_t171716939  get_Call_39() const { return ___Call_39; }
	inline OpCode_t171716939 * get_address_of_Call_39() { return &___Call_39; }
	inline void set_Call_39(OpCode_t171716939  value)
	{
		___Call_39 = value;
	}

	inline static int32_t get_offset_of_Calli_40() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Calli_40)); }
	inline OpCode_t171716939  get_Calli_40() const { return ___Calli_40; }
	inline OpCode_t171716939 * get_address_of_Calli_40() { return &___Calli_40; }
	inline void set_Calli_40(OpCode_t171716939  value)
	{
		___Calli_40 = value;
	}

	inline static int32_t get_offset_of_Ret_41() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ret_41)); }
	inline OpCode_t171716939  get_Ret_41() const { return ___Ret_41; }
	inline OpCode_t171716939 * get_address_of_Ret_41() { return &___Ret_41; }
	inline void set_Ret_41(OpCode_t171716939  value)
	{
		___Ret_41 = value;
	}

	inline static int32_t get_offset_of_Br_S_42() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Br_S_42)); }
	inline OpCode_t171716939  get_Br_S_42() const { return ___Br_S_42; }
	inline OpCode_t171716939 * get_address_of_Br_S_42() { return &___Br_S_42; }
	inline void set_Br_S_42(OpCode_t171716939  value)
	{
		___Br_S_42 = value;
	}

	inline static int32_t get_offset_of_Brfalse_S_43() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Brfalse_S_43)); }
	inline OpCode_t171716939  get_Brfalse_S_43() const { return ___Brfalse_S_43; }
	inline OpCode_t171716939 * get_address_of_Brfalse_S_43() { return &___Brfalse_S_43; }
	inline void set_Brfalse_S_43(OpCode_t171716939  value)
	{
		___Brfalse_S_43 = value;
	}

	inline static int32_t get_offset_of_Brtrue_S_44() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Brtrue_S_44)); }
	inline OpCode_t171716939  get_Brtrue_S_44() const { return ___Brtrue_S_44; }
	inline OpCode_t171716939 * get_address_of_Brtrue_S_44() { return &___Brtrue_S_44; }
	inline void set_Brtrue_S_44(OpCode_t171716939  value)
	{
		___Brtrue_S_44 = value;
	}

	inline static int32_t get_offset_of_Beq_S_45() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Beq_S_45)); }
	inline OpCode_t171716939  get_Beq_S_45() const { return ___Beq_S_45; }
	inline OpCode_t171716939 * get_address_of_Beq_S_45() { return &___Beq_S_45; }
	inline void set_Beq_S_45(OpCode_t171716939  value)
	{
		___Beq_S_45 = value;
	}

	inline static int32_t get_offset_of_Bge_S_46() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Bge_S_46)); }
	inline OpCode_t171716939  get_Bge_S_46() const { return ___Bge_S_46; }
	inline OpCode_t171716939 * get_address_of_Bge_S_46() { return &___Bge_S_46; }
	inline void set_Bge_S_46(OpCode_t171716939  value)
	{
		___Bge_S_46 = value;
	}

	inline static int32_t get_offset_of_Bgt_S_47() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Bgt_S_47)); }
	inline OpCode_t171716939  get_Bgt_S_47() const { return ___Bgt_S_47; }
	inline OpCode_t171716939 * get_address_of_Bgt_S_47() { return &___Bgt_S_47; }
	inline void set_Bgt_S_47(OpCode_t171716939  value)
	{
		___Bgt_S_47 = value;
	}

	inline static int32_t get_offset_of_Ble_S_48() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ble_S_48)); }
	inline OpCode_t171716939  get_Ble_S_48() const { return ___Ble_S_48; }
	inline OpCode_t171716939 * get_address_of_Ble_S_48() { return &___Ble_S_48; }
	inline void set_Ble_S_48(OpCode_t171716939  value)
	{
		___Ble_S_48 = value;
	}

	inline static int32_t get_offset_of_Blt_S_49() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Blt_S_49)); }
	inline OpCode_t171716939  get_Blt_S_49() const { return ___Blt_S_49; }
	inline OpCode_t171716939 * get_address_of_Blt_S_49() { return &___Blt_S_49; }
	inline void set_Blt_S_49(OpCode_t171716939  value)
	{
		___Blt_S_49 = value;
	}

	inline static int32_t get_offset_of_Bne_Un_S_50() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Bne_Un_S_50)); }
	inline OpCode_t171716939  get_Bne_Un_S_50() const { return ___Bne_Un_S_50; }
	inline OpCode_t171716939 * get_address_of_Bne_Un_S_50() { return &___Bne_Un_S_50; }
	inline void set_Bne_Un_S_50(OpCode_t171716939  value)
	{
		___Bne_Un_S_50 = value;
	}

	inline static int32_t get_offset_of_Bge_Un_S_51() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Bge_Un_S_51)); }
	inline OpCode_t171716939  get_Bge_Un_S_51() const { return ___Bge_Un_S_51; }
	inline OpCode_t171716939 * get_address_of_Bge_Un_S_51() { return &___Bge_Un_S_51; }
	inline void set_Bge_Un_S_51(OpCode_t171716939  value)
	{
		___Bge_Un_S_51 = value;
	}

	inline static int32_t get_offset_of_Bgt_Un_S_52() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Bgt_Un_S_52)); }
	inline OpCode_t171716939  get_Bgt_Un_S_52() const { return ___Bgt_Un_S_52; }
	inline OpCode_t171716939 * get_address_of_Bgt_Un_S_52() { return &___Bgt_Un_S_52; }
	inline void set_Bgt_Un_S_52(OpCode_t171716939  value)
	{
		___Bgt_Un_S_52 = value;
	}

	inline static int32_t get_offset_of_Ble_Un_S_53() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ble_Un_S_53)); }
	inline OpCode_t171716939  get_Ble_Un_S_53() const { return ___Ble_Un_S_53; }
	inline OpCode_t171716939 * get_address_of_Ble_Un_S_53() { return &___Ble_Un_S_53; }
	inline void set_Ble_Un_S_53(OpCode_t171716939  value)
	{
		___Ble_Un_S_53 = value;
	}

	inline static int32_t get_offset_of_Blt_Un_S_54() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Blt_Un_S_54)); }
	inline OpCode_t171716939  get_Blt_Un_S_54() const { return ___Blt_Un_S_54; }
	inline OpCode_t171716939 * get_address_of_Blt_Un_S_54() { return &___Blt_Un_S_54; }
	inline void set_Blt_Un_S_54(OpCode_t171716939  value)
	{
		___Blt_Un_S_54 = value;
	}

	inline static int32_t get_offset_of_Br_55() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Br_55)); }
	inline OpCode_t171716939  get_Br_55() const { return ___Br_55; }
	inline OpCode_t171716939 * get_address_of_Br_55() { return &___Br_55; }
	inline void set_Br_55(OpCode_t171716939  value)
	{
		___Br_55 = value;
	}

	inline static int32_t get_offset_of_Brfalse_56() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Brfalse_56)); }
	inline OpCode_t171716939  get_Brfalse_56() const { return ___Brfalse_56; }
	inline OpCode_t171716939 * get_address_of_Brfalse_56() { return &___Brfalse_56; }
	inline void set_Brfalse_56(OpCode_t171716939  value)
	{
		___Brfalse_56 = value;
	}

	inline static int32_t get_offset_of_Brtrue_57() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Brtrue_57)); }
	inline OpCode_t171716939  get_Brtrue_57() const { return ___Brtrue_57; }
	inline OpCode_t171716939 * get_address_of_Brtrue_57() { return &___Brtrue_57; }
	inline void set_Brtrue_57(OpCode_t171716939  value)
	{
		___Brtrue_57 = value;
	}

	inline static int32_t get_offset_of_Beq_58() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Beq_58)); }
	inline OpCode_t171716939  get_Beq_58() const { return ___Beq_58; }
	inline OpCode_t171716939 * get_address_of_Beq_58() { return &___Beq_58; }
	inline void set_Beq_58(OpCode_t171716939  value)
	{
		___Beq_58 = value;
	}

	inline static int32_t get_offset_of_Bge_59() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Bge_59)); }
	inline OpCode_t171716939  get_Bge_59() const { return ___Bge_59; }
	inline OpCode_t171716939 * get_address_of_Bge_59() { return &___Bge_59; }
	inline void set_Bge_59(OpCode_t171716939  value)
	{
		___Bge_59 = value;
	}

	inline static int32_t get_offset_of_Bgt_60() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Bgt_60)); }
	inline OpCode_t171716939  get_Bgt_60() const { return ___Bgt_60; }
	inline OpCode_t171716939 * get_address_of_Bgt_60() { return &___Bgt_60; }
	inline void set_Bgt_60(OpCode_t171716939  value)
	{
		___Bgt_60 = value;
	}

	inline static int32_t get_offset_of_Ble_61() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ble_61)); }
	inline OpCode_t171716939  get_Ble_61() const { return ___Ble_61; }
	inline OpCode_t171716939 * get_address_of_Ble_61() { return &___Ble_61; }
	inline void set_Ble_61(OpCode_t171716939  value)
	{
		___Ble_61 = value;
	}

	inline static int32_t get_offset_of_Blt_62() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Blt_62)); }
	inline OpCode_t171716939  get_Blt_62() const { return ___Blt_62; }
	inline OpCode_t171716939 * get_address_of_Blt_62() { return &___Blt_62; }
	inline void set_Blt_62(OpCode_t171716939  value)
	{
		___Blt_62 = value;
	}

	inline static int32_t get_offset_of_Bne_Un_63() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Bne_Un_63)); }
	inline OpCode_t171716939  get_Bne_Un_63() const { return ___Bne_Un_63; }
	inline OpCode_t171716939 * get_address_of_Bne_Un_63() { return &___Bne_Un_63; }
	inline void set_Bne_Un_63(OpCode_t171716939  value)
	{
		___Bne_Un_63 = value;
	}

	inline static int32_t get_offset_of_Bge_Un_64() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Bge_Un_64)); }
	inline OpCode_t171716939  get_Bge_Un_64() const { return ___Bge_Un_64; }
	inline OpCode_t171716939 * get_address_of_Bge_Un_64() { return &___Bge_Un_64; }
	inline void set_Bge_Un_64(OpCode_t171716939  value)
	{
		___Bge_Un_64 = value;
	}

	inline static int32_t get_offset_of_Bgt_Un_65() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Bgt_Un_65)); }
	inline OpCode_t171716939  get_Bgt_Un_65() const { return ___Bgt_Un_65; }
	inline OpCode_t171716939 * get_address_of_Bgt_Un_65() { return &___Bgt_Un_65; }
	inline void set_Bgt_Un_65(OpCode_t171716939  value)
	{
		___Bgt_Un_65 = value;
	}

	inline static int32_t get_offset_of_Ble_Un_66() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ble_Un_66)); }
	inline OpCode_t171716939  get_Ble_Un_66() const { return ___Ble_Un_66; }
	inline OpCode_t171716939 * get_address_of_Ble_Un_66() { return &___Ble_Un_66; }
	inline void set_Ble_Un_66(OpCode_t171716939  value)
	{
		___Ble_Un_66 = value;
	}

	inline static int32_t get_offset_of_Blt_Un_67() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Blt_Un_67)); }
	inline OpCode_t171716939  get_Blt_Un_67() const { return ___Blt_Un_67; }
	inline OpCode_t171716939 * get_address_of_Blt_Un_67() { return &___Blt_Un_67; }
	inline void set_Blt_Un_67(OpCode_t171716939  value)
	{
		___Blt_Un_67 = value;
	}

	inline static int32_t get_offset_of_Switch_68() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Switch_68)); }
	inline OpCode_t171716939  get_Switch_68() const { return ___Switch_68; }
	inline OpCode_t171716939 * get_address_of_Switch_68() { return &___Switch_68; }
	inline void set_Switch_68(OpCode_t171716939  value)
	{
		___Switch_68 = value;
	}

	inline static int32_t get_offset_of_Ldind_I1_69() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldind_I1_69)); }
	inline OpCode_t171716939  get_Ldind_I1_69() const { return ___Ldind_I1_69; }
	inline OpCode_t171716939 * get_address_of_Ldind_I1_69() { return &___Ldind_I1_69; }
	inline void set_Ldind_I1_69(OpCode_t171716939  value)
	{
		___Ldind_I1_69 = value;
	}

	inline static int32_t get_offset_of_Ldind_U1_70() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldind_U1_70)); }
	inline OpCode_t171716939  get_Ldind_U1_70() const { return ___Ldind_U1_70; }
	inline OpCode_t171716939 * get_address_of_Ldind_U1_70() { return &___Ldind_U1_70; }
	inline void set_Ldind_U1_70(OpCode_t171716939  value)
	{
		___Ldind_U1_70 = value;
	}

	inline static int32_t get_offset_of_Ldind_I2_71() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldind_I2_71)); }
	inline OpCode_t171716939  get_Ldind_I2_71() const { return ___Ldind_I2_71; }
	inline OpCode_t171716939 * get_address_of_Ldind_I2_71() { return &___Ldind_I2_71; }
	inline void set_Ldind_I2_71(OpCode_t171716939  value)
	{
		___Ldind_I2_71 = value;
	}

	inline static int32_t get_offset_of_Ldind_U2_72() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldind_U2_72)); }
	inline OpCode_t171716939  get_Ldind_U2_72() const { return ___Ldind_U2_72; }
	inline OpCode_t171716939 * get_address_of_Ldind_U2_72() { return &___Ldind_U2_72; }
	inline void set_Ldind_U2_72(OpCode_t171716939  value)
	{
		___Ldind_U2_72 = value;
	}

	inline static int32_t get_offset_of_Ldind_I4_73() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldind_I4_73)); }
	inline OpCode_t171716939  get_Ldind_I4_73() const { return ___Ldind_I4_73; }
	inline OpCode_t171716939 * get_address_of_Ldind_I4_73() { return &___Ldind_I4_73; }
	inline void set_Ldind_I4_73(OpCode_t171716939  value)
	{
		___Ldind_I4_73 = value;
	}

	inline static int32_t get_offset_of_Ldind_U4_74() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldind_U4_74)); }
	inline OpCode_t171716939  get_Ldind_U4_74() const { return ___Ldind_U4_74; }
	inline OpCode_t171716939 * get_address_of_Ldind_U4_74() { return &___Ldind_U4_74; }
	inline void set_Ldind_U4_74(OpCode_t171716939  value)
	{
		___Ldind_U4_74 = value;
	}

	inline static int32_t get_offset_of_Ldind_I8_75() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldind_I8_75)); }
	inline OpCode_t171716939  get_Ldind_I8_75() const { return ___Ldind_I8_75; }
	inline OpCode_t171716939 * get_address_of_Ldind_I8_75() { return &___Ldind_I8_75; }
	inline void set_Ldind_I8_75(OpCode_t171716939  value)
	{
		___Ldind_I8_75 = value;
	}

	inline static int32_t get_offset_of_Ldind_I_76() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldind_I_76)); }
	inline OpCode_t171716939  get_Ldind_I_76() const { return ___Ldind_I_76; }
	inline OpCode_t171716939 * get_address_of_Ldind_I_76() { return &___Ldind_I_76; }
	inline void set_Ldind_I_76(OpCode_t171716939  value)
	{
		___Ldind_I_76 = value;
	}

	inline static int32_t get_offset_of_Ldind_R4_77() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldind_R4_77)); }
	inline OpCode_t171716939  get_Ldind_R4_77() const { return ___Ldind_R4_77; }
	inline OpCode_t171716939 * get_address_of_Ldind_R4_77() { return &___Ldind_R4_77; }
	inline void set_Ldind_R4_77(OpCode_t171716939  value)
	{
		___Ldind_R4_77 = value;
	}

	inline static int32_t get_offset_of_Ldind_R8_78() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldind_R8_78)); }
	inline OpCode_t171716939  get_Ldind_R8_78() const { return ___Ldind_R8_78; }
	inline OpCode_t171716939 * get_address_of_Ldind_R8_78() { return &___Ldind_R8_78; }
	inline void set_Ldind_R8_78(OpCode_t171716939  value)
	{
		___Ldind_R8_78 = value;
	}

	inline static int32_t get_offset_of_Ldind_Ref_79() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldind_Ref_79)); }
	inline OpCode_t171716939  get_Ldind_Ref_79() const { return ___Ldind_Ref_79; }
	inline OpCode_t171716939 * get_address_of_Ldind_Ref_79() { return &___Ldind_Ref_79; }
	inline void set_Ldind_Ref_79(OpCode_t171716939  value)
	{
		___Ldind_Ref_79 = value;
	}

	inline static int32_t get_offset_of_Stind_Ref_80() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stind_Ref_80)); }
	inline OpCode_t171716939  get_Stind_Ref_80() const { return ___Stind_Ref_80; }
	inline OpCode_t171716939 * get_address_of_Stind_Ref_80() { return &___Stind_Ref_80; }
	inline void set_Stind_Ref_80(OpCode_t171716939  value)
	{
		___Stind_Ref_80 = value;
	}

	inline static int32_t get_offset_of_Stind_I1_81() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stind_I1_81)); }
	inline OpCode_t171716939  get_Stind_I1_81() const { return ___Stind_I1_81; }
	inline OpCode_t171716939 * get_address_of_Stind_I1_81() { return &___Stind_I1_81; }
	inline void set_Stind_I1_81(OpCode_t171716939  value)
	{
		___Stind_I1_81 = value;
	}

	inline static int32_t get_offset_of_Stind_I2_82() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stind_I2_82)); }
	inline OpCode_t171716939  get_Stind_I2_82() const { return ___Stind_I2_82; }
	inline OpCode_t171716939 * get_address_of_Stind_I2_82() { return &___Stind_I2_82; }
	inline void set_Stind_I2_82(OpCode_t171716939  value)
	{
		___Stind_I2_82 = value;
	}

	inline static int32_t get_offset_of_Stind_I4_83() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stind_I4_83)); }
	inline OpCode_t171716939  get_Stind_I4_83() const { return ___Stind_I4_83; }
	inline OpCode_t171716939 * get_address_of_Stind_I4_83() { return &___Stind_I4_83; }
	inline void set_Stind_I4_83(OpCode_t171716939  value)
	{
		___Stind_I4_83 = value;
	}

	inline static int32_t get_offset_of_Stind_I8_84() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stind_I8_84)); }
	inline OpCode_t171716939  get_Stind_I8_84() const { return ___Stind_I8_84; }
	inline OpCode_t171716939 * get_address_of_Stind_I8_84() { return &___Stind_I8_84; }
	inline void set_Stind_I8_84(OpCode_t171716939  value)
	{
		___Stind_I8_84 = value;
	}

	inline static int32_t get_offset_of_Stind_R4_85() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stind_R4_85)); }
	inline OpCode_t171716939  get_Stind_R4_85() const { return ___Stind_R4_85; }
	inline OpCode_t171716939 * get_address_of_Stind_R4_85() { return &___Stind_R4_85; }
	inline void set_Stind_R4_85(OpCode_t171716939  value)
	{
		___Stind_R4_85 = value;
	}

	inline static int32_t get_offset_of_Stind_R8_86() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stind_R8_86)); }
	inline OpCode_t171716939  get_Stind_R8_86() const { return ___Stind_R8_86; }
	inline OpCode_t171716939 * get_address_of_Stind_R8_86() { return &___Stind_R8_86; }
	inline void set_Stind_R8_86(OpCode_t171716939  value)
	{
		___Stind_R8_86 = value;
	}

	inline static int32_t get_offset_of_Add_87() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Add_87)); }
	inline OpCode_t171716939  get_Add_87() const { return ___Add_87; }
	inline OpCode_t171716939 * get_address_of_Add_87() { return &___Add_87; }
	inline void set_Add_87(OpCode_t171716939  value)
	{
		___Add_87 = value;
	}

	inline static int32_t get_offset_of_Sub_88() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Sub_88)); }
	inline OpCode_t171716939  get_Sub_88() const { return ___Sub_88; }
	inline OpCode_t171716939 * get_address_of_Sub_88() { return &___Sub_88; }
	inline void set_Sub_88(OpCode_t171716939  value)
	{
		___Sub_88 = value;
	}

	inline static int32_t get_offset_of_Mul_89() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Mul_89)); }
	inline OpCode_t171716939  get_Mul_89() const { return ___Mul_89; }
	inline OpCode_t171716939 * get_address_of_Mul_89() { return &___Mul_89; }
	inline void set_Mul_89(OpCode_t171716939  value)
	{
		___Mul_89 = value;
	}

	inline static int32_t get_offset_of_Div_90() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Div_90)); }
	inline OpCode_t171716939  get_Div_90() const { return ___Div_90; }
	inline OpCode_t171716939 * get_address_of_Div_90() { return &___Div_90; }
	inline void set_Div_90(OpCode_t171716939  value)
	{
		___Div_90 = value;
	}

	inline static int32_t get_offset_of_Div_Un_91() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Div_Un_91)); }
	inline OpCode_t171716939  get_Div_Un_91() const { return ___Div_Un_91; }
	inline OpCode_t171716939 * get_address_of_Div_Un_91() { return &___Div_Un_91; }
	inline void set_Div_Un_91(OpCode_t171716939  value)
	{
		___Div_Un_91 = value;
	}

	inline static int32_t get_offset_of_Rem_92() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Rem_92)); }
	inline OpCode_t171716939  get_Rem_92() const { return ___Rem_92; }
	inline OpCode_t171716939 * get_address_of_Rem_92() { return &___Rem_92; }
	inline void set_Rem_92(OpCode_t171716939  value)
	{
		___Rem_92 = value;
	}

	inline static int32_t get_offset_of_Rem_Un_93() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Rem_Un_93)); }
	inline OpCode_t171716939  get_Rem_Un_93() const { return ___Rem_Un_93; }
	inline OpCode_t171716939 * get_address_of_Rem_Un_93() { return &___Rem_Un_93; }
	inline void set_Rem_Un_93(OpCode_t171716939  value)
	{
		___Rem_Un_93 = value;
	}

	inline static int32_t get_offset_of_And_94() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___And_94)); }
	inline OpCode_t171716939  get_And_94() const { return ___And_94; }
	inline OpCode_t171716939 * get_address_of_And_94() { return &___And_94; }
	inline void set_And_94(OpCode_t171716939  value)
	{
		___And_94 = value;
	}

	inline static int32_t get_offset_of_Or_95() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Or_95)); }
	inline OpCode_t171716939  get_Or_95() const { return ___Or_95; }
	inline OpCode_t171716939 * get_address_of_Or_95() { return &___Or_95; }
	inline void set_Or_95(OpCode_t171716939  value)
	{
		___Or_95 = value;
	}

	inline static int32_t get_offset_of_Xor_96() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Xor_96)); }
	inline OpCode_t171716939  get_Xor_96() const { return ___Xor_96; }
	inline OpCode_t171716939 * get_address_of_Xor_96() { return &___Xor_96; }
	inline void set_Xor_96(OpCode_t171716939  value)
	{
		___Xor_96 = value;
	}

	inline static int32_t get_offset_of_Shl_97() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Shl_97)); }
	inline OpCode_t171716939  get_Shl_97() const { return ___Shl_97; }
	inline OpCode_t171716939 * get_address_of_Shl_97() { return &___Shl_97; }
	inline void set_Shl_97(OpCode_t171716939  value)
	{
		___Shl_97 = value;
	}

	inline static int32_t get_offset_of_Shr_98() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Shr_98)); }
	inline OpCode_t171716939  get_Shr_98() const { return ___Shr_98; }
	inline OpCode_t171716939 * get_address_of_Shr_98() { return &___Shr_98; }
	inline void set_Shr_98(OpCode_t171716939  value)
	{
		___Shr_98 = value;
	}

	inline static int32_t get_offset_of_Shr_Un_99() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Shr_Un_99)); }
	inline OpCode_t171716939  get_Shr_Un_99() const { return ___Shr_Un_99; }
	inline OpCode_t171716939 * get_address_of_Shr_Un_99() { return &___Shr_Un_99; }
	inline void set_Shr_Un_99(OpCode_t171716939  value)
	{
		___Shr_Un_99 = value;
	}

	inline static int32_t get_offset_of_Neg_100() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Neg_100)); }
	inline OpCode_t171716939  get_Neg_100() const { return ___Neg_100; }
	inline OpCode_t171716939 * get_address_of_Neg_100() { return &___Neg_100; }
	inline void set_Neg_100(OpCode_t171716939  value)
	{
		___Neg_100 = value;
	}

	inline static int32_t get_offset_of_Not_101() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Not_101)); }
	inline OpCode_t171716939  get_Not_101() const { return ___Not_101; }
	inline OpCode_t171716939 * get_address_of_Not_101() { return &___Not_101; }
	inline void set_Not_101(OpCode_t171716939  value)
	{
		___Not_101 = value;
	}

	inline static int32_t get_offset_of_Conv_I1_102() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_I1_102)); }
	inline OpCode_t171716939  get_Conv_I1_102() const { return ___Conv_I1_102; }
	inline OpCode_t171716939 * get_address_of_Conv_I1_102() { return &___Conv_I1_102; }
	inline void set_Conv_I1_102(OpCode_t171716939  value)
	{
		___Conv_I1_102 = value;
	}

	inline static int32_t get_offset_of_Conv_I2_103() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_I2_103)); }
	inline OpCode_t171716939  get_Conv_I2_103() const { return ___Conv_I2_103; }
	inline OpCode_t171716939 * get_address_of_Conv_I2_103() { return &___Conv_I2_103; }
	inline void set_Conv_I2_103(OpCode_t171716939  value)
	{
		___Conv_I2_103 = value;
	}

	inline static int32_t get_offset_of_Conv_I4_104() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_I4_104)); }
	inline OpCode_t171716939  get_Conv_I4_104() const { return ___Conv_I4_104; }
	inline OpCode_t171716939 * get_address_of_Conv_I4_104() { return &___Conv_I4_104; }
	inline void set_Conv_I4_104(OpCode_t171716939  value)
	{
		___Conv_I4_104 = value;
	}

	inline static int32_t get_offset_of_Conv_I8_105() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_I8_105)); }
	inline OpCode_t171716939  get_Conv_I8_105() const { return ___Conv_I8_105; }
	inline OpCode_t171716939 * get_address_of_Conv_I8_105() { return &___Conv_I8_105; }
	inline void set_Conv_I8_105(OpCode_t171716939  value)
	{
		___Conv_I8_105 = value;
	}

	inline static int32_t get_offset_of_Conv_R4_106() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_R4_106)); }
	inline OpCode_t171716939  get_Conv_R4_106() const { return ___Conv_R4_106; }
	inline OpCode_t171716939 * get_address_of_Conv_R4_106() { return &___Conv_R4_106; }
	inline void set_Conv_R4_106(OpCode_t171716939  value)
	{
		___Conv_R4_106 = value;
	}

	inline static int32_t get_offset_of_Conv_R8_107() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_R8_107)); }
	inline OpCode_t171716939  get_Conv_R8_107() const { return ___Conv_R8_107; }
	inline OpCode_t171716939 * get_address_of_Conv_R8_107() { return &___Conv_R8_107; }
	inline void set_Conv_R8_107(OpCode_t171716939  value)
	{
		___Conv_R8_107 = value;
	}

	inline static int32_t get_offset_of_Conv_U4_108() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_U4_108)); }
	inline OpCode_t171716939  get_Conv_U4_108() const { return ___Conv_U4_108; }
	inline OpCode_t171716939 * get_address_of_Conv_U4_108() { return &___Conv_U4_108; }
	inline void set_Conv_U4_108(OpCode_t171716939  value)
	{
		___Conv_U4_108 = value;
	}

	inline static int32_t get_offset_of_Conv_U8_109() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_U8_109)); }
	inline OpCode_t171716939  get_Conv_U8_109() const { return ___Conv_U8_109; }
	inline OpCode_t171716939 * get_address_of_Conv_U8_109() { return &___Conv_U8_109; }
	inline void set_Conv_U8_109(OpCode_t171716939  value)
	{
		___Conv_U8_109 = value;
	}

	inline static int32_t get_offset_of_Callvirt_110() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Callvirt_110)); }
	inline OpCode_t171716939  get_Callvirt_110() const { return ___Callvirt_110; }
	inline OpCode_t171716939 * get_address_of_Callvirt_110() { return &___Callvirt_110; }
	inline void set_Callvirt_110(OpCode_t171716939  value)
	{
		___Callvirt_110 = value;
	}

	inline static int32_t get_offset_of_Cpobj_111() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Cpobj_111)); }
	inline OpCode_t171716939  get_Cpobj_111() const { return ___Cpobj_111; }
	inline OpCode_t171716939 * get_address_of_Cpobj_111() { return &___Cpobj_111; }
	inline void set_Cpobj_111(OpCode_t171716939  value)
	{
		___Cpobj_111 = value;
	}

	inline static int32_t get_offset_of_Ldobj_112() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldobj_112)); }
	inline OpCode_t171716939  get_Ldobj_112() const { return ___Ldobj_112; }
	inline OpCode_t171716939 * get_address_of_Ldobj_112() { return &___Ldobj_112; }
	inline void set_Ldobj_112(OpCode_t171716939  value)
	{
		___Ldobj_112 = value;
	}

	inline static int32_t get_offset_of_Ldstr_113() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldstr_113)); }
	inline OpCode_t171716939  get_Ldstr_113() const { return ___Ldstr_113; }
	inline OpCode_t171716939 * get_address_of_Ldstr_113() { return &___Ldstr_113; }
	inline void set_Ldstr_113(OpCode_t171716939  value)
	{
		___Ldstr_113 = value;
	}

	inline static int32_t get_offset_of_Newobj_114() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Newobj_114)); }
	inline OpCode_t171716939  get_Newobj_114() const { return ___Newobj_114; }
	inline OpCode_t171716939 * get_address_of_Newobj_114() { return &___Newobj_114; }
	inline void set_Newobj_114(OpCode_t171716939  value)
	{
		___Newobj_114 = value;
	}

	inline static int32_t get_offset_of_Castclass_115() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Castclass_115)); }
	inline OpCode_t171716939  get_Castclass_115() const { return ___Castclass_115; }
	inline OpCode_t171716939 * get_address_of_Castclass_115() { return &___Castclass_115; }
	inline void set_Castclass_115(OpCode_t171716939  value)
	{
		___Castclass_115 = value;
	}

	inline static int32_t get_offset_of_Isinst_116() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Isinst_116)); }
	inline OpCode_t171716939  get_Isinst_116() const { return ___Isinst_116; }
	inline OpCode_t171716939 * get_address_of_Isinst_116() { return &___Isinst_116; }
	inline void set_Isinst_116(OpCode_t171716939  value)
	{
		___Isinst_116 = value;
	}

	inline static int32_t get_offset_of_Conv_R_Un_117() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_R_Un_117)); }
	inline OpCode_t171716939  get_Conv_R_Un_117() const { return ___Conv_R_Un_117; }
	inline OpCode_t171716939 * get_address_of_Conv_R_Un_117() { return &___Conv_R_Un_117; }
	inline void set_Conv_R_Un_117(OpCode_t171716939  value)
	{
		___Conv_R_Un_117 = value;
	}

	inline static int32_t get_offset_of_Unbox_118() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Unbox_118)); }
	inline OpCode_t171716939  get_Unbox_118() const { return ___Unbox_118; }
	inline OpCode_t171716939 * get_address_of_Unbox_118() { return &___Unbox_118; }
	inline void set_Unbox_118(OpCode_t171716939  value)
	{
		___Unbox_118 = value;
	}

	inline static int32_t get_offset_of_Throw_119() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Throw_119)); }
	inline OpCode_t171716939  get_Throw_119() const { return ___Throw_119; }
	inline OpCode_t171716939 * get_address_of_Throw_119() { return &___Throw_119; }
	inline void set_Throw_119(OpCode_t171716939  value)
	{
		___Throw_119 = value;
	}

	inline static int32_t get_offset_of_Ldfld_120() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldfld_120)); }
	inline OpCode_t171716939  get_Ldfld_120() const { return ___Ldfld_120; }
	inline OpCode_t171716939 * get_address_of_Ldfld_120() { return &___Ldfld_120; }
	inline void set_Ldfld_120(OpCode_t171716939  value)
	{
		___Ldfld_120 = value;
	}

	inline static int32_t get_offset_of_Ldflda_121() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldflda_121)); }
	inline OpCode_t171716939  get_Ldflda_121() const { return ___Ldflda_121; }
	inline OpCode_t171716939 * get_address_of_Ldflda_121() { return &___Ldflda_121; }
	inline void set_Ldflda_121(OpCode_t171716939  value)
	{
		___Ldflda_121 = value;
	}

	inline static int32_t get_offset_of_Stfld_122() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stfld_122)); }
	inline OpCode_t171716939  get_Stfld_122() const { return ___Stfld_122; }
	inline OpCode_t171716939 * get_address_of_Stfld_122() { return &___Stfld_122; }
	inline void set_Stfld_122(OpCode_t171716939  value)
	{
		___Stfld_122 = value;
	}

	inline static int32_t get_offset_of_Ldsfld_123() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldsfld_123)); }
	inline OpCode_t171716939  get_Ldsfld_123() const { return ___Ldsfld_123; }
	inline OpCode_t171716939 * get_address_of_Ldsfld_123() { return &___Ldsfld_123; }
	inline void set_Ldsfld_123(OpCode_t171716939  value)
	{
		___Ldsfld_123 = value;
	}

	inline static int32_t get_offset_of_Ldsflda_124() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldsflda_124)); }
	inline OpCode_t171716939  get_Ldsflda_124() const { return ___Ldsflda_124; }
	inline OpCode_t171716939 * get_address_of_Ldsflda_124() { return &___Ldsflda_124; }
	inline void set_Ldsflda_124(OpCode_t171716939  value)
	{
		___Ldsflda_124 = value;
	}

	inline static int32_t get_offset_of_Stsfld_125() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stsfld_125)); }
	inline OpCode_t171716939  get_Stsfld_125() const { return ___Stsfld_125; }
	inline OpCode_t171716939 * get_address_of_Stsfld_125() { return &___Stsfld_125; }
	inline void set_Stsfld_125(OpCode_t171716939  value)
	{
		___Stsfld_125 = value;
	}

	inline static int32_t get_offset_of_Stobj_126() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stobj_126)); }
	inline OpCode_t171716939  get_Stobj_126() const { return ___Stobj_126; }
	inline OpCode_t171716939 * get_address_of_Stobj_126() { return &___Stobj_126; }
	inline void set_Stobj_126(OpCode_t171716939  value)
	{
		___Stobj_126 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I1_Un_127() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_Ovf_I1_Un_127)); }
	inline OpCode_t171716939  get_Conv_Ovf_I1_Un_127() const { return ___Conv_Ovf_I1_Un_127; }
	inline OpCode_t171716939 * get_address_of_Conv_Ovf_I1_Un_127() { return &___Conv_Ovf_I1_Un_127; }
	inline void set_Conv_Ovf_I1_Un_127(OpCode_t171716939  value)
	{
		___Conv_Ovf_I1_Un_127 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I2_Un_128() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_Ovf_I2_Un_128)); }
	inline OpCode_t171716939  get_Conv_Ovf_I2_Un_128() const { return ___Conv_Ovf_I2_Un_128; }
	inline OpCode_t171716939 * get_address_of_Conv_Ovf_I2_Un_128() { return &___Conv_Ovf_I2_Un_128; }
	inline void set_Conv_Ovf_I2_Un_128(OpCode_t171716939  value)
	{
		___Conv_Ovf_I2_Un_128 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I4_Un_129() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_Ovf_I4_Un_129)); }
	inline OpCode_t171716939  get_Conv_Ovf_I4_Un_129() const { return ___Conv_Ovf_I4_Un_129; }
	inline OpCode_t171716939 * get_address_of_Conv_Ovf_I4_Un_129() { return &___Conv_Ovf_I4_Un_129; }
	inline void set_Conv_Ovf_I4_Un_129(OpCode_t171716939  value)
	{
		___Conv_Ovf_I4_Un_129 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I8_Un_130() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_Ovf_I8_Un_130)); }
	inline OpCode_t171716939  get_Conv_Ovf_I8_Un_130() const { return ___Conv_Ovf_I8_Un_130; }
	inline OpCode_t171716939 * get_address_of_Conv_Ovf_I8_Un_130() { return &___Conv_Ovf_I8_Un_130; }
	inline void set_Conv_Ovf_I8_Un_130(OpCode_t171716939  value)
	{
		___Conv_Ovf_I8_Un_130 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U1_Un_131() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_Ovf_U1_Un_131)); }
	inline OpCode_t171716939  get_Conv_Ovf_U1_Un_131() const { return ___Conv_Ovf_U1_Un_131; }
	inline OpCode_t171716939 * get_address_of_Conv_Ovf_U1_Un_131() { return &___Conv_Ovf_U1_Un_131; }
	inline void set_Conv_Ovf_U1_Un_131(OpCode_t171716939  value)
	{
		___Conv_Ovf_U1_Un_131 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U2_Un_132() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_Ovf_U2_Un_132)); }
	inline OpCode_t171716939  get_Conv_Ovf_U2_Un_132() const { return ___Conv_Ovf_U2_Un_132; }
	inline OpCode_t171716939 * get_address_of_Conv_Ovf_U2_Un_132() { return &___Conv_Ovf_U2_Un_132; }
	inline void set_Conv_Ovf_U2_Un_132(OpCode_t171716939  value)
	{
		___Conv_Ovf_U2_Un_132 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U4_Un_133() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_Ovf_U4_Un_133)); }
	inline OpCode_t171716939  get_Conv_Ovf_U4_Un_133() const { return ___Conv_Ovf_U4_Un_133; }
	inline OpCode_t171716939 * get_address_of_Conv_Ovf_U4_Un_133() { return &___Conv_Ovf_U4_Un_133; }
	inline void set_Conv_Ovf_U4_Un_133(OpCode_t171716939  value)
	{
		___Conv_Ovf_U4_Un_133 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U8_Un_134() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_Ovf_U8_Un_134)); }
	inline OpCode_t171716939  get_Conv_Ovf_U8_Un_134() const { return ___Conv_Ovf_U8_Un_134; }
	inline OpCode_t171716939 * get_address_of_Conv_Ovf_U8_Un_134() { return &___Conv_Ovf_U8_Un_134; }
	inline void set_Conv_Ovf_U8_Un_134(OpCode_t171716939  value)
	{
		___Conv_Ovf_U8_Un_134 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I_Un_135() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_Ovf_I_Un_135)); }
	inline OpCode_t171716939  get_Conv_Ovf_I_Un_135() const { return ___Conv_Ovf_I_Un_135; }
	inline OpCode_t171716939 * get_address_of_Conv_Ovf_I_Un_135() { return &___Conv_Ovf_I_Un_135; }
	inline void set_Conv_Ovf_I_Un_135(OpCode_t171716939  value)
	{
		___Conv_Ovf_I_Un_135 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U_Un_136() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_Ovf_U_Un_136)); }
	inline OpCode_t171716939  get_Conv_Ovf_U_Un_136() const { return ___Conv_Ovf_U_Un_136; }
	inline OpCode_t171716939 * get_address_of_Conv_Ovf_U_Un_136() { return &___Conv_Ovf_U_Un_136; }
	inline void set_Conv_Ovf_U_Un_136(OpCode_t171716939  value)
	{
		___Conv_Ovf_U_Un_136 = value;
	}

	inline static int32_t get_offset_of_Box_137() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Box_137)); }
	inline OpCode_t171716939  get_Box_137() const { return ___Box_137; }
	inline OpCode_t171716939 * get_address_of_Box_137() { return &___Box_137; }
	inline void set_Box_137(OpCode_t171716939  value)
	{
		___Box_137 = value;
	}

	inline static int32_t get_offset_of_Newarr_138() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Newarr_138)); }
	inline OpCode_t171716939  get_Newarr_138() const { return ___Newarr_138; }
	inline OpCode_t171716939 * get_address_of_Newarr_138() { return &___Newarr_138; }
	inline void set_Newarr_138(OpCode_t171716939  value)
	{
		___Newarr_138 = value;
	}

	inline static int32_t get_offset_of_Ldlen_139() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldlen_139)); }
	inline OpCode_t171716939  get_Ldlen_139() const { return ___Ldlen_139; }
	inline OpCode_t171716939 * get_address_of_Ldlen_139() { return &___Ldlen_139; }
	inline void set_Ldlen_139(OpCode_t171716939  value)
	{
		___Ldlen_139 = value;
	}

	inline static int32_t get_offset_of_Ldelema_140() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldelema_140)); }
	inline OpCode_t171716939  get_Ldelema_140() const { return ___Ldelema_140; }
	inline OpCode_t171716939 * get_address_of_Ldelema_140() { return &___Ldelema_140; }
	inline void set_Ldelema_140(OpCode_t171716939  value)
	{
		___Ldelema_140 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I1_141() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldelem_I1_141)); }
	inline OpCode_t171716939  get_Ldelem_I1_141() const { return ___Ldelem_I1_141; }
	inline OpCode_t171716939 * get_address_of_Ldelem_I1_141() { return &___Ldelem_I1_141; }
	inline void set_Ldelem_I1_141(OpCode_t171716939  value)
	{
		___Ldelem_I1_141 = value;
	}

	inline static int32_t get_offset_of_Ldelem_U1_142() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldelem_U1_142)); }
	inline OpCode_t171716939  get_Ldelem_U1_142() const { return ___Ldelem_U1_142; }
	inline OpCode_t171716939 * get_address_of_Ldelem_U1_142() { return &___Ldelem_U1_142; }
	inline void set_Ldelem_U1_142(OpCode_t171716939  value)
	{
		___Ldelem_U1_142 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I2_143() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldelem_I2_143)); }
	inline OpCode_t171716939  get_Ldelem_I2_143() const { return ___Ldelem_I2_143; }
	inline OpCode_t171716939 * get_address_of_Ldelem_I2_143() { return &___Ldelem_I2_143; }
	inline void set_Ldelem_I2_143(OpCode_t171716939  value)
	{
		___Ldelem_I2_143 = value;
	}

	inline static int32_t get_offset_of_Ldelem_U2_144() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldelem_U2_144)); }
	inline OpCode_t171716939  get_Ldelem_U2_144() const { return ___Ldelem_U2_144; }
	inline OpCode_t171716939 * get_address_of_Ldelem_U2_144() { return &___Ldelem_U2_144; }
	inline void set_Ldelem_U2_144(OpCode_t171716939  value)
	{
		___Ldelem_U2_144 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I4_145() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldelem_I4_145)); }
	inline OpCode_t171716939  get_Ldelem_I4_145() const { return ___Ldelem_I4_145; }
	inline OpCode_t171716939 * get_address_of_Ldelem_I4_145() { return &___Ldelem_I4_145; }
	inline void set_Ldelem_I4_145(OpCode_t171716939  value)
	{
		___Ldelem_I4_145 = value;
	}

	inline static int32_t get_offset_of_Ldelem_U4_146() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldelem_U4_146)); }
	inline OpCode_t171716939  get_Ldelem_U4_146() const { return ___Ldelem_U4_146; }
	inline OpCode_t171716939 * get_address_of_Ldelem_U4_146() { return &___Ldelem_U4_146; }
	inline void set_Ldelem_U4_146(OpCode_t171716939  value)
	{
		___Ldelem_U4_146 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I8_147() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldelem_I8_147)); }
	inline OpCode_t171716939  get_Ldelem_I8_147() const { return ___Ldelem_I8_147; }
	inline OpCode_t171716939 * get_address_of_Ldelem_I8_147() { return &___Ldelem_I8_147; }
	inline void set_Ldelem_I8_147(OpCode_t171716939  value)
	{
		___Ldelem_I8_147 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I_148() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldelem_I_148)); }
	inline OpCode_t171716939  get_Ldelem_I_148() const { return ___Ldelem_I_148; }
	inline OpCode_t171716939 * get_address_of_Ldelem_I_148() { return &___Ldelem_I_148; }
	inline void set_Ldelem_I_148(OpCode_t171716939  value)
	{
		___Ldelem_I_148 = value;
	}

	inline static int32_t get_offset_of_Ldelem_R4_149() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldelem_R4_149)); }
	inline OpCode_t171716939  get_Ldelem_R4_149() const { return ___Ldelem_R4_149; }
	inline OpCode_t171716939 * get_address_of_Ldelem_R4_149() { return &___Ldelem_R4_149; }
	inline void set_Ldelem_R4_149(OpCode_t171716939  value)
	{
		___Ldelem_R4_149 = value;
	}

	inline static int32_t get_offset_of_Ldelem_R8_150() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldelem_R8_150)); }
	inline OpCode_t171716939  get_Ldelem_R8_150() const { return ___Ldelem_R8_150; }
	inline OpCode_t171716939 * get_address_of_Ldelem_R8_150() { return &___Ldelem_R8_150; }
	inline void set_Ldelem_R8_150(OpCode_t171716939  value)
	{
		___Ldelem_R8_150 = value;
	}

	inline static int32_t get_offset_of_Ldelem_Ref_151() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldelem_Ref_151)); }
	inline OpCode_t171716939  get_Ldelem_Ref_151() const { return ___Ldelem_Ref_151; }
	inline OpCode_t171716939 * get_address_of_Ldelem_Ref_151() { return &___Ldelem_Ref_151; }
	inline void set_Ldelem_Ref_151(OpCode_t171716939  value)
	{
		___Ldelem_Ref_151 = value;
	}

	inline static int32_t get_offset_of_Stelem_I_152() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stelem_I_152)); }
	inline OpCode_t171716939  get_Stelem_I_152() const { return ___Stelem_I_152; }
	inline OpCode_t171716939 * get_address_of_Stelem_I_152() { return &___Stelem_I_152; }
	inline void set_Stelem_I_152(OpCode_t171716939  value)
	{
		___Stelem_I_152 = value;
	}

	inline static int32_t get_offset_of_Stelem_I1_153() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stelem_I1_153)); }
	inline OpCode_t171716939  get_Stelem_I1_153() const { return ___Stelem_I1_153; }
	inline OpCode_t171716939 * get_address_of_Stelem_I1_153() { return &___Stelem_I1_153; }
	inline void set_Stelem_I1_153(OpCode_t171716939  value)
	{
		___Stelem_I1_153 = value;
	}

	inline static int32_t get_offset_of_Stelem_I2_154() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stelem_I2_154)); }
	inline OpCode_t171716939  get_Stelem_I2_154() const { return ___Stelem_I2_154; }
	inline OpCode_t171716939 * get_address_of_Stelem_I2_154() { return &___Stelem_I2_154; }
	inline void set_Stelem_I2_154(OpCode_t171716939  value)
	{
		___Stelem_I2_154 = value;
	}

	inline static int32_t get_offset_of_Stelem_I4_155() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stelem_I4_155)); }
	inline OpCode_t171716939  get_Stelem_I4_155() const { return ___Stelem_I4_155; }
	inline OpCode_t171716939 * get_address_of_Stelem_I4_155() { return &___Stelem_I4_155; }
	inline void set_Stelem_I4_155(OpCode_t171716939  value)
	{
		___Stelem_I4_155 = value;
	}

	inline static int32_t get_offset_of_Stelem_I8_156() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stelem_I8_156)); }
	inline OpCode_t171716939  get_Stelem_I8_156() const { return ___Stelem_I8_156; }
	inline OpCode_t171716939 * get_address_of_Stelem_I8_156() { return &___Stelem_I8_156; }
	inline void set_Stelem_I8_156(OpCode_t171716939  value)
	{
		___Stelem_I8_156 = value;
	}

	inline static int32_t get_offset_of_Stelem_R4_157() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stelem_R4_157)); }
	inline OpCode_t171716939  get_Stelem_R4_157() const { return ___Stelem_R4_157; }
	inline OpCode_t171716939 * get_address_of_Stelem_R4_157() { return &___Stelem_R4_157; }
	inline void set_Stelem_R4_157(OpCode_t171716939  value)
	{
		___Stelem_R4_157 = value;
	}

	inline static int32_t get_offset_of_Stelem_R8_158() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stelem_R8_158)); }
	inline OpCode_t171716939  get_Stelem_R8_158() const { return ___Stelem_R8_158; }
	inline OpCode_t171716939 * get_address_of_Stelem_R8_158() { return &___Stelem_R8_158; }
	inline void set_Stelem_R8_158(OpCode_t171716939  value)
	{
		___Stelem_R8_158 = value;
	}

	inline static int32_t get_offset_of_Stelem_Ref_159() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stelem_Ref_159)); }
	inline OpCode_t171716939  get_Stelem_Ref_159() const { return ___Stelem_Ref_159; }
	inline OpCode_t171716939 * get_address_of_Stelem_Ref_159() { return &___Stelem_Ref_159; }
	inline void set_Stelem_Ref_159(OpCode_t171716939  value)
	{
		___Stelem_Ref_159 = value;
	}

	inline static int32_t get_offset_of_Ldelem_160() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldelem_160)); }
	inline OpCode_t171716939  get_Ldelem_160() const { return ___Ldelem_160; }
	inline OpCode_t171716939 * get_address_of_Ldelem_160() { return &___Ldelem_160; }
	inline void set_Ldelem_160(OpCode_t171716939  value)
	{
		___Ldelem_160 = value;
	}

	inline static int32_t get_offset_of_Stelem_161() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stelem_161)); }
	inline OpCode_t171716939  get_Stelem_161() const { return ___Stelem_161; }
	inline OpCode_t171716939 * get_address_of_Stelem_161() { return &___Stelem_161; }
	inline void set_Stelem_161(OpCode_t171716939  value)
	{
		___Stelem_161 = value;
	}

	inline static int32_t get_offset_of_Unbox_Any_162() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Unbox_Any_162)); }
	inline OpCode_t171716939  get_Unbox_Any_162() const { return ___Unbox_Any_162; }
	inline OpCode_t171716939 * get_address_of_Unbox_Any_162() { return &___Unbox_Any_162; }
	inline void set_Unbox_Any_162(OpCode_t171716939  value)
	{
		___Unbox_Any_162 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I1_163() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_Ovf_I1_163)); }
	inline OpCode_t171716939  get_Conv_Ovf_I1_163() const { return ___Conv_Ovf_I1_163; }
	inline OpCode_t171716939 * get_address_of_Conv_Ovf_I1_163() { return &___Conv_Ovf_I1_163; }
	inline void set_Conv_Ovf_I1_163(OpCode_t171716939  value)
	{
		___Conv_Ovf_I1_163 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U1_164() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_Ovf_U1_164)); }
	inline OpCode_t171716939  get_Conv_Ovf_U1_164() const { return ___Conv_Ovf_U1_164; }
	inline OpCode_t171716939 * get_address_of_Conv_Ovf_U1_164() { return &___Conv_Ovf_U1_164; }
	inline void set_Conv_Ovf_U1_164(OpCode_t171716939  value)
	{
		___Conv_Ovf_U1_164 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I2_165() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_Ovf_I2_165)); }
	inline OpCode_t171716939  get_Conv_Ovf_I2_165() const { return ___Conv_Ovf_I2_165; }
	inline OpCode_t171716939 * get_address_of_Conv_Ovf_I2_165() { return &___Conv_Ovf_I2_165; }
	inline void set_Conv_Ovf_I2_165(OpCode_t171716939  value)
	{
		___Conv_Ovf_I2_165 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U2_166() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_Ovf_U2_166)); }
	inline OpCode_t171716939  get_Conv_Ovf_U2_166() const { return ___Conv_Ovf_U2_166; }
	inline OpCode_t171716939 * get_address_of_Conv_Ovf_U2_166() { return &___Conv_Ovf_U2_166; }
	inline void set_Conv_Ovf_U2_166(OpCode_t171716939  value)
	{
		___Conv_Ovf_U2_166 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I4_167() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_Ovf_I4_167)); }
	inline OpCode_t171716939  get_Conv_Ovf_I4_167() const { return ___Conv_Ovf_I4_167; }
	inline OpCode_t171716939 * get_address_of_Conv_Ovf_I4_167() { return &___Conv_Ovf_I4_167; }
	inline void set_Conv_Ovf_I4_167(OpCode_t171716939  value)
	{
		___Conv_Ovf_I4_167 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U4_168() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_Ovf_U4_168)); }
	inline OpCode_t171716939  get_Conv_Ovf_U4_168() const { return ___Conv_Ovf_U4_168; }
	inline OpCode_t171716939 * get_address_of_Conv_Ovf_U4_168() { return &___Conv_Ovf_U4_168; }
	inline void set_Conv_Ovf_U4_168(OpCode_t171716939  value)
	{
		___Conv_Ovf_U4_168 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I8_169() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_Ovf_I8_169)); }
	inline OpCode_t171716939  get_Conv_Ovf_I8_169() const { return ___Conv_Ovf_I8_169; }
	inline OpCode_t171716939 * get_address_of_Conv_Ovf_I8_169() { return &___Conv_Ovf_I8_169; }
	inline void set_Conv_Ovf_I8_169(OpCode_t171716939  value)
	{
		___Conv_Ovf_I8_169 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U8_170() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_Ovf_U8_170)); }
	inline OpCode_t171716939  get_Conv_Ovf_U8_170() const { return ___Conv_Ovf_U8_170; }
	inline OpCode_t171716939 * get_address_of_Conv_Ovf_U8_170() { return &___Conv_Ovf_U8_170; }
	inline void set_Conv_Ovf_U8_170(OpCode_t171716939  value)
	{
		___Conv_Ovf_U8_170 = value;
	}

	inline static int32_t get_offset_of_Refanyval_171() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Refanyval_171)); }
	inline OpCode_t171716939  get_Refanyval_171() const { return ___Refanyval_171; }
	inline OpCode_t171716939 * get_address_of_Refanyval_171() { return &___Refanyval_171; }
	inline void set_Refanyval_171(OpCode_t171716939  value)
	{
		___Refanyval_171 = value;
	}

	inline static int32_t get_offset_of_Ckfinite_172() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ckfinite_172)); }
	inline OpCode_t171716939  get_Ckfinite_172() const { return ___Ckfinite_172; }
	inline OpCode_t171716939 * get_address_of_Ckfinite_172() { return &___Ckfinite_172; }
	inline void set_Ckfinite_172(OpCode_t171716939  value)
	{
		___Ckfinite_172 = value;
	}

	inline static int32_t get_offset_of_Mkrefany_173() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Mkrefany_173)); }
	inline OpCode_t171716939  get_Mkrefany_173() const { return ___Mkrefany_173; }
	inline OpCode_t171716939 * get_address_of_Mkrefany_173() { return &___Mkrefany_173; }
	inline void set_Mkrefany_173(OpCode_t171716939  value)
	{
		___Mkrefany_173 = value;
	}

	inline static int32_t get_offset_of_Ldtoken_174() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldtoken_174)); }
	inline OpCode_t171716939  get_Ldtoken_174() const { return ___Ldtoken_174; }
	inline OpCode_t171716939 * get_address_of_Ldtoken_174() { return &___Ldtoken_174; }
	inline void set_Ldtoken_174(OpCode_t171716939  value)
	{
		___Ldtoken_174 = value;
	}

	inline static int32_t get_offset_of_Conv_U2_175() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_U2_175)); }
	inline OpCode_t171716939  get_Conv_U2_175() const { return ___Conv_U2_175; }
	inline OpCode_t171716939 * get_address_of_Conv_U2_175() { return &___Conv_U2_175; }
	inline void set_Conv_U2_175(OpCode_t171716939  value)
	{
		___Conv_U2_175 = value;
	}

	inline static int32_t get_offset_of_Conv_U1_176() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_U1_176)); }
	inline OpCode_t171716939  get_Conv_U1_176() const { return ___Conv_U1_176; }
	inline OpCode_t171716939 * get_address_of_Conv_U1_176() { return &___Conv_U1_176; }
	inline void set_Conv_U1_176(OpCode_t171716939  value)
	{
		___Conv_U1_176 = value;
	}

	inline static int32_t get_offset_of_Conv_I_177() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_I_177)); }
	inline OpCode_t171716939  get_Conv_I_177() const { return ___Conv_I_177; }
	inline OpCode_t171716939 * get_address_of_Conv_I_177() { return &___Conv_I_177; }
	inline void set_Conv_I_177(OpCode_t171716939  value)
	{
		___Conv_I_177 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I_178() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_Ovf_I_178)); }
	inline OpCode_t171716939  get_Conv_Ovf_I_178() const { return ___Conv_Ovf_I_178; }
	inline OpCode_t171716939 * get_address_of_Conv_Ovf_I_178() { return &___Conv_Ovf_I_178; }
	inline void set_Conv_Ovf_I_178(OpCode_t171716939  value)
	{
		___Conv_Ovf_I_178 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U_179() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_Ovf_U_179)); }
	inline OpCode_t171716939  get_Conv_Ovf_U_179() const { return ___Conv_Ovf_U_179; }
	inline OpCode_t171716939 * get_address_of_Conv_Ovf_U_179() { return &___Conv_Ovf_U_179; }
	inline void set_Conv_Ovf_U_179(OpCode_t171716939  value)
	{
		___Conv_Ovf_U_179 = value;
	}

	inline static int32_t get_offset_of_Add_Ovf_180() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Add_Ovf_180)); }
	inline OpCode_t171716939  get_Add_Ovf_180() const { return ___Add_Ovf_180; }
	inline OpCode_t171716939 * get_address_of_Add_Ovf_180() { return &___Add_Ovf_180; }
	inline void set_Add_Ovf_180(OpCode_t171716939  value)
	{
		___Add_Ovf_180 = value;
	}

	inline static int32_t get_offset_of_Add_Ovf_Un_181() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Add_Ovf_Un_181)); }
	inline OpCode_t171716939  get_Add_Ovf_Un_181() const { return ___Add_Ovf_Un_181; }
	inline OpCode_t171716939 * get_address_of_Add_Ovf_Un_181() { return &___Add_Ovf_Un_181; }
	inline void set_Add_Ovf_Un_181(OpCode_t171716939  value)
	{
		___Add_Ovf_Un_181 = value;
	}

	inline static int32_t get_offset_of_Mul_Ovf_182() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Mul_Ovf_182)); }
	inline OpCode_t171716939  get_Mul_Ovf_182() const { return ___Mul_Ovf_182; }
	inline OpCode_t171716939 * get_address_of_Mul_Ovf_182() { return &___Mul_Ovf_182; }
	inline void set_Mul_Ovf_182(OpCode_t171716939  value)
	{
		___Mul_Ovf_182 = value;
	}

	inline static int32_t get_offset_of_Mul_Ovf_Un_183() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Mul_Ovf_Un_183)); }
	inline OpCode_t171716939  get_Mul_Ovf_Un_183() const { return ___Mul_Ovf_Un_183; }
	inline OpCode_t171716939 * get_address_of_Mul_Ovf_Un_183() { return &___Mul_Ovf_Un_183; }
	inline void set_Mul_Ovf_Un_183(OpCode_t171716939  value)
	{
		___Mul_Ovf_Un_183 = value;
	}

	inline static int32_t get_offset_of_Sub_Ovf_184() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Sub_Ovf_184)); }
	inline OpCode_t171716939  get_Sub_Ovf_184() const { return ___Sub_Ovf_184; }
	inline OpCode_t171716939 * get_address_of_Sub_Ovf_184() { return &___Sub_Ovf_184; }
	inline void set_Sub_Ovf_184(OpCode_t171716939  value)
	{
		___Sub_Ovf_184 = value;
	}

	inline static int32_t get_offset_of_Sub_Ovf_Un_185() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Sub_Ovf_Un_185)); }
	inline OpCode_t171716939  get_Sub_Ovf_Un_185() const { return ___Sub_Ovf_Un_185; }
	inline OpCode_t171716939 * get_address_of_Sub_Ovf_Un_185() { return &___Sub_Ovf_Un_185; }
	inline void set_Sub_Ovf_Un_185(OpCode_t171716939  value)
	{
		___Sub_Ovf_Un_185 = value;
	}

	inline static int32_t get_offset_of_Endfinally_186() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Endfinally_186)); }
	inline OpCode_t171716939  get_Endfinally_186() const { return ___Endfinally_186; }
	inline OpCode_t171716939 * get_address_of_Endfinally_186() { return &___Endfinally_186; }
	inline void set_Endfinally_186(OpCode_t171716939  value)
	{
		___Endfinally_186 = value;
	}

	inline static int32_t get_offset_of_Leave_187() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Leave_187)); }
	inline OpCode_t171716939  get_Leave_187() const { return ___Leave_187; }
	inline OpCode_t171716939 * get_address_of_Leave_187() { return &___Leave_187; }
	inline void set_Leave_187(OpCode_t171716939  value)
	{
		___Leave_187 = value;
	}

	inline static int32_t get_offset_of_Leave_S_188() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Leave_S_188)); }
	inline OpCode_t171716939  get_Leave_S_188() const { return ___Leave_S_188; }
	inline OpCode_t171716939 * get_address_of_Leave_S_188() { return &___Leave_S_188; }
	inline void set_Leave_S_188(OpCode_t171716939  value)
	{
		___Leave_S_188 = value;
	}

	inline static int32_t get_offset_of_Stind_I_189() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stind_I_189)); }
	inline OpCode_t171716939  get_Stind_I_189() const { return ___Stind_I_189; }
	inline OpCode_t171716939 * get_address_of_Stind_I_189() { return &___Stind_I_189; }
	inline void set_Stind_I_189(OpCode_t171716939  value)
	{
		___Stind_I_189 = value;
	}

	inline static int32_t get_offset_of_Conv_U_190() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Conv_U_190)); }
	inline OpCode_t171716939  get_Conv_U_190() const { return ___Conv_U_190; }
	inline OpCode_t171716939 * get_address_of_Conv_U_190() { return &___Conv_U_190; }
	inline void set_Conv_U_190(OpCode_t171716939  value)
	{
		___Conv_U_190 = value;
	}

	inline static int32_t get_offset_of_Prefix7_191() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Prefix7_191)); }
	inline OpCode_t171716939  get_Prefix7_191() const { return ___Prefix7_191; }
	inline OpCode_t171716939 * get_address_of_Prefix7_191() { return &___Prefix7_191; }
	inline void set_Prefix7_191(OpCode_t171716939  value)
	{
		___Prefix7_191 = value;
	}

	inline static int32_t get_offset_of_Prefix6_192() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Prefix6_192)); }
	inline OpCode_t171716939  get_Prefix6_192() const { return ___Prefix6_192; }
	inline OpCode_t171716939 * get_address_of_Prefix6_192() { return &___Prefix6_192; }
	inline void set_Prefix6_192(OpCode_t171716939  value)
	{
		___Prefix6_192 = value;
	}

	inline static int32_t get_offset_of_Prefix5_193() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Prefix5_193)); }
	inline OpCode_t171716939  get_Prefix5_193() const { return ___Prefix5_193; }
	inline OpCode_t171716939 * get_address_of_Prefix5_193() { return &___Prefix5_193; }
	inline void set_Prefix5_193(OpCode_t171716939  value)
	{
		___Prefix5_193 = value;
	}

	inline static int32_t get_offset_of_Prefix4_194() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Prefix4_194)); }
	inline OpCode_t171716939  get_Prefix4_194() const { return ___Prefix4_194; }
	inline OpCode_t171716939 * get_address_of_Prefix4_194() { return &___Prefix4_194; }
	inline void set_Prefix4_194(OpCode_t171716939  value)
	{
		___Prefix4_194 = value;
	}

	inline static int32_t get_offset_of_Prefix3_195() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Prefix3_195)); }
	inline OpCode_t171716939  get_Prefix3_195() const { return ___Prefix3_195; }
	inline OpCode_t171716939 * get_address_of_Prefix3_195() { return &___Prefix3_195; }
	inline void set_Prefix3_195(OpCode_t171716939  value)
	{
		___Prefix3_195 = value;
	}

	inline static int32_t get_offset_of_Prefix2_196() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Prefix2_196)); }
	inline OpCode_t171716939  get_Prefix2_196() const { return ___Prefix2_196; }
	inline OpCode_t171716939 * get_address_of_Prefix2_196() { return &___Prefix2_196; }
	inline void set_Prefix2_196(OpCode_t171716939  value)
	{
		___Prefix2_196 = value;
	}

	inline static int32_t get_offset_of_Prefix1_197() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Prefix1_197)); }
	inline OpCode_t171716939  get_Prefix1_197() const { return ___Prefix1_197; }
	inline OpCode_t171716939 * get_address_of_Prefix1_197() { return &___Prefix1_197; }
	inline void set_Prefix1_197(OpCode_t171716939  value)
	{
		___Prefix1_197 = value;
	}

	inline static int32_t get_offset_of_Prefixref_198() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Prefixref_198)); }
	inline OpCode_t171716939  get_Prefixref_198() const { return ___Prefixref_198; }
	inline OpCode_t171716939 * get_address_of_Prefixref_198() { return &___Prefixref_198; }
	inline void set_Prefixref_198(OpCode_t171716939  value)
	{
		___Prefixref_198 = value;
	}

	inline static int32_t get_offset_of_Arglist_199() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Arglist_199)); }
	inline OpCode_t171716939  get_Arglist_199() const { return ___Arglist_199; }
	inline OpCode_t171716939 * get_address_of_Arglist_199() { return &___Arglist_199; }
	inline void set_Arglist_199(OpCode_t171716939  value)
	{
		___Arglist_199 = value;
	}

	inline static int32_t get_offset_of_Ceq_200() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ceq_200)); }
	inline OpCode_t171716939  get_Ceq_200() const { return ___Ceq_200; }
	inline OpCode_t171716939 * get_address_of_Ceq_200() { return &___Ceq_200; }
	inline void set_Ceq_200(OpCode_t171716939  value)
	{
		___Ceq_200 = value;
	}

	inline static int32_t get_offset_of_Cgt_201() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Cgt_201)); }
	inline OpCode_t171716939  get_Cgt_201() const { return ___Cgt_201; }
	inline OpCode_t171716939 * get_address_of_Cgt_201() { return &___Cgt_201; }
	inline void set_Cgt_201(OpCode_t171716939  value)
	{
		___Cgt_201 = value;
	}

	inline static int32_t get_offset_of_Cgt_Un_202() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Cgt_Un_202)); }
	inline OpCode_t171716939  get_Cgt_Un_202() const { return ___Cgt_Un_202; }
	inline OpCode_t171716939 * get_address_of_Cgt_Un_202() { return &___Cgt_Un_202; }
	inline void set_Cgt_Un_202(OpCode_t171716939  value)
	{
		___Cgt_Un_202 = value;
	}

	inline static int32_t get_offset_of_Clt_203() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Clt_203)); }
	inline OpCode_t171716939  get_Clt_203() const { return ___Clt_203; }
	inline OpCode_t171716939 * get_address_of_Clt_203() { return &___Clt_203; }
	inline void set_Clt_203(OpCode_t171716939  value)
	{
		___Clt_203 = value;
	}

	inline static int32_t get_offset_of_Clt_Un_204() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Clt_Un_204)); }
	inline OpCode_t171716939  get_Clt_Un_204() const { return ___Clt_Un_204; }
	inline OpCode_t171716939 * get_address_of_Clt_Un_204() { return &___Clt_Un_204; }
	inline void set_Clt_Un_204(OpCode_t171716939  value)
	{
		___Clt_Un_204 = value;
	}

	inline static int32_t get_offset_of_Ldftn_205() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldftn_205)); }
	inline OpCode_t171716939  get_Ldftn_205() const { return ___Ldftn_205; }
	inline OpCode_t171716939 * get_address_of_Ldftn_205() { return &___Ldftn_205; }
	inline void set_Ldftn_205(OpCode_t171716939  value)
	{
		___Ldftn_205 = value;
	}

	inline static int32_t get_offset_of_Ldvirtftn_206() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldvirtftn_206)); }
	inline OpCode_t171716939  get_Ldvirtftn_206() const { return ___Ldvirtftn_206; }
	inline OpCode_t171716939 * get_address_of_Ldvirtftn_206() { return &___Ldvirtftn_206; }
	inline void set_Ldvirtftn_206(OpCode_t171716939  value)
	{
		___Ldvirtftn_206 = value;
	}

	inline static int32_t get_offset_of_Ldarg_207() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldarg_207)); }
	inline OpCode_t171716939  get_Ldarg_207() const { return ___Ldarg_207; }
	inline OpCode_t171716939 * get_address_of_Ldarg_207() { return &___Ldarg_207; }
	inline void set_Ldarg_207(OpCode_t171716939  value)
	{
		___Ldarg_207 = value;
	}

	inline static int32_t get_offset_of_Ldarga_208() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldarga_208)); }
	inline OpCode_t171716939  get_Ldarga_208() const { return ___Ldarga_208; }
	inline OpCode_t171716939 * get_address_of_Ldarga_208() { return &___Ldarga_208; }
	inline void set_Ldarga_208(OpCode_t171716939  value)
	{
		___Ldarga_208 = value;
	}

	inline static int32_t get_offset_of_Starg_209() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Starg_209)); }
	inline OpCode_t171716939  get_Starg_209() const { return ___Starg_209; }
	inline OpCode_t171716939 * get_address_of_Starg_209() { return &___Starg_209; }
	inline void set_Starg_209(OpCode_t171716939  value)
	{
		___Starg_209 = value;
	}

	inline static int32_t get_offset_of_Ldloc_210() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldloc_210)); }
	inline OpCode_t171716939  get_Ldloc_210() const { return ___Ldloc_210; }
	inline OpCode_t171716939 * get_address_of_Ldloc_210() { return &___Ldloc_210; }
	inline void set_Ldloc_210(OpCode_t171716939  value)
	{
		___Ldloc_210 = value;
	}

	inline static int32_t get_offset_of_Ldloca_211() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Ldloca_211)); }
	inline OpCode_t171716939  get_Ldloca_211() const { return ___Ldloca_211; }
	inline OpCode_t171716939 * get_address_of_Ldloca_211() { return &___Ldloca_211; }
	inline void set_Ldloca_211(OpCode_t171716939  value)
	{
		___Ldloca_211 = value;
	}

	inline static int32_t get_offset_of_Stloc_212() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Stloc_212)); }
	inline OpCode_t171716939  get_Stloc_212() const { return ___Stloc_212; }
	inline OpCode_t171716939 * get_address_of_Stloc_212() { return &___Stloc_212; }
	inline void set_Stloc_212(OpCode_t171716939  value)
	{
		___Stloc_212 = value;
	}

	inline static int32_t get_offset_of_Localloc_213() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Localloc_213)); }
	inline OpCode_t171716939  get_Localloc_213() const { return ___Localloc_213; }
	inline OpCode_t171716939 * get_address_of_Localloc_213() { return &___Localloc_213; }
	inline void set_Localloc_213(OpCode_t171716939  value)
	{
		___Localloc_213 = value;
	}

	inline static int32_t get_offset_of_Endfilter_214() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Endfilter_214)); }
	inline OpCode_t171716939  get_Endfilter_214() const { return ___Endfilter_214; }
	inline OpCode_t171716939 * get_address_of_Endfilter_214() { return &___Endfilter_214; }
	inline void set_Endfilter_214(OpCode_t171716939  value)
	{
		___Endfilter_214 = value;
	}

	inline static int32_t get_offset_of_Unaligned_215() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Unaligned_215)); }
	inline OpCode_t171716939  get_Unaligned_215() const { return ___Unaligned_215; }
	inline OpCode_t171716939 * get_address_of_Unaligned_215() { return &___Unaligned_215; }
	inline void set_Unaligned_215(OpCode_t171716939  value)
	{
		___Unaligned_215 = value;
	}

	inline static int32_t get_offset_of_Volatile_216() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Volatile_216)); }
	inline OpCode_t171716939  get_Volatile_216() const { return ___Volatile_216; }
	inline OpCode_t171716939 * get_address_of_Volatile_216() { return &___Volatile_216; }
	inline void set_Volatile_216(OpCode_t171716939  value)
	{
		___Volatile_216 = value;
	}

	inline static int32_t get_offset_of_Tailcall_217() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Tailcall_217)); }
	inline OpCode_t171716939  get_Tailcall_217() const { return ___Tailcall_217; }
	inline OpCode_t171716939 * get_address_of_Tailcall_217() { return &___Tailcall_217; }
	inline void set_Tailcall_217(OpCode_t171716939  value)
	{
		___Tailcall_217 = value;
	}

	inline static int32_t get_offset_of_Initobj_218() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Initobj_218)); }
	inline OpCode_t171716939  get_Initobj_218() const { return ___Initobj_218; }
	inline OpCode_t171716939 * get_address_of_Initobj_218() { return &___Initobj_218; }
	inline void set_Initobj_218(OpCode_t171716939  value)
	{
		___Initobj_218 = value;
	}

	inline static int32_t get_offset_of_Constrained_219() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Constrained_219)); }
	inline OpCode_t171716939  get_Constrained_219() const { return ___Constrained_219; }
	inline OpCode_t171716939 * get_address_of_Constrained_219() { return &___Constrained_219; }
	inline void set_Constrained_219(OpCode_t171716939  value)
	{
		___Constrained_219 = value;
	}

	inline static int32_t get_offset_of_Cpblk_220() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Cpblk_220)); }
	inline OpCode_t171716939  get_Cpblk_220() const { return ___Cpblk_220; }
	inline OpCode_t171716939 * get_address_of_Cpblk_220() { return &___Cpblk_220; }
	inline void set_Cpblk_220(OpCode_t171716939  value)
	{
		___Cpblk_220 = value;
	}

	inline static int32_t get_offset_of_Initblk_221() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Initblk_221)); }
	inline OpCode_t171716939  get_Initblk_221() const { return ___Initblk_221; }
	inline OpCode_t171716939 * get_address_of_Initblk_221() { return &___Initblk_221; }
	inline void set_Initblk_221(OpCode_t171716939  value)
	{
		___Initblk_221 = value;
	}

	inline static int32_t get_offset_of_Rethrow_222() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Rethrow_222)); }
	inline OpCode_t171716939  get_Rethrow_222() const { return ___Rethrow_222; }
	inline OpCode_t171716939 * get_address_of_Rethrow_222() { return &___Rethrow_222; }
	inline void set_Rethrow_222(OpCode_t171716939  value)
	{
		___Rethrow_222 = value;
	}

	inline static int32_t get_offset_of_Sizeof_223() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Sizeof_223)); }
	inline OpCode_t171716939  get_Sizeof_223() const { return ___Sizeof_223; }
	inline OpCode_t171716939 * get_address_of_Sizeof_223() { return &___Sizeof_223; }
	inline void set_Sizeof_223(OpCode_t171716939  value)
	{
		___Sizeof_223 = value;
	}

	inline static int32_t get_offset_of_Refanytype_224() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Refanytype_224)); }
	inline OpCode_t171716939  get_Refanytype_224() const { return ___Refanytype_224; }
	inline OpCode_t171716939 * get_address_of_Refanytype_224() { return &___Refanytype_224; }
	inline void set_Refanytype_224(OpCode_t171716939  value)
	{
		___Refanytype_224 = value;
	}

	inline static int32_t get_offset_of_Readonly_225() { return static_cast<int32_t>(offsetof(OpCodes_t1901716662_StaticFields, ___Readonly_225)); }
	inline OpCode_t171716939  get_Readonly_225() const { return ___Readonly_225; }
	inline OpCode_t171716939 * get_address_of_Readonly_225() { return &___Readonly_225; }
	inline void set_Readonly_225(OpCode_t171716939  value)
	{
		___Readonly_225 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCODES_T1901716662_H
#ifndef TYPEATTRIBUTES_T1742692083_H
#define TYPEATTRIBUTES_T1742692083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeAttributes
struct  TypeAttributes_t1742692083 
{
public:
	// System.Int32 System.Reflection.TypeAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeAttributes_t1742692083, ___value___1)); }
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
#endif // TYPEATTRIBUTES_T1742692083_H
#ifndef METHODIMPLATTRIBUTES_T3015191184_H
#define METHODIMPLATTRIBUTES_T3015191184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodImplAttributes
struct  MethodImplAttributes_t3015191184 
{
public:
	// System.Int32 System.Reflection.MethodImplAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodImplAttributes_t3015191184, ___value___1)); }
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
#endif // METHODIMPLATTRIBUTES_T3015191184_H
#ifndef STACKBEHAVIOUR_T4130570954_H
#define STACKBEHAVIOUR_T4130570954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.StackBehaviour
struct  StackBehaviour_t4130570954 
{
public:
	// System.Int32 System.Reflection.Emit.StackBehaviour::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StackBehaviour_t4130570954, ___value___1)); }
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
#endif // STACKBEHAVIOUR_T4130570954_H
#ifndef AMBIGUOUSMATCHEXCEPTION_T327195977_H
#define AMBIGUOUSMATCHEXCEPTION_T327195977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AmbiguousMatchException
struct  AmbiguousMatchException_t327195977  : public SystemException_t2262094144
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMBIGUOUSMATCHEXCEPTION_T327195977_H
#ifndef ASSEMBLY_T2532343014_H
#define ASSEMBLY_T2532343014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t2532343014  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	IntPtr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t2695504579 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t2064415453 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t3198080310 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t3198080310 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t3198080310 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t3198080310 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t3198080310 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t2532343014, ____mono_assembly_0)); }
	inline IntPtr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline IntPtr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(IntPtr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t2532343014, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t2695504579 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t2695504579 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t2695504579 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t2532343014, ____evidence_2)); }
	inline Evidence_t2064415453 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t2064415453 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t2064415453 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t2532343014, ____minimum_3)); }
	inline PermissionSet_t3198080310 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t3198080310 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t3198080310 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t2532343014, ____optional_4)); }
	inline PermissionSet_t3198080310 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t3198080310 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t3198080310 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t2532343014, ____refuse_5)); }
	inline PermissionSet_t3198080310 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t3198080310 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t3198080310 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t2532343014, ____granted_6)); }
	inline PermissionSet_t3198080310 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t3198080310 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t3198080310 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t2532343014, ____denied_7)); }
	inline PermissionSet_t3198080310 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t3198080310 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t3198080310 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t2532343014, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t2532343014, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLY_T2532343014_H
#ifndef RUNTIMEFIELDHANDLE_T2338378722_H
#define RUNTIMEFIELDHANDLE_T2338378722_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t2338378722 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t2338378722, ___value_0)); }
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
#endif // RUNTIMEFIELDHANDLE_T2338378722_H
#ifndef ASSEMBLYNAMEFLAGS_T1568977849_H
#define ASSEMBLYNAMEFLAGS_T1568977849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyNameFlags
struct  AssemblyNameFlags_t1568977849 
{
public:
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyNameFlags_t1568977849, ___value___1)); }
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
#endif // ASSEMBLYNAMEFLAGS_T1568977849_H
#ifndef PACKINGSIZE_T4219233004_H
#define PACKINGSIZE_T4219233004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.PackingSize
struct  PackingSize_t4219233004 
{
public:
	// System.Int32 System.Reflection.Emit.PackingSize::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PackingSize_t4219233004, ___value___1)); }
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
#endif // PACKINGSIZE_T4219233004_H
#ifndef BINDINGFLAGS_T326472101_H
#define BINDINGFLAGS_T326472101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t326472101 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t326472101, ___value___1)); }
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
#endif // BINDINGFLAGS_T326472101_H
#ifndef CALLINGCONVENTIONS_T1186684606_H
#define CALLINGCONVENTIONS_T1186684606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CallingConventions
struct  CallingConventions_t1186684606 
{
public:
	// System.Int32 System.Reflection.CallingConventions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConventions_t1186684606, ___value___1)); }
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
#endif // CALLINGCONVENTIONS_T1186684606_H
#ifndef CONSTRUCTORINFO_T1211456807_H
#define CONSTRUCTORINFO_T1211456807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t1211456807  : public MethodBase_t3920293494
{
public:

public:
};

struct ConstructorInfo_t1211456807_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t1211456807_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorName_0), value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t1211456807_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeConstructorName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORINFO_T1211456807_H
#ifndef PEFILEKINDS_T3320310216_H
#define PEFILEKINDS_T3320310216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.PEFileKinds
struct  PEFileKinds_t3320310216 
{
public:
	// System.Int32 System.Reflection.Emit.PEFileKinds::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PEFileKinds_t3320310216, ___value___1)); }
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
#endif // PEFILEKINDS_T3320310216_H
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T3728838380_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T3728838380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t3728838380 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t734198029  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t3728838380, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t734198029  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t734198029 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t734198029  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t3728838380, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t3728838380_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t734198029_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t3728838380_marshaled_com
{
	CustomAttributeTypedArgument_t734198029_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T3728838380_H
#ifndef EVENTATTRIBUTES_T3106454753_H
#define EVENTATTRIBUTES_T3106454753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventAttributes
struct  EventAttributes_t3106454753 
{
public:
	// System.Int32 System.Reflection.EventAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventAttributes_t3106454753, ___value___1)); }
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
#endif // EVENTATTRIBUTES_T3106454753_H
#ifndef DELEGATE_T658074495_H
#define DELEGATE_T658074495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t658074495  : public RuntimeObject
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
	DelegateData_t2682468165 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t658074495, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t658074495, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t658074495, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t658074495, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t658074495, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t658074495, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t658074495, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t658074495, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t658074495, ___data_8)); }
	inline DelegateData_t2682468165 * get_data_8() const { return ___data_8; }
	inline DelegateData_t2682468165 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t2682468165 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T658074495_H
#ifndef FIELDATTRIBUTES_T3643081532_H
#define FIELDATTRIBUTES_T3643081532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldAttributes
struct  FieldAttributes_t3643081532 
{
public:
	// System.Int32 System.Reflection.FieldAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FieldAttributes_t3643081532, ___value___1)); }
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
#endif // FIELDATTRIBUTES_T3643081532_H
#ifndef OPERANDTYPE_T1218144377_H
#define OPERANDTYPE_T1218144377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.OperandType
struct  OperandType_t1218144377 
{
public:
	// System.Int32 System.Reflection.Emit.OperandType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OperandType_t1218144377, ___value___1)); }
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
#endif // OPERANDTYPE_T1218144377_H
#ifndef MEMBERTYPES_T1930693081_H
#define MEMBERTYPES_T1930693081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberTypes
struct  MemberTypes_t1930693081 
{
public:
	// System.Int32 System.Reflection.MemberTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MemberTypes_t1930693081, ___value___1)); }
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
#endif // MEMBERTYPES_T1930693081_H
#ifndef METHODATTRIBUTES_T361537895_H
#define METHODATTRIBUTES_T361537895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodAttributes
struct  MethodAttributes_t361537895 
{
public:
	// System.Int32 System.Reflection.MethodAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodAttributes_t361537895, ___value___1)); }
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
#endif // METHODATTRIBUTES_T361537895_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t3920293494
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef RUNTIMETYPEHANDLE_T3498154874_H
#define RUNTIMETYPEHANDLE_T3498154874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3498154874 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3498154874, ___value_0)); }
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
#endif // RUNTIMETYPEHANDLE_T3498154874_H
#ifndef ASSEMBLYVERSIONCOMPATIBILITY_T2027834884_H
#define ASSEMBLYVERSIONCOMPATIBILITY_T2027834884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct  AssemblyVersionCompatibility_t2027834884 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_t2027834884, ___value___1)); }
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
#endif // ASSEMBLYVERSIONCOMPATIBILITY_T2027834884_H
#ifndef ASSEMBLYHASHALGORITHM_T624660718_H
#define ASSEMBLYHASHALGORITHM_T624660718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct  AssemblyHashAlgorithm_t624660718 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_t624660718, ___value___1)); }
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
#endif // ASSEMBLYHASHALGORITHM_T624660718_H
#ifndef MONOEVENT_T_H
#define MONOEVENT_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEvent
struct  MonoEvent_t  : public EventInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoEvent::klass
	IntPtr_t ___klass_1;
	// System.IntPtr System.Reflection.MonoEvent::handle
	IntPtr_t ___handle_2;

public:
	inline static int32_t get_offset_of_klass_1() { return static_cast<int32_t>(offsetof(MonoEvent_t, ___klass_1)); }
	inline IntPtr_t get_klass_1() const { return ___klass_1; }
	inline IntPtr_t* get_address_of_klass_1() { return &___klass_1; }
	inline void set_klass_1(IntPtr_t value)
	{
		___klass_1 = value;
	}

	inline static int32_t get_offset_of_handle_2() { return static_cast<int32_t>(offsetof(MonoEvent_t, ___handle_2)); }
	inline IntPtr_t get_handle_2() const { return ___handle_2; }
	inline IntPtr_t* get_address_of_handle_2() { return &___handle_2; }
	inline void set_handle_2(IntPtr_t value)
	{
		___handle_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOEVENT_T_H
#ifndef UNMANAGEDTYPE_T983229434_H
#define UNMANAGEDTYPE_T983229434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t983229434 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnmanagedType_t983229434, ___value___1)); }
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
#endif // UNMANAGEDTYPE_T983229434_H
#ifndef METHODBUILDER_T1000574284_H
#define METHODBUILDER_T1000574284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.MethodBuilder
struct  MethodBuilder_t1000574284  : public MethodInfo_t
{
public:
	// System.Type System.Reflection.Emit.MethodBuilder::rtype
	Type_t * ___rtype_0;
	// System.Type[] System.Reflection.Emit.MethodBuilder::parameters
	TypeU5BU5D_t3431083906* ___parameters_1;
	// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::attrs
	int32_t ___attrs_2;
	// System.Reflection.MethodImplAttributes System.Reflection.Emit.MethodBuilder::iattrs
	int32_t ___iattrs_3;
	// System.String System.Reflection.Emit.MethodBuilder::name
	String_t* ___name_4;
	// System.Int32 System.Reflection.Emit.MethodBuilder::table_idx
	int32_t ___table_idx_5;
	// System.Byte[] System.Reflection.Emit.MethodBuilder::code
	ByteU5BU5D_t1747675394* ___code_6;
	// System.Reflection.Emit.ILGenerator System.Reflection.Emit.MethodBuilder::ilgen
	ILGenerator_t1598022474 * ___ilgen_7;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.MethodBuilder::type
	TypeBuilder_t1322358382 * ___type_8;
	// System.Reflection.Emit.ParameterBuilder[] System.Reflection.Emit.MethodBuilder::pinfo
	ParameterBuilderU5BU5D_t882234856* ___pinfo_9;
	// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::override_method
	MethodInfo_t * ___override_method_10;
	// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::call_conv
	int32_t ___call_conv_11;
	// System.Boolean System.Reflection.Emit.MethodBuilder::init_locals
	bool ___init_locals_12;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] System.Reflection.Emit.MethodBuilder::generic_params
	GenericTypeParameterBuilderU5BU5D_t4073622788* ___generic_params_13;
	// System.Type[] System.Reflection.Emit.MethodBuilder::returnModReq
	TypeU5BU5D_t3431083906* ___returnModReq_14;
	// System.Type[] System.Reflection.Emit.MethodBuilder::returnModOpt
	TypeU5BU5D_t3431083906* ___returnModOpt_15;
	// System.Type[][] System.Reflection.Emit.MethodBuilder::paramModReq
	TypeU5BU5DU5BU5D_t4066568247* ___paramModReq_16;
	// System.Type[][] System.Reflection.Emit.MethodBuilder::paramModOpt
	TypeU5BU5DU5BU5D_t4066568247* ___paramModOpt_17;

public:
	inline static int32_t get_offset_of_rtype_0() { return static_cast<int32_t>(offsetof(MethodBuilder_t1000574284, ___rtype_0)); }
	inline Type_t * get_rtype_0() const { return ___rtype_0; }
	inline Type_t ** get_address_of_rtype_0() { return &___rtype_0; }
	inline void set_rtype_0(Type_t * value)
	{
		___rtype_0 = value;
		Il2CppCodeGenWriteBarrier((&___rtype_0), value);
	}

	inline static int32_t get_offset_of_parameters_1() { return static_cast<int32_t>(offsetof(MethodBuilder_t1000574284, ___parameters_1)); }
	inline TypeU5BU5D_t3431083906* get_parameters_1() const { return ___parameters_1; }
	inline TypeU5BU5D_t3431083906** get_address_of_parameters_1() { return &___parameters_1; }
	inline void set_parameters_1(TypeU5BU5D_t3431083906* value)
	{
		___parameters_1 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_1), value);
	}

	inline static int32_t get_offset_of_attrs_2() { return static_cast<int32_t>(offsetof(MethodBuilder_t1000574284, ___attrs_2)); }
	inline int32_t get_attrs_2() const { return ___attrs_2; }
	inline int32_t* get_address_of_attrs_2() { return &___attrs_2; }
	inline void set_attrs_2(int32_t value)
	{
		___attrs_2 = value;
	}

	inline static int32_t get_offset_of_iattrs_3() { return static_cast<int32_t>(offsetof(MethodBuilder_t1000574284, ___iattrs_3)); }
	inline int32_t get_iattrs_3() const { return ___iattrs_3; }
	inline int32_t* get_address_of_iattrs_3() { return &___iattrs_3; }
	inline void set_iattrs_3(int32_t value)
	{
		___iattrs_3 = value;
	}

	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(MethodBuilder_t1000574284, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier((&___name_4), value);
	}

	inline static int32_t get_offset_of_table_idx_5() { return static_cast<int32_t>(offsetof(MethodBuilder_t1000574284, ___table_idx_5)); }
	inline int32_t get_table_idx_5() const { return ___table_idx_5; }
	inline int32_t* get_address_of_table_idx_5() { return &___table_idx_5; }
	inline void set_table_idx_5(int32_t value)
	{
		___table_idx_5 = value;
	}

	inline static int32_t get_offset_of_code_6() { return static_cast<int32_t>(offsetof(MethodBuilder_t1000574284, ___code_6)); }
	inline ByteU5BU5D_t1747675394* get_code_6() const { return ___code_6; }
	inline ByteU5BU5D_t1747675394** get_address_of_code_6() { return &___code_6; }
	inline void set_code_6(ByteU5BU5D_t1747675394* value)
	{
		___code_6 = value;
		Il2CppCodeGenWriteBarrier((&___code_6), value);
	}

	inline static int32_t get_offset_of_ilgen_7() { return static_cast<int32_t>(offsetof(MethodBuilder_t1000574284, ___ilgen_7)); }
	inline ILGenerator_t1598022474 * get_ilgen_7() const { return ___ilgen_7; }
	inline ILGenerator_t1598022474 ** get_address_of_ilgen_7() { return &___ilgen_7; }
	inline void set_ilgen_7(ILGenerator_t1598022474 * value)
	{
		___ilgen_7 = value;
		Il2CppCodeGenWriteBarrier((&___ilgen_7), value);
	}

	inline static int32_t get_offset_of_type_8() { return static_cast<int32_t>(offsetof(MethodBuilder_t1000574284, ___type_8)); }
	inline TypeBuilder_t1322358382 * get_type_8() const { return ___type_8; }
	inline TypeBuilder_t1322358382 ** get_address_of_type_8() { return &___type_8; }
	inline void set_type_8(TypeBuilder_t1322358382 * value)
	{
		___type_8 = value;
		Il2CppCodeGenWriteBarrier((&___type_8), value);
	}

	inline static int32_t get_offset_of_pinfo_9() { return static_cast<int32_t>(offsetof(MethodBuilder_t1000574284, ___pinfo_9)); }
	inline ParameterBuilderU5BU5D_t882234856* get_pinfo_9() const { return ___pinfo_9; }
	inline ParameterBuilderU5BU5D_t882234856** get_address_of_pinfo_9() { return &___pinfo_9; }
	inline void set_pinfo_9(ParameterBuilderU5BU5D_t882234856* value)
	{
		___pinfo_9 = value;
		Il2CppCodeGenWriteBarrier((&___pinfo_9), value);
	}

	inline static int32_t get_offset_of_override_method_10() { return static_cast<int32_t>(offsetof(MethodBuilder_t1000574284, ___override_method_10)); }
	inline MethodInfo_t * get_override_method_10() const { return ___override_method_10; }
	inline MethodInfo_t ** get_address_of_override_method_10() { return &___override_method_10; }
	inline void set_override_method_10(MethodInfo_t * value)
	{
		___override_method_10 = value;
		Il2CppCodeGenWriteBarrier((&___override_method_10), value);
	}

	inline static int32_t get_offset_of_call_conv_11() { return static_cast<int32_t>(offsetof(MethodBuilder_t1000574284, ___call_conv_11)); }
	inline int32_t get_call_conv_11() const { return ___call_conv_11; }
	inline int32_t* get_address_of_call_conv_11() { return &___call_conv_11; }
	inline void set_call_conv_11(int32_t value)
	{
		___call_conv_11 = value;
	}

	inline static int32_t get_offset_of_init_locals_12() { return static_cast<int32_t>(offsetof(MethodBuilder_t1000574284, ___init_locals_12)); }
	inline bool get_init_locals_12() const { return ___init_locals_12; }
	inline bool* get_address_of_init_locals_12() { return &___init_locals_12; }
	inline void set_init_locals_12(bool value)
	{
		___init_locals_12 = value;
	}

	inline static int32_t get_offset_of_generic_params_13() { return static_cast<int32_t>(offsetof(MethodBuilder_t1000574284, ___generic_params_13)); }
	inline GenericTypeParameterBuilderU5BU5D_t4073622788* get_generic_params_13() const { return ___generic_params_13; }
	inline GenericTypeParameterBuilderU5BU5D_t4073622788** get_address_of_generic_params_13() { return &___generic_params_13; }
	inline void set_generic_params_13(GenericTypeParameterBuilderU5BU5D_t4073622788* value)
	{
		___generic_params_13 = value;
		Il2CppCodeGenWriteBarrier((&___generic_params_13), value);
	}

	inline static int32_t get_offset_of_returnModReq_14() { return static_cast<int32_t>(offsetof(MethodBuilder_t1000574284, ___returnModReq_14)); }
	inline TypeU5BU5D_t3431083906* get_returnModReq_14() const { return ___returnModReq_14; }
	inline TypeU5BU5D_t3431083906** get_address_of_returnModReq_14() { return &___returnModReq_14; }
	inline void set_returnModReq_14(TypeU5BU5D_t3431083906* value)
	{
		___returnModReq_14 = value;
		Il2CppCodeGenWriteBarrier((&___returnModReq_14), value);
	}

	inline static int32_t get_offset_of_returnModOpt_15() { return static_cast<int32_t>(offsetof(MethodBuilder_t1000574284, ___returnModOpt_15)); }
	inline TypeU5BU5D_t3431083906* get_returnModOpt_15() const { return ___returnModOpt_15; }
	inline TypeU5BU5D_t3431083906** get_address_of_returnModOpt_15() { return &___returnModOpt_15; }
	inline void set_returnModOpt_15(TypeU5BU5D_t3431083906* value)
	{
		___returnModOpt_15 = value;
		Il2CppCodeGenWriteBarrier((&___returnModOpt_15), value);
	}

	inline static int32_t get_offset_of_paramModReq_16() { return static_cast<int32_t>(offsetof(MethodBuilder_t1000574284, ___paramModReq_16)); }
	inline TypeU5BU5DU5BU5D_t4066568247* get_paramModReq_16() const { return ___paramModReq_16; }
	inline TypeU5BU5DU5BU5D_t4066568247** get_address_of_paramModReq_16() { return &___paramModReq_16; }
	inline void set_paramModReq_16(TypeU5BU5DU5BU5D_t4066568247* value)
	{
		___paramModReq_16 = value;
		Il2CppCodeGenWriteBarrier((&___paramModReq_16), value);
	}

	inline static int32_t get_offset_of_paramModOpt_17() { return static_cast<int32_t>(offsetof(MethodBuilder_t1000574284, ___paramModOpt_17)); }
	inline TypeU5BU5DU5BU5D_t4066568247* get_paramModOpt_17() const { return ___paramModOpt_17; }
	inline TypeU5BU5DU5BU5D_t4066568247** get_address_of_paramModOpt_17() { return &___paramModOpt_17; }
	inline void set_paramModOpt_17(TypeU5BU5DU5BU5D_t4066568247* value)
	{
		___paramModOpt_17 = value;
		Il2CppCodeGenWriteBarrier((&___paramModOpt_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBUILDER_T1000574284_H
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
	RuntimeTypeHandle_t3498154874  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3498154874  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3498154874 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3498154874  value)
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
	TypeU5BU5D_t3431083906* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t146701085 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t146701085 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t146701085 * ___FilterNameIgnoreCase_6;
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
	inline TypeU5BU5D_t3431083906* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3431083906** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3431083906* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t146701085 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t146701085 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t146701085 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t146701085 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t146701085 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t146701085 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t146701085 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t146701085 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t146701085 * value)
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
#ifndef MULTICASTDELEGATE_T2404293158_H
#define MULTICASTDELEGATE_T2404293158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t2404293158  : public Delegate_t658074495
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t2404293158 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t2404293158 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2404293158, ___prev_9)); }
	inline MulticastDelegate_t2404293158 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t2404293158 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t2404293158 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2404293158, ___kpm_next_10)); }
	inline MulticastDelegate_t2404293158 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t2404293158 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t2404293158 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T2404293158_H
#ifndef MONOMETHOD_T_H
#define MONOMETHOD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethod
struct  MonoMethod_t  : public MethodInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoMethod::mhandle
	IntPtr_t ___mhandle_0;
	// System.String System.Reflection.MonoMethod::name
	String_t* ___name_1;
	// System.Type System.Reflection.MonoMethod::reftype
	Type_t * ___reftype_2;

public:
	inline static int32_t get_offset_of_mhandle_0() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___mhandle_0)); }
	inline IntPtr_t get_mhandle_0() const { return ___mhandle_0; }
	inline IntPtr_t* get_address_of_mhandle_0() { return &___mhandle_0; }
	inline void set_mhandle_0(IntPtr_t value)
	{
		___mhandle_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_reftype_2() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___reftype_2)); }
	inline Type_t * get_reftype_2() const { return ___reftype_2; }
	inline Type_t ** get_address_of_reftype_2() { return &___reftype_2; }
	inline void set_reftype_2(Type_t * value)
	{
		___reftype_2 = value;
		Il2CppCodeGenWriteBarrier((&___reftype_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOMETHOD_T_H
#ifndef MONOFIELD_T_H
#define MONOFIELD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoField
struct  MonoField_t  : public FieldInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoField::klass
	IntPtr_t ___klass_0;
	// System.RuntimeFieldHandle System.Reflection.MonoField::fhandle
	RuntimeFieldHandle_t2338378722  ___fhandle_1;
	// System.String System.Reflection.MonoField::name
	String_t* ___name_2;
	// System.Type System.Reflection.MonoField::type
	Type_t * ___type_3;
	// System.Reflection.FieldAttributes System.Reflection.MonoField::attrs
	int32_t ___attrs_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoField_t, ___klass_0)); }
	inline IntPtr_t get_klass_0() const { return ___klass_0; }
	inline IntPtr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(IntPtr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_fhandle_1() { return static_cast<int32_t>(offsetof(MonoField_t, ___fhandle_1)); }
	inline RuntimeFieldHandle_t2338378722  get_fhandle_1() const { return ___fhandle_1; }
	inline RuntimeFieldHandle_t2338378722 * get_address_of_fhandle_1() { return &___fhandle_1; }
	inline void set_fhandle_1(RuntimeFieldHandle_t2338378722  value)
	{
		___fhandle_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoField_t, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(MonoField_t, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(MonoField_t, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOFIELD_T_H
#ifndef PARAMETERINFO_T3188848418_H
#define PARAMETERINFO_T3188848418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t3188848418  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.ParameterInfo::marshalAs
	UnmanagedMarshal_t4066821019 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t3188848418, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t3188848418, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t3188848418, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t3188848418, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t3188848418, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t3188848418, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t3188848418, ___marshalAs_6)); }
	inline UnmanagedMarshal_t4066821019 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline UnmanagedMarshal_t4066821019 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(UnmanagedMarshal_t4066821019 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERINFO_T3188848418_H
#ifndef UNMANAGEDMARSHAL_T4066821019_H
#define UNMANAGEDMARSHAL_T4066821019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.UnmanagedMarshal
struct  UnmanagedMarshal_t4066821019  : public RuntimeObject
{
public:
	// System.Int32 System.Reflection.Emit.UnmanagedMarshal::count
	int32_t ___count_0;
	// System.Runtime.InteropServices.UnmanagedType System.Reflection.Emit.UnmanagedMarshal::t
	int32_t ___t_1;
	// System.Runtime.InteropServices.UnmanagedType System.Reflection.Emit.UnmanagedMarshal::tbase
	int32_t ___tbase_2;
	// System.String System.Reflection.Emit.UnmanagedMarshal::guid
	String_t* ___guid_3;
	// System.String System.Reflection.Emit.UnmanagedMarshal::mcookie
	String_t* ___mcookie_4;
	// System.String System.Reflection.Emit.UnmanagedMarshal::marshaltype
	String_t* ___marshaltype_5;
	// System.Type System.Reflection.Emit.UnmanagedMarshal::marshaltyperef
	Type_t * ___marshaltyperef_6;
	// System.Int32 System.Reflection.Emit.UnmanagedMarshal::param_num
	int32_t ___param_num_7;
	// System.Boolean System.Reflection.Emit.UnmanagedMarshal::has_size
	bool ___has_size_8;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4066821019, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_t_1() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4066821019, ___t_1)); }
	inline int32_t get_t_1() const { return ___t_1; }
	inline int32_t* get_address_of_t_1() { return &___t_1; }
	inline void set_t_1(int32_t value)
	{
		___t_1 = value;
	}

	inline static int32_t get_offset_of_tbase_2() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4066821019, ___tbase_2)); }
	inline int32_t get_tbase_2() const { return ___tbase_2; }
	inline int32_t* get_address_of_tbase_2() { return &___tbase_2; }
	inline void set_tbase_2(int32_t value)
	{
		___tbase_2 = value;
	}

	inline static int32_t get_offset_of_guid_3() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4066821019, ___guid_3)); }
	inline String_t* get_guid_3() const { return ___guid_3; }
	inline String_t** get_address_of_guid_3() { return &___guid_3; }
	inline void set_guid_3(String_t* value)
	{
		___guid_3 = value;
		Il2CppCodeGenWriteBarrier((&___guid_3), value);
	}

	inline static int32_t get_offset_of_mcookie_4() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4066821019, ___mcookie_4)); }
	inline String_t* get_mcookie_4() const { return ___mcookie_4; }
	inline String_t** get_address_of_mcookie_4() { return &___mcookie_4; }
	inline void set_mcookie_4(String_t* value)
	{
		___mcookie_4 = value;
		Il2CppCodeGenWriteBarrier((&___mcookie_4), value);
	}

	inline static int32_t get_offset_of_marshaltype_5() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4066821019, ___marshaltype_5)); }
	inline String_t* get_marshaltype_5() const { return ___marshaltype_5; }
	inline String_t** get_address_of_marshaltype_5() { return &___marshaltype_5; }
	inline void set_marshaltype_5(String_t* value)
	{
		___marshaltype_5 = value;
		Il2CppCodeGenWriteBarrier((&___marshaltype_5), value);
	}

	inline static int32_t get_offset_of_marshaltyperef_6() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4066821019, ___marshaltyperef_6)); }
	inline Type_t * get_marshaltyperef_6() const { return ___marshaltyperef_6; }
	inline Type_t ** get_address_of_marshaltyperef_6() { return &___marshaltyperef_6; }
	inline void set_marshaltyperef_6(Type_t * value)
	{
		___marshaltyperef_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshaltyperef_6), value);
	}

	inline static int32_t get_offset_of_param_num_7() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4066821019, ___param_num_7)); }
	inline int32_t get_param_num_7() const { return ___param_num_7; }
	inline int32_t* get_address_of_param_num_7() { return &___param_num_7; }
	inline void set_param_num_7(int32_t value)
	{
		___param_num_7 = value;
	}

	inline static int32_t get_offset_of_has_size_8() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4066821019, ___has_size_8)); }
	inline bool get_has_size_8() const { return ___has_size_8; }
	inline bool* get_address_of_has_size_8() { return &___has_size_8; }
	inline void set_has_size_8(bool value)
	{
		___has_size_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDMARSHAL_T4066821019_H
#ifndef PARAMETERBUILDER_T1329264869_H
#define PARAMETERBUILDER_T1329264869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ParameterBuilder
struct  ParameterBuilder_t1329264869  : public RuntimeObject
{
public:
	// System.String System.Reflection.Emit.ParameterBuilder::name
	String_t* ___name_0;
	// System.Reflection.ParameterAttributes System.Reflection.Emit.ParameterBuilder::attrs
	int32_t ___attrs_1;
	// System.Int32 System.Reflection.Emit.ParameterBuilder::position
	int32_t ___position_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ParameterBuilder_t1329264869, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(ParameterBuilder_t1329264869, ___attrs_1)); }
	inline int32_t get_attrs_1() const { return ___attrs_1; }
	inline int32_t* get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(int32_t value)
	{
		___attrs_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(ParameterBuilder_t1329264869, ___position_2)); }
	inline int32_t get_position_2() const { return ___position_2; }
	inline int32_t* get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(int32_t value)
	{
		___position_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERBUILDER_T1329264869_H
#ifndef MONOPROPERTYINFO_T3144956697_H
#define MONOPROPERTYINFO_T3144956697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoPropertyInfo
struct  MonoPropertyInfo_t3144956697 
{
public:
	// System.Type System.Reflection.MonoPropertyInfo::parent
	Type_t * ___parent_0;
	// System.String System.Reflection.MonoPropertyInfo::name
	String_t* ___name_1;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::get_method
	MethodInfo_t * ___get_method_2;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::set_method
	MethodInfo_t * ___set_method_3;
	// System.Reflection.PropertyAttributes System.Reflection.MonoPropertyInfo::attrs
	int32_t ___attrs_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3144956697, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3144956697, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_get_method_2() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3144956697, ___get_method_2)); }
	inline MethodInfo_t * get_get_method_2() const { return ___get_method_2; }
	inline MethodInfo_t ** get_address_of_get_method_2() { return &___get_method_2; }
	inline void set_get_method_2(MethodInfo_t * value)
	{
		___get_method_2 = value;
		Il2CppCodeGenWriteBarrier((&___get_method_2), value);
	}

	inline static int32_t get_offset_of_set_method_3() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3144956697, ___set_method_3)); }
	inline MethodInfo_t * get_set_method_3() const { return ___set_method_3; }
	inline MethodInfo_t ** get_address_of_set_method_3() { return &___set_method_3; }
	inline void set_set_method_3(MethodInfo_t * value)
	{
		___set_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___set_method_3), value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3144956697, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t3144956697_marshaled_pinvoke
{
	Type_t * ___parent_0;
	char* ___name_1;
	MethodInfo_t * ___get_method_2;
	MethodInfo_t * ___set_method_3;
	int32_t ___attrs_4;
};
// Native definition for COM marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t3144956697_marshaled_com
{
	Type_t * ___parent_0;
	Il2CppChar* ___name_1;
	MethodInfo_t * ___get_method_2;
	MethodInfo_t * ___set_method_3;
	int32_t ___attrs_4;
};
#endif // MONOPROPERTYINFO_T3144956697_H
#ifndef MONOCMETHOD_T1381445477_H
#define MONOCMETHOD_T1381445477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoCMethod
struct  MonoCMethod_t1381445477  : public ConstructorInfo_t1211456807
{
public:
	// System.IntPtr System.Reflection.MonoCMethod::mhandle
	IntPtr_t ___mhandle_2;
	// System.String System.Reflection.MonoCMethod::name
	String_t* ___name_3;
	// System.Type System.Reflection.MonoCMethod::reftype
	Type_t * ___reftype_4;

public:
	inline static int32_t get_offset_of_mhandle_2() { return static_cast<int32_t>(offsetof(MonoCMethod_t1381445477, ___mhandle_2)); }
	inline IntPtr_t get_mhandle_2() const { return ___mhandle_2; }
	inline IntPtr_t* get_address_of_mhandle_2() { return &___mhandle_2; }
	inline void set_mhandle_2(IntPtr_t value)
	{
		___mhandle_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(MonoCMethod_t1381445477, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_reftype_4() { return static_cast<int32_t>(offsetof(MonoCMethod_t1381445477, ___reftype_4)); }
	inline Type_t * get_reftype_4() const { return ___reftype_4; }
	inline Type_t ** get_address_of_reftype_4() { return &___reftype_4; }
	inline void set_reftype_4(Type_t * value)
	{
		___reftype_4 = value;
		Il2CppCodeGenWriteBarrier((&___reftype_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOCMETHOD_T1381445477_H
#ifndef MONOMETHODINFO_T3011255564_H
#define MONOMETHODINFO_T3011255564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethodInfo
struct  MonoMethodInfo_t3011255564 
{
public:
	// System.Type System.Reflection.MonoMethodInfo::parent
	Type_t * ___parent_0;
	// System.Type System.Reflection.MonoMethodInfo::ret
	Type_t * ___ret_1;
	// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::attrs
	int32_t ___attrs_2;
	// System.Reflection.MethodImplAttributes System.Reflection.MonoMethodInfo::iattrs
	int32_t ___iattrs_3;
	// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::callconv
	int32_t ___callconv_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t3011255564, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_ret_1() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t3011255564, ___ret_1)); }
	inline Type_t * get_ret_1() const { return ___ret_1; }
	inline Type_t ** get_address_of_ret_1() { return &___ret_1; }
	inline void set_ret_1(Type_t * value)
	{
		___ret_1 = value;
		Il2CppCodeGenWriteBarrier((&___ret_1), value);
	}

	inline static int32_t get_offset_of_attrs_2() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t3011255564, ___attrs_2)); }
	inline int32_t get_attrs_2() const { return ___attrs_2; }
	inline int32_t* get_address_of_attrs_2() { return &___attrs_2; }
	inline void set_attrs_2(int32_t value)
	{
		___attrs_2 = value;
	}

	inline static int32_t get_offset_of_iattrs_3() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t3011255564, ___iattrs_3)); }
	inline int32_t get_iattrs_3() const { return ___iattrs_3; }
	inline int32_t* get_address_of_iattrs_3() { return &___iattrs_3; }
	inline void set_iattrs_3(int32_t value)
	{
		___iattrs_3 = value;
	}

	inline static int32_t get_offset_of_callconv_4() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t3011255564, ___callconv_4)); }
	inline int32_t get_callconv_4() const { return ___callconv_4; }
	inline int32_t* get_address_of_callconv_4() { return &___callconv_4; }
	inline void set_callconv_4(int32_t value)
	{
		___callconv_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t3011255564_marshaled_pinvoke
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
// Native definition for COM marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t3011255564_marshaled_com
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
#endif // MONOMETHODINFO_T3011255564_H
#ifndef ASSEMBLYNAME_T2919556893_H
#define ASSEMBLYNAME_T2919556893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyName
struct  AssemblyName_t2919556893  : public RuntimeObject
{
public:
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t787461153 * ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t1212754456 * ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_t1747675394* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_t1747675394* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_t3179844488 * ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyName_t2919556893, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_codebase_1() { return static_cast<int32_t>(offsetof(AssemblyName_t2919556893, ___codebase_1)); }
	inline String_t* get_codebase_1() const { return ___codebase_1; }
	inline String_t** get_address_of_codebase_1() { return &___codebase_1; }
	inline void set_codebase_1(String_t* value)
	{
		___codebase_1 = value;
		Il2CppCodeGenWriteBarrier((&___codebase_1), value);
	}

	inline static int32_t get_offset_of_major_2() { return static_cast<int32_t>(offsetof(AssemblyName_t2919556893, ___major_2)); }
	inline int32_t get_major_2() const { return ___major_2; }
	inline int32_t* get_address_of_major_2() { return &___major_2; }
	inline void set_major_2(int32_t value)
	{
		___major_2 = value;
	}

	inline static int32_t get_offset_of_minor_3() { return static_cast<int32_t>(offsetof(AssemblyName_t2919556893, ___minor_3)); }
	inline int32_t get_minor_3() const { return ___minor_3; }
	inline int32_t* get_address_of_minor_3() { return &___minor_3; }
	inline void set_minor_3(int32_t value)
	{
		___minor_3 = value;
	}

	inline static int32_t get_offset_of_build_4() { return static_cast<int32_t>(offsetof(AssemblyName_t2919556893, ___build_4)); }
	inline int32_t get_build_4() const { return ___build_4; }
	inline int32_t* get_address_of_build_4() { return &___build_4; }
	inline void set_build_4(int32_t value)
	{
		___build_4 = value;
	}

	inline static int32_t get_offset_of_revision_5() { return static_cast<int32_t>(offsetof(AssemblyName_t2919556893, ___revision_5)); }
	inline int32_t get_revision_5() const { return ___revision_5; }
	inline int32_t* get_address_of_revision_5() { return &___revision_5; }
	inline void set_revision_5(int32_t value)
	{
		___revision_5 = value;
	}

	inline static int32_t get_offset_of_cultureinfo_6() { return static_cast<int32_t>(offsetof(AssemblyName_t2919556893, ___cultureinfo_6)); }
	inline CultureInfo_t787461153 * get_cultureinfo_6() const { return ___cultureinfo_6; }
	inline CultureInfo_t787461153 ** get_address_of_cultureinfo_6() { return &___cultureinfo_6; }
	inline void set_cultureinfo_6(CultureInfo_t787461153 * value)
	{
		___cultureinfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___cultureinfo_6), value);
	}

	inline static int32_t get_offset_of_flags_7() { return static_cast<int32_t>(offsetof(AssemblyName_t2919556893, ___flags_7)); }
	inline int32_t get_flags_7() const { return ___flags_7; }
	inline int32_t* get_address_of_flags_7() { return &___flags_7; }
	inline void set_flags_7(int32_t value)
	{
		___flags_7 = value;
	}

	inline static int32_t get_offset_of_hashalg_8() { return static_cast<int32_t>(offsetof(AssemblyName_t2919556893, ___hashalg_8)); }
	inline int32_t get_hashalg_8() const { return ___hashalg_8; }
	inline int32_t* get_address_of_hashalg_8() { return &___hashalg_8; }
	inline void set_hashalg_8(int32_t value)
	{
		___hashalg_8 = value;
	}

	inline static int32_t get_offset_of_keypair_9() { return static_cast<int32_t>(offsetof(AssemblyName_t2919556893, ___keypair_9)); }
	inline StrongNameKeyPair_t1212754456 * get_keypair_9() const { return ___keypair_9; }
	inline StrongNameKeyPair_t1212754456 ** get_address_of_keypair_9() { return &___keypair_9; }
	inline void set_keypair_9(StrongNameKeyPair_t1212754456 * value)
	{
		___keypair_9 = value;
		Il2CppCodeGenWriteBarrier((&___keypair_9), value);
	}

	inline static int32_t get_offset_of_publicKey_10() { return static_cast<int32_t>(offsetof(AssemblyName_t2919556893, ___publicKey_10)); }
	inline ByteU5BU5D_t1747675394* get_publicKey_10() const { return ___publicKey_10; }
	inline ByteU5BU5D_t1747675394** get_address_of_publicKey_10() { return &___publicKey_10; }
	inline void set_publicKey_10(ByteU5BU5D_t1747675394* value)
	{
		___publicKey_10 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_10), value);
	}

	inline static int32_t get_offset_of_keyToken_11() { return static_cast<int32_t>(offsetof(AssemblyName_t2919556893, ___keyToken_11)); }
	inline ByteU5BU5D_t1747675394* get_keyToken_11() const { return ___keyToken_11; }
	inline ByteU5BU5D_t1747675394** get_address_of_keyToken_11() { return &___keyToken_11; }
	inline void set_keyToken_11(ByteU5BU5D_t1747675394* value)
	{
		___keyToken_11 = value;
		Il2CppCodeGenWriteBarrier((&___keyToken_11), value);
	}

	inline static int32_t get_offset_of_versioncompat_12() { return static_cast<int32_t>(offsetof(AssemblyName_t2919556893, ___versioncompat_12)); }
	inline int32_t get_versioncompat_12() const { return ___versioncompat_12; }
	inline int32_t* get_address_of_versioncompat_12() { return &___versioncompat_12; }
	inline void set_versioncompat_12(int32_t value)
	{
		___versioncompat_12 = value;
	}

	inline static int32_t get_offset_of_version_13() { return static_cast<int32_t>(offsetof(AssemblyName_t2919556893, ___version_13)); }
	inline Version_t3179844488 * get_version_13() const { return ___version_13; }
	inline Version_t3179844488 ** get_address_of_version_13() { return &___version_13; }
	inline void set_version_13(Version_t3179844488 * value)
	{
		___version_13 = value;
		Il2CppCodeGenWriteBarrier((&___version_13), value);
	}

	inline static int32_t get_offset_of_processor_architecture_14() { return static_cast<int32_t>(offsetof(AssemblyName_t2919556893, ___processor_architecture_14)); }
	inline int32_t get_processor_architecture_14() const { return ___processor_architecture_14; }
	inline int32_t* get_address_of_processor_architecture_14() { return &___processor_architecture_14; }
	inline void set_processor_architecture_14(int32_t value)
	{
		___processor_architecture_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYNAME_T2919556893_H
#ifndef MEMBERINFOSERIALIZATIONHOLDER_T881282228_H
#define MEMBERINFOSERIALIZATIONHOLDER_T881282228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfoSerializationHolder
struct  MemberInfoSerializationHolder_t881282228  : public RuntimeObject
{
public:
	// System.String System.Reflection.MemberInfoSerializationHolder::_memberName
	String_t* ____memberName_0;
	// System.String System.Reflection.MemberInfoSerializationHolder::_memberSignature
	String_t* ____memberSignature_1;
	// System.Reflection.MemberTypes System.Reflection.MemberInfoSerializationHolder::_memberType
	int32_t ____memberType_2;
	// System.Type System.Reflection.MemberInfoSerializationHolder::_reflectedType
	Type_t * ____reflectedType_3;
	// System.Type[] System.Reflection.MemberInfoSerializationHolder::_genericArguments
	TypeU5BU5D_t3431083906* ____genericArguments_4;

public:
	inline static int32_t get_offset_of__memberName_0() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t881282228, ____memberName_0)); }
	inline String_t* get__memberName_0() const { return ____memberName_0; }
	inline String_t** get_address_of__memberName_0() { return &____memberName_0; }
	inline void set__memberName_0(String_t* value)
	{
		____memberName_0 = value;
		Il2CppCodeGenWriteBarrier((&____memberName_0), value);
	}

	inline static int32_t get_offset_of__memberSignature_1() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t881282228, ____memberSignature_1)); }
	inline String_t* get__memberSignature_1() const { return ____memberSignature_1; }
	inline String_t** get_address_of__memberSignature_1() { return &____memberSignature_1; }
	inline void set__memberSignature_1(String_t* value)
	{
		____memberSignature_1 = value;
		Il2CppCodeGenWriteBarrier((&____memberSignature_1), value);
	}

	inline static int32_t get_offset_of__memberType_2() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t881282228, ____memberType_2)); }
	inline int32_t get__memberType_2() const { return ____memberType_2; }
	inline int32_t* get_address_of__memberType_2() { return &____memberType_2; }
	inline void set__memberType_2(int32_t value)
	{
		____memberType_2 = value;
	}

	inline static int32_t get_offset_of__reflectedType_3() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t881282228, ____reflectedType_3)); }
	inline Type_t * get__reflectedType_3() const { return ____reflectedType_3; }
	inline Type_t ** get_address_of__reflectedType_3() { return &____reflectedType_3; }
	inline void set__reflectedType_3(Type_t * value)
	{
		____reflectedType_3 = value;
		Il2CppCodeGenWriteBarrier((&____reflectedType_3), value);
	}

	inline static int32_t get_offset_of__genericArguments_4() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t881282228, ____genericArguments_4)); }
	inline TypeU5BU5D_t3431083906* get__genericArguments_4() const { return ____genericArguments_4; }
	inline TypeU5BU5D_t3431083906** get_address_of__genericArguments_4() { return &____genericArguments_4; }
	inline void set__genericArguments_4(TypeU5BU5D_t3431083906* value)
	{
		____genericArguments_4 = value;
		Il2CppCodeGenWriteBarrier((&____genericArguments_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFOSERIALIZATIONHOLDER_T881282228_H
#ifndef MONOEVENTINFO_T1509620734_H
#define MONOEVENTINFO_T1509620734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEventInfo
struct  MonoEventInfo_t1509620734 
{
public:
	// System.Type System.Reflection.MonoEventInfo::declaring_type
	Type_t * ___declaring_type_0;
	// System.Type System.Reflection.MonoEventInfo::reflected_type
	Type_t * ___reflected_type_1;
	// System.String System.Reflection.MonoEventInfo::name
	String_t* ___name_2;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::add_method
	MethodInfo_t * ___add_method_3;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::remove_method
	MethodInfo_t * ___remove_method_4;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::raise_method
	MethodInfo_t * ___raise_method_5;
	// System.Reflection.EventAttributes System.Reflection.MonoEventInfo::attrs
	int32_t ___attrs_6;
	// System.Reflection.MethodInfo[] System.Reflection.MonoEventInfo::other_methods
	MethodInfoU5BU5D_t30928047* ___other_methods_7;

public:
	inline static int32_t get_offset_of_declaring_type_0() { return static_cast<int32_t>(offsetof(MonoEventInfo_t1509620734, ___declaring_type_0)); }
	inline Type_t * get_declaring_type_0() const { return ___declaring_type_0; }
	inline Type_t ** get_address_of_declaring_type_0() { return &___declaring_type_0; }
	inline void set_declaring_type_0(Type_t * value)
	{
		___declaring_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___declaring_type_0), value);
	}

	inline static int32_t get_offset_of_reflected_type_1() { return static_cast<int32_t>(offsetof(MonoEventInfo_t1509620734, ___reflected_type_1)); }
	inline Type_t * get_reflected_type_1() const { return ___reflected_type_1; }
	inline Type_t ** get_address_of_reflected_type_1() { return &___reflected_type_1; }
	inline void set_reflected_type_1(Type_t * value)
	{
		___reflected_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___reflected_type_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoEventInfo_t1509620734, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_add_method_3() { return static_cast<int32_t>(offsetof(MonoEventInfo_t1509620734, ___add_method_3)); }
	inline MethodInfo_t * get_add_method_3() const { return ___add_method_3; }
	inline MethodInfo_t ** get_address_of_add_method_3() { return &___add_method_3; }
	inline void set_add_method_3(MethodInfo_t * value)
	{
		___add_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___add_method_3), value);
	}

	inline static int32_t get_offset_of_remove_method_4() { return static_cast<int32_t>(offsetof(MonoEventInfo_t1509620734, ___remove_method_4)); }
	inline MethodInfo_t * get_remove_method_4() const { return ___remove_method_4; }
	inline MethodInfo_t ** get_address_of_remove_method_4() { return &___remove_method_4; }
	inline void set_remove_method_4(MethodInfo_t * value)
	{
		___remove_method_4 = value;
		Il2CppCodeGenWriteBarrier((&___remove_method_4), value);
	}

	inline static int32_t get_offset_of_raise_method_5() { return static_cast<int32_t>(offsetof(MonoEventInfo_t1509620734, ___raise_method_5)); }
	inline MethodInfo_t * get_raise_method_5() const { return ___raise_method_5; }
	inline MethodInfo_t ** get_address_of_raise_method_5() { return &___raise_method_5; }
	inline void set_raise_method_5(MethodInfo_t * value)
	{
		___raise_method_5 = value;
		Il2CppCodeGenWriteBarrier((&___raise_method_5), value);
	}

	inline static int32_t get_offset_of_attrs_6() { return static_cast<int32_t>(offsetof(MonoEventInfo_t1509620734, ___attrs_6)); }
	inline int32_t get_attrs_6() const { return ___attrs_6; }
	inline int32_t* get_address_of_attrs_6() { return &___attrs_6; }
	inline void set_attrs_6(int32_t value)
	{
		___attrs_6 = value;
	}

	inline static int32_t get_offset_of_other_methods_7() { return static_cast<int32_t>(offsetof(MonoEventInfo_t1509620734, ___other_methods_7)); }
	inline MethodInfoU5BU5D_t30928047* get_other_methods_7() const { return ___other_methods_7; }
	inline MethodInfoU5BU5D_t30928047** get_address_of_other_methods_7() { return &___other_methods_7; }
	inline void set_other_methods_7(MethodInfoU5BU5D_t30928047* value)
	{
		___other_methods_7 = value;
		Il2CppCodeGenWriteBarrier((&___other_methods_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t1509620734_marshaled_pinvoke
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	char* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t30928047* ___other_methods_7;
};
// Native definition for COM marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t1509620734_marshaled_com
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	Il2CppChar* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t30928047* ___other_methods_7;
};
#endif // MONOEVENTINFO_T1509620734_H
#ifndef MODULE_T1986566517_H
#define MODULE_T1986566517_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Module
struct  Module_t1986566517  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	IntPtr_t ____impl_3;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t2532343014 * ___assembly_4;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_5;
	// System.String System.Reflection.Module::name
	String_t* ___name_6;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_7;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_8;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_9;

public:
	inline static int32_t get_offset_of__impl_3() { return static_cast<int32_t>(offsetof(Module_t1986566517, ____impl_3)); }
	inline IntPtr_t get__impl_3() const { return ____impl_3; }
	inline IntPtr_t* get_address_of__impl_3() { return &____impl_3; }
	inline void set__impl_3(IntPtr_t value)
	{
		____impl_3 = value;
	}

	inline static int32_t get_offset_of_assembly_4() { return static_cast<int32_t>(offsetof(Module_t1986566517, ___assembly_4)); }
	inline Assembly_t2532343014 * get_assembly_4() const { return ___assembly_4; }
	inline Assembly_t2532343014 ** get_address_of_assembly_4() { return &___assembly_4; }
	inline void set_assembly_4(Assembly_t2532343014 * value)
	{
		___assembly_4 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_4), value);
	}

	inline static int32_t get_offset_of_fqname_5() { return static_cast<int32_t>(offsetof(Module_t1986566517, ___fqname_5)); }
	inline String_t* get_fqname_5() const { return ___fqname_5; }
	inline String_t** get_address_of_fqname_5() { return &___fqname_5; }
	inline void set_fqname_5(String_t* value)
	{
		___fqname_5 = value;
		Il2CppCodeGenWriteBarrier((&___fqname_5), value);
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(Module_t1986566517, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier((&___name_6), value);
	}

	inline static int32_t get_offset_of_scopename_7() { return static_cast<int32_t>(offsetof(Module_t1986566517, ___scopename_7)); }
	inline String_t* get_scopename_7() const { return ___scopename_7; }
	inline String_t** get_address_of_scopename_7() { return &___scopename_7; }
	inline void set_scopename_7(String_t* value)
	{
		___scopename_7 = value;
		Il2CppCodeGenWriteBarrier((&___scopename_7), value);
	}

	inline static int32_t get_offset_of_is_resource_8() { return static_cast<int32_t>(offsetof(Module_t1986566517, ___is_resource_8)); }
	inline bool get_is_resource_8() const { return ___is_resource_8; }
	inline bool* get_address_of_is_resource_8() { return &___is_resource_8; }
	inline void set_is_resource_8(bool value)
	{
		___is_resource_8 = value;
	}

	inline static int32_t get_offset_of_token_9() { return static_cast<int32_t>(offsetof(Module_t1986566517, ___token_9)); }
	inline int32_t get_token_9() const { return ___token_9; }
	inline int32_t* get_address_of_token_9() { return &___token_9; }
	inline void set_token_9(int32_t value)
	{
		___token_9 = value;
	}
};

struct Module_t1986566517_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t4229116418 * ___FilterTypeName_1;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t4229116418 * ___FilterTypeNameIgnoreCase_2;

public:
	inline static int32_t get_offset_of_FilterTypeName_1() { return static_cast<int32_t>(offsetof(Module_t1986566517_StaticFields, ___FilterTypeName_1)); }
	inline TypeFilter_t4229116418 * get_FilterTypeName_1() const { return ___FilterTypeName_1; }
	inline TypeFilter_t4229116418 ** get_address_of_FilterTypeName_1() { return &___FilterTypeName_1; }
	inline void set_FilterTypeName_1(TypeFilter_t4229116418 * value)
	{
		___FilterTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeName_1), value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Module_t1986566517_StaticFields, ___FilterTypeNameIgnoreCase_2)); }
	inline TypeFilter_t4229116418 * get_FilterTypeNameIgnoreCase_2() const { return ___FilterTypeNameIgnoreCase_2; }
	inline TypeFilter_t4229116418 ** get_address_of_FilterTypeNameIgnoreCase_2() { return &___FilterTypeNameIgnoreCase_2; }
	inline void set_FilterTypeNameIgnoreCase_2(TypeFilter_t4229116418 * value)
	{
		___FilterTypeNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeNameIgnoreCase_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULE_T1986566517_H
#ifndef ADDEVENTADAPTER_T730888156_H
#define ADDEVENTADAPTER_T730888156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo/AddEventAdapter
struct  AddEventAdapter_t730888156  : public MulticastDelegate_t2404293158
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDEVENTADAPTER_T730888156_H
#ifndef TYPEDELEGATOR_T2046892398_H
#define TYPEDELEGATOR_T2046892398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeDelegator
struct  TypeDelegator_t2046892398  : public Type_t
{
public:
	// System.Type System.Reflection.TypeDelegator::typeImpl
	Type_t * ___typeImpl_8;

public:
	inline static int32_t get_offset_of_typeImpl_8() { return static_cast<int32_t>(offsetof(TypeDelegator_t2046892398, ___typeImpl_8)); }
	inline Type_t * get_typeImpl_8() const { return ___typeImpl_8; }
	inline Type_t ** get_address_of_typeImpl_8() { return &___typeImpl_8; }
	inline void set_typeImpl_8(Type_t * value)
	{
		___typeImpl_8 = value;
		Il2CppCodeGenWriteBarrier((&___typeImpl_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDELEGATOR_T2046892398_H
#ifndef MONOGENERICMETHOD_T_H
#define MONOGENERICMETHOD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoGenericMethod
struct  MonoGenericMethod_t  : public MonoMethod_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOGENERICMETHOD_T_H
#ifndef MONOGENERICCMETHOD_T3369547797_H
#define MONOGENERICCMETHOD_T3369547797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoGenericCMethod
struct  MonoGenericCMethod_t3369547797  : public MonoCMethod_t1381445477
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOGENERICCMETHOD_T3369547797_H
#ifndef MONOPROPERTY_T_H
#define MONOPROPERTY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty
struct  MonoProperty_t  : public PropertyInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoProperty::klass
	IntPtr_t ___klass_0;
	// System.IntPtr System.Reflection.MonoProperty::prop
	IntPtr_t ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.MonoProperty::info
	MonoPropertyInfo_t3144956697  ___info_2;
	// System.Reflection.PInfo System.Reflection.MonoProperty::cached
	int32_t ___cached_3;
	// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::cached_getter
	GetterAdapter_t4260951374 * ___cached_getter_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___klass_0)); }
	inline IntPtr_t get_klass_0() const { return ___klass_0; }
	inline IntPtr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(IntPtr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_prop_1() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___prop_1)); }
	inline IntPtr_t get_prop_1() const { return ___prop_1; }
	inline IntPtr_t* get_address_of_prop_1() { return &___prop_1; }
	inline void set_prop_1(IntPtr_t value)
	{
		___prop_1 = value;
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___info_2)); }
	inline MonoPropertyInfo_t3144956697  get_info_2() const { return ___info_2; }
	inline MonoPropertyInfo_t3144956697 * get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(MonoPropertyInfo_t3144956697  value)
	{
		___info_2 = value;
	}

	inline static int32_t get_offset_of_cached_3() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_3)); }
	inline int32_t get_cached_3() const { return ___cached_3; }
	inline int32_t* get_address_of_cached_3() { return &___cached_3; }
	inline void set_cached_3(int32_t value)
	{
		___cached_3 = value;
	}

	inline static int32_t get_offset_of_cached_getter_4() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_getter_4)); }
	inline GetterAdapter_t4260951374 * get_cached_getter_4() const { return ___cached_getter_4; }
	inline GetterAdapter_t4260951374 ** get_address_of_cached_getter_4() { return &___cached_getter_4; }
	inline void set_cached_getter_4(GetterAdapter_t4260951374 * value)
	{
		___cached_getter_4 = value;
		Il2CppCodeGenWriteBarrier((&___cached_getter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOPROPERTY_T_H
#ifndef GETTERADAPTER_T4260951374_H
#define GETTERADAPTER_T4260951374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty/GetterAdapter
struct  GetterAdapter_t4260951374  : public MulticastDelegate_t2404293158
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTERADAPTER_T4260951374_H
#ifndef MODULEBUILDER_T235649770_H
#define MODULEBUILDER_T235649770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ModuleBuilder
struct  ModuleBuilder_t235649770  : public Module_t1986566517
{
public:
	// System.Int32 System.Reflection.Emit.ModuleBuilder::num_types
	int32_t ___num_types_10;
	// System.Reflection.Emit.TypeBuilder[] System.Reflection.Emit.ModuleBuilder::types
	TypeBuilderU5BU5D_t4259925019* ___types_11;
	// System.Byte[] System.Reflection.Emit.ModuleBuilder::guid
	ByteU5BU5D_t1747675394* ___guid_12;
	// System.Int32 System.Reflection.Emit.ModuleBuilder::table_idx
	int32_t ___table_idx_13;
	// System.Reflection.Emit.AssemblyBuilder System.Reflection.Emit.ModuleBuilder::assemblyb
	AssemblyBuilder_t990831231 * ___assemblyb_14;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::global_type
	TypeBuilder_t1322358382 * ___global_type_15;
	// System.Collections.Hashtable System.Reflection.Emit.ModuleBuilder::name_cache
	Hashtable_t4257801040 * ___name_cache_16;
	// System.Collections.Hashtable System.Reflection.Emit.ModuleBuilder::us_string_cache
	Hashtable_t4257801040 * ___us_string_cache_17;
	// System.Int32[] System.Reflection.Emit.ModuleBuilder::table_indexes
	Int32U5BU5D_t953163696* ___table_indexes_18;
	// System.Boolean System.Reflection.Emit.ModuleBuilder::transient
	bool ___transient_19;
	// System.Reflection.Emit.ModuleBuilderTokenGenerator System.Reflection.Emit.ModuleBuilder::token_gen
	ModuleBuilderTokenGenerator_t3550488292 * ___token_gen_20;
	// System.Diagnostics.SymbolStore.ISymbolWriter System.Reflection.Emit.ModuleBuilder::symbolWriter
	RuntimeObject* ___symbolWriter_21;

public:
	inline static int32_t get_offset_of_num_types_10() { return static_cast<int32_t>(offsetof(ModuleBuilder_t235649770, ___num_types_10)); }
	inline int32_t get_num_types_10() const { return ___num_types_10; }
	inline int32_t* get_address_of_num_types_10() { return &___num_types_10; }
	inline void set_num_types_10(int32_t value)
	{
		___num_types_10 = value;
	}

	inline static int32_t get_offset_of_types_11() { return static_cast<int32_t>(offsetof(ModuleBuilder_t235649770, ___types_11)); }
	inline TypeBuilderU5BU5D_t4259925019* get_types_11() const { return ___types_11; }
	inline TypeBuilderU5BU5D_t4259925019** get_address_of_types_11() { return &___types_11; }
	inline void set_types_11(TypeBuilderU5BU5D_t4259925019* value)
	{
		___types_11 = value;
		Il2CppCodeGenWriteBarrier((&___types_11), value);
	}

	inline static int32_t get_offset_of_guid_12() { return static_cast<int32_t>(offsetof(ModuleBuilder_t235649770, ___guid_12)); }
	inline ByteU5BU5D_t1747675394* get_guid_12() const { return ___guid_12; }
	inline ByteU5BU5D_t1747675394** get_address_of_guid_12() { return &___guid_12; }
	inline void set_guid_12(ByteU5BU5D_t1747675394* value)
	{
		___guid_12 = value;
		Il2CppCodeGenWriteBarrier((&___guid_12), value);
	}

	inline static int32_t get_offset_of_table_idx_13() { return static_cast<int32_t>(offsetof(ModuleBuilder_t235649770, ___table_idx_13)); }
	inline int32_t get_table_idx_13() const { return ___table_idx_13; }
	inline int32_t* get_address_of_table_idx_13() { return &___table_idx_13; }
	inline void set_table_idx_13(int32_t value)
	{
		___table_idx_13 = value;
	}

	inline static int32_t get_offset_of_assemblyb_14() { return static_cast<int32_t>(offsetof(ModuleBuilder_t235649770, ___assemblyb_14)); }
	inline AssemblyBuilder_t990831231 * get_assemblyb_14() const { return ___assemblyb_14; }
	inline AssemblyBuilder_t990831231 ** get_address_of_assemblyb_14() { return &___assemblyb_14; }
	inline void set_assemblyb_14(AssemblyBuilder_t990831231 * value)
	{
		___assemblyb_14 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyb_14), value);
	}

	inline static int32_t get_offset_of_global_type_15() { return static_cast<int32_t>(offsetof(ModuleBuilder_t235649770, ___global_type_15)); }
	inline TypeBuilder_t1322358382 * get_global_type_15() const { return ___global_type_15; }
	inline TypeBuilder_t1322358382 ** get_address_of_global_type_15() { return &___global_type_15; }
	inline void set_global_type_15(TypeBuilder_t1322358382 * value)
	{
		___global_type_15 = value;
		Il2CppCodeGenWriteBarrier((&___global_type_15), value);
	}

	inline static int32_t get_offset_of_name_cache_16() { return static_cast<int32_t>(offsetof(ModuleBuilder_t235649770, ___name_cache_16)); }
	inline Hashtable_t4257801040 * get_name_cache_16() const { return ___name_cache_16; }
	inline Hashtable_t4257801040 ** get_address_of_name_cache_16() { return &___name_cache_16; }
	inline void set_name_cache_16(Hashtable_t4257801040 * value)
	{
		___name_cache_16 = value;
		Il2CppCodeGenWriteBarrier((&___name_cache_16), value);
	}

	inline static int32_t get_offset_of_us_string_cache_17() { return static_cast<int32_t>(offsetof(ModuleBuilder_t235649770, ___us_string_cache_17)); }
	inline Hashtable_t4257801040 * get_us_string_cache_17() const { return ___us_string_cache_17; }
	inline Hashtable_t4257801040 ** get_address_of_us_string_cache_17() { return &___us_string_cache_17; }
	inline void set_us_string_cache_17(Hashtable_t4257801040 * value)
	{
		___us_string_cache_17 = value;
		Il2CppCodeGenWriteBarrier((&___us_string_cache_17), value);
	}

	inline static int32_t get_offset_of_table_indexes_18() { return static_cast<int32_t>(offsetof(ModuleBuilder_t235649770, ___table_indexes_18)); }
	inline Int32U5BU5D_t953163696* get_table_indexes_18() const { return ___table_indexes_18; }
	inline Int32U5BU5D_t953163696** get_address_of_table_indexes_18() { return &___table_indexes_18; }
	inline void set_table_indexes_18(Int32U5BU5D_t953163696* value)
	{
		___table_indexes_18 = value;
		Il2CppCodeGenWriteBarrier((&___table_indexes_18), value);
	}

	inline static int32_t get_offset_of_transient_19() { return static_cast<int32_t>(offsetof(ModuleBuilder_t235649770, ___transient_19)); }
	inline bool get_transient_19() const { return ___transient_19; }
	inline bool* get_address_of_transient_19() { return &___transient_19; }
	inline void set_transient_19(bool value)
	{
		___transient_19 = value;
	}

	inline static int32_t get_offset_of_token_gen_20() { return static_cast<int32_t>(offsetof(ModuleBuilder_t235649770, ___token_gen_20)); }
	inline ModuleBuilderTokenGenerator_t3550488292 * get_token_gen_20() const { return ___token_gen_20; }
	inline ModuleBuilderTokenGenerator_t3550488292 ** get_address_of_token_gen_20() { return &___token_gen_20; }
	inline void set_token_gen_20(ModuleBuilderTokenGenerator_t3550488292 * value)
	{
		___token_gen_20 = value;
		Il2CppCodeGenWriteBarrier((&___token_gen_20), value);
	}

	inline static int32_t get_offset_of_symbolWriter_21() { return static_cast<int32_t>(offsetof(ModuleBuilder_t235649770, ___symbolWriter_21)); }
	inline RuntimeObject* get_symbolWriter_21() const { return ___symbolWriter_21; }
	inline RuntimeObject** get_address_of_symbolWriter_21() { return &___symbolWriter_21; }
	inline void set_symbolWriter_21(RuntimeObject* value)
	{
		___symbolWriter_21 = value;
		Il2CppCodeGenWriteBarrier((&___symbolWriter_21), value);
	}
};

struct ModuleBuilder_t235649770_StaticFields
{
public:
	// System.Char[] System.Reflection.Emit.ModuleBuilder::type_modifiers
	CharU5BU5D_t2718253689* ___type_modifiers_22;

public:
	inline static int32_t get_offset_of_type_modifiers_22() { return static_cast<int32_t>(offsetof(ModuleBuilder_t235649770_StaticFields, ___type_modifiers_22)); }
	inline CharU5BU5D_t2718253689* get_type_modifiers_22() const { return ___type_modifiers_22; }
	inline CharU5BU5D_t2718253689** get_address_of_type_modifiers_22() { return &___type_modifiers_22; }
	inline void set_type_modifiers_22(CharU5BU5D_t2718253689* value)
	{
		___type_modifiers_22 = value;
		Il2CppCodeGenWriteBarrier((&___type_modifiers_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULEBUILDER_T235649770_H
#ifndef TYPEBUILDER_T1322358382_H
#define TYPEBUILDER_T1322358382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.TypeBuilder
struct  TypeBuilder_t1322358382  : public Type_t
{
public:
	// System.String System.Reflection.Emit.TypeBuilder::tname
	String_t* ___tname_8;
	// System.String System.Reflection.Emit.TypeBuilder::nspace
	String_t* ___nspace_9;
	// System.Type System.Reflection.Emit.TypeBuilder::parent
	Type_t * ___parent_10;
	// System.Type System.Reflection.Emit.TypeBuilder::nesting_type
	Type_t * ___nesting_type_11;
	// System.Type[] System.Reflection.Emit.TypeBuilder::interfaces
	TypeU5BU5D_t3431083906* ___interfaces_12;
	// System.Int32 System.Reflection.Emit.TypeBuilder::num_methods
	int32_t ___num_methods_13;
	// System.Reflection.Emit.MethodBuilder[] System.Reflection.Emit.TypeBuilder::methods
	MethodBuilderU5BU5D_t3498833925* ___methods_14;
	// System.Reflection.Emit.ConstructorBuilder[] System.Reflection.Emit.TypeBuilder::ctors
	ConstructorBuilderU5BU5D_t2840939026* ___ctors_15;
	// System.Reflection.Emit.FieldBuilder[] System.Reflection.Emit.TypeBuilder::fields
	FieldBuilderU5BU5D_t4218445047* ___fields_16;
	// System.Reflection.Emit.TypeBuilder[] System.Reflection.Emit.TypeBuilder::subtypes
	TypeBuilderU5BU5D_t4259925019* ___subtypes_17;
	// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::attrs
	int32_t ___attrs_18;
	// System.Int32 System.Reflection.Emit.TypeBuilder::table_idx
	int32_t ___table_idx_19;
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.TypeBuilder::pmodule
	ModuleBuilder_t235649770 * ___pmodule_20;
	// System.Int32 System.Reflection.Emit.TypeBuilder::class_size
	int32_t ___class_size_21;
	// System.Reflection.Emit.PackingSize System.Reflection.Emit.TypeBuilder::packing_size
	int32_t ___packing_size_22;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] System.Reflection.Emit.TypeBuilder::generic_params
	GenericTypeParameterBuilderU5BU5D_t4073622788* ___generic_params_23;
	// System.Type System.Reflection.Emit.TypeBuilder::created
	Type_t * ___created_24;
	// System.String System.Reflection.Emit.TypeBuilder::fullname
	String_t* ___fullname_25;
	// System.Boolean System.Reflection.Emit.TypeBuilder::createTypeCalled
	bool ___createTypeCalled_26;
	// System.Type System.Reflection.Emit.TypeBuilder::underlying_type
	Type_t * ___underlying_type_27;

public:
	inline static int32_t get_offset_of_tname_8() { return static_cast<int32_t>(offsetof(TypeBuilder_t1322358382, ___tname_8)); }
	inline String_t* get_tname_8() const { return ___tname_8; }
	inline String_t** get_address_of_tname_8() { return &___tname_8; }
	inline void set_tname_8(String_t* value)
	{
		___tname_8 = value;
		Il2CppCodeGenWriteBarrier((&___tname_8), value);
	}

	inline static int32_t get_offset_of_nspace_9() { return static_cast<int32_t>(offsetof(TypeBuilder_t1322358382, ___nspace_9)); }
	inline String_t* get_nspace_9() const { return ___nspace_9; }
	inline String_t** get_address_of_nspace_9() { return &___nspace_9; }
	inline void set_nspace_9(String_t* value)
	{
		___nspace_9 = value;
		Il2CppCodeGenWriteBarrier((&___nspace_9), value);
	}

	inline static int32_t get_offset_of_parent_10() { return static_cast<int32_t>(offsetof(TypeBuilder_t1322358382, ___parent_10)); }
	inline Type_t * get_parent_10() const { return ___parent_10; }
	inline Type_t ** get_address_of_parent_10() { return &___parent_10; }
	inline void set_parent_10(Type_t * value)
	{
		___parent_10 = value;
		Il2CppCodeGenWriteBarrier((&___parent_10), value);
	}

	inline static int32_t get_offset_of_nesting_type_11() { return static_cast<int32_t>(offsetof(TypeBuilder_t1322358382, ___nesting_type_11)); }
	inline Type_t * get_nesting_type_11() const { return ___nesting_type_11; }
	inline Type_t ** get_address_of_nesting_type_11() { return &___nesting_type_11; }
	inline void set_nesting_type_11(Type_t * value)
	{
		___nesting_type_11 = value;
		Il2CppCodeGenWriteBarrier((&___nesting_type_11), value);
	}

	inline static int32_t get_offset_of_interfaces_12() { return static_cast<int32_t>(offsetof(TypeBuilder_t1322358382, ___interfaces_12)); }
	inline TypeU5BU5D_t3431083906* get_interfaces_12() const { return ___interfaces_12; }
	inline TypeU5BU5D_t3431083906** get_address_of_interfaces_12() { return &___interfaces_12; }
	inline void set_interfaces_12(TypeU5BU5D_t3431083906* value)
	{
		___interfaces_12 = value;
		Il2CppCodeGenWriteBarrier((&___interfaces_12), value);
	}

	inline static int32_t get_offset_of_num_methods_13() { return static_cast<int32_t>(offsetof(TypeBuilder_t1322358382, ___num_methods_13)); }
	inline int32_t get_num_methods_13() const { return ___num_methods_13; }
	inline int32_t* get_address_of_num_methods_13() { return &___num_methods_13; }
	inline void set_num_methods_13(int32_t value)
	{
		___num_methods_13 = value;
	}

	inline static int32_t get_offset_of_methods_14() { return static_cast<int32_t>(offsetof(TypeBuilder_t1322358382, ___methods_14)); }
	inline MethodBuilderU5BU5D_t3498833925* get_methods_14() const { return ___methods_14; }
	inline MethodBuilderU5BU5D_t3498833925** get_address_of_methods_14() { return &___methods_14; }
	inline void set_methods_14(MethodBuilderU5BU5D_t3498833925* value)
	{
		___methods_14 = value;
		Il2CppCodeGenWriteBarrier((&___methods_14), value);
	}

	inline static int32_t get_offset_of_ctors_15() { return static_cast<int32_t>(offsetof(TypeBuilder_t1322358382, ___ctors_15)); }
	inline ConstructorBuilderU5BU5D_t2840939026* get_ctors_15() const { return ___ctors_15; }
	inline ConstructorBuilderU5BU5D_t2840939026** get_address_of_ctors_15() { return &___ctors_15; }
	inline void set_ctors_15(ConstructorBuilderU5BU5D_t2840939026* value)
	{
		___ctors_15 = value;
		Il2CppCodeGenWriteBarrier((&___ctors_15), value);
	}

	inline static int32_t get_offset_of_fields_16() { return static_cast<int32_t>(offsetof(TypeBuilder_t1322358382, ___fields_16)); }
	inline FieldBuilderU5BU5D_t4218445047* get_fields_16() const { return ___fields_16; }
	inline FieldBuilderU5BU5D_t4218445047** get_address_of_fields_16() { return &___fields_16; }
	inline void set_fields_16(FieldBuilderU5BU5D_t4218445047* value)
	{
		___fields_16 = value;
		Il2CppCodeGenWriteBarrier((&___fields_16), value);
	}

	inline static int32_t get_offset_of_subtypes_17() { return static_cast<int32_t>(offsetof(TypeBuilder_t1322358382, ___subtypes_17)); }
	inline TypeBuilderU5BU5D_t4259925019* get_subtypes_17() const { return ___subtypes_17; }
	inline TypeBuilderU5BU5D_t4259925019** get_address_of_subtypes_17() { return &___subtypes_17; }
	inline void set_subtypes_17(TypeBuilderU5BU5D_t4259925019* value)
	{
		___subtypes_17 = value;
		Il2CppCodeGenWriteBarrier((&___subtypes_17), value);
	}

	inline static int32_t get_offset_of_attrs_18() { return static_cast<int32_t>(offsetof(TypeBuilder_t1322358382, ___attrs_18)); }
	inline int32_t get_attrs_18() const { return ___attrs_18; }
	inline int32_t* get_address_of_attrs_18() { return &___attrs_18; }
	inline void set_attrs_18(int32_t value)
	{
		___attrs_18 = value;
	}

	inline static int32_t get_offset_of_table_idx_19() { return static_cast<int32_t>(offsetof(TypeBuilder_t1322358382, ___table_idx_19)); }
	inline int32_t get_table_idx_19() const { return ___table_idx_19; }
	inline int32_t* get_address_of_table_idx_19() { return &___table_idx_19; }
	inline void set_table_idx_19(int32_t value)
	{
		___table_idx_19 = value;
	}

	inline static int32_t get_offset_of_pmodule_20() { return static_cast<int32_t>(offsetof(TypeBuilder_t1322358382, ___pmodule_20)); }
	inline ModuleBuilder_t235649770 * get_pmodule_20() const { return ___pmodule_20; }
	inline ModuleBuilder_t235649770 ** get_address_of_pmodule_20() { return &___pmodule_20; }
	inline void set_pmodule_20(ModuleBuilder_t235649770 * value)
	{
		___pmodule_20 = value;
		Il2CppCodeGenWriteBarrier((&___pmodule_20), value);
	}

	inline static int32_t get_offset_of_class_size_21() { return static_cast<int32_t>(offsetof(TypeBuilder_t1322358382, ___class_size_21)); }
	inline int32_t get_class_size_21() const { return ___class_size_21; }
	inline int32_t* get_address_of_class_size_21() { return &___class_size_21; }
	inline void set_class_size_21(int32_t value)
	{
		___class_size_21 = value;
	}

	inline static int32_t get_offset_of_packing_size_22() { return static_cast<int32_t>(offsetof(TypeBuilder_t1322358382, ___packing_size_22)); }
	inline int32_t get_packing_size_22() const { return ___packing_size_22; }
	inline int32_t* get_address_of_packing_size_22() { return &___packing_size_22; }
	inline void set_packing_size_22(int32_t value)
	{
		___packing_size_22 = value;
	}

	inline static int32_t get_offset_of_generic_params_23() { return static_cast<int32_t>(offsetof(TypeBuilder_t1322358382, ___generic_params_23)); }
	inline GenericTypeParameterBuilderU5BU5D_t4073622788* get_generic_params_23() const { return ___generic_params_23; }
	inline GenericTypeParameterBuilderU5BU5D_t4073622788** get_address_of_generic_params_23() { return &___generic_params_23; }
	inline void set_generic_params_23(GenericTypeParameterBuilderU5BU5D_t4073622788* value)
	{
		___generic_params_23 = value;
		Il2CppCodeGenWriteBarrier((&___generic_params_23), value);
	}

	inline static int32_t get_offset_of_created_24() { return static_cast<int32_t>(offsetof(TypeBuilder_t1322358382, ___created_24)); }
	inline Type_t * get_created_24() const { return ___created_24; }
	inline Type_t ** get_address_of_created_24() { return &___created_24; }
	inline void set_created_24(Type_t * value)
	{
		___created_24 = value;
		Il2CppCodeGenWriteBarrier((&___created_24), value);
	}

	inline static int32_t get_offset_of_fullname_25() { return static_cast<int32_t>(offsetof(TypeBuilder_t1322358382, ___fullname_25)); }
	inline String_t* get_fullname_25() const { return ___fullname_25; }
	inline String_t** get_address_of_fullname_25() { return &___fullname_25; }
	inline void set_fullname_25(String_t* value)
	{
		___fullname_25 = value;
		Il2CppCodeGenWriteBarrier((&___fullname_25), value);
	}

	inline static int32_t get_offset_of_createTypeCalled_26() { return static_cast<int32_t>(offsetof(TypeBuilder_t1322358382, ___createTypeCalled_26)); }
	inline bool get_createTypeCalled_26() const { return ___createTypeCalled_26; }
	inline bool* get_address_of_createTypeCalled_26() { return &___createTypeCalled_26; }
	inline void set_createTypeCalled_26(bool value)
	{
		___createTypeCalled_26 = value;
	}

	inline static int32_t get_offset_of_underlying_type_27() { return static_cast<int32_t>(offsetof(TypeBuilder_t1322358382, ___underlying_type_27)); }
	inline Type_t * get_underlying_type_27() const { return ___underlying_type_27; }
	inline Type_t ** get_address_of_underlying_type_27() { return &___underlying_type_27; }
	inline void set_underlying_type_27(Type_t * value)
	{
		___underlying_type_27 = value;
		Il2CppCodeGenWriteBarrier((&___underlying_type_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEBUILDER_T1322358382_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize300 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize301 = { sizeof (ILGenerator_t1598022474), -1, sizeof(ILGenerator_t1598022474_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable301[14] = 
{
	ILGenerator_t1598022474_StaticFields::get_offset_of_void_type_0(),
	ILGenerator_t1598022474::get_offset_of_code_1(),
	ILGenerator_t1598022474::get_offset_of_code_len_2(),
	ILGenerator_t1598022474::get_offset_of_max_stack_3(),
	ILGenerator_t1598022474::get_offset_of_cur_stack_4(),
	ILGenerator_t1598022474::get_offset_of_locals_5(),
	ILGenerator_t1598022474::get_offset_of_num_token_fixups_6(),
	ILGenerator_t1598022474::get_offset_of_token_fixups_7(),
	ILGenerator_t1598022474::get_offset_of_labels_8(),
	ILGenerator_t1598022474::get_offset_of_num_labels_9(),
	ILGenerator_t1598022474::get_offset_of_fixups_10(),
	ILGenerator_t1598022474::get_offset_of_num_fixups_11(),
	ILGenerator_t1598022474::get_offset_of_module_12(),
	ILGenerator_t1598022474::get_offset_of_token_gen_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize302 = { sizeof (LabelFixup_t1062723668)+ sizeof (RuntimeObject), sizeof(LabelFixup_t1062723668 ), 0, 0 };
extern const int32_t g_FieldOffsetTable302[3] = 
{
	LabelFixup_t1062723668::get_offset_of_offset_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LabelFixup_t1062723668::get_offset_of_pos_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LabelFixup_t1062723668::get_offset_of_label_idx_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize303 = { sizeof (LabelData_t3840747898)+ sizeof (RuntimeObject), sizeof(LabelData_t3840747898 ), 0, 0 };
extern const int32_t g_FieldOffsetTable303[2] = 
{
	LabelData_t3840747898::get_offset_of_addr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LabelData_t3840747898::get_offset_of_maxStack_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize304 = { sizeof (Label_t2973667320)+ sizeof (RuntimeObject), sizeof(Label_t2973667320 ), 0, 0 };
extern const int32_t g_FieldOffsetTable304[1] = 
{
	Label_t2973667320::get_offset_of_label_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize305 = { sizeof (LocalBuilder_t2223697350), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable305[1] = 
{
	LocalBuilder_t2223697350::get_offset_of_ilgen_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize306 = { sizeof (MethodBuilder_t1000574284), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable306[18] = 
{
	MethodBuilder_t1000574284::get_offset_of_rtype_0(),
	MethodBuilder_t1000574284::get_offset_of_parameters_1(),
	MethodBuilder_t1000574284::get_offset_of_attrs_2(),
	MethodBuilder_t1000574284::get_offset_of_iattrs_3(),
	MethodBuilder_t1000574284::get_offset_of_name_4(),
	MethodBuilder_t1000574284::get_offset_of_table_idx_5(),
	MethodBuilder_t1000574284::get_offset_of_code_6(),
	MethodBuilder_t1000574284::get_offset_of_ilgen_7(),
	MethodBuilder_t1000574284::get_offset_of_type_8(),
	MethodBuilder_t1000574284::get_offset_of_pinfo_9(),
	MethodBuilder_t1000574284::get_offset_of_override_method_10(),
	MethodBuilder_t1000574284::get_offset_of_call_conv_11(),
	MethodBuilder_t1000574284::get_offset_of_init_locals_12(),
	MethodBuilder_t1000574284::get_offset_of_generic_params_13(),
	MethodBuilder_t1000574284::get_offset_of_returnModReq_14(),
	MethodBuilder_t1000574284::get_offset_of_returnModOpt_15(),
	MethodBuilder_t1000574284::get_offset_of_paramModReq_16(),
	MethodBuilder_t1000574284::get_offset_of_paramModOpt_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize307 = { sizeof (MethodToken_t717913129)+ sizeof (RuntimeObject), sizeof(MethodToken_t717913129 ), sizeof(MethodToken_t717913129_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable307[2] = 
{
	MethodToken_t717913129::get_offset_of_tokValue_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MethodToken_t717913129_StaticFields::get_offset_of_Empty_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize308 = { sizeof (ModuleBuilder_t235649770), -1, sizeof(ModuleBuilder_t235649770_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable308[13] = 
{
	ModuleBuilder_t235649770::get_offset_of_num_types_10(),
	ModuleBuilder_t235649770::get_offset_of_types_11(),
	ModuleBuilder_t235649770::get_offset_of_guid_12(),
	ModuleBuilder_t235649770::get_offset_of_table_idx_13(),
	ModuleBuilder_t235649770::get_offset_of_assemblyb_14(),
	ModuleBuilder_t235649770::get_offset_of_global_type_15(),
	ModuleBuilder_t235649770::get_offset_of_name_cache_16(),
	ModuleBuilder_t235649770::get_offset_of_us_string_cache_17(),
	ModuleBuilder_t235649770::get_offset_of_table_indexes_18(),
	ModuleBuilder_t235649770::get_offset_of_transient_19(),
	ModuleBuilder_t235649770::get_offset_of_token_gen_20(),
	ModuleBuilder_t235649770::get_offset_of_symbolWriter_21(),
	ModuleBuilder_t235649770_StaticFields::get_offset_of_type_modifiers_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize309 = { sizeof (ModuleBuilderTokenGenerator_t3550488292), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable309[1] = 
{
	ModuleBuilderTokenGenerator_t3550488292::get_offset_of_mb_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize310 = { sizeof (OpCode_t171716939)+ sizeof (RuntimeObject), sizeof(OpCode_t171716939 ), 0, 0 };
extern const int32_t g_FieldOffsetTable310[8] = 
{
	OpCode_t171716939::get_offset_of_op1_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t171716939::get_offset_of_op2_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t171716939::get_offset_of_push_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t171716939::get_offset_of_pop_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t171716939::get_offset_of_size_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t171716939::get_offset_of_type_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t171716939::get_offset_of_args_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t171716939::get_offset_of_flow_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize311 = { sizeof (OpCodeNames_t3930806498), -1, sizeof(OpCodeNames_t3930806498_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable311[1] = 
{
	OpCodeNames_t3930806498_StaticFields::get_offset_of_names_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize312 = { sizeof (OpCodes_t1901716662), -1, sizeof(OpCodes_t1901716662_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable312[226] = 
{
	OpCodes_t1901716662_StaticFields::get_offset_of_Nop_0(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Break_1(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldarg_0_2(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldarg_1_3(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldarg_2_4(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldarg_3_5(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldloc_0_6(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldloc_1_7(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldloc_2_8(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldloc_3_9(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stloc_0_10(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stloc_1_11(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stloc_2_12(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stloc_3_13(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldarg_S_14(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldarga_S_15(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Starg_S_16(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldloc_S_17(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldloca_S_18(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stloc_S_19(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldnull_20(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldc_I4_M1_21(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldc_I4_0_22(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldc_I4_1_23(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldc_I4_2_24(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldc_I4_3_25(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldc_I4_4_26(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldc_I4_5_27(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldc_I4_6_28(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldc_I4_7_29(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldc_I4_8_30(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldc_I4_S_31(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldc_I4_32(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldc_I8_33(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldc_R4_34(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldc_R8_35(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Dup_36(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Pop_37(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Jmp_38(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Call_39(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Calli_40(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ret_41(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Br_S_42(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Brfalse_S_43(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Brtrue_S_44(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Beq_S_45(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Bge_S_46(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Bgt_S_47(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ble_S_48(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Blt_S_49(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Bne_Un_S_50(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Bge_Un_S_51(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Bgt_Un_S_52(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ble_Un_S_53(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Blt_Un_S_54(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Br_55(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Brfalse_56(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Brtrue_57(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Beq_58(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Bge_59(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Bgt_60(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ble_61(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Blt_62(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Bne_Un_63(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Bge_Un_64(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Bgt_Un_65(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ble_Un_66(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Blt_Un_67(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Switch_68(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldind_I1_69(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldind_U1_70(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldind_I2_71(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldind_U2_72(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldind_I4_73(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldind_U4_74(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldind_I8_75(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldind_I_76(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldind_R4_77(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldind_R8_78(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldind_Ref_79(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stind_Ref_80(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stind_I1_81(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stind_I2_82(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stind_I4_83(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stind_I8_84(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stind_R4_85(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stind_R8_86(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Add_87(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Sub_88(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Mul_89(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Div_90(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Div_Un_91(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Rem_92(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Rem_Un_93(),
	OpCodes_t1901716662_StaticFields::get_offset_of_And_94(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Or_95(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Xor_96(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Shl_97(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Shr_98(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Shr_Un_99(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Neg_100(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Not_101(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_I1_102(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_I2_103(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_I4_104(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_I8_105(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_R4_106(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_R8_107(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_U4_108(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_U8_109(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Callvirt_110(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Cpobj_111(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldobj_112(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldstr_113(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Newobj_114(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Castclass_115(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Isinst_116(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_R_Un_117(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Unbox_118(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Throw_119(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldfld_120(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldflda_121(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stfld_122(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldsfld_123(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldsflda_124(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stsfld_125(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stobj_126(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_Ovf_I1_Un_127(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_Ovf_I2_Un_128(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_Ovf_I4_Un_129(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_Ovf_I8_Un_130(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_Ovf_U1_Un_131(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_Ovf_U2_Un_132(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_Ovf_U4_Un_133(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_Ovf_U8_Un_134(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_Ovf_I_Un_135(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_Ovf_U_Un_136(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Box_137(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Newarr_138(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldlen_139(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldelema_140(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldelem_I1_141(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldelem_U1_142(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldelem_I2_143(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldelem_U2_144(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldelem_I4_145(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldelem_U4_146(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldelem_I8_147(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldelem_I_148(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldelem_R4_149(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldelem_R8_150(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldelem_Ref_151(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stelem_I_152(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stelem_I1_153(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stelem_I2_154(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stelem_I4_155(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stelem_I8_156(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stelem_R4_157(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stelem_R8_158(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stelem_Ref_159(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldelem_160(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stelem_161(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Unbox_Any_162(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_Ovf_I1_163(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_Ovf_U1_164(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_Ovf_I2_165(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_Ovf_U2_166(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_Ovf_I4_167(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_Ovf_U4_168(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_Ovf_I8_169(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_Ovf_U8_170(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Refanyval_171(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ckfinite_172(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Mkrefany_173(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldtoken_174(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_U2_175(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_U1_176(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_I_177(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_Ovf_I_178(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_Ovf_U_179(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Add_Ovf_180(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Add_Ovf_Un_181(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Mul_Ovf_182(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Mul_Ovf_Un_183(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Sub_Ovf_184(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Sub_Ovf_Un_185(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Endfinally_186(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Leave_187(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Leave_S_188(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stind_I_189(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Conv_U_190(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Prefix7_191(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Prefix6_192(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Prefix5_193(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Prefix4_194(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Prefix3_195(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Prefix2_196(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Prefix1_197(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Prefixref_198(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Arglist_199(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ceq_200(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Cgt_201(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Cgt_Un_202(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Clt_203(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Clt_Un_204(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldftn_205(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldvirtftn_206(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldarg_207(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldarga_208(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Starg_209(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldloc_210(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Ldloca_211(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Stloc_212(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Localloc_213(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Endfilter_214(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Unaligned_215(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Volatile_216(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Tailcall_217(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Initobj_218(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Constrained_219(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Cpblk_220(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Initblk_221(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Rethrow_222(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Sizeof_223(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Refanytype_224(),
	OpCodes_t1901716662_StaticFields::get_offset_of_Readonly_225(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize313 = { sizeof (OperandType_t1218144377)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable313[19] = 
{
	OperandType_t1218144377::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize314 = { sizeof (PEFileKinds_t3320310216)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable314[4] = 
{
	PEFileKinds_t3320310216::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize315 = { sizeof (PackingSize_t4219233004)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable315[10] = 
{
	PackingSize_t4219233004::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize316 = { sizeof (ParameterBuilder_t1329264869), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable316[3] = 
{
	ParameterBuilder_t1329264869::get_offset_of_name_0(),
	ParameterBuilder_t1329264869::get_offset_of_attrs_1(),
	ParameterBuilder_t1329264869::get_offset_of_position_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize317 = { sizeof (StackBehaviour_t4130570954)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable317[30] = 
{
	StackBehaviour_t4130570954::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize318 = { sizeof (TypeBuilder_t1322358382), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable318[20] = 
{
	TypeBuilder_t1322358382::get_offset_of_tname_8(),
	TypeBuilder_t1322358382::get_offset_of_nspace_9(),
	TypeBuilder_t1322358382::get_offset_of_parent_10(),
	TypeBuilder_t1322358382::get_offset_of_nesting_type_11(),
	TypeBuilder_t1322358382::get_offset_of_interfaces_12(),
	TypeBuilder_t1322358382::get_offset_of_num_methods_13(),
	TypeBuilder_t1322358382::get_offset_of_methods_14(),
	TypeBuilder_t1322358382::get_offset_of_ctors_15(),
	TypeBuilder_t1322358382::get_offset_of_fields_16(),
	TypeBuilder_t1322358382::get_offset_of_subtypes_17(),
	TypeBuilder_t1322358382::get_offset_of_attrs_18(),
	TypeBuilder_t1322358382::get_offset_of_table_idx_19(),
	TypeBuilder_t1322358382::get_offset_of_pmodule_20(),
	TypeBuilder_t1322358382::get_offset_of_class_size_21(),
	TypeBuilder_t1322358382::get_offset_of_packing_size_22(),
	TypeBuilder_t1322358382::get_offset_of_generic_params_23(),
	TypeBuilder_t1322358382::get_offset_of_created_24(),
	TypeBuilder_t1322358382::get_offset_of_fullname_25(),
	TypeBuilder_t1322358382::get_offset_of_createTypeCalled_26(),
	TypeBuilder_t1322358382::get_offset_of_underlying_type_27(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize319 = { sizeof (UnmanagedMarshal_t4066821019), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable319[9] = 
{
	UnmanagedMarshal_t4066821019::get_offset_of_count_0(),
	UnmanagedMarshal_t4066821019::get_offset_of_t_1(),
	UnmanagedMarshal_t4066821019::get_offset_of_tbase_2(),
	UnmanagedMarshal_t4066821019::get_offset_of_guid_3(),
	UnmanagedMarshal_t4066821019::get_offset_of_mcookie_4(),
	UnmanagedMarshal_t4066821019::get_offset_of_marshaltype_5(),
	UnmanagedMarshal_t4066821019::get_offset_of_marshaltyperef_6(),
	UnmanagedMarshal_t4066821019::get_offset_of_param_num_7(),
	UnmanagedMarshal_t4066821019::get_offset_of_has_size_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize320 = { sizeof (AmbiguousMatchException_t327195977), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize321 = { sizeof (Assembly_t2532343014), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable321[10] = 
{
	Assembly_t2532343014::get_offset_of__mono_assembly_0(),
	Assembly_t2532343014::get_offset_of_resolve_event_holder_1(),
	Assembly_t2532343014::get_offset_of__evidence_2(),
	Assembly_t2532343014::get_offset_of__minimum_3(),
	Assembly_t2532343014::get_offset_of__optional_4(),
	Assembly_t2532343014::get_offset_of__refuse_5(),
	Assembly_t2532343014::get_offset_of__granted_6(),
	Assembly_t2532343014::get_offset_of__denied_7(),
	Assembly_t2532343014::get_offset_of_fromByteArray_8(),
	Assembly_t2532343014::get_offset_of_assemblyName_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize322 = { sizeof (ResolveEventHolder_t2695504579), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize323 = { sizeof (AssemblyCompanyAttribute_t3282172571), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable323[1] = 
{
	AssemblyCompanyAttribute_t3282172571::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize324 = { sizeof (AssemblyConfigurationAttribute_t1185838799), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable324[1] = 
{
	AssemblyConfigurationAttribute_t1185838799::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize325 = { sizeof (AssemblyCopyrightAttribute_t2842406235), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable325[1] = 
{
	AssemblyCopyrightAttribute_t2842406235::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize326 = { sizeof (AssemblyDefaultAliasAttribute_t1498533740), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable326[1] = 
{
	AssemblyDefaultAliasAttribute_t1498533740::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize327 = { sizeof (AssemblyDelaySignAttribute_t2982835626), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable327[1] = 
{
	AssemblyDelaySignAttribute_t2982835626::get_offset_of_delay_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize328 = { sizeof (AssemblyDescriptionAttribute_t1055610871), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable328[1] = 
{
	AssemblyDescriptionAttribute_t1055610871::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize329 = { sizeof (AssemblyFileVersionAttribute_t2207005673), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable329[1] = 
{
	AssemblyFileVersionAttribute_t2207005673::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize330 = { sizeof (AssemblyInformationalVersionAttribute_t3845070506), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable330[1] = 
{
	AssemblyInformationalVersionAttribute_t3845070506::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize331 = { sizeof (AssemblyKeyFileAttribute_t3002270162), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable331[1] = 
{
	AssemblyKeyFileAttribute_t3002270162::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize332 = { sizeof (AssemblyName_t2919556893), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable332[15] = 
{
	AssemblyName_t2919556893::get_offset_of_name_0(),
	AssemblyName_t2919556893::get_offset_of_codebase_1(),
	AssemblyName_t2919556893::get_offset_of_major_2(),
	AssemblyName_t2919556893::get_offset_of_minor_3(),
	AssemblyName_t2919556893::get_offset_of_build_4(),
	AssemblyName_t2919556893::get_offset_of_revision_5(),
	AssemblyName_t2919556893::get_offset_of_cultureinfo_6(),
	AssemblyName_t2919556893::get_offset_of_flags_7(),
	AssemblyName_t2919556893::get_offset_of_hashalg_8(),
	AssemblyName_t2919556893::get_offset_of_keypair_9(),
	AssemblyName_t2919556893::get_offset_of_publicKey_10(),
	AssemblyName_t2919556893::get_offset_of_keyToken_11(),
	AssemblyName_t2919556893::get_offset_of_versioncompat_12(),
	AssemblyName_t2919556893::get_offset_of_version_13(),
	AssemblyName_t2919556893::get_offset_of_processor_architecture_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize333 = { sizeof (AssemblyNameFlags_t1568977849)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable333[6] = 
{
	AssemblyNameFlags_t1568977849::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize334 = { sizeof (AssemblyProductAttribute_t74349939), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable334[1] = 
{
	AssemblyProductAttribute_t74349939::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize335 = { sizeof (AssemblyTitleAttribute_t1900193295), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable335[1] = 
{
	AssemblyTitleAttribute_t1900193295::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize336 = { sizeof (AssemblyTrademarkAttribute_t1832460252), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable336[1] = 
{
	AssemblyTrademarkAttribute_t1832460252::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize337 = { sizeof (Binder_t886820729), -1, sizeof(Binder_t886820729_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable337[1] = 
{
	Binder_t886820729_StaticFields::get_offset_of_default_binder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize338 = { sizeof (Default_t739737702), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize339 = { sizeof (BindingFlags_t326472101)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable339[21] = 
{
	BindingFlags_t326472101::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize340 = { sizeof (CallingConventions_t1186684606)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable340[6] = 
{
	CallingConventions_t1186684606::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize341 = { sizeof (ConstructorInfo_t1211456807), -1, sizeof(ConstructorInfo_t1211456807_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable341[2] = 
{
	ConstructorInfo_t1211456807_StaticFields::get_offset_of_ConstructorName_0(),
	ConstructorInfo_t1211456807_StaticFields::get_offset_of_TypeConstructorName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize342 = { sizeof (CustomAttributeData_t1618831278), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable342[3] = 
{
	CustomAttributeData_t1618831278::get_offset_of_ctorInfo_0(),
	CustomAttributeData_t1618831278::get_offset_of_ctorArgs_1(),
	CustomAttributeData_t1618831278::get_offset_of_namedArgs_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize343 = { sizeof (CustomAttributeNamedArgument_t3728838380)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable343[2] = 
{
	CustomAttributeNamedArgument_t3728838380::get_offset_of_typedArgument_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CustomAttributeNamedArgument_t3728838380::get_offset_of_memberInfo_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize344 = { sizeof (CustomAttributeTypedArgument_t734198029)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable344[2] = 
{
	CustomAttributeTypedArgument_t734198029::get_offset_of_argumentType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CustomAttributeTypedArgument_t734198029::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize345 = { sizeof (EventAttributes_t3106454753)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable345[5] = 
{
	EventAttributes_t3106454753::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize346 = { sizeof (EventInfo_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable346[1] = 
{
	EventInfo_t::get_offset_of_cached_add_event_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize347 = { sizeof (AddEventAdapter_t730888156), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize348 = { sizeof (FieldAttributes_t3643081532)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable348[20] = 
{
	FieldAttributes_t3643081532::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize349 = { sizeof (FieldInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize350 = { sizeof (LocalVariableInfo_t1270942175), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable350[3] = 
{
	LocalVariableInfo_t1270942175::get_offset_of_type_0(),
	LocalVariableInfo_t1270942175::get_offset_of_is_pinned_1(),
	LocalVariableInfo_t1270942175::get_offset_of_position_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize351 = { sizeof (MemberInfoSerializationHolder_t881282228), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable351[5] = 
{
	MemberInfoSerializationHolder_t881282228::get_offset_of__memberName_0(),
	MemberInfoSerializationHolder_t881282228::get_offset_of__memberSignature_1(),
	MemberInfoSerializationHolder_t881282228::get_offset_of__memberType_2(),
	MemberInfoSerializationHolder_t881282228::get_offset_of__reflectedType_3(),
	MemberInfoSerializationHolder_t881282228::get_offset_of__genericArguments_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize352 = { sizeof (MemberTypes_t1930693081)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable352[10] = 
{
	MemberTypes_t1930693081::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize353 = { sizeof (MethodAttributes_t361537895)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable353[25] = 
{
	MethodAttributes_t361537895::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize354 = { sizeof (MethodBase_t3920293494), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize355 = { sizeof (MethodImplAttributes_t3015191184)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable355[15] = 
{
	MethodImplAttributes_t3015191184::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize356 = { sizeof (MethodInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize357 = { sizeof (Missing_t2761594835), -1, sizeof(Missing_t2761594835_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable357[1] = 
{
	Missing_t2761594835_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize358 = { sizeof (Module_t1986566517), -1, sizeof(Module_t1986566517_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable358[10] = 
{
	0,
	Module_t1986566517_StaticFields::get_offset_of_FilterTypeName_1(),
	Module_t1986566517_StaticFields::get_offset_of_FilterTypeNameIgnoreCase_2(),
	Module_t1986566517::get_offset_of__impl_3(),
	Module_t1986566517::get_offset_of_assembly_4(),
	Module_t1986566517::get_offset_of_fqname_5(),
	Module_t1986566517::get_offset_of_name_6(),
	Module_t1986566517::get_offset_of_scopename_7(),
	Module_t1986566517::get_offset_of_is_resource_8(),
	Module_t1986566517::get_offset_of_token_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize359 = { sizeof (MonoEventInfo_t1509620734)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable359[8] = 
{
	MonoEventInfo_t1509620734::get_offset_of_declaring_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t1509620734::get_offset_of_reflected_type_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t1509620734::get_offset_of_name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t1509620734::get_offset_of_add_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t1509620734::get_offset_of_remove_method_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t1509620734::get_offset_of_raise_method_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t1509620734::get_offset_of_attrs_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t1509620734::get_offset_of_other_methods_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize360 = { sizeof (MonoEvent_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable360[2] = 
{
	MonoEvent_t::get_offset_of_klass_1(),
	MonoEvent_t::get_offset_of_handle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize361 = { sizeof (MonoField_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable361[5] = 
{
	MonoField_t::get_offset_of_klass_0(),
	MonoField_t::get_offset_of_fhandle_1(),
	MonoField_t::get_offset_of_name_2(),
	MonoField_t::get_offset_of_type_3(),
	MonoField_t::get_offset_of_attrs_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize362 = { sizeof (MonoGenericMethod_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize363 = { sizeof (MonoGenericCMethod_t3369547797), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize364 = { sizeof (MonoMethodInfo_t3011255564)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable364[5] = 
{
	MonoMethodInfo_t3011255564::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t3011255564::get_offset_of_ret_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t3011255564::get_offset_of_attrs_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t3011255564::get_offset_of_iattrs_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t3011255564::get_offset_of_callconv_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize365 = { sizeof (MonoMethod_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable365[3] = 
{
	MonoMethod_t::get_offset_of_mhandle_0(),
	MonoMethod_t::get_offset_of_name_1(),
	MonoMethod_t::get_offset_of_reftype_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize366 = { sizeof (MonoCMethod_t1381445477), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable366[3] = 
{
	MonoCMethod_t1381445477::get_offset_of_mhandle_2(),
	MonoCMethod_t1381445477::get_offset_of_name_3(),
	MonoCMethod_t1381445477::get_offset_of_reftype_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize367 = { sizeof (MonoPropertyInfo_t3144956697)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable367[5] = 
{
	MonoPropertyInfo_t3144956697::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3144956697::get_offset_of_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3144956697::get_offset_of_get_method_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3144956697::get_offset_of_set_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3144956697::get_offset_of_attrs_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize368 = { sizeof (PInfo_t2668315481)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable368[7] = 
{
	PInfo_t2668315481::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize369 = { sizeof (MonoProperty_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable369[5] = 
{
	MonoProperty_t::get_offset_of_klass_0(),
	MonoProperty_t::get_offset_of_prop_1(),
	MonoProperty_t::get_offset_of_info_2(),
	MonoProperty_t::get_offset_of_cached_3(),
	MonoProperty_t::get_offset_of_cached_getter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize370 = { sizeof (GetterAdapter_t4260951374), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize371 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize372 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize373 = { sizeof (ParameterAttributes_t2162507505)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable373[12] = 
{
	ParameterAttributes_t2162507505::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize374 = { sizeof (ParameterInfo_t3188848418), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable374[7] = 
{
	ParameterInfo_t3188848418::get_offset_of_ClassImpl_0(),
	ParameterInfo_t3188848418::get_offset_of_DefaultValueImpl_1(),
	ParameterInfo_t3188848418::get_offset_of_MemberImpl_2(),
	ParameterInfo_t3188848418::get_offset_of_NameImpl_3(),
	ParameterInfo_t3188848418::get_offset_of_PositionImpl_4(),
	ParameterInfo_t3188848418::get_offset_of_AttrsImpl_5(),
	ParameterInfo_t3188848418::get_offset_of_marshalAs_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize375 = { sizeof (ParameterModifier_t4067337784)+ sizeof (RuntimeObject), sizeof(ParameterModifier_t4067337784_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable375[1] = 
{
	ParameterModifier_t4067337784::get_offset_of__byref_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize376 = { sizeof (Pointer_t1260526926), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable376[2] = 
{
	Pointer_t1260526926::get_offset_of_data_0(),
	Pointer_t1260526926::get_offset_of_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize377 = { sizeof (ProcessorArchitecture_t1439328349)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable377[6] = 
{
	ProcessorArchitecture_t1439328349::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize378 = { sizeof (PropertyAttributes_t4204890147)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable378[9] = 
{
	PropertyAttributes_t4204890147::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize379 = { sizeof (PropertyInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize380 = { sizeof (ResourceAttributes_t1527120123)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable380[3] = 
{
	ResourceAttributes_t1527120123::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize381 = { sizeof (StrongNameKeyPair_t1212754456), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable381[5] = 
{
	StrongNameKeyPair_t1212754456::get_offset_of__publicKey_0(),
	StrongNameKeyPair_t1212754456::get_offset_of__keyPairContainer_1(),
	StrongNameKeyPair_t1212754456::get_offset_of__keyPairExported_2(),
	StrongNameKeyPair_t1212754456::get_offset_of__keyPairArray_3(),
	StrongNameKeyPair_t1212754456::get_offset_of__rsa_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize382 = { sizeof (TargetException_t2768158429), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize383 = { sizeof (TargetInvocationException_t823534325), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize384 = { sizeof (TargetParameterCountException_t704239062), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize385 = { sizeof (TypeAttributes_t1742692083)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable385[32] = 
{
	TypeAttributes_t1742692083::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize386 = { sizeof (TypeDelegator_t2046892398), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable386[1] = 
{
	TypeDelegator_t2046892398::get_offset_of_typeImpl_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize387 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize388 = { sizeof (NeutralResourcesLanguageAttribute_t1660801575), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable388[1] = 
{
	NeutralResourcesLanguageAttribute_t1660801575::get_offset_of_culture_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize389 = { sizeof (ResourceManager_t860560018), -1, sizeof(ResourceManager_t860560018_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable389[5] = 
{
	ResourceManager_t860560018_StaticFields::get_offset_of_ResourceCache_0(),
	ResourceManager_t860560018_StaticFields::get_offset_of_NonExistent_1(),
	ResourceManager_t860560018_StaticFields::get_offset_of_HeaderVersionNumber_2(),
	ResourceManager_t860560018_StaticFields::get_offset_of_MagicNumber_3(),
	ResourceManager_t860560018::get_offset_of_resourceSetType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize390 = { sizeof (PredefinedResourceType_t1512938623)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable390[21] = 
{
	PredefinedResourceType_t1512938623::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize391 = { sizeof (ResourceReader_t1547862611), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable391[13] = 
{
	ResourceReader_t1547862611::get_offset_of_reader_0(),
	ResourceReader_t1547862611::get_offset_of_readerLock_1(),
	ResourceReader_t1547862611::get_offset_of_formatter_2(),
	ResourceReader_t1547862611::get_offset_of_resourceCount_3(),
	ResourceReader_t1547862611::get_offset_of_typeCount_4(),
	ResourceReader_t1547862611::get_offset_of_typeNames_5(),
	ResourceReader_t1547862611::get_offset_of_hashes_6(),
	ResourceReader_t1547862611::get_offset_of_infos_7(),
	ResourceReader_t1547862611::get_offset_of_dataSectionOffset_8(),
	ResourceReader_t1547862611::get_offset_of_nameSectionOffset_9(),
	ResourceReader_t1547862611::get_offset_of_resource_ver_10(),
	ResourceReader_t1547862611::get_offset_of_cache_11(),
	ResourceReader_t1547862611::get_offset_of_cache_lock_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize392 = { sizeof (ResourceInfo_t2987941937)+ sizeof (RuntimeObject), sizeof(ResourceInfo_t2987941937_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable392[3] = 
{
	ResourceInfo_t2987941937::get_offset_of_ValuePosition_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceInfo_t2987941937::get_offset_of_ResourceName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceInfo_t2987941937::get_offset_of_TypeIndex_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize393 = { sizeof (ResourceCacheItem_t238780263)+ sizeof (RuntimeObject), sizeof(ResourceCacheItem_t238780263_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable393[2] = 
{
	ResourceCacheItem_t238780263::get_offset_of_ResourceName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceCacheItem_t238780263::get_offset_of_ResourceValue_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize394 = { sizeof (ResourceEnumerator_t3548400174), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable394[3] = 
{
	ResourceEnumerator_t3548400174::get_offset_of_reader_0(),
	ResourceEnumerator_t3548400174::get_offset_of_index_1(),
	ResourceEnumerator_t3548400174::get_offset_of_finished_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize395 = { sizeof (ResourceSet_t2540623889), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable395[4] = 
{
	ResourceSet_t2540623889::get_offset_of_Reader_0(),
	ResourceSet_t2540623889::get_offset_of_Table_1(),
	ResourceSet_t2540623889::get_offset_of_resources_read_2(),
	ResourceSet_t2540623889::get_offset_of_disposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize396 = { sizeof (RuntimeResourceSet_t322033381), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize397 = { sizeof (SatelliteContractVersionAttribute_t2005723103), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable397[1] = 
{
	SatelliteContractVersionAttribute_t2005723103::get_offset_of_ver_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize398 = { sizeof (CompilationRelaxations_t1236319864)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable398[2] = 
{
	CompilationRelaxations_t1236319864::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize399 = { sizeof (CompilationRelaxationsAttribute_t310145768), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable399[1] = 
{
	CompilationRelaxationsAttribute_t310145768::get_offset_of_relax_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
