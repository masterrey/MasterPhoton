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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// ExitGames.Client.Photon.Encryption.IPhotonEncryptor
struct IPhotonEncryptor_t570CC9AA9E78CA4E39F2F57A7E4E068966E576B0;
// ExitGames.Client.Photon.EventData
struct EventData_t54DAF8C02A7469835C5973950E6E2759BB986571;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_tB43B9A93795FA1A57AFFA90CFFEEB0F792D0194E;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_tDADE3B676A1316B29AB3DE8F6119AB0075C4D49C;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t86E7C80E28C6EF31A0E8BF4FA3E4DE08BA9C3ADE;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t29DE7F7920F887647D954E9F9C5FC3CE279F75A5;
// Photon.Chat.AuthenticationValues
struct AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78;
// Photon.Chat.ChannelCreationOptions
struct ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D;
// Photon.Chat.ChannelWellKnownProperties
struct ChannelWellKnownProperties_t885B8C39E6ADD0DADB0DAF772E2D7525AD057508;
// Photon.Chat.ChatAppSettings
struct ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356;
// Photon.Chat.ChatChannel
struct ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579;
// Photon.Chat.ChatClient
struct ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505;
// Photon.Chat.ChatEventCode
struct ChatEventCode_t69355728022C08E7435EBAAB0B0CC12A186AACAE;
// Photon.Chat.ChatOperationCode
struct ChatOperationCode_t2241AAA0BE1EE7E35D7FB4020009BC538267AF45;
// Photon.Chat.ChatParameterCode
struct ChatParameterCode_t04DD519C260927DA892F3046EFC437B00339AF56;
// Photon.Chat.ChatPeer
struct ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989;
// Photon.Chat.ErrorCode
struct ErrorCode_t49B1D3A0A84EAE4C66AA6E40237D6FB10E6A35E5;
// Photon.Chat.IChatClientListener
struct IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8;
// Photon.Chat.ParameterCode
struct ParameterCode_t7CAB0CED18EF18251341209C8FF74EBCB049AA91;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>[]
struct EntryU5BU5D_t851C7629615836C59AA0218DF4C07294B9DB940E;
// System.Collections.Generic.Dictionary`2/Entry<ExitGames.Client.Photon.ConnectionProtocol,System.Type>[]
struct EntryU5BU5D_t3D045724A92FA22F2C0DF0DCD806145D962A78F3;
// System.Collections.Generic.Dictionary`2/Entry<System.Byte,System.Object>[]
struct EntryU5BU5D_tE72F338533CAB40C554B7EB60D0842E51634A883;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_t9EC04215E0A25794290249C0F6D7EA694596D2BE;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Photon.Chat.ChatChannel>[]
struct EntryU5BU5D_t688D6F3395B637D7615AD84FE6916B6154AD0485;
// System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct KeyCollection_t12C53CBD993745B6F9D0320DE59CCE5F31B0982C;
// System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct KeyCollection_t1B3379EB2B8FA6928BD48A3E592C30C4522E1D1F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>
struct KeyCollection_tACF1090C1AD47AB88B96A6EC589146F41460761E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Photon.Chat.ChatChannel>
struct KeyCollection_t00D63C22D36A9AF4F50F5D9F7B57924F448119F4;
// System.Collections.Generic.Dictionary`2/ValueCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct ValueCollection_tC358063283BAA6E3D43A38A9A9631D1B5E12DAA4;
// System.Collections.Generic.Dictionary`2/ValueCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct ValueCollection_t38426E068F66D3051C6EA4074B760026013B5F01;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Object>
struct ValueCollection_t45171E77ABFA412BFFA2BC69FCE8561DAF9738B9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Photon.Chat.ChatChannel>
struct ValueCollection_tE9E4BE3868ED17EA425F68B7FF96522DAF7B6517;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_t881E1592C6CBEA5F40CAA7EE97897DCA8DBAFB97;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D;
// System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>
struct Dictionary_2_tA8D3E016EE46BB1BC90748D0B3AE8D8BDBA254D5;
// System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>
struct Dictionary_2_tD29115181D231667A982B4C7ACA4835FFAD400ED;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>
struct Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_t9C4FFBCC974570D24EDC1028CCD0269BE774B36C;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t511054F8C1CDB4A0AF344830E4F305D372B32434;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t31EF1520A3A805598500BB6033C14ABDA7116D5E;
// System.Collections.Generic.IEqualityComparer`1<ExitGames.Client.Photon.ConnectionProtocol>
struct IEqualityComparer_1_tCC5A1D3839E5187EECEA2BC9037B1CC9D8006664;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_tA90617A2C656916626A63B98664B74DB098BCE8B;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t5075A2805A51162E94A9CF2F2881DC51B78EA80D;
// System.Diagnostics.StackTrace
struct StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Diagnostics.Stopwatch
struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4;
// System.Func`1<System.Boolean>
struct Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatState_tABA9DDB2C18934215ADACBF403DF9FD0A71D8B79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPhotonPeerListener_tB43B9A93795FA1A57AFFA90CFFEEB0F792D0194E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PeerStateValue_t6629D00E672311CA05626AD8D5A197AB5A899E86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportClass_tE42C4383E3E9D5BAF1BDB2C51F0053200D18421C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06D8FB7D57518A9D9AD12F37B1762D47BCFEBC34;
IL2CPP_EXTERN_C String_t* _stringLiteral0C9BC8A9EA08F5764E66418E04C783D7C5EA550E;
IL2CPP_EXTERN_C String_t* _stringLiteral0ED3124668F532717B0D69F6EAA15F42A8393B1D;
IL2CPP_EXTERN_C String_t* _stringLiteral103C55E7DFE64F67542769202574517D87109190;
IL2CPP_EXTERN_C String_t* _stringLiteral107307FBAF61C580C469AD7BCE2AE293E1C4A281;
IL2CPP_EXTERN_C String_t* _stringLiteral11B6F3557420C105118FCE7DD35DEC9F19E23C3D;
IL2CPP_EXTERN_C String_t* _stringLiteral17993E6AA42390896507EF1DDDB2A0E8ABD42D12;
IL2CPP_EXTERN_C String_t* _stringLiteral187DB917BF8928E28C35D9C1A3ACCC7FFE7357D3;
IL2CPP_EXTERN_C String_t* _stringLiteral21D80703A6C8D4036492B5E5021EDB6DA533D41D;
IL2CPP_EXTERN_C String_t* _stringLiteral238CFA8C25F7535B52F025A6DC2373BE55C1578E;
IL2CPP_EXTERN_C String_t* _stringLiteral260B333133E8DC5F239195333A036B63C1EC62B9;
IL2CPP_EXTERN_C String_t* _stringLiteral29683C1799AE0C427BB58C8BF974A0FB8AA9BFC9;
IL2CPP_EXTERN_C String_t* _stringLiteral2C2487EA5D13B73C78A16D4C01B849CC868B9F66;
IL2CPP_EXTERN_C String_t* _stringLiteral2EAC14B3D351C8B6836D36173E0E34127AA6A058;
IL2CPP_EXTERN_C String_t* _stringLiteral31A8C2A4274E13FF28BD8BEBFAAD8D2908604F0B;
IL2CPP_EXTERN_C String_t* _stringLiteral3337A646329BB0605D15621CA34E1626248D408C;
IL2CPP_EXTERN_C String_t* _stringLiteral338B2B6C4BBAA566799E30C0FFE0EB3E1AD56F71;
IL2CPP_EXTERN_C String_t* _stringLiteral384A0C94086D36412431EB0508F6F2D1985B9A68;
IL2CPP_EXTERN_C String_t* _stringLiteral3D618361EC8C202858B123986AEA7B042531080B;
IL2CPP_EXTERN_C String_t* _stringLiteral427FC0E48C1D9A9A8FF6FF858C6B30F622D1F800;
IL2CPP_EXTERN_C String_t* _stringLiteral4D05D00A60529C7A57C13E385944654DD890D8DE;
IL2CPP_EXTERN_C String_t* _stringLiteral4D3C418A83DE54D710758569DF3FF8391356AFB7;
IL2CPP_EXTERN_C String_t* _stringLiteral551EBFB5CCD80CC20586837AC559715F59BC0147;
IL2CPP_EXTERN_C String_t* _stringLiteral5618474235217E524A45AD712574B23E84EED6AD;
IL2CPP_EXTERN_C String_t* _stringLiteral5729A153EC7FAE56800274A78531B43CC0A3112C;
IL2CPP_EXTERN_C String_t* _stringLiteral5742FE1BDA7AB1FC9AFE28EA777EE363C684E01E;
IL2CPP_EXTERN_C String_t* _stringLiteral638067AF521CCE283B94B0DF8899C179DCF25FB3;
IL2CPP_EXTERN_C String_t* _stringLiteral68E21592360E435244D8BD55506FC51CCA67E430;
IL2CPP_EXTERN_C String_t* _stringLiteral6A99D68EAA56E7B9EA40ED090FD2E0DDA1EB1E0F;
IL2CPP_EXTERN_C String_t* _stringLiteral6AFEA6BD492174EAD3729E74B21354F505CDDCF4;
IL2CPP_EXTERN_C String_t* _stringLiteral6FE4B9203298E5B74393E0818142DBF57DA03BB3;
IL2CPP_EXTERN_C String_t* _stringLiteral70E46A40252ADA773201ED2001C3B5E19AE0D5E2;
IL2CPP_EXTERN_C String_t* _stringLiteral71EBF5DA4A7DF5D098F0A1BC60250ECE10DBEC80;
IL2CPP_EXTERN_C String_t* _stringLiteral74E0537A883E3EB77F6D19BD02E970E3B8CAA800;
IL2CPP_EXTERN_C String_t* _stringLiteral7BEA53D7765CB5C320CAF9A0C3283A4E5AF00416;
IL2CPP_EXTERN_C String_t* _stringLiteral7C4D33785DAA5C2370201FFA236B427AA37C9996;
IL2CPP_EXTERN_C String_t* _stringLiteral7ECDE348FF9CDA2C3BA69A0C4543365039D0D65B;
IL2CPP_EXTERN_C String_t* _stringLiteral83FEBC0012B2BE602C85FC053159E9EF67600984;
IL2CPP_EXTERN_C String_t* _stringLiteral8CBF6943194FAE819E8AFA76DB6AA5FEDEF2323B;
IL2CPP_EXTERN_C String_t* _stringLiteral8F1AC3BB2037F1143E5E5853C9E7E3990ABDFDEE;
IL2CPP_EXTERN_C String_t* _stringLiteral94B1E34A1FC3B7B63B014BAD58E50115CFB5FC7D;
IL2CPP_EXTERN_C String_t* _stringLiteral9663A08052B2B050231926A22F7DC859D93D44FF;
IL2CPP_EXTERN_C String_t* _stringLiteral9ECB827BD6D80841068E0AE354CABBDE1FED45C0;
IL2CPP_EXTERN_C String_t* _stringLiteralA31D385B9DEE1897A2E6840A59DF969194B69490;
IL2CPP_EXTERN_C String_t* _stringLiteralA595791DAF8A7212368D5CC9A8886085257B5A0C;
IL2CPP_EXTERN_C String_t* _stringLiteralA8B9D506307E302D77308D7E4A5DB319E04C3EC0;
IL2CPP_EXTERN_C String_t* _stringLiteralAAC3759B75EBB121D5A5F793C49C6496CB466067;
IL2CPP_EXTERN_C String_t* _stringLiteralABB11E10EF4F1912CA124A43EDFCF7E4236BF4B3;
IL2CPP_EXTERN_C String_t* _stringLiteralABF28A6D84BA34B35ADF7EB356198FF5875435E5;
IL2CPP_EXTERN_C String_t* _stringLiteralB243016B5650803D4A94A422FA062ABA05F40C6D;
IL2CPP_EXTERN_C String_t* _stringLiteralB4992CF8FE071D46902C6E742001E921CD3995B5;
IL2CPP_EXTERN_C String_t* _stringLiteralB7A757A62D6F4547652BA320456CD72FF6D7093E;
IL2CPP_EXTERN_C String_t* _stringLiteralBA31FDB9D9DF30D820D828B03F9C4D72781B8C2E;
IL2CPP_EXTERN_C String_t* _stringLiteralBCB5C68DA61EECD91A7CBF61D41B0938CEDBCD34;
IL2CPP_EXTERN_C String_t* _stringLiteralBF11A57FF863BE16C3B8157656862961ACDA3725;
IL2CPP_EXTERN_C String_t* _stringLiteralC03619A6D8E3BC5B2795B980A17D5A6CBC187308;
IL2CPP_EXTERN_C String_t* _stringLiteralC0A6FD1C5CA8DBFF0C1D66394DA952F681078562;
IL2CPP_EXTERN_C String_t* _stringLiteralC82D1B09CF32291761D4D994CF71D150CBFAB21C;
IL2CPP_EXTERN_C String_t* _stringLiteralC82DBB40CF62E9201ED272DC15F939C724CD3E7D;
IL2CPP_EXTERN_C String_t* _stringLiteralCC8A9D016C6E2C07A8B03493514472F62C594C42;
IL2CPP_EXTERN_C String_t* _stringLiteralD1E3D9C1B922EB4D0834D565C074EDC474E4C8B1;
IL2CPP_EXTERN_C String_t* _stringLiteralD42D8F5361FEC807EFBD78D0B0154513FA3FDEA5;
IL2CPP_EXTERN_C String_t* _stringLiteralD6CA3F0561CBE6D60E45676F583A5694EA29884B;
IL2CPP_EXTERN_C String_t* _stringLiteralD964D9EDC3903803F850267B4FA83E4185A94ED7;
IL2CPP_EXTERN_C String_t* _stringLiteralE23C1A7928CC6F82A21EE1A76448A0F81B07C4E9;
IL2CPP_EXTERN_C String_t* _stringLiteralE253B0891DF30C474657E7D3318961A841E3E960;
IL2CPP_EXTERN_C String_t* _stringLiteralE7B85E7369BA50B83804EBF39E9612010E5B9FCD;
IL2CPP_EXTERN_C String_t* _stringLiteralE8A3C398B4EA2BE3444B33FEC2ABF9939FFE6A33;
IL2CPP_EXTERN_C String_t* _stringLiteralE92B7B36B6E384E44F7E0E2A7CDECA40F4F457DB;
IL2CPP_EXTERN_C String_t* _stringLiteralEF54001782F2548B67B67C09D2133F76EE73079C;
IL2CPP_EXTERN_C const RuntimeMethod* ChatClient_SendOutgoingInBackground_mFCE2C7CB1440F773487CFD739D99E07772F8EC3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChatPeer_GetNameServerAddress_mB1699C2550D3A1D1D4764BAD2233F74FCD281E7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m39ABF8526DE51AF36AC5830AF7E84AA902FB7A85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m4AFFFA90D1EB7D3A1CD220E1EAD75C00973C64D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m7D3BEF1BAC6367D5252C79306F6C8CCA38AD7FA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m19B67631E3168539C3430F820AF289EC84A92C71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m6A2F931BE7FC2BF939795D60C2CA914922E21BA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m7696A01224568B5D3C5E220A8BF743D2240A14FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m453714E9ABC80ADA48D3A630DC3F1DBAE9913DEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m8B39ED539B994181791D0F9DBD399F7A90AF5841_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2895EBB13AA7D9232058658A7DC404DC5F608923_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3775E46AA1C9BD07056DD5C102B6CD501A7C85D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6EAF9A7C999732BD7C6B8668415E595968A33DF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA38BDB6209548343F5C21CA8CCEF000923157407_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m079EE5437EE7D904E9E3F798041C1108B96B3AC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mBD74E977A1200B92E98F968B5774094135AE2316_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mE92C6104FB820DF374DCF1E198DDE0F31C585500_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5D6053937D6CD09077A90EB5594628CC48582A58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB668588F2E9A318DF3632BB857303D20498ECC88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA33B69480FC6CDC8EA0466828EEE8874DE604441_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m36F8615CDD8E019D5C4E92D96E275F7A8836B86F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mD0E40F9E35B3EEAED652C38D1784046EAD4057E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m90ADC6AC2A4FBFC20B0110DDBB92A66F0FAA5032_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m87AD3D6A936FABDA8CFECAD1C37AF4A2426C2913_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_mD6EE52239731ACBFBC21335EF4D16CEE6F597F31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mD07425BBACDADAC32A4B42FDE00C5DAAEC59880D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_mF3ABE8CB53339BA8AD485E3BF3C9D48898B5370A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m21B2730A60B5301394D09D8DF9ACD9790BF8D20D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mD612A98620C52EC0C487AC2607D13BFE5883DF3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mB886C990CD1F0558809236CF1D28C977A3558306_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m88DAB47C8CD8CB4C432BFB6252AFAF8423E9DCB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m89425146ABCF46BE030B6C4B3C85A8559550F983_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AuthenticationValues_AddAuthParameter_m139C90C8BC229C6C2859F4C331BCBB2F85DFF6B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AuthenticationValues_ToString_m680E3644014EC3FA293F6907A45E60EA69CC0145_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChannelCreationOptions__cctor_m42D194A5B5D34EF9DD71AA10DABCA4366846A84D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatChannel_AddSubscribers_m636C057698F6796380DF44B449F409E269A06219_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatChannel_Add_m53FC954539B7E53D859791C395149D4D0FC1E008_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatChannel_Add_m8DD77CEE6F254A2E5C91FEE0A30A93DC8A6D4F05_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatChannel_ClearMessages_m9F330C894A569614B438E1F34AA74BA6B0621A33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatChannel_ClearProperties_m7999623EAE9437976EB38F9D5EB3C510FD411CAD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatChannel_ReadProperties_m80EB77137366A51ABAF018AACFDE3B649F84B9D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatChannel_ToStringMessages_m4B60A66D61FC42B5B92A4DFB4C9B927C052CAD2C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatChannel_TruncateMessages_m3FA2436DD4AD365AAA2974E96609805A0CD17F79_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatChannel__ctor_m34ED969B48E31AD8CC5B757EE1BF8AA760D7C342_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatChannel_get_MessageCount_m9A22F494E044E317761F13C334C401912D7CCB01_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_AddFriends_mEAEC8761F53432233CE0D9F7B7DCB49AAA911BE0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_AuthenticateOnFrontEnd_mC3384AD28A733908C452491D57E07BF125106DD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_CanChatInChannel_m0E3D8A49CB86A21CBFFFEDAF71C31637C3D676D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_ConnectAndSetStatus_m162558B2D8D1C60B39E7DB974A927D8425E72EA9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_ConnectToFrontEnd_m722E63C3D49C19C27434B0157D91906E934C5544_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_ConnectUsingSettings_mE6BBA2FB45898C414E780D34C214056C32C981ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_Connect_m3954C8A1F05DF95D8AC83F7186A1D95FDFBA70F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn_m64ACC8CC1BFA1306E354AF5FDC47FC394A3B7546_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse_mFD6099C05BBECB04743344F9072C4DB56640A757_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged_m88DE819E7FC0081498439F602F0F9920D6465AFD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_GetPrivateChannelNameByUser_m8DD9568D4F1E6424BD27D7B3F66D2B71F78E1564_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_HandleAuthResponse_m149DFF8B5817172ED398B4B77489A1314254F9B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_HandleChatMessagesEvent_m5985D85D12982CC2BE98DFAC410F27A83C96E539_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_HandlePrivateMessageEvent_mF5FF0901611A6118801804D28B4B8A18B04F864C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_HandleStatusUpdate_m7A3E87E54FFD4A90EBB43311321051397A4DED55_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_HandleSubscribeEvent_m6A4E1BA574DC698494D8F206DC8D2103758720C6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_HandleUnsubscribeEvent_m733D6DBDEBA8004AFA8CA4164A658F694C3A4A36_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_HandleUserSubscribedEvent_m6EB9F63E36A3CCEC286A2E511CEA4FBE35056571_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_HandleUserUnsubscribedEvent_m0F7CA88FAAF1C667CD79368C9CC9274623A15E9F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_RemoveFriends_m47EB90FCB9DF43FDF98FFB258B56EBD7AB35578D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_SendChannelOperation_mCF0D03E16706453CEE72FD38129FD6BAAF48F32B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_SetOnlineStatus_m9A5A283B661F7A390FF7C7E044A1C5B050D08726_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_Subscribe_m6A836D6622403D1744A00C194C485B764E2A529E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_Subscribe_m8880A667FC6E5A20137A128CA9E14DC1FD7412F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_Subscribe_m893C4C80A0E16F7FA6400AB703B108A26D181E6B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_TryAuthenticateOnNameServer_m33BF926F8BFB9A816B4CF4D510E7C05D8FA887D1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_TryGetChannel_m3010392F7956037B208A9373C681A29A818B4BD6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_TryGetChannel_m5E29865E092D479AF2155CCFA14AEF6B65C77BE7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_Unsubscribe_m08903334236B22619BBF51877E1D55F452B744A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient__ctor_mEBC1E5D01173778E19C54A8DFE1A0C4BA88807E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_publishMessage_mC7A0E2DEB29BE35A74DD8FB326AF7D2B92E883C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_sendPrivateMessage_mAF13FC00B8AEE6CDD87EE58E845621274943F09B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_set_TransportProtocol_m8689C7316F6E1B44C6E395328A28F5421A00FBDA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_set_UserId_m18307D5CD943FA01E3569174D4D4C9CCAA9BE4C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatPeer_AuthenticateOnNameServer_m649578307A749D73AE5BD9A12E77342635BBE59B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatPeer_ConfigUnitySockets_mCA8E0D9097418FE87EC31C6F26DD765A1A744F5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatPeer_Connect_m94685331391079FBB93EA688CA18BD5513DE6C35_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatPeer_GetNameServerAddress_mB1699C2550D3A1D1D4764BAD2233F74FCD281E7C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatPeer__cctor_mE74E176F6B3D98A4BDDE9DBC3175FB9C7C187DBF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatPeer__ctor_m2DB07AE0969784CB00C97F73685AFE3C12FAFAC4_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t87B1B8CD3395CCC432D52CD2F0E6D28F204AA14E 
{
public:

public:
};


// System.Object


// ExitGames.Client.Photon.EventData
struct  EventData_t54DAF8C02A7469835C5973950E6E2759BB986571  : public RuntimeObject
{
public:
	// System.Byte ExitGames.Client.Photon.EventData::Code
	uint8_t ___Code_0;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.EventData::Parameters
	Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * ___Parameters_1;
	// System.Byte ExitGames.Client.Photon.EventData::SenderKey
	uint8_t ___SenderKey_2;
	// System.Int32 ExitGames.Client.Photon.EventData::sender
	int32_t ___sender_3;
	// System.Byte ExitGames.Client.Photon.EventData::CustomDataKey
	uint8_t ___CustomDataKey_4;
	// System.Object ExitGames.Client.Photon.EventData::customData
	RuntimeObject * ___customData_5;

public:
	inline static int32_t get_offset_of_Code_0() { return static_cast<int32_t>(offsetof(EventData_t54DAF8C02A7469835C5973950E6E2759BB986571, ___Code_0)); }
	inline uint8_t get_Code_0() const { return ___Code_0; }
	inline uint8_t* get_address_of_Code_0() { return &___Code_0; }
	inline void set_Code_0(uint8_t value)
	{
		___Code_0 = value;
	}

	inline static int32_t get_offset_of_Parameters_1() { return static_cast<int32_t>(offsetof(EventData_t54DAF8C02A7469835C5973950E6E2759BB986571, ___Parameters_1)); }
	inline Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * get_Parameters_1() const { return ___Parameters_1; }
	inline Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D ** get_address_of_Parameters_1() { return &___Parameters_1; }
	inline void set_Parameters_1(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * value)
	{
		___Parameters_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parameters_1), (void*)value);
	}

	inline static int32_t get_offset_of_SenderKey_2() { return static_cast<int32_t>(offsetof(EventData_t54DAF8C02A7469835C5973950E6E2759BB986571, ___SenderKey_2)); }
	inline uint8_t get_SenderKey_2() const { return ___SenderKey_2; }
	inline uint8_t* get_address_of_SenderKey_2() { return &___SenderKey_2; }
	inline void set_SenderKey_2(uint8_t value)
	{
		___SenderKey_2 = value;
	}

	inline static int32_t get_offset_of_sender_3() { return static_cast<int32_t>(offsetof(EventData_t54DAF8C02A7469835C5973950E6E2759BB986571, ___sender_3)); }
	inline int32_t get_sender_3() const { return ___sender_3; }
	inline int32_t* get_address_of_sender_3() { return &___sender_3; }
	inline void set_sender_3(int32_t value)
	{
		___sender_3 = value;
	}

	inline static int32_t get_offset_of_CustomDataKey_4() { return static_cast<int32_t>(offsetof(EventData_t54DAF8C02A7469835C5973950E6E2759BB986571, ___CustomDataKey_4)); }
	inline uint8_t get_CustomDataKey_4() const { return ___CustomDataKey_4; }
	inline uint8_t* get_address_of_CustomDataKey_4() { return &___CustomDataKey_4; }
	inline void set_CustomDataKey_4(uint8_t value)
	{
		___CustomDataKey_4 = value;
	}

	inline static int32_t get_offset_of_customData_5() { return static_cast<int32_t>(offsetof(EventData_t54DAF8C02A7469835C5973950E6E2759BB986571, ___customData_5)); }
	inline RuntimeObject * get_customData_5() const { return ___customData_5; }
	inline RuntimeObject ** get_address_of_customData_5() { return &___customData_5; }
	inline void set_customData_5(RuntimeObject * value)
	{
		___customData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customData_5), (void*)value);
	}
};


// ExitGames.Client.Photon.OperationResponse
struct  OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15  : public RuntimeObject
{
public:
	// System.Byte ExitGames.Client.Photon.OperationResponse::OperationCode
	uint8_t ___OperationCode_0;
	// System.Int16 ExitGames.Client.Photon.OperationResponse::ReturnCode
	int16_t ___ReturnCode_1;
	// System.String ExitGames.Client.Photon.OperationResponse::DebugMessage
	String_t* ___DebugMessage_2;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.OperationResponse::Parameters
	Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * ___Parameters_3;

public:
	inline static int32_t get_offset_of_OperationCode_0() { return static_cast<int32_t>(offsetof(OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15, ___OperationCode_0)); }
	inline uint8_t get_OperationCode_0() const { return ___OperationCode_0; }
	inline uint8_t* get_address_of_OperationCode_0() { return &___OperationCode_0; }
	inline void set_OperationCode_0(uint8_t value)
	{
		___OperationCode_0 = value;
	}

	inline static int32_t get_offset_of_ReturnCode_1() { return static_cast<int32_t>(offsetof(OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15, ___ReturnCode_1)); }
	inline int16_t get_ReturnCode_1() const { return ___ReturnCode_1; }
	inline int16_t* get_address_of_ReturnCode_1() { return &___ReturnCode_1; }
	inline void set_ReturnCode_1(int16_t value)
	{
		___ReturnCode_1 = value;
	}

	inline static int32_t get_offset_of_DebugMessage_2() { return static_cast<int32_t>(offsetof(OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15, ___DebugMessage_2)); }
	inline String_t* get_DebugMessage_2() const { return ___DebugMessage_2; }
	inline String_t** get_address_of_DebugMessage_2() { return &___DebugMessage_2; }
	inline void set_DebugMessage_2(String_t* value)
	{
		___DebugMessage_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DebugMessage_2), (void*)value);
	}

	inline static int32_t get_offset_of_Parameters_3() { return static_cast<int32_t>(offsetof(OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15, ___Parameters_3)); }
	inline Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * get_Parameters_3() const { return ___Parameters_3; }
	inline Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D ** get_address_of_Parameters_3() { return &___Parameters_3; }
	inline void set_Parameters_3(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * value)
	{
		___Parameters_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parameters_3), (void*)value);
	}
};


// Photon.Chat.ChannelCreationOptions
struct  ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D  : public RuntimeObject
{
public:
	// System.Boolean Photon.Chat.ChannelCreationOptions::<PublishSubscribers>k__BackingField
	bool ___U3CPublishSubscribersU3Ek__BackingField_1;
	// System.Int32 Photon.Chat.ChannelCreationOptions::<MaxSubscribers>k__BackingField
	int32_t ___U3CMaxSubscribersU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CPublishSubscribersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D, ___U3CPublishSubscribersU3Ek__BackingField_1)); }
	inline bool get_U3CPublishSubscribersU3Ek__BackingField_1() const { return ___U3CPublishSubscribersU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CPublishSubscribersU3Ek__BackingField_1() { return &___U3CPublishSubscribersU3Ek__BackingField_1; }
	inline void set_U3CPublishSubscribersU3Ek__BackingField_1(bool value)
	{
		___U3CPublishSubscribersU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMaxSubscribersU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D, ___U3CMaxSubscribersU3Ek__BackingField_2)); }
	inline int32_t get_U3CMaxSubscribersU3Ek__BackingField_2() const { return ___U3CMaxSubscribersU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CMaxSubscribersU3Ek__BackingField_2() { return &___U3CMaxSubscribersU3Ek__BackingField_2; }
	inline void set_U3CMaxSubscribersU3Ek__BackingField_2(int32_t value)
	{
		___U3CMaxSubscribersU3Ek__BackingField_2 = value;
	}
};

struct ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_StaticFields
{
public:
	// Photon.Chat.ChannelCreationOptions Photon.Chat.ChannelCreationOptions::Default
	ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_StaticFields, ___Default_0)); }
	inline ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * get_Default_0() const { return ___Default_0; }
	inline ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// Photon.Chat.ChannelWellKnownProperties
struct  ChannelWellKnownProperties_t885B8C39E6ADD0DADB0DAF772E2D7525AD057508  : public RuntimeObject
{
public:

public:
};


// Photon.Chat.ChatChannel
struct  ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579  : public RuntimeObject
{
public:
	// System.String Photon.Chat.ChatChannel::Name
	String_t* ___Name_0;
	// System.Collections.Generic.List`1<System.String> Photon.Chat.ChatChannel::Senders
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___Senders_1;
	// System.Collections.Generic.List`1<System.Object> Photon.Chat.ChatChannel::Messages
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___Messages_2;
	// System.Int32 Photon.Chat.ChatChannel::MessageLimit
	int32_t ___MessageLimit_3;
	// System.Boolean Photon.Chat.ChatChannel::<IsPrivate>k__BackingField
	bool ___U3CIsPrivateU3Ek__BackingField_4;
	// System.Int32 Photon.Chat.ChatChannel::<LastMsgId>k__BackingField
	int32_t ___U3CLastMsgIdU3Ek__BackingField_5;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Object> Photon.Chat.ChatChannel::properties
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___properties_6;
	// System.Boolean Photon.Chat.ChatChannel::<PublishSubscribers>k__BackingField
	bool ___U3CPublishSubscribersU3Ek__BackingField_7;
	// System.Int32 Photon.Chat.ChatChannel::<MaxSubscribers>k__BackingField
	int32_t ___U3CMaxSubscribersU3Ek__BackingField_8;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Chat.ChatChannel::Subscribers
	HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * ___Subscribers_9;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Senders_1() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___Senders_1)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_Senders_1() const { return ___Senders_1; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_Senders_1() { return &___Senders_1; }
	inline void set_Senders_1(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___Senders_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Senders_1), (void*)value);
	}

	inline static int32_t get_offset_of_Messages_2() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___Messages_2)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_Messages_2() const { return ___Messages_2; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_Messages_2() { return &___Messages_2; }
	inline void set_Messages_2(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___Messages_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Messages_2), (void*)value);
	}

	inline static int32_t get_offset_of_MessageLimit_3() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___MessageLimit_3)); }
	inline int32_t get_MessageLimit_3() const { return ___MessageLimit_3; }
	inline int32_t* get_address_of_MessageLimit_3() { return &___MessageLimit_3; }
	inline void set_MessageLimit_3(int32_t value)
	{
		___MessageLimit_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsPrivateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___U3CIsPrivateU3Ek__BackingField_4)); }
	inline bool get_U3CIsPrivateU3Ek__BackingField_4() const { return ___U3CIsPrivateU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsPrivateU3Ek__BackingField_4() { return &___U3CIsPrivateU3Ek__BackingField_4; }
	inline void set_U3CIsPrivateU3Ek__BackingField_4(bool value)
	{
		___U3CIsPrivateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CLastMsgIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___U3CLastMsgIdU3Ek__BackingField_5)); }
	inline int32_t get_U3CLastMsgIdU3Ek__BackingField_5() const { return ___U3CLastMsgIdU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CLastMsgIdU3Ek__BackingField_5() { return &___U3CLastMsgIdU3Ek__BackingField_5; }
	inline void set_U3CLastMsgIdU3Ek__BackingField_5(int32_t value)
	{
		___U3CLastMsgIdU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_properties_6() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___properties_6)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get_properties_6() const { return ___properties_6; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of_properties_6() { return &___properties_6; }
	inline void set_properties_6(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		___properties_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___properties_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPublishSubscribersU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___U3CPublishSubscribersU3Ek__BackingField_7)); }
	inline bool get_U3CPublishSubscribersU3Ek__BackingField_7() const { return ___U3CPublishSubscribersU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CPublishSubscribersU3Ek__BackingField_7() { return &___U3CPublishSubscribersU3Ek__BackingField_7; }
	inline void set_U3CPublishSubscribersU3Ek__BackingField_7(bool value)
	{
		___U3CPublishSubscribersU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CMaxSubscribersU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___U3CMaxSubscribersU3Ek__BackingField_8)); }
	inline int32_t get_U3CMaxSubscribersU3Ek__BackingField_8() const { return ___U3CMaxSubscribersU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CMaxSubscribersU3Ek__BackingField_8() { return &___U3CMaxSubscribersU3Ek__BackingField_8; }
	inline void set_U3CMaxSubscribersU3Ek__BackingField_8(int32_t value)
	{
		___U3CMaxSubscribersU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_Subscribers_9() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___Subscribers_9)); }
	inline HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * get_Subscribers_9() const { return ___Subscribers_9; }
	inline HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A ** get_address_of_Subscribers_9() { return &___Subscribers_9; }
	inline void set_Subscribers_9(HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * value)
	{
		___Subscribers_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Subscribers_9), (void*)value);
	}
};


// Photon.Chat.ChatEventCode
struct  ChatEventCode_t69355728022C08E7435EBAAB0B0CC12A186AACAE  : public RuntimeObject
{
public:

public:
};


// Photon.Chat.ChatOperationCode
struct  ChatOperationCode_t2241AAA0BE1EE7E35D7FB4020009BC538267AF45  : public RuntimeObject
{
public:

public:
};


// Photon.Chat.ChatParameterCode
struct  ChatParameterCode_t04DD519C260927DA892F3046EFC437B00339AF56  : public RuntimeObject
{
public:

public:
};


// Photon.Chat.ChatUserStatus
struct  ChatUserStatus_tBF26E11274B5B0FF5926B895F9070E056EB606D7  : public RuntimeObject
{
public:

public:
};


// Photon.Chat.ErrorCode
struct  ErrorCode_t49B1D3A0A84EAE4C66AA6E40237D6FB10E6A35E5  : public RuntimeObject
{
public:

public:
};


// Photon.Chat.ParameterCode
struct  ParameterCode_t7CAB0CED18EF18251341209C8FF74EBCB049AA91  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2_KeyCollection<System.Object,System.Object>
struct  KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_KeyCollection::dictionary
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C, ___dictionary_0)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct  Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t851C7629615836C59AA0218DF4C07294B9DB940E* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t12C53CBD993745B6F9D0320DE59CCE5F31B0982C * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tC358063283BAA6E3D43A38A9A9631D1B5E12DAA4 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2, ___entries_1)); }
	inline EntryU5BU5D_t851C7629615836C59AA0218DF4C07294B9DB940E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t851C7629615836C59AA0218DF4C07294B9DB940E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t851C7629615836C59AA0218DF4C07294B9DB940E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2, ___keys_7)); }
	inline KeyCollection_t12C53CBD993745B6F9D0320DE59CCE5F31B0982C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t12C53CBD993745B6F9D0320DE59CCE5F31B0982C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t12C53CBD993745B6F9D0320DE59CCE5F31B0982C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2, ___values_8)); }
	inline ValueCollection_tC358063283BAA6E3D43A38A9A9631D1B5E12DAA4 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tC358063283BAA6E3D43A38A9A9631D1B5E12DAA4 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tC358063283BAA6E3D43A38A9A9631D1B5E12DAA4 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct  Dictionary_2_t881E1592C6CBEA5F40CAA7EE97897DCA8DBAFB97  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t3D045724A92FA22F2C0DF0DCD806145D962A78F3* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1B3379EB2B8FA6928BD48A3E592C30C4522E1D1F * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t38426E068F66D3051C6EA4074B760026013B5F01 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t881E1592C6CBEA5F40CAA7EE97897DCA8DBAFB97, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t881E1592C6CBEA5F40CAA7EE97897DCA8DBAFB97, ___entries_1)); }
	inline EntryU5BU5D_t3D045724A92FA22F2C0DF0DCD806145D962A78F3* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t3D045724A92FA22F2C0DF0DCD806145D962A78F3** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t3D045724A92FA22F2C0DF0DCD806145D962A78F3* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t881E1592C6CBEA5F40CAA7EE97897DCA8DBAFB97, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t881E1592C6CBEA5F40CAA7EE97897DCA8DBAFB97, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t881E1592C6CBEA5F40CAA7EE97897DCA8DBAFB97, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t881E1592C6CBEA5F40CAA7EE97897DCA8DBAFB97, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t881E1592C6CBEA5F40CAA7EE97897DCA8DBAFB97, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t881E1592C6CBEA5F40CAA7EE97897DCA8DBAFB97, ___keys_7)); }
	inline KeyCollection_t1B3379EB2B8FA6928BD48A3E592C30C4522E1D1F * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1B3379EB2B8FA6928BD48A3E592C30C4522E1D1F ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1B3379EB2B8FA6928BD48A3E592C30C4522E1D1F * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t881E1592C6CBEA5F40CAA7EE97897DCA8DBAFB97, ___values_8)); }
	inline ValueCollection_t38426E068F66D3051C6EA4074B760026013B5F01 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t38426E068F66D3051C6EA4074B760026013B5F01 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t38426E068F66D3051C6EA4074B760026013B5F01 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t881E1592C6CBEA5F40CAA7EE97897DCA8DBAFB97, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct  Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE72F338533CAB40C554B7EB60D0842E51634A883* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tACF1090C1AD47AB88B96A6EC589146F41460761E * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t45171E77ABFA412BFFA2BC69FCE8561DAF9738B9 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D, ___entries_1)); }
	inline EntryU5BU5D_tE72F338533CAB40C554B7EB60D0842E51634A883* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE72F338533CAB40C554B7EB60D0842E51634A883** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE72F338533CAB40C554B7EB60D0842E51634A883* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D, ___keys_7)); }
	inline KeyCollection_tACF1090C1AD47AB88B96A6EC589146F41460761E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tACF1090C1AD47AB88B96A6EC589146F41460761E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tACF1090C1AD47AB88B96A6EC589146F41460761E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D, ___values_8)); }
	inline ValueCollection_t45171E77ABFA412BFFA2BC69FCE8561DAF9738B9 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t45171E77ABFA412BFFA2BC69FCE8561DAF9738B9 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t45171E77ABFA412BFFA2BC69FCE8561DAF9738B9 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct  Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t9EC04215E0A25794290249C0F6D7EA694596D2BE* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___entries_1)); }
	inline EntryU5BU5D_t9EC04215E0A25794290249C0F6D7EA694596D2BE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t9EC04215E0A25794290249C0F6D7EA694596D2BE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t9EC04215E0A25794290249C0F6D7EA694596D2BE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___keys_7)); }
	inline KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___values_8)); }
	inline ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>
struct  Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t688D6F3395B637D7615AD84FE6916B6154AD0485* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t00D63C22D36A9AF4F50F5D9F7B57924F448119F4 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tE9E4BE3868ED17EA425F68B7FF96522DAF7B6517 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08, ___entries_1)); }
	inline EntryU5BU5D_t688D6F3395B637D7615AD84FE6916B6154AD0485* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t688D6F3395B637D7615AD84FE6916B6154AD0485** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t688D6F3395B637D7615AD84FE6916B6154AD0485* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08, ___keys_7)); }
	inline KeyCollection_t00D63C22D36A9AF4F50F5D9F7B57924F448119F4 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t00D63C22D36A9AF4F50F5D9F7B57924F448119F4 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t00D63C22D36A9AF4F50F5D9F7B57924F448119F4 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08, ___values_8)); }
	inline ValueCollection_tE9E4BE3868ED17EA425F68B7FF96522DAF7B6517 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tE9E4BE3868ED17EA425F68B7FF96522DAF7B6517 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tE9E4BE3868ED17EA425F68B7FF96522DAF7B6517 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Object>
struct  HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t9C4FFBCC974570D24EDC1028CCD0269BE774B36C* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376, ____slots_8)); }
	inline SlotU5BU5D_t9C4FFBCC974570D24EDC1028CCD0269BE774B36C* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t9C4FFBCC974570D24EDC1028CCD0269BE774B36C** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t9C4FFBCC974570D24EDC1028CCD0269BE774B36C* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.String>
struct  HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t511054F8C1CDB4A0AF344830E4F305D372B32434* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A, ____slots_8)); }
	inline SlotU5BU5D_t511054F8C1CDB4A0AF344830E4F305D372B32434* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t511054F8C1CDB4A0AF344830E4F305D372B32434** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t511054F8C1CDB4A0AF344830E4F305D372B32434* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Diagnostics.StackTrace
struct  StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99  : public RuntimeObject
{
public:
	// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::frames
	StackFrameU5BU5D_t5075A2805A51162E94A9CF2F2881DC51B78EA80D* ___frames_1;
	// System.Diagnostics.StackTrace[] System.Diagnostics.StackTrace::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_2;
	// System.Boolean System.Diagnostics.StackTrace::debug_info
	bool ___debug_info_3;

public:
	inline static int32_t get_offset_of_frames_1() { return static_cast<int32_t>(offsetof(StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99, ___frames_1)); }
	inline StackFrameU5BU5D_t5075A2805A51162E94A9CF2F2881DC51B78EA80D* get_frames_1() const { return ___frames_1; }
	inline StackFrameU5BU5D_t5075A2805A51162E94A9CF2F2881DC51B78EA80D** get_address_of_frames_1() { return &___frames_1; }
	inline void set_frames_1(StackFrameU5BU5D_t5075A2805A51162E94A9CF2F2881DC51B78EA80D* value)
	{
		___frames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frames_1), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_2() { return static_cast<int32_t>(offsetof(StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99, ___captured_traces_2)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_2() const { return ___captured_traces_2; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_2() { return &___captured_traces_2; }
	inline void set_captured_traces_2(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_2), (void*)value);
	}

	inline static int32_t get_offset_of_debug_info_3() { return static_cast<int32_t>(offsetof(StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99, ___debug_info_3)); }
	inline bool get_debug_info_3() const { return ___debug_info_3; }
	inline bool* get_address_of_debug_info_3() { return &___debug_info_3; }
	inline void set_debug_info_3(bool value)
	{
		___debug_info_3 = value;
	}
};

struct StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99_StaticFields
{
public:
	// System.Boolean System.Diagnostics.StackTrace::isAotidSet
	bool ___isAotidSet_4;
	// System.String System.Diagnostics.StackTrace::aotid
	String_t* ___aotid_5;

public:
	inline static int32_t get_offset_of_isAotidSet_4() { return static_cast<int32_t>(offsetof(StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99_StaticFields, ___isAotidSet_4)); }
	inline bool get_isAotidSet_4() const { return ___isAotidSet_4; }
	inline bool* get_address_of_isAotidSet_4() { return &___isAotidSet_4; }
	inline void set_isAotidSet_4(bool value)
	{
		___isAotidSet_4 = value;
	}

	inline static int32_t get_offset_of_aotid_5() { return static_cast<int32_t>(offsetof(StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99_StaticFields, ___aotid_5)); }
	inline String_t* get_aotid_5() const { return ___aotid_5; }
	inline String_t** get_address_of_aotid_5() { return &___aotid_5; }
	inline void set_aotid_5(String_t* value)
	{
		___aotid_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aotid_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator<System.Object,System.Object>
struct  Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::dictionary
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::currentKey
	RuntimeObject * ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A, ___dictionary_0)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A, ___currentKey_3)); }
	inline RuntimeObject * get_currentKey_3() const { return ___currentKey_3; }
	inline RuntimeObject ** get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(RuntimeObject * value)
	{
		___currentKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentKey_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// ExitGames.Client.Photon.ConnectionProtocol
struct  ConnectionProtocol_t88D433895B07AE9EB31E0F34FC262179ACE45C3D 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionProtocol_t88D433895B07AE9EB31E0F34FC262179ACE45C3D, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.DebugLevel
struct  DebugLevel_t47E84DB42FD6F15046A870127EDABC67C73683E1 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_t47E84DB42FD6F15046A870127EDABC67C73683E1, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.DeliveryMode
struct  DeliveryMode_tDA3D83CC4BFCC8A2C640951F6AC676AAFFC24ABE 
{
public:
	// System.Int32 ExitGames.Client.Photon.DeliveryMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeliveryMode_tDA3D83CC4BFCC8A2C640951F6AC676AAFFC24ABE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.PeerStateValue
struct  PeerStateValue_t6629D00E672311CA05626AD8D5A197AB5A899E86 
{
public:
	// System.Byte ExitGames.Client.Photon.PeerStateValue::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PeerStateValue_t6629D00E672311CA05626AD8D5A197AB5A899E86, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.SerializationProtocol
struct  SerializationProtocol_t1E2CCB86223CBC2FD46F7EAA30F82E6E648ACD52 
{
public:
	// System.Int32 ExitGames.Client.Photon.SerializationProtocol::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationProtocol_t1E2CCB86223CBC2FD46F7EAA30F82E6E648ACD52, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.StatusCode
struct  StatusCode_tED7998FB12D78EE1544BD45375AB619A172C69F7 
{
public:
	// System.Int32 ExitGames.Client.Photon.StatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusCode_tED7998FB12D78EE1544BD45375AB619A172C69F7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Chat.ChatDisconnectCause
struct  ChatDisconnectCause_t7A5D48272BF2799FD2450F84DE7C26D030214832 
{
public:
	// System.Int32 Photon.Chat.ChatDisconnectCause::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChatDisconnectCause_t7A5D48272BF2799FD2450F84DE7C26D030214832, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Chat.ChatState
struct  ChatState_tABA9DDB2C18934215ADACBF403DF9FD0A71D8B79 
{
public:
	// System.Int32 Photon.Chat.ChatState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChatState_tABA9DDB2C18934215ADACBF403DF9FD0A71D8B79, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Chat.CustomAuthenticationType
struct  CustomAuthenticationType_t064351BB19FC77634577630CE69F3541F420CAB8 
{
public:
	// System.Byte Photon.Chat.CustomAuthenticationType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CustomAuthenticationType_t064351BB19FC77634577630CE69F3541F420CAB8, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.ByteEnum
struct  ByteEnum_t406C975039F6312CDE58A265A6ECFD861F8C06CD 
{
public:
	// System.Byte System.ByteEnum::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ByteEnum_t406C975039F6312CDE58A265A6ECFD861F8C06CD, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// ExitGames.Client.Photon.PhotonPeer
struct  PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CommandBufferSize>k__BackingField
	int32_t ___U3CCommandBufferSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::WarningSize
	int32_t ___WarningSize_2;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_6;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_7;
	// ExitGames.Client.Photon.SerializationProtocol ExitGames.Client.Photon.PhotonPeer::<SerializationProtocolType>k__BackingField
	int32_t ___U3CSerializationProtocolTypeU3Ek__BackingField_12;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> ExitGames.Client.Photon.PhotonPeer::SocketImplementationConfig
	Dictionary_2_t881E1592C6CBEA5F40CAA7EE97897DCA8DBAFB97 * ___SocketImplementationConfig_13;
	// System.Type ExitGames.Client.Photon.PhotonPeer::<SocketImplementation>k__BackingField
	Type_t * ___U3CSocketImplementationU3Ek__BackingField_14;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_15;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_16;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::reuseEventInstance
	bool ___reuseEventInstance_17;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendInCreationOrder
	bool ___SendInCreationOrder_18;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EnableServerTracing>k__BackingField
	bool ___U3CEnableServerTracingU3Ek__BackingField_19;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_20;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMinConnections
	int32_t ___RhttpMinConnections_21;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMaxConnections
	int32_t ___RhttpMaxConnections_22;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_23;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::EnableEncryptedFlag
	bool ___EnableEncryptedFlag_24;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_25;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_26;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::InitialResendTimeMax
	int32_t ___InitialResendTimeMax_27;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_28;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::DisconnectTimeout
	int32_t ___DisconnectTimeout_29;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_30;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_32;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_33;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RandomizeSequenceNumbers
	bool ___RandomizeSequenceNumbers_35;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::RandomizedSequenceNumbers
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___RandomizedSequenceNumbers_36;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_t86E7C80E28C6EF31A0E8BF4FA3E4DE08BA9C3ADE * ___U3CTrafficStatsIncomingU3Ek__BackingField_37;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_t86E7C80E28C6EF31A0E8BF4FA3E4DE08BA9C3ADE * ___U3CTrafficStatsOutgoingU3Ek__BackingField_38;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_t29DE7F7920F887647D954E9F9C5FC3CE279F75A5 * ___U3CTrafficStatsGameLevelU3Ek__BackingField_39;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * ___trafficStatsStopwatch_40;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_41;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_tDADE3B676A1316B29AB3DE8F6119AB0075C4D49C * ___peerBase_42;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	RuntimeObject * ___SendOutgoingLockObject_43;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	RuntimeObject * ___DispatchLockObject_44;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	RuntimeObject * ___EnqueueLock_45;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___PayloadEncryptionSecret_46;
	// System.Type ExitGames.Client.Photon.PhotonPeer::encryptorType
	Type_t * ___encryptorType_47;
	// ExitGames.Client.Photon.Encryption.IPhotonEncryptor ExitGames.Client.Photon.PhotonPeer::Encryptor
	RuntimeObject* ___Encryptor_48;

public:
	inline static int32_t get_offset_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___U3CCommandBufferSizeU3Ek__BackingField_0)); }
	inline int32_t get_U3CCommandBufferSizeU3Ek__BackingField_0() const { return ___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return &___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline void set_U3CCommandBufferSizeU3Ek__BackingField_0(int32_t value)
	{
		___U3CCommandBufferSizeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1)); }
	inline int32_t get_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() const { return ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return &___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline void set_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1(int32_t value)
	{
		___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_WarningSize_2() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___WarningSize_2)); }
	inline int32_t get_WarningSize_2() const { return ___WarningSize_2; }
	inline int32_t* get_address_of_WarningSize_2() { return &___WarningSize_2; }
	inline void set_WarningSize_2(int32_t value)
	{
		___WarningSize_2 = value;
	}

	inline static int32_t get_offset_of_ClientSdkId_6() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___ClientSdkId_6)); }
	inline uint8_t get_ClientSdkId_6() const { return ___ClientSdkId_6; }
	inline uint8_t* get_address_of_ClientSdkId_6() { return &___ClientSdkId_6; }
	inline void set_ClientSdkId_6(uint8_t value)
	{
		___ClientSdkId_6 = value;
	}

	inline static int32_t get_offset_of_clientVersion_7() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___clientVersion_7)); }
	inline String_t* get_clientVersion_7() const { return ___clientVersion_7; }
	inline String_t** get_address_of_clientVersion_7() { return &___clientVersion_7; }
	inline void set_clientVersion_7(String_t* value)
	{
		___clientVersion_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientVersion_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSerializationProtocolTypeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___U3CSerializationProtocolTypeU3Ek__BackingField_12)); }
	inline int32_t get_U3CSerializationProtocolTypeU3Ek__BackingField_12() const { return ___U3CSerializationProtocolTypeU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CSerializationProtocolTypeU3Ek__BackingField_12() { return &___U3CSerializationProtocolTypeU3Ek__BackingField_12; }
	inline void set_U3CSerializationProtocolTypeU3Ek__BackingField_12(int32_t value)
	{
		___U3CSerializationProtocolTypeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_SocketImplementationConfig_13() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___SocketImplementationConfig_13)); }
	inline Dictionary_2_t881E1592C6CBEA5F40CAA7EE97897DCA8DBAFB97 * get_SocketImplementationConfig_13() const { return ___SocketImplementationConfig_13; }
	inline Dictionary_2_t881E1592C6CBEA5F40CAA7EE97897DCA8DBAFB97 ** get_address_of_SocketImplementationConfig_13() { return &___SocketImplementationConfig_13; }
	inline void set_SocketImplementationConfig_13(Dictionary_2_t881E1592C6CBEA5F40CAA7EE97897DCA8DBAFB97 * value)
	{
		___SocketImplementationConfig_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SocketImplementationConfig_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSocketImplementationU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___U3CSocketImplementationU3Ek__BackingField_14)); }
	inline Type_t * get_U3CSocketImplementationU3Ek__BackingField_14() const { return ___U3CSocketImplementationU3Ek__BackingField_14; }
	inline Type_t ** get_address_of_U3CSocketImplementationU3Ek__BackingField_14() { return &___U3CSocketImplementationU3Ek__BackingField_14; }
	inline void set_U3CSocketImplementationU3Ek__BackingField_14(Type_t * value)
	{
		___U3CSocketImplementationU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSocketImplementationU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_DebugOut_15() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___DebugOut_15)); }
	inline uint8_t get_DebugOut_15() const { return ___DebugOut_15; }
	inline uint8_t* get_address_of_DebugOut_15() { return &___DebugOut_15; }
	inline void set_DebugOut_15(uint8_t value)
	{
		___DebugOut_15 = value;
	}

	inline static int32_t get_offset_of_U3CListenerU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___U3CListenerU3Ek__BackingField_16)); }
	inline RuntimeObject* get_U3CListenerU3Ek__BackingField_16() const { return ___U3CListenerU3Ek__BackingField_16; }
	inline RuntimeObject** get_address_of_U3CListenerU3Ek__BackingField_16() { return &___U3CListenerU3Ek__BackingField_16; }
	inline void set_U3CListenerU3Ek__BackingField_16(RuntimeObject* value)
	{
		___U3CListenerU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CListenerU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_reuseEventInstance_17() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___reuseEventInstance_17)); }
	inline bool get_reuseEventInstance_17() const { return ___reuseEventInstance_17; }
	inline bool* get_address_of_reuseEventInstance_17() { return &___reuseEventInstance_17; }
	inline void set_reuseEventInstance_17(bool value)
	{
		___reuseEventInstance_17 = value;
	}

	inline static int32_t get_offset_of_SendInCreationOrder_18() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___SendInCreationOrder_18)); }
	inline bool get_SendInCreationOrder_18() const { return ___SendInCreationOrder_18; }
	inline bool* get_address_of_SendInCreationOrder_18() { return &___SendInCreationOrder_18; }
	inline void set_SendInCreationOrder_18(bool value)
	{
		___SendInCreationOrder_18 = value;
	}

	inline static int32_t get_offset_of_U3CEnableServerTracingU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___U3CEnableServerTracingU3Ek__BackingField_19)); }
	inline bool get_U3CEnableServerTracingU3Ek__BackingField_19() const { return ___U3CEnableServerTracingU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CEnableServerTracingU3Ek__BackingField_19() { return &___U3CEnableServerTracingU3Ek__BackingField_19; }
	inline void set_U3CEnableServerTracingU3Ek__BackingField_19(bool value)
	{
		___U3CEnableServerTracingU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_quickResendAttempts_20() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___quickResendAttempts_20)); }
	inline uint8_t get_quickResendAttempts_20() const { return ___quickResendAttempts_20; }
	inline uint8_t* get_address_of_quickResendAttempts_20() { return &___quickResendAttempts_20; }
	inline void set_quickResendAttempts_20(uint8_t value)
	{
		___quickResendAttempts_20 = value;
	}

	inline static int32_t get_offset_of_RhttpMinConnections_21() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___RhttpMinConnections_21)); }
	inline int32_t get_RhttpMinConnections_21() const { return ___RhttpMinConnections_21; }
	inline int32_t* get_address_of_RhttpMinConnections_21() { return &___RhttpMinConnections_21; }
	inline void set_RhttpMinConnections_21(int32_t value)
	{
		___RhttpMinConnections_21 = value;
	}

	inline static int32_t get_offset_of_RhttpMaxConnections_22() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___RhttpMaxConnections_22)); }
	inline int32_t get_RhttpMaxConnections_22() const { return ___RhttpMaxConnections_22; }
	inline int32_t* get_address_of_RhttpMaxConnections_22() { return &___RhttpMaxConnections_22; }
	inline void set_RhttpMaxConnections_22(int32_t value)
	{
		___RhttpMaxConnections_22 = value;
	}

	inline static int32_t get_offset_of_ChannelCount_23() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___ChannelCount_23)); }
	inline uint8_t get_ChannelCount_23() const { return ___ChannelCount_23; }
	inline uint8_t* get_address_of_ChannelCount_23() { return &___ChannelCount_23; }
	inline void set_ChannelCount_23(uint8_t value)
	{
		___ChannelCount_23 = value;
	}

	inline static int32_t get_offset_of_EnableEncryptedFlag_24() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___EnableEncryptedFlag_24)); }
	inline bool get_EnableEncryptedFlag_24() const { return ___EnableEncryptedFlag_24; }
	inline bool* get_address_of_EnableEncryptedFlag_24() { return &___EnableEncryptedFlag_24; }
	inline void set_EnableEncryptedFlag_24(bool value)
	{
		___EnableEncryptedFlag_24 = value;
	}

	inline static int32_t get_offset_of_crcEnabled_25() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___crcEnabled_25)); }
	inline bool get_crcEnabled_25() const { return ___crcEnabled_25; }
	inline bool* get_address_of_crcEnabled_25() { return &___crcEnabled_25; }
	inline void set_crcEnabled_25(bool value)
	{
		___crcEnabled_25 = value;
	}

	inline static int32_t get_offset_of_SentCountAllowance_26() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___SentCountAllowance_26)); }
	inline int32_t get_SentCountAllowance_26() const { return ___SentCountAllowance_26; }
	inline int32_t* get_address_of_SentCountAllowance_26() { return &___SentCountAllowance_26; }
	inline void set_SentCountAllowance_26(int32_t value)
	{
		___SentCountAllowance_26 = value;
	}

	inline static int32_t get_offset_of_InitialResendTimeMax_27() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___InitialResendTimeMax_27)); }
	inline int32_t get_InitialResendTimeMax_27() const { return ___InitialResendTimeMax_27; }
	inline int32_t* get_address_of_InitialResendTimeMax_27() { return &___InitialResendTimeMax_27; }
	inline void set_InitialResendTimeMax_27(int32_t value)
	{
		___InitialResendTimeMax_27 = value;
	}

	inline static int32_t get_offset_of_TimePingInterval_28() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___TimePingInterval_28)); }
	inline int32_t get_TimePingInterval_28() const { return ___TimePingInterval_28; }
	inline int32_t* get_address_of_TimePingInterval_28() { return &___TimePingInterval_28; }
	inline void set_TimePingInterval_28(int32_t value)
	{
		___TimePingInterval_28 = value;
	}

	inline static int32_t get_offset_of_DisconnectTimeout_29() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___DisconnectTimeout_29)); }
	inline int32_t get_DisconnectTimeout_29() const { return ___DisconnectTimeout_29; }
	inline int32_t* get_address_of_DisconnectTimeout_29() { return &___DisconnectTimeout_29; }
	inline void set_DisconnectTimeout_29(int32_t value)
	{
		___DisconnectTimeout_29 = value;
	}

	inline static int32_t get_offset_of_U3CTransportProtocolU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___U3CTransportProtocolU3Ek__BackingField_30)); }
	inline uint8_t get_U3CTransportProtocolU3Ek__BackingField_30() const { return ___U3CTransportProtocolU3Ek__BackingField_30; }
	inline uint8_t* get_address_of_U3CTransportProtocolU3Ek__BackingField_30() { return &___U3CTransportProtocolU3Ek__BackingField_30; }
	inline void set_U3CTransportProtocolU3Ek__BackingField_30(uint8_t value)
	{
		___U3CTransportProtocolU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_mtu_32() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___mtu_32)); }
	inline int32_t get_mtu_32() const { return ___mtu_32; }
	inline int32_t* get_address_of_mtu_32() { return &___mtu_32; }
	inline void set_mtu_32(int32_t value)
	{
		___mtu_32 = value;
	}

	inline static int32_t get_offset_of_U3CIsSendingOnlyAcksU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___U3CIsSendingOnlyAcksU3Ek__BackingField_33)); }
	inline bool get_U3CIsSendingOnlyAcksU3Ek__BackingField_33() const { return ___U3CIsSendingOnlyAcksU3Ek__BackingField_33; }
	inline bool* get_address_of_U3CIsSendingOnlyAcksU3Ek__BackingField_33() { return &___U3CIsSendingOnlyAcksU3Ek__BackingField_33; }
	inline void set_U3CIsSendingOnlyAcksU3Ek__BackingField_33(bool value)
	{
		___U3CIsSendingOnlyAcksU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_RandomizeSequenceNumbers_35() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___RandomizeSequenceNumbers_35)); }
	inline bool get_RandomizeSequenceNumbers_35() const { return ___RandomizeSequenceNumbers_35; }
	inline bool* get_address_of_RandomizeSequenceNumbers_35() { return &___RandomizeSequenceNumbers_35; }
	inline void set_RandomizeSequenceNumbers_35(bool value)
	{
		___RandomizeSequenceNumbers_35 = value;
	}

	inline static int32_t get_offset_of_RandomizedSequenceNumbers_36() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___RandomizedSequenceNumbers_36)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_RandomizedSequenceNumbers_36() const { return ___RandomizedSequenceNumbers_36; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_RandomizedSequenceNumbers_36() { return &___RandomizedSequenceNumbers_36; }
	inline void set_RandomizedSequenceNumbers_36(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___RandomizedSequenceNumbers_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomizedSequenceNumbers_36), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsIncomingU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___U3CTrafficStatsIncomingU3Ek__BackingField_37)); }
	inline TrafficStats_t86E7C80E28C6EF31A0E8BF4FA3E4DE08BA9C3ADE * get_U3CTrafficStatsIncomingU3Ek__BackingField_37() const { return ___U3CTrafficStatsIncomingU3Ek__BackingField_37; }
	inline TrafficStats_t86E7C80E28C6EF31A0E8BF4FA3E4DE08BA9C3ADE ** get_address_of_U3CTrafficStatsIncomingU3Ek__BackingField_37() { return &___U3CTrafficStatsIncomingU3Ek__BackingField_37; }
	inline void set_U3CTrafficStatsIncomingU3Ek__BackingField_37(TrafficStats_t86E7C80E28C6EF31A0E8BF4FA3E4DE08BA9C3ADE * value)
	{
		___U3CTrafficStatsIncomingU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsIncomingU3Ek__BackingField_37), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsOutgoingU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___U3CTrafficStatsOutgoingU3Ek__BackingField_38)); }
	inline TrafficStats_t86E7C80E28C6EF31A0E8BF4FA3E4DE08BA9C3ADE * get_U3CTrafficStatsOutgoingU3Ek__BackingField_38() const { return ___U3CTrafficStatsOutgoingU3Ek__BackingField_38; }
	inline TrafficStats_t86E7C80E28C6EF31A0E8BF4FA3E4DE08BA9C3ADE ** get_address_of_U3CTrafficStatsOutgoingU3Ek__BackingField_38() { return &___U3CTrafficStatsOutgoingU3Ek__BackingField_38; }
	inline void set_U3CTrafficStatsOutgoingU3Ek__BackingField_38(TrafficStats_t86E7C80E28C6EF31A0E8BF4FA3E4DE08BA9C3ADE * value)
	{
		___U3CTrafficStatsOutgoingU3Ek__BackingField_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsOutgoingU3Ek__BackingField_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsGameLevelU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___U3CTrafficStatsGameLevelU3Ek__BackingField_39)); }
	inline TrafficStatsGameLevel_t29DE7F7920F887647D954E9F9C5FC3CE279F75A5 * get_U3CTrafficStatsGameLevelU3Ek__BackingField_39() const { return ___U3CTrafficStatsGameLevelU3Ek__BackingField_39; }
	inline TrafficStatsGameLevel_t29DE7F7920F887647D954E9F9C5FC3CE279F75A5 ** get_address_of_U3CTrafficStatsGameLevelU3Ek__BackingField_39() { return &___U3CTrafficStatsGameLevelU3Ek__BackingField_39; }
	inline void set_U3CTrafficStatsGameLevelU3Ek__BackingField_39(TrafficStatsGameLevel_t29DE7F7920F887647D954E9F9C5FC3CE279F75A5 * value)
	{
		___U3CTrafficStatsGameLevelU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsGameLevelU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_trafficStatsStopwatch_40() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___trafficStatsStopwatch_40)); }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * get_trafficStatsStopwatch_40() const { return ___trafficStatsStopwatch_40; }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 ** get_address_of_trafficStatsStopwatch_40() { return &___trafficStatsStopwatch_40; }
	inline void set_trafficStatsStopwatch_40(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * value)
	{
		___trafficStatsStopwatch_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trafficStatsStopwatch_40), (void*)value);
	}

	inline static int32_t get_offset_of_trafficStatsEnabled_41() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___trafficStatsEnabled_41)); }
	inline bool get_trafficStatsEnabled_41() const { return ___trafficStatsEnabled_41; }
	inline bool* get_address_of_trafficStatsEnabled_41() { return &___trafficStatsEnabled_41; }
	inline void set_trafficStatsEnabled_41(bool value)
	{
		___trafficStatsEnabled_41 = value;
	}

	inline static int32_t get_offset_of_peerBase_42() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___peerBase_42)); }
	inline PeerBase_tDADE3B676A1316B29AB3DE8F6119AB0075C4D49C * get_peerBase_42() const { return ___peerBase_42; }
	inline PeerBase_tDADE3B676A1316B29AB3DE8F6119AB0075C4D49C ** get_address_of_peerBase_42() { return &___peerBase_42; }
	inline void set_peerBase_42(PeerBase_tDADE3B676A1316B29AB3DE8F6119AB0075C4D49C * value)
	{
		___peerBase_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peerBase_42), (void*)value);
	}

	inline static int32_t get_offset_of_SendOutgoingLockObject_43() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___SendOutgoingLockObject_43)); }
	inline RuntimeObject * get_SendOutgoingLockObject_43() const { return ___SendOutgoingLockObject_43; }
	inline RuntimeObject ** get_address_of_SendOutgoingLockObject_43() { return &___SendOutgoingLockObject_43; }
	inline void set_SendOutgoingLockObject_43(RuntimeObject * value)
	{
		___SendOutgoingLockObject_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendOutgoingLockObject_43), (void*)value);
	}

	inline static int32_t get_offset_of_DispatchLockObject_44() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___DispatchLockObject_44)); }
	inline RuntimeObject * get_DispatchLockObject_44() const { return ___DispatchLockObject_44; }
	inline RuntimeObject ** get_address_of_DispatchLockObject_44() { return &___DispatchLockObject_44; }
	inline void set_DispatchLockObject_44(RuntimeObject * value)
	{
		___DispatchLockObject_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DispatchLockObject_44), (void*)value);
	}

	inline static int32_t get_offset_of_EnqueueLock_45() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___EnqueueLock_45)); }
	inline RuntimeObject * get_EnqueueLock_45() const { return ___EnqueueLock_45; }
	inline RuntimeObject ** get_address_of_EnqueueLock_45() { return &___EnqueueLock_45; }
	inline void set_EnqueueLock_45(RuntimeObject * value)
	{
		___EnqueueLock_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnqueueLock_45), (void*)value);
	}

	inline static int32_t get_offset_of_PayloadEncryptionSecret_46() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___PayloadEncryptionSecret_46)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_PayloadEncryptionSecret_46() const { return ___PayloadEncryptionSecret_46; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_PayloadEncryptionSecret_46() { return &___PayloadEncryptionSecret_46; }
	inline void set_PayloadEncryptionSecret_46(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___PayloadEncryptionSecret_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PayloadEncryptionSecret_46), (void*)value);
	}

	inline static int32_t get_offset_of_encryptorType_47() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___encryptorType_47)); }
	inline Type_t * get_encryptorType_47() const { return ___encryptorType_47; }
	inline Type_t ** get_address_of_encryptorType_47() { return &___encryptorType_47; }
	inline void set_encryptorType_47(Type_t * value)
	{
		___encryptorType_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encryptorType_47), (void*)value);
	}

	inline static int32_t get_offset_of_Encryptor_48() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9, ___Encryptor_48)); }
	inline RuntimeObject* get_Encryptor_48() const { return ___Encryptor_48; }
	inline RuntimeObject** get_address_of_Encryptor_48() { return &___Encryptor_48; }
	inline void set_Encryptor_48(RuntimeObject* value)
	{
		___Encryptor_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Encryptor_48), (void*)value);
	}
};

struct PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9_StaticFields
{
public:
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::checkedNativeLibs
	bool ___checkedNativeLibs_8;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useSocketNative
	bool ___useSocketNative_9;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useDiffieHellmanCryptoProvider
	bool ___useDiffieHellmanCryptoProvider_10;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useEncryptorNative
	bool ___useEncryptorNative_11;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_31;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_34;

public:
	inline static int32_t get_offset_of_checkedNativeLibs_8() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9_StaticFields, ___checkedNativeLibs_8)); }
	inline bool get_checkedNativeLibs_8() const { return ___checkedNativeLibs_8; }
	inline bool* get_address_of_checkedNativeLibs_8() { return &___checkedNativeLibs_8; }
	inline void set_checkedNativeLibs_8(bool value)
	{
		___checkedNativeLibs_8 = value;
	}

	inline static int32_t get_offset_of_useSocketNative_9() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9_StaticFields, ___useSocketNative_9)); }
	inline bool get_useSocketNative_9() const { return ___useSocketNative_9; }
	inline bool* get_address_of_useSocketNative_9() { return &___useSocketNative_9; }
	inline void set_useSocketNative_9(bool value)
	{
		___useSocketNative_9 = value;
	}

	inline static int32_t get_offset_of_useDiffieHellmanCryptoProvider_10() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9_StaticFields, ___useDiffieHellmanCryptoProvider_10)); }
	inline bool get_useDiffieHellmanCryptoProvider_10() const { return ___useDiffieHellmanCryptoProvider_10; }
	inline bool* get_address_of_useDiffieHellmanCryptoProvider_10() { return &___useDiffieHellmanCryptoProvider_10; }
	inline void set_useDiffieHellmanCryptoProvider_10(bool value)
	{
		___useDiffieHellmanCryptoProvider_10 = value;
	}

	inline static int32_t get_offset_of_useEncryptorNative_11() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9_StaticFields, ___useEncryptorNative_11)); }
	inline bool get_useEncryptorNative_11() const { return ___useEncryptorNative_11; }
	inline bool* get_address_of_useEncryptorNative_11() { return &___useEncryptorNative_11; }
	inline void set_useEncryptorNative_11(bool value)
	{
		___useEncryptorNative_11 = value;
	}

	inline static int32_t get_offset_of_OutgoingStreamBufferSize_31() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9_StaticFields, ___OutgoingStreamBufferSize_31)); }
	inline int32_t get_OutgoingStreamBufferSize_31() const { return ___OutgoingStreamBufferSize_31; }
	inline int32_t* get_address_of_OutgoingStreamBufferSize_31() { return &___OutgoingStreamBufferSize_31; }
	inline void set_OutgoingStreamBufferSize_31(int32_t value)
	{
		___OutgoingStreamBufferSize_31 = value;
	}

	inline static int32_t get_offset_of_AsyncKeyExchange_34() { return static_cast<int32_t>(offsetof(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9_StaticFields, ___AsyncKeyExchange_34)); }
	inline bool get_AsyncKeyExchange_34() const { return ___AsyncKeyExchange_34; }
	inline bool* get_address_of_AsyncKeyExchange_34() { return &___AsyncKeyExchange_34; }
	inline void set_AsyncKeyExchange_34(bool value)
	{
		___AsyncKeyExchange_34 = value;
	}
};


// ExitGames.Client.Photon.SendOptions
struct  SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77 
{
public:
	// ExitGames.Client.Photon.DeliveryMode ExitGames.Client.Photon.SendOptions::DeliveryMode
	int32_t ___DeliveryMode_2;
	// System.Boolean ExitGames.Client.Photon.SendOptions::Encrypt
	bool ___Encrypt_3;
	// System.Byte ExitGames.Client.Photon.SendOptions::Channel
	uint8_t ___Channel_4;

public:
	inline static int32_t get_offset_of_DeliveryMode_2() { return static_cast<int32_t>(offsetof(SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77, ___DeliveryMode_2)); }
	inline int32_t get_DeliveryMode_2() const { return ___DeliveryMode_2; }
	inline int32_t* get_address_of_DeliveryMode_2() { return &___DeliveryMode_2; }
	inline void set_DeliveryMode_2(int32_t value)
	{
		___DeliveryMode_2 = value;
	}

	inline static int32_t get_offset_of_Encrypt_3() { return static_cast<int32_t>(offsetof(SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77, ___Encrypt_3)); }
	inline bool get_Encrypt_3() const { return ___Encrypt_3; }
	inline bool* get_address_of_Encrypt_3() { return &___Encrypt_3; }
	inline void set_Encrypt_3(bool value)
	{
		___Encrypt_3 = value;
	}

	inline static int32_t get_offset_of_Channel_4() { return static_cast<int32_t>(offsetof(SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77, ___Channel_4)); }
	inline uint8_t get_Channel_4() const { return ___Channel_4; }
	inline uint8_t* get_address_of_Channel_4() { return &___Channel_4; }
	inline void set_Channel_4(uint8_t value)
	{
		___Channel_4 = value;
	}
};

struct SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_StaticFields
{
public:
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendReliable
	SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  ___SendReliable_0;
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendUnreliable
	SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  ___SendUnreliable_1;

public:
	inline static int32_t get_offset_of_SendReliable_0() { return static_cast<int32_t>(offsetof(SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_StaticFields, ___SendReliable_0)); }
	inline SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  get_SendReliable_0() const { return ___SendReliable_0; }
	inline SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77 * get_address_of_SendReliable_0() { return &___SendReliable_0; }
	inline void set_SendReliable_0(SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  value)
	{
		___SendReliable_0 = value;
	}

	inline static int32_t get_offset_of_SendUnreliable_1() { return static_cast<int32_t>(offsetof(SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_StaticFields, ___SendUnreliable_1)); }
	inline SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  get_SendUnreliable_1() const { return ___SendUnreliable_1; }
	inline SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77 * get_address_of_SendUnreliable_1() { return &___SendUnreliable_1; }
	inline void set_SendUnreliable_1(SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  value)
	{
		___SendUnreliable_1 = value;
	}
};

// Native definition for P/Invoke marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_marshaled_pinvoke
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
};
// Native definition for COM marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_marshaled_com
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
};

// Photon.Chat.AuthenticationValues
struct  AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78  : public RuntimeObject
{
public:
	// Photon.Chat.CustomAuthenticationType Photon.Chat.AuthenticationValues::authType
	uint8_t ___authType_0;
	// System.String Photon.Chat.AuthenticationValues::<AuthGetParameters>k__BackingField
	String_t* ___U3CAuthGetParametersU3Ek__BackingField_1;
	// System.Object Photon.Chat.AuthenticationValues::<AuthPostData>k__BackingField
	RuntimeObject * ___U3CAuthPostDataU3Ek__BackingField_2;
	// System.String Photon.Chat.AuthenticationValues::<Token>k__BackingField
	String_t* ___U3CTokenU3Ek__BackingField_3;
	// System.String Photon.Chat.AuthenticationValues::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_authType_0() { return static_cast<int32_t>(offsetof(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78, ___authType_0)); }
	inline uint8_t get_authType_0() const { return ___authType_0; }
	inline uint8_t* get_address_of_authType_0() { return &___authType_0; }
	inline void set_authType_0(uint8_t value)
	{
		___authType_0 = value;
	}

	inline static int32_t get_offset_of_U3CAuthGetParametersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78, ___U3CAuthGetParametersU3Ek__BackingField_1)); }
	inline String_t* get_U3CAuthGetParametersU3Ek__BackingField_1() const { return ___U3CAuthGetParametersU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAuthGetParametersU3Ek__BackingField_1() { return &___U3CAuthGetParametersU3Ek__BackingField_1; }
	inline void set_U3CAuthGetParametersU3Ek__BackingField_1(String_t* value)
	{
		___U3CAuthGetParametersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthGetParametersU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthPostDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78, ___U3CAuthPostDataU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3CAuthPostDataU3Ek__BackingField_2() const { return ___U3CAuthPostDataU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3CAuthPostDataU3Ek__BackingField_2() { return &___U3CAuthPostDataU3Ek__BackingField_2; }
	inline void set_U3CAuthPostDataU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3CAuthPostDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthPostDataU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78, ___U3CTokenU3Ek__BackingField_3)); }
	inline String_t* get_U3CTokenU3Ek__BackingField_3() const { return ___U3CTokenU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CTokenU3Ek__BackingField_3() { return &___U3CTokenU3Ek__BackingField_3; }
	inline void set_U3CTokenU3Ek__BackingField_3(String_t* value)
	{
		___U3CTokenU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78, ___U3CUserIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_4() const { return ___U3CUserIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_4() { return &___U3CUserIdU3Ek__BackingField_4; }
	inline void set_U3CUserIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_4), (void*)value);
	}
};


// Photon.Chat.ChatAppSettings
struct  ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356  : public RuntimeObject
{
public:
	// System.String Photon.Chat.ChatAppSettings::AppId
	String_t* ___AppId_0;
	// System.String Photon.Chat.ChatAppSettings::AppVersion
	String_t* ___AppVersion_1;
	// System.String Photon.Chat.ChatAppSettings::FixedRegion
	String_t* ___FixedRegion_2;
	// System.String Photon.Chat.ChatAppSettings::Server
	String_t* ___Server_3;
	// ExitGames.Client.Photon.ConnectionProtocol Photon.Chat.ChatAppSettings::Protocol
	uint8_t ___Protocol_4;
	// ExitGames.Client.Photon.DebugLevel Photon.Chat.ChatAppSettings::NetworkLogging
	uint8_t ___NetworkLogging_5;

public:
	inline static int32_t get_offset_of_AppId_0() { return static_cast<int32_t>(offsetof(ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356, ___AppId_0)); }
	inline String_t* get_AppId_0() const { return ___AppId_0; }
	inline String_t** get_address_of_AppId_0() { return &___AppId_0; }
	inline void set_AppId_0(String_t* value)
	{
		___AppId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppId_0), (void*)value);
	}

	inline static int32_t get_offset_of_AppVersion_1() { return static_cast<int32_t>(offsetof(ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356, ___AppVersion_1)); }
	inline String_t* get_AppVersion_1() const { return ___AppVersion_1; }
	inline String_t** get_address_of_AppVersion_1() { return &___AppVersion_1; }
	inline void set_AppVersion_1(String_t* value)
	{
		___AppVersion_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppVersion_1), (void*)value);
	}

	inline static int32_t get_offset_of_FixedRegion_2() { return static_cast<int32_t>(offsetof(ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356, ___FixedRegion_2)); }
	inline String_t* get_FixedRegion_2() const { return ___FixedRegion_2; }
	inline String_t** get_address_of_FixedRegion_2() { return &___FixedRegion_2; }
	inline void set_FixedRegion_2(String_t* value)
	{
		___FixedRegion_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FixedRegion_2), (void*)value);
	}

	inline static int32_t get_offset_of_Server_3() { return static_cast<int32_t>(offsetof(ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356, ___Server_3)); }
	inline String_t* get_Server_3() const { return ___Server_3; }
	inline String_t** get_address_of_Server_3() { return &___Server_3; }
	inline void set_Server_3(String_t* value)
	{
		___Server_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Server_3), (void*)value);
	}

	inline static int32_t get_offset_of_Protocol_4() { return static_cast<int32_t>(offsetof(ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356, ___Protocol_4)); }
	inline uint8_t get_Protocol_4() const { return ___Protocol_4; }
	inline uint8_t* get_address_of_Protocol_4() { return &___Protocol_4; }
	inline void set_Protocol_4(uint8_t value)
	{
		___Protocol_4 = value;
	}

	inline static int32_t get_offset_of_NetworkLogging_5() { return static_cast<int32_t>(offsetof(ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356, ___NetworkLogging_5)); }
	inline uint8_t get_NetworkLogging_5() const { return ___NetworkLogging_5; }
	inline uint8_t* get_address_of_NetworkLogging_5() { return &___NetworkLogging_5; }
	inline void set_NetworkLogging_5(uint8_t value)
	{
		___NetworkLogging_5 = value;
	}
};


// Photon.Chat.ChatClient
struct  ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505  : public RuntimeObject
{
public:
	// System.String Photon.Chat.ChatClient::<NameServerAddress>k__BackingField
	String_t* ___U3CNameServerAddressU3Ek__BackingField_2;
	// System.String Photon.Chat.ChatClient::<FrontendAddress>k__BackingField
	String_t* ___U3CFrontendAddressU3Ek__BackingField_3;
	// System.String Photon.Chat.ChatClient::chatRegion
	String_t* ___chatRegion_4;
	// Photon.Chat.ChatState Photon.Chat.ChatClient::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_5;
	// Photon.Chat.ChatDisconnectCause Photon.Chat.ChatClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_6;
	// System.String Photon.Chat.ChatClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_7;
	// System.String Photon.Chat.ChatClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_8;
	// Photon.Chat.AuthenticationValues Photon.Chat.ChatClient::<AuthValues>k__BackingField
	AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___U3CAuthValuesU3Ek__BackingField_9;
	// System.Int32 Photon.Chat.ChatClient::MessageLimit
	int32_t ___MessageLimit_10;
	// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel> Photon.Chat.ChatClient::PublicChannels
	Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * ___PublicChannels_11;
	// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel> Photon.Chat.ChatClient::PrivateChannels
	Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * ___PrivateChannels_12;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Chat.ChatClient::PublicChannelsUnsubscribing
	HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * ___PublicChannelsUnsubscribing_13;
	// Photon.Chat.IChatClientListener Photon.Chat.ChatClient::listener
	RuntimeObject* ___listener_14;
	// Photon.Chat.ChatPeer Photon.Chat.ChatClient::chatPeer
	ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * ___chatPeer_15;
	// System.Boolean Photon.Chat.ChatClient::didAuthenticate
	bool ___didAuthenticate_17;
	// System.Nullable`1<System.Int32> Photon.Chat.ChatClient::statusToSetWhenConnected
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___statusToSetWhenConnected_18;
	// System.Object Photon.Chat.ChatClient::messageToSetWhenConnected
	RuntimeObject * ___messageToSetWhenConnected_19;
	// System.Int32 Photon.Chat.ChatClient::msDeltaForServiceCalls
	int32_t ___msDeltaForServiceCalls_20;
	// System.Int32 Photon.Chat.ChatClient::msTimestampOfLastServiceCall
	int32_t ___msTimestampOfLastServiceCall_21;
	// System.Boolean Photon.Chat.ChatClient::<UseBackgroundWorkerForSending>k__BackingField
	bool ___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CNameServerAddressU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CNameServerAddressU3Ek__BackingField_2)); }
	inline String_t* get_U3CNameServerAddressU3Ek__BackingField_2() const { return ___U3CNameServerAddressU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CNameServerAddressU3Ek__BackingField_2() { return &___U3CNameServerAddressU3Ek__BackingField_2; }
	inline void set_U3CNameServerAddressU3Ek__BackingField_2(String_t* value)
	{
		___U3CNameServerAddressU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameServerAddressU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFrontendAddressU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CFrontendAddressU3Ek__BackingField_3)); }
	inline String_t* get_U3CFrontendAddressU3Ek__BackingField_3() const { return ___U3CFrontendAddressU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CFrontendAddressU3Ek__BackingField_3() { return &___U3CFrontendAddressU3Ek__BackingField_3; }
	inline void set_U3CFrontendAddressU3Ek__BackingField_3(String_t* value)
	{
		___U3CFrontendAddressU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFrontendAddressU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_chatRegion_4() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___chatRegion_4)); }
	inline String_t* get_chatRegion_4() const { return ___chatRegion_4; }
	inline String_t** get_address_of_chatRegion_4() { return &___chatRegion_4; }
	inline void set_chatRegion_4(String_t* value)
	{
		___chatRegion_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chatRegion_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CStateU3Ek__BackingField_5)); }
	inline int32_t get_U3CStateU3Ek__BackingField_5() const { return ___U3CStateU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_5() { return &___U3CStateU3Ek__BackingField_5; }
	inline void set_U3CStateU3Ek__BackingField_5(int32_t value)
	{
		___U3CStateU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CDisconnectedCauseU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CDisconnectedCauseU3Ek__BackingField_6)); }
	inline int32_t get_U3CDisconnectedCauseU3Ek__BackingField_6() const { return ___U3CDisconnectedCauseU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CDisconnectedCauseU3Ek__BackingField_6() { return &___U3CDisconnectedCauseU3Ek__BackingField_6; }
	inline void set_U3CDisconnectedCauseU3Ek__BackingField_6(int32_t value)
	{
		___U3CDisconnectedCauseU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CAppVersionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CAppVersionU3Ek__BackingField_7)); }
	inline String_t* get_U3CAppVersionU3Ek__BackingField_7() const { return ___U3CAppVersionU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CAppVersionU3Ek__BackingField_7() { return &___U3CAppVersionU3Ek__BackingField_7; }
	inline void set_U3CAppVersionU3Ek__BackingField_7(String_t* value)
	{
		___U3CAppVersionU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppVersionU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CAppIdU3Ek__BackingField_8)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_8() const { return ___U3CAppIdU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_8() { return &___U3CAppIdU3Ek__BackingField_8; }
	inline void set_U3CAppIdU3Ek__BackingField_8(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppIdU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthValuesU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CAuthValuesU3Ek__BackingField_9)); }
	inline AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * get_U3CAuthValuesU3Ek__BackingField_9() const { return ___U3CAuthValuesU3Ek__BackingField_9; }
	inline AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 ** get_address_of_U3CAuthValuesU3Ek__BackingField_9() { return &___U3CAuthValuesU3Ek__BackingField_9; }
	inline void set_U3CAuthValuesU3Ek__BackingField_9(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * value)
	{
		___U3CAuthValuesU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthValuesU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_MessageLimit_10() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___MessageLimit_10)); }
	inline int32_t get_MessageLimit_10() const { return ___MessageLimit_10; }
	inline int32_t* get_address_of_MessageLimit_10() { return &___MessageLimit_10; }
	inline void set_MessageLimit_10(int32_t value)
	{
		___MessageLimit_10 = value;
	}

	inline static int32_t get_offset_of_PublicChannels_11() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___PublicChannels_11)); }
	inline Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * get_PublicChannels_11() const { return ___PublicChannels_11; }
	inline Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 ** get_address_of_PublicChannels_11() { return &___PublicChannels_11; }
	inline void set_PublicChannels_11(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * value)
	{
		___PublicChannels_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PublicChannels_11), (void*)value);
	}

	inline static int32_t get_offset_of_PrivateChannels_12() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___PrivateChannels_12)); }
	inline Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * get_PrivateChannels_12() const { return ___PrivateChannels_12; }
	inline Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 ** get_address_of_PrivateChannels_12() { return &___PrivateChannels_12; }
	inline void set_PrivateChannels_12(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * value)
	{
		___PrivateChannels_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PrivateChannels_12), (void*)value);
	}

	inline static int32_t get_offset_of_PublicChannelsUnsubscribing_13() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___PublicChannelsUnsubscribing_13)); }
	inline HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * get_PublicChannelsUnsubscribing_13() const { return ___PublicChannelsUnsubscribing_13; }
	inline HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A ** get_address_of_PublicChannelsUnsubscribing_13() { return &___PublicChannelsUnsubscribing_13; }
	inline void set_PublicChannelsUnsubscribing_13(HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * value)
	{
		___PublicChannelsUnsubscribing_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PublicChannelsUnsubscribing_13), (void*)value);
	}

	inline static int32_t get_offset_of_listener_14() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___listener_14)); }
	inline RuntimeObject* get_listener_14() const { return ___listener_14; }
	inline RuntimeObject** get_address_of_listener_14() { return &___listener_14; }
	inline void set_listener_14(RuntimeObject* value)
	{
		___listener_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_14), (void*)value);
	}

	inline static int32_t get_offset_of_chatPeer_15() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___chatPeer_15)); }
	inline ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * get_chatPeer_15() const { return ___chatPeer_15; }
	inline ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 ** get_address_of_chatPeer_15() { return &___chatPeer_15; }
	inline void set_chatPeer_15(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * value)
	{
		___chatPeer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chatPeer_15), (void*)value);
	}

	inline static int32_t get_offset_of_didAuthenticate_17() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___didAuthenticate_17)); }
	inline bool get_didAuthenticate_17() const { return ___didAuthenticate_17; }
	inline bool* get_address_of_didAuthenticate_17() { return &___didAuthenticate_17; }
	inline void set_didAuthenticate_17(bool value)
	{
		___didAuthenticate_17 = value;
	}

	inline static int32_t get_offset_of_statusToSetWhenConnected_18() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___statusToSetWhenConnected_18)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get_statusToSetWhenConnected_18() const { return ___statusToSetWhenConnected_18; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of_statusToSetWhenConnected_18() { return &___statusToSetWhenConnected_18; }
	inline void set_statusToSetWhenConnected_18(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		___statusToSetWhenConnected_18 = value;
	}

	inline static int32_t get_offset_of_messageToSetWhenConnected_19() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___messageToSetWhenConnected_19)); }
	inline RuntimeObject * get_messageToSetWhenConnected_19() const { return ___messageToSetWhenConnected_19; }
	inline RuntimeObject ** get_address_of_messageToSetWhenConnected_19() { return &___messageToSetWhenConnected_19; }
	inline void set_messageToSetWhenConnected_19(RuntimeObject * value)
	{
		___messageToSetWhenConnected_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageToSetWhenConnected_19), (void*)value);
	}

	inline static int32_t get_offset_of_msDeltaForServiceCalls_20() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___msDeltaForServiceCalls_20)); }
	inline int32_t get_msDeltaForServiceCalls_20() const { return ___msDeltaForServiceCalls_20; }
	inline int32_t* get_address_of_msDeltaForServiceCalls_20() { return &___msDeltaForServiceCalls_20; }
	inline void set_msDeltaForServiceCalls_20(int32_t value)
	{
		___msDeltaForServiceCalls_20 = value;
	}

	inline static int32_t get_offset_of_msTimestampOfLastServiceCall_21() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___msTimestampOfLastServiceCall_21)); }
	inline int32_t get_msTimestampOfLastServiceCall_21() const { return ___msTimestampOfLastServiceCall_21; }
	inline int32_t* get_address_of_msTimestampOfLastServiceCall_21() { return &___msTimestampOfLastServiceCall_21; }
	inline void set_msTimestampOfLastServiceCall_21(int32_t value)
	{
		___msTimestampOfLastServiceCall_21 = value;
	}

	inline static int32_t get_offset_of_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22)); }
	inline bool get_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22() const { return ___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22() { return &___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22; }
	inline void set_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22(bool value)
	{
		___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Photon.Chat.ChatPeer
struct  ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989  : public PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9
{
public:
	// System.String Photon.Chat.ChatPeer::NameServerHost
	String_t* ___NameServerHost_49;
	// System.String Photon.Chat.ChatPeer::NameServerHttp
	String_t* ___NameServerHttp_50;

public:
	inline static int32_t get_offset_of_NameServerHost_49() { return static_cast<int32_t>(offsetof(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989, ___NameServerHost_49)); }
	inline String_t* get_NameServerHost_49() const { return ___NameServerHost_49; }
	inline String_t** get_address_of_NameServerHost_49() { return &___NameServerHost_49; }
	inline void set_NameServerHost_49(String_t* value)
	{
		___NameServerHost_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameServerHost_49), (void*)value);
	}

	inline static int32_t get_offset_of_NameServerHttp_50() { return static_cast<int32_t>(offsetof(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989, ___NameServerHttp_50)); }
	inline String_t* get_NameServerHttp_50() const { return ___NameServerHttp_50; }
	inline String_t** get_address_of_NameServerHttp_50() { return &___NameServerHttp_50; }
	inline void set_NameServerHttp_50(String_t* value)
	{
		___NameServerHttp_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameServerHttp_50), (void*)value);
	}
};

struct ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Chat.ChatPeer::ProtocolToNameServerPort
	Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2 * ___ProtocolToNameServerPort_51;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_51() { return static_cast<int32_t>(offsetof(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_StaticFields, ___ProtocolToNameServerPort_51)); }
	inline Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2 * get_ProtocolToNameServerPort_51() const { return ___ProtocolToNameServerPort_51; }
	inline Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2 ** get_address_of_ProtocolToNameServerPort_51() { return &___ProtocolToNameServerPort_51; }
	inline void set_ProtocolToNameServerPort_51(Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2 * value)
	{
		___ProtocolToNameServerPort_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProtocolToNameServerPort_51), (void*)value);
	}
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.Func`1<System.Boolean>
struct  Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m84BE641CF1EEEED5502AF42082957B2B9C6299D6_gshared (HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m89425146ABCF46BE030B6C4B3C85A8559550F983_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2895EBB13AA7D9232058658A7DC404DC5F608923_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * Dictionary_2_get_Keys_m079EE5437EE7D904E9E3F798041C1108B96B3AC3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A  KeyCollection_GetEnumerator_m21B2730A60B5301394D09D8DF9ACD9790BF8D20D_gshared (KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mA33B69480FC6CDC8EA0466828EEE8874DE604441_gshared_inline (Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB668588F2E9A318DF3632BB857303D20498ECC88_gshared (Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m5D6053937D6CD09077A90EB5594628CC48582A58_gshared (Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m7ECB323A0EE88B43F0CCCF402D23CCFE74624F25_gshared (HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mA3EE2556C2371D5FC1CFDA1A2E7CD0D8916B8A54_gshared (HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m388A2F05FCB0FA0E03CFC7FB5F3A8DF69B2D4D5A_gshared (HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m36F8615CDD8E019D5C4E92D96E275F7A8836B86F_gshared (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA38BDB6209548343F5C21CA8CCEF000923157407_gshared (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833_gshared (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mBD74E977A1200B92E98F968B5774094135AE2316_gshared (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3_gshared (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * __this, uint8_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m8B39ED539B994181791D0F9DBD399F7A90AF5841_gshared (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * __this, uint8_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mA1E587283866EDD98B904820A2A5A092D821977C_gshared (HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m6A2F931BE7FC2BF939795D60C2CA914922E21BA2_gshared (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * __this, uint8_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m3199849B2D9664DC8C8F48BC9962FAE119ED2BCA_gshared_inline (HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mEB09A437606B0D2679971F0EEE253752EB5230EF_gshared (Dictionary_2_tD29115181D231667A982B4C7ACA4835FFAD400ED * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mC7508A337DF9C700BD3A57266584F22AC03B4E4A_gshared (Dictionary_2_tA8D3E016EE46BB1BC90748D0B3AE8D8BDBA254D5 * __this, uint8_t ___key0, int32_t* ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAAB5CE555F17A67FEBFAB5FF6796401D8574528F_gshared (Dictionary_2_tA8D3E016EE46BB1BC90748D0B3AE8D8BDBA254D5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mD4E28DBE06769DA74C800555DF594B56D2EE36B9_gshared (Dictionary_2_tA8D3E016EE46BB1BC90748D0B3AE8D8BDBA254D5 * __this, uint8_t ___key0, int32_t ___value1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_UserId(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AuthenticationValues_set_UserId_m0AC47E89E8BE94FE1064DE78AE429D1E1EB91635_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_AuthPostData(System.Object)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthPostData_m381FEAC96254605D8E112DD0EB1224EC475EB060_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.String Photon.Chat.AuthenticationValues::get_AuthGetParameters()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_AuthGetParameters_m6B5BC331948DA520006B0C726E47F6C3B1B41B84_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method);
// System.String System.Uri::EscapeDataString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_EscapeDataString_mE1095E7A694DF447B699676C651F5EA5D98A2925 (String_t* ___stringToEscape0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_AuthGetParameters(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthGetParameters_m65F83CD3189C8D6268E6102D8ED41AF39FEAC13B_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Photon.Chat.AuthenticationValues::get_UserId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_mD7E073BD28C39609097CC717B5F781DAA57AC6C3_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method);
// System.String Photon.Chat.AuthenticationValues::get_Token()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_Token_m89FD3AA2832F91FBB17EBDA5454420CD11FFF72A_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void Photon.Chat.ChannelCreationOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelCreationOptions__ctor_mBF95992786D1F113ACB638C0FA65CD3BD56E7A84 (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
inline int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3 (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_mD07425BBACDADAC32A4B42FDE00C5DAAEC59880D (HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A *, const RuntimeMethod*))HashSet_1__ctor_m84BE641CF1EEEED5502AF42082957B2B9C6299D6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mA348FA1140766465189459D25B01EB179001DE83 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138 (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void Photon.Chat.ChatChannel::set_LastMsgId(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatChannel_set_LastMsgId_mA8016BAF3931D9A4592C48F739EDA31385ADA5B9_inline (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::TruncateMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_TruncateMessages_m3FA2436DD4AD365AAA2974E96609805A0CD17F79 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mD612A98620C52EC0C487AC2607D13BFE5883DF3C (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984 (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m88DAB47C8CD8CB4C432BFB6252AFAF8423E9DCB1 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m89425146ABCF46BE030B6C4B3C85A8559550F983_gshared)(__this, ___index0, ___count1, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m89425146ABCF46BE030B6C4B3C85A8559550F983 (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m89425146ABCF46BE030B6C4B3C85A8559550F983_gshared)(__this, ___index0, ___count1, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_mB886C990CD1F0558809236CF1D28C977A3558306 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
inline void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_inline (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
inline RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendLine_mA2F79A5F2CAA91B9F7917C0EB2B381357A395609 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
inline int32_t Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, const RuntimeMethod*))Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m2895EBB13AA7D9232058658A7DC404DC5F608923 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m2895EBB13AA7D9232058658A7DC404DC5F608923_gshared)(__this, ___capacity0, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
inline KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * Dictionary_2_get_Keys_m079EE5437EE7D904E9E3F798041C1108B96B3AC3 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, const RuntimeMethod*))Dictionary_2_get_Keys_m079EE5437EE7D904E9E3F798041C1108B96B3AC3_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
inline Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A  KeyCollection_GetEnumerator_m21B2730A60B5301394D09D8DF9ACD9790BF8D20D (KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A  (*) (KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C *, const RuntimeMethod*))KeyCollection_GetEnumerator_m21B2730A60B5301394D09D8DF9ACD9790BF8D20D_gshared)(__this, method);
}
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_mA33B69480FC6CDC8EA0466828EEE8874DE604441_inline (Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A *, const RuntimeMethod*))Enumerator_get_Current_mA33B69480FC6CDC8EA0466828EEE8874DE604441_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
inline bool Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mB668588F2E9A318DF3632BB857303D20498ECC88 (Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A *, const RuntimeMethod*))Enumerator_MoveNext_mB668588F2E9A318DF3632BB857303D20498ECC88_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
inline void Enumerator_Dispose_m5D6053937D6CD09077A90EB5594628CC48582A58 (Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A *, const RuntimeMethod*))Enumerator_Dispose_m5D6053937D6CD09077A90EB5594628CC48582A58_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject *, RuntimeObject **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Photon.Chat.ChatChannel::set_PublishSubscribers(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatChannel_set_PublishSubscribers_m3B96679B4F495C5A34F6508E1B782A03025FF0A8_inline (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::set_MaxSubscribers(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatChannel_set_MaxSubscribers_mBB18A6C1987D39B790FFEC3510EEDDA9A47792EF_inline (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(!0)
inline bool HashSet_1_Add_mD0E40F9E35B3EEAED652C38D1784046EAD4057E1 (HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A *, String_t*, const RuntimeMethod*))HashSet_1_Add_m7ECB323A0EE88B43F0CCCF402D23CCFE74624F25_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
inline void Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, const RuntimeMethod*))Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4_gshared)(__this, method);
}
// Photon.Chat.ChatState Photon.Chat.ChatClient::get_State()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::get_HasPeer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_get_HasPeer_m335AFAE782A5B27BE49B4F9CEE5FEAD05B64D503 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::get_CanChat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_get_CanChat_m3086DAF93E4DBD19201B0583671C3A6391803B0C (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m19B67631E3168539C3430F820AF289EC84A92C71 (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(!0)
inline bool HashSet_1_Contains_m87AD3D6A936FABDA8CFECAD1C37AF4A2426C2913 (HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A *, String_t*, const RuntimeMethod*))HashSet_1_Contains_mA3EE2556C2371D5FC1CFDA1A2E7CD0D8916B8A54_gshared)(__this, ___item0, method);
}
// Photon.Chat.AuthenticationValues Photon.Chat.ChatClient::get_AuthValues()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues__ctor_m0353B82A64DB8EB949ADBC7FB540F2CBA82766C7 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_AuthValues(Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_AuthValues_m2BB4034D2C3AB2622E67F1E9166E8485957E8BC2_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___value0, const RuntimeMethod* method);
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::get_TransportProtocol()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t PhotonPeer_get_TransportProtocol_m42215E2D4E23E475F9D83429F264AF2D60CE58F5_inline (PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.PeerStateValue ExitGames.Client.Photon.PhotonPeer::get_PeerState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PhotonPeer_get_PeerState_mAD6503E3F6464FEFD6DDD8736A04B2A7F3B04A82 (PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TransportProtocol(ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PhotonPeer_set_TransportProtocol_mE069BC52388CE1326BCE1975071CE4448A474B96_inline (PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_State(Photon.Chat.ChatState)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_State_mED11489E9F367AE8FB9B8E33271AF7B22DEB51B6_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPeer__ctor_m2DB07AE0969784CB00C97F73685AFE3C12FAFAC4 (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, RuntimeObject* ___listener0, uint8_t ___protocol1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::set_SerializationProtocolType(ExitGames.Client.Photon.SerializationProtocol)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PhotonPeer_set_SerializationProtocolType_m9141765EA0AA102D96F41A345D48111E0B5408B9_inline (PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::.ctor()
inline void Dictionary_2__ctor_m3775E46AA1C9BD07056DD5C102B6CD501A7C85D9 (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void Photon.Chat.ChatClient::set_ChatRegion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_ChatRegion_m7289821CA746E71FDFFD006B04AFB4B176EC322D (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_DebugOut(ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_DebugOut_mD27F2FE4EC99FE154039ED49B9D9DE2DC4609AB6 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_TransportProtocol(ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_TransportProtocol_m8689C7316F6E1B44C6E395328A28F5421A00FBDA (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatAppSettings::get_IsDefaultNameServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatAppSettings_get_IsDefaultNameServer_m603ADB9A24CB7CEE5DD0901AB5D3352A3E9A847B (ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::Connect(System.String,System.String,Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Connect_m3954C8A1F05DF95D8AC83F7186A1D95FDFBA70F5 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___authValues2, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_DisconnectedCause(Photon.Chat.ChatDisconnectCause)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_DisconnectedCause_m89F55BFCB40ABDFDCC31601DDF22E6B7AD75D3EE_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_AppId(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_AppId_mE95E1ABE8A25C1A6E81B0AD13B664D1252EF3B7E_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_AppVersion(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_AppVersion_m5A5E34A9C7E5988B95BE2B97B4B9E629388CDF60_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::set_QuickResendAttempts(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonPeer_set_QuickResendAttempts_mAFA68057A93CBCA88E4B6C4006EBD29CB61B97E0 (PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::Clear()
inline void Dictionary_2_Clear_m7D3BEF1BAC6367D5252C79306F6C8CCA38AD7FA5 (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 *, const RuntimeMethod*))Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.String>::Clear()
inline void HashSet_1_Clear_m90ADC6AC2A4FBFC20B0110DDBB92A66F0FAA5032 (HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A *, const RuntimeMethod*))HashSet_1_Clear_m388A2F05FCB0FA0E03CFC7FB5F3A8DF69B2D4D5A_gshared)(__this, method);
}
// System.String Photon.Chat.ChatPeer::get_NameServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatPeer_get_NameServerAddress_m1534143120EC03973CCA84F8BCE3DB5BB66FFE02 (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_NameServerAddress(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_NameServerAddress_m0C540F3B95F33ECE2ACFCFC0849CBFEB52A254CE_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatPeer::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatPeer_Connect_m94685331391079FBB93EA688CA18BD5513DE6C35 (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::get_UseBackgroundWorkerForSending()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ChatClient_get_UseBackgroundWorkerForSending_m508B1C05B2C32EFB26DF87B0733D53CF990E2C96_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m36F8615CDD8E019D5C4E92D96E275F7A8836B86F (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m36F8615CDD8E019D5C4E92D96E275F7A8836B86F_gshared)(__this, ___object0, ___method1, method);
}
// System.Byte ExitGames.Client.Photon.SupportClass::StartBackgroundCalls(System.Func`1<System.Boolean>,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SupportClass_StartBackgroundCalls_m067C1439458F31743309A83C4D2EB02CA1703D7F (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___myThread0, int32_t ___millisecondsInterval1, String_t* ___taskName2, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared)(__this, ___value0, method);
}
// System.Int32 System.Environment::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_m0A119BE4354EA90C82CC48E559588C987A79FE0C (const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m6A836D6622403D1744A00C194C485B764E2A529E (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___channels0, int32_t ___messagesFromHistory1, const RuntimeMethod* method);
// ExitGames.Client.Photon.DebugLevel Photon.Chat.ChatClient::get_DebugOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
inline void Dictionary_2__ctor_mA38BDB6209548343F5C21CA8CCEF000923157407 (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *, const RuntimeMethod*))Dictionary_2__ctor_mA38BDB6209548343F5C21CA8CCEF000923157407_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1)
inline void Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833 (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *, uint8_t, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Photon.Chat.ChatClient::SendChannelOperation(System.String[],System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendChannelOperation_mCF0D03E16706453CEE72FD38129FD6BAAF48F32B (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___channels0, uint8_t ___operation1, int32_t ___historyLength2, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::publishMessage(System.String,System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_publishMessage_mC7A0E2DEB29BE35A74DD8FB326AF7D2B92E883C1 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channelName0, RuntimeObject * ___message1, bool ___reliable2, bool ___forwardAsWebhook3, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SendOptions::set_Reliability(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOptions_set_Reliability_m2DE41348D40DD9703AB284E030692368894EA747 (SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessage_m3E44E2CEEB609A39081A7C89EEF1ACA98465B788 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___forwardAsWebhook3, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::sendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_sendPrivateMessage_mAF13FC00B8AEE6CDD87EE58E845621274943F09B (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___reliable3, bool ___forwardAsWebhook4, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mBD74E977A1200B92E98F968B5774094135AE2316 (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *, uint8_t, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mBD74E977A1200B92E98F968B5774094135AE2316_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_m9A5A283B661F7A390FF7C7E044A1C5B050D08726 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___status0, RuntimeObject * ___message1, bool ___skipMessage2, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_UserId_m8C1B174937265B43798E16BE66A0EE4664EBE372 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183 (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * __this, String_t* ___key0, ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 *, String_t*, ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// System.String Photon.Chat.ChatClient::GetPrivateChannelNameByUser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_GetPrivateChannelNameByUser_m8DD9568D4F1E6424BD27D7B3F66D2B71F78E1564 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___userName0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::TryGetChannel(System.String,System.Boolean,Photon.Chat.ChatChannel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_TryGetChannel_m5E29865E092D479AF2155CCFA14AEF6B65C77BE7 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channelName0, bool ___isPrivate1, ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** ___channel2, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleChatMessagesEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleChatMessagesEvent_m5985D85D12982CC2BE98DFAC410F27A83C96E539 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandlePrivateMessageEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandlePrivateMessageEvent_mF5FF0901611A6118801804D28B4B8A18B04F864C (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleStatusUpdate(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleStatusUpdate_m7A3E87E54FFD4A90EBB43311321051397A4DED55 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleSubscribeEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleSubscribeEvent_m6A4E1BA574DC698494D8F206DC8D2103758720C6 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleUnsubscribeEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleUnsubscribeEvent_m733D6DBDEBA8004AFA8CA4164A658F694C3A4A36 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleUserSubscribedEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleUserSubscribedEvent_m6EB9F63E36A3CCEC286A2E511CEA4FBE35056571 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleUserUnsubscribedEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleUserUnsubscribedEvent_m0F7CA88FAAF1C667CD79368C9CC9274623A15E9F (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleAuthResponse(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleAuthResponse_m149DFF8B5817172ED398B4B77489A1314254F9B4 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * ___operationResponse0, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.PhotonPeer::EstablishEncryption()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonPeer_EstablishEncryption_m76CE5CB0A665120AC8843B965C9D505D55444672 (PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::TryAuthenticateOnNameServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_TryAuthenticateOnNameServer_m33BF926F8BFB9A816B4CF4D510E7C05D8FA887D1 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::AuthenticateOnFrontEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_AuthenticateOnFrontEnd_mC3384AD28A733908C452491D57E07BF125106DD2 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::ConnectToFrontEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_ConnectToFrontEnd_m722E63C3D49C19C27434B0157D91906E934C5544 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.StackTrace::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackTrace__ctor_mCF16893B6C5EEC13841370A064CFF74E9F54E997 (StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99 * __this, bool ___fNeedFileInfo0, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PhotonPeer::get_ServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_ServerAddress_mBB7F348D12881D815323E331CCB89023E6522E01 (PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_Token(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AuthenticationValues_set_Token_m8C003146B195901AB47692F9BED186E857D7329E_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::Disconnect(Photon.Chat.ChatDisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_Disconnect_m6464E8DFF6E8A1C48DA0AD5F10CBAF8EF0EA846D (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___cause0, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_AppId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppId_m4A04DF9B4147EE862D8011D4DABF01676FA9B46E_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_AppVersion()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppVersion_m78125B682E98DF9E51EBCA68E56339F1B0DF87F2_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatPeer::AuthenticateOnNameServer(System.String,System.String,System.String,Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatPeer_AuthenticateOnNameServer_m649578307A749D73AE5BD9A12E77342635BBE59B (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, String_t* ___appId0, String_t* ___appVersion1, String_t* ___region2, AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___authValues3, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3 (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * __this, uint8_t ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *, uint8_t, const RuntimeMethod*))Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3_gshared)(__this, ___key0, method);
}
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel__ctor_m34ED969B48E31AD8CC5B757EE1BF8AA760D7C342 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::set_IsPrivate(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatChannel_set_IsPrivate_mF639F430B4D39B8E99CD0592F5378BBAF4389261_inline (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::Add(!0,!1)
inline void Dictionary_2_Add_m4AFFFA90D1EB7D3A1CD220E1EAD75C00973C64D5 (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * __this, String_t* ___key0, ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 *, String_t*, ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Photon.Chat.ChatChannel::Add(System.String,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_Add_m53FC954539B7E53D859791C395149D4D0FC1E008 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, String_t* ___sender0, RuntimeObject * ___message1, int32_t ___msgId2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::Add(System.String[],System.Object[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_Add_m8DD77CEE6F254A2E5C91FEE0A30A93DC8A6D4F05 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___senders0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___messages1, int32_t ___lastMsgId2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m8B39ED539B994181791D0F9DBD399F7A90AF5841 (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * __this, uint8_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *, uint8_t, RuntimeObject **, const RuntimeMethod*))Dictionary_2_TryGetValue_m8B39ED539B994181791D0F9DBD399F7A90AF5841_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Photon.Chat.ChatChannel::ClearProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_ClearProperties_m7999623EAE9437976EB38F9D5EB3C510FD411CAD (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::ReadProperties(System.Collections.Generic.Dictionary`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_ReadProperties_m80EB77137366A51ABAF018AACFDE3B649F84B9D5 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___newProperties0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatChannel::get_PublishSubscribers()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ChatChannel_get_PublishSubscribers_m1BEE7A689ABCEB4BAB38D314F563CD672699F5CA_inline (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::AddSubscribers(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_AddSubscribers_m636C057698F6796380DF44B449F409E269A06219 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___users0, const RuntimeMethod* method);
// System.Object ExitGames.Client.Photon.EventData::get_Item(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * EventData_get_Item_mF48FFDF3F59813E5E59A3A04A795651783D30978 (EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * __this, uint8_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::Remove(!0)
inline bool Dictionary_2_Remove_m7696A01224568B5D3C5E220A8BF743D2240A14FD (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Remove(!0)
inline bool HashSet_1_Remove_mD6EE52239731ACBFBC21335EF4D16CEE6F597F31 (HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A *, String_t*, const RuntimeMethod*))HashSet_1_Remove_mA1E587283866EDD98B904820A2A5A092D821977C_gshared)(__this, ___item0, method);
}
// System.String ExitGames.Client.Photon.OperationResponse::ToStringFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OperationResponse_ToStringFull_m16B15A498C495871A46643587A5AB33E261CD2F9 (OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m6A2F931BE7FC2BF939795D60C2CA914922E21BA2 (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * __this, uint8_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *, uint8_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m6A2F931BE7FC2BF939795D60C2CA914922E21BA2_gshared)(__this, ___key0, method);
}
// System.Object ExitGames.Client.Photon.OperationResponse::get_Item(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * OperationResponse_get_Item_m5DE0E22A3D043CEBB7096DE04D02AD0F263CE469 (OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * __this, uint8_t ___parameterCode0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_FrontendAddress(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_FrontendAddress_m07693D7264F012BF7FF2331F6773996DDEB50525_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_UserId_m18307D5CD943FA01E3569174D4D4C9CCAA9BE4C1 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_gshared)(__this, method);
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_mA768DE355902F1F4CE336618560A1F8CA97C3B5A (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___status0, RuntimeObject * ___message1, const RuntimeMethod* method);
// Photon.Chat.ChatDisconnectCause Photon.Chat.ChatClient::get_DisconnectedCause()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ChatClient_get_DisconnectedCause_m57D498FAFF15DE6D6ED299021BAD2EEE35B2EEFC_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_FrontendAddress()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ChatClient_get_FrontendAddress_mEB713B4B1C0FFD17CAA1C534ED71311219DC5FC9_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Chat.ChatChannel::get_MaxSubscribers()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ChatChannel_get_MaxSubscribers_m201435FB8253E73DCBC6AC3F3BF4E07098B4E78B_inline (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::get_Count()
inline int32_t HashSet_1_get_Count_mF3ABE8CB53339BA8AD485E3BF3C9D48898B5370A_inline (HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A *, const RuntimeMethod*))HashSet_1_get_Count_m3199849B2D9664DC8C8F48BC9962FAE119ED2BCA_gshared_inline)(__this, method);
}
// System.Int32 Photon.Chat.ChannelCreationOptions::get_MaxSubscribers()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ChannelCreationOptions_get_MaxSubscribers_m5ADB67E62EA5959B1B40B3AA29817694D732BD6A_inline (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChannelCreationOptions::get_PublishSubscribers()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ChannelCreationOptions_get_PublishSubscribers_m21ADD2DE29B58D86F4442B98515AEC8560F6435B_inline (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
inline void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.String Photon.Chat.ChatPeer::GetNameServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatPeer_GetNameServerAddress_mB1699C2550D3A1D1D4764BAD2233F74FCD281E7C (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::get_UsedProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PhotonPeer_get_UsedProtocol_mEC9186551B89986D3F4E69B0879D4B438EF939EB (PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonPeer__ctor_mB20C8325EAE88C51D67CA6DA281F2CA4EE14A2D7 (PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9 * __this, RuntimeObject* ___listener0, uint8_t ___protocolType1, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatPeer::ConfigUnitySockets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPeer_ConfigUnitySockets_mCA8E0D9097418FE87EC31C6F26DD765A1A744F5C (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetType(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetType_m8A8A6481B24551476F2AF999A970AD705BA68C7A (String_t* ___typeName0, bool ___throwOnError1);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mE92C6104FB820DF374DCF1E198DDE0F31C585500 (Dictionary_2_t881E1592C6CBEA5F40CAA7EE97897DCA8DBAFB97 * __this, uint8_t ___key0, Type_t * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t881E1592C6CBEA5F40CAA7EE97897DCA8DBAFB97 *, uint8_t, Type_t *, const RuntimeMethod*))Dictionary_2_set_Item_mEB09A437606B0D2679971F0EEE253752EB5230EF_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m453714E9ABC80ADA48D3A630DC3F1DBAE9913DEE (Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2 * __this, uint8_t ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2 *, uint8_t, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_mC7508A337DF9C700BD3A57266584F22AC03B4E4A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m215F35137EDD190A037E2E9BDA3BF5DC056FD7C3 (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::get_Listener()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* PhotonPeer_get_Listener_m92E5CDF7E18EA95E6FA89FA130DCE92ADD2413C9_inline (PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9 * __this, const RuntimeMethod* method);
// Photon.Chat.CustomAuthenticationType Photon.Chat.AuthenticationValues::get_AuthType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t AuthenticationValues_get_AuthType_mCBBF19A8A2D5B91B99EB4E1A529888E883EEB137 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method);
// System.Object Photon.Chat.AuthenticationValues::get_AuthPostData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_AuthPostData_m8728004EFCDB0D3F41D729AE30C57AAA724A300E_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsEncryptionAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonPeer_get_IsEncryptionAvailable_mAF1CA0B63AC560C23B6DBC28610459493F19E38E (PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m6EAF9A7C999732BD7C6B8668415E595968A33DF0 (Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2 *, const RuntimeMethod*))Dictionary_2__ctor_mAAB5CE555F17A67FEBFAB5FF6796401D8574528F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::Add(!0,!1)
inline void Dictionary_2_Add_m39ABF8526DE51AF36AC5830AF7E84AA902FB7A85 (Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2 * __this, uint8_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2 *, uint8_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_mD4E28DBE06769DA74C800555DF594B56D2EE36B9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Photon.Chat.CustomAuthenticationType Photon.Chat.AuthenticationValues::get_AuthType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t AuthenticationValues_get_AuthType_mCBBF19A8A2D5B91B99EB4E1A529888E883EEB137 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0;
	{
		// get { return authType; }
		uint8_t L_0 = __this->get_authType_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return authType; }
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_AuthType(Photon.Chat.CustomAuthenticationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthType_mF54F5EEA08F655FE0E308C2A67D67BDE23B5B353 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// set { authType = value; }
		uint8_t L_0 = ___value0;
		__this->set_authType_0(L_0);
		// set { authType = value; }
		return;
	}
}
// System.String Photon.Chat.AuthenticationValues::get_AuthGetParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_AuthGetParameters_m6B5BC331948DA520006B0C726E47F6C3B1B41B84 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	{
		// public string AuthGetParameters { get; set; }
		String_t* L_0 = __this->get_U3CAuthGetParametersU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_AuthGetParameters(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthGetParameters_m65F83CD3189C8D6268E6102D8ED41AF39FEAC13B (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AuthGetParameters { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAuthGetParametersU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Object Photon.Chat.AuthenticationValues::get_AuthPostData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_AuthPostData_m8728004EFCDB0D3F41D729AE30C57AAA724A300E (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	{
		// public object AuthPostData { get; private set; }
		RuntimeObject * L_0 = __this->get_U3CAuthPostDataU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_AuthPostData(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthPostData_m381FEAC96254605D8E112DD0EB1224EC475EB060 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public object AuthPostData { get; private set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CAuthPostDataU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Photon.Chat.AuthenticationValues::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_Token_m89FD3AA2832F91FBB17EBDA5454420CD11FFF72A (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	{
		// public string Token { get; set; }
		String_t* L_0 = __this->get_U3CTokenU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_Token(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_set_Token_m8C003146B195901AB47692F9BED186E857D7329E (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Token { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTokenU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Photon.Chat.AuthenticationValues::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_mD7E073BD28C39609097CC717B5F781DAA57AC6C3 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	{
		// public string UserId { get; set; }
		String_t* L_0 = __this->get_U3CUserIdU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_set_UserId_m0AC47E89E8BE94FE1064DE78AE429D1E1EB91635 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string UserId { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CUserIdU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues__ctor_m0353B82A64DB8EB949ADBC7FB540F2CBA82766C7 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	{
		// private CustomAuthenticationType authType = CustomAuthenticationType.None;
		__this->set_authType_0(((int32_t)255));
		// public AuthenticationValues()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues__ctor_mB355B96F4FBC4B9BB401A26F3EF096DE8B5424B8 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___userId0, const RuntimeMethod* method)
{
	{
		// private CustomAuthenticationType authType = CustomAuthenticationType.None;
		__this->set_authType_0(((int32_t)255));
		// public AuthenticationValues(string userId)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.UserId = userId;
		String_t* L_0 = ___userId0;
		AuthenticationValues_set_UserId_m0AC47E89E8BE94FE1064DE78AE429D1E1EB91635_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::SetAuthPostData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_SetAuthPostData_m1BC9852150349878F25D6AC19ECDA739F45C6BDC (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___stringData0, const RuntimeMethod* method)
{
	AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * G_B2_0 = NULL;
	AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * G_B3_1 = NULL;
	{
		// this.AuthPostData = (string.IsNullOrEmpty(stringData)) ? null : stringData;
		String_t* L_0 = ___stringData0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		String_t* L_2 = ___stringData0;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_000e:
	{
		NullCheck(G_B3_1);
		AuthenticationValues_set_AuthPostData_m381FEAC96254605D8E112DD0EB1224EC475EB060_inline(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::SetAuthPostData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_SetAuthPostData_m864D065CDB33FAE39B05258C895CBF3416F05A2E (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___byteData0, const RuntimeMethod* method)
{
	{
		// this.AuthPostData = byteData;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___byteData0;
		AuthenticationValues_set_AuthPostData_m381FEAC96254605D8E112DD0EB1224EC475EB060_inline(__this, (RuntimeObject *)(RuntimeObject *)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::AddAuthParameter(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_AddAuthParameter_m139C90C8BC229C6C2859F4C331BCBB2F85DFF6B9 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthenticationValues_AddAuthParameter_m139C90C8BC229C6C2859F4C331BCBB2F85DFF6B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// string ampersand = string.IsNullOrEmpty(this.AuthGetParameters) ? string.Empty : "&";
		String_t* L_0 = AuthenticationValues_get_AuthGetParameters_m6B5BC331948DA520006B0C726E47F6C3B1B41B84_inline(__this, /*hidden argument*/NULL);
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		G_B3_0 = _stringLiteral7C4D33785DAA5C2370201FFA236B427AA37C9996;
		goto IL_001a;
	}

IL_0015:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B3_0 = L_2;
	}

IL_001a:
	{
		V_0 = G_B3_0;
		// this.AuthGetParameters = string.Format("{0}{1}{2}={3}", this.AuthGetParameters, ampersand, System.Uri.EscapeDataString(key), System.Uri.EscapeDataString(value));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		String_t* L_5 = AuthenticationValues_get_AuthGetParameters_m6B5BC331948DA520006B0C726E47F6C3B1B41B84_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_4;
		String_t* L_7 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_6;
		String_t* L_9 = ___key0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var);
		String_t* L_10 = Uri_EscapeDataString_mE1095E7A694DF447B699676C651F5EA5D98A2925(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_8;
		String_t* L_12 = ___value1;
		String_t* L_13 = Uri_EscapeDataString_mE1095E7A694DF447B699676C651F5EA5D98A2925(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_13);
		String_t* L_14 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral9663A08052B2B050231926A22F7DC859D93D44FF, L_11, /*hidden argument*/NULL);
		AuthenticationValues_set_AuthGetParameters_m65F83CD3189C8D6268E6102D8ED41AF39FEAC13B_inline(__this, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Photon.Chat.AuthenticationValues::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationValues_ToString_m680E3644014EC3FA293F6907A45E60EA69CC0145 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthenticationValues_ToString_m680E3644014EC3FA293F6907A45E60EA69CC0145_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("AuthenticationValues UserId: {0}, GetParameters: {1} Token available: {2}", UserId, this.AuthGetParameters, Token != null);
		String_t* L_0 = AuthenticationValues_get_UserId_mD7E073BD28C39609097CC717B5F781DAA57AC6C3_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = AuthenticationValues_get_AuthGetParameters_m6B5BC331948DA520006B0C726E47F6C3B1B41B84_inline(__this, /*hidden argument*/NULL);
		String_t* L_2 = AuthenticationValues_get_Token_m89FD3AA2832F91FBB17EBDA5454420CD11FFF72A_inline(__this, /*hidden argument*/NULL);
		bool L_3 = ((bool)((!(((RuntimeObject*)(String_t*)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0));
		RuntimeObject * L_4 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteral17993E6AA42390896507EF1DDDB2A0E8ABD42D12, L_0, L_1, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		String_t* L_6 = V_0;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Photon.Chat.ChannelCreationOptions::get_PublishSubscribers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChannelCreationOptions_get_PublishSubscribers_m21ADD2DE29B58D86F4442B98515AEC8560F6435B (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; set; }
		bool L_0 = __this->get_U3CPublishSubscribersU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Photon.Chat.ChannelCreationOptions::set_PublishSubscribers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelCreationOptions_set_PublishSubscribers_mDAE604CDFEDD027C09DDB833E2F739C6CBC6E378 (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CPublishSubscribersU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 Photon.Chat.ChannelCreationOptions::get_MaxSubscribers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChannelCreationOptions_get_MaxSubscribers_m5ADB67E62EA5959B1B40B3AA29817694D732BD6A (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; set; }
		int32_t L_0 = __this->get_U3CMaxSubscribersU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Photon.Chat.ChannelCreationOptions::set_MaxSubscribers(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelCreationOptions_set_MaxSubscribers_m19EFDD7FFE47202FF4A21C8B1E69BF55C8F748F0 (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CMaxSubscribersU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Photon.Chat.ChannelCreationOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelCreationOptions__ctor_mBF95992786D1F113ACB638C0FA65CD3BD56E7A84 (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Chat.ChannelCreationOptions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelCreationOptions__cctor_m42D194A5B5D34EF9DD71AA10DABCA4366846A84D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChannelCreationOptions__cctor_m42D194A5B5D34EF9DD71AA10DABCA4366846A84D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ChannelCreationOptions Default = new ChannelCreationOptions();
		ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * L_0 = (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D *)il2cpp_codegen_object_new(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_il2cpp_TypeInfo_var);
		ChannelCreationOptions__ctor_mBF95992786D1F113ACB638C0FA65CD3BD56E7A84(L_0, /*hidden argument*/NULL);
		((ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_StaticFields*)il2cpp_codegen_static_fields_for(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_il2cpp_TypeInfo_var))->set_Default_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.ChannelWellKnownProperties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelWellKnownProperties__ctor_m197CE07A15E68A1204264D5DF98E5650BC62E6DC (ChannelWellKnownProperties_t885B8C39E6ADD0DADB0DAF772E2D7525AD057508 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Photon.Chat.ChatAppSettings::get_IsDefaultNameServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatAppSettings_get_IsDefaultNameServer_m603ADB9A24CB7CEE5DD0901AB5D3352A3E9A847B (ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool IsDefaultNameServer { get { return string.IsNullOrEmpty(this.Server); } }
		String_t* L_0 = __this->get_Server_3();
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public bool IsDefaultNameServer { get { return string.IsNullOrEmpty(this.Server); } }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Photon.Chat.ChatAppSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatAppSettings__ctor_m524407BB5F53BC2E2C229E8BEAE1C29A326671C4 (ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * __this, const RuntimeMethod* method)
{
	{
		// public ConnectionProtocol Protocol = ConnectionProtocol.Udp;
		__this->set_Protocol_4(0);
		// public DebugLevel NetworkLogging = DebugLevel.ERROR;
		__this->set_NetworkLogging_5(1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Photon.Chat.ChatChannel::get_IsPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatChannel_get_IsPrivate_m633BCD8499F4E7DD30105EF27E331D76C2EFD532 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsPrivate { get; protected internal set; }
		bool L_0 = __this->get_U3CIsPrivateU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatChannel::set_IsPrivate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_set_IsPrivate_mF639F430B4D39B8E99CD0592F5378BBAF4389261 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsPrivate { get; protected internal set; }
		bool L_0 = ___value0;
		__this->set_U3CIsPrivateU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 Photon.Chat.ChatChannel::get_MessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChatChannel_get_MessageCount_m9A22F494E044E317761F13C334C401912D7CCB01 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_get_MessageCount_m9A22F494E044E317761F13C334C401912D7CCB01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public int MessageCount { get { return this.Messages.Count; } }
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = __this->get_Messages_2();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_inline(L_0, /*hidden argument*/List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public int MessageCount { get { return this.Messages.Count; } }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Photon.Chat.ChatChannel::get_LastMsgId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChatChannel_get_LastMsgId_m5CFD10C550032EBBF21B2154F8DCC1D1D9BEFAEE (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	{
		// public int LastMsgId { get; protected set; }
		int32_t L_0 = __this->get_U3CLastMsgIdU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatChannel::set_LastMsgId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_set_LastMsgId_mA8016BAF3931D9A4592C48F739EDA31385ADA5B9 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int LastMsgId { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CLastMsgIdU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Boolean Photon.Chat.ChatChannel::get_PublishSubscribers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatChannel_get_PublishSubscribers_m1BEE7A689ABCEB4BAB38D314F563CD672699F5CA (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; protected set; }
		bool L_0 = __this->get_U3CPublishSubscribersU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatChannel::set_PublishSubscribers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_set_PublishSubscribers_m3B96679B4F495C5A34F6508E1B782A03025FF0A8 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CPublishSubscribersU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 Photon.Chat.ChatChannel::get_MaxSubscribers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChatChannel_get_MaxSubscribers_m201435FB8253E73DCBC6AC3F3BF4E07098B4E78B (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; protected set; }
		int32_t L_0 = __this->get_U3CMaxSubscribersU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatChannel::set_MaxSubscribers(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_set_MaxSubscribers_mBB18A6C1987D39B790FFEC3510EEDDA9A47792EF (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CMaxSubscribersU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel__ctor_m34ED969B48E31AD8CC5B757EE1BF8AA760D7C342 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel__ctor_m34ED969B48E31AD8CC5B757EE1BF8AA760D7C342_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly List<string> Senders = new List<string>();
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_0, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		__this->set_Senders_1(L_0);
		// public readonly List<object> Messages = new List<object>();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var);
		List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3(L_1, /*hidden argument*/List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_RuntimeMethod_var);
		__this->set_Messages_2(L_1);
		// public readonly HashSet<string> Subscribers = new HashSet<string>();
		HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * L_2 = (HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A *)il2cpp_codegen_object_new(HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mD07425BBACDADAC32A4B42FDE00C5DAAEC59880D(L_2, /*hidden argument*/HashSet_1__ctor_mD07425BBACDADAC32A4B42FDE00C5DAAEC59880D_RuntimeMethod_var);
		__this->set_Subscribers_9(L_2);
		// public ChatChannel(string name)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.Name = name;
		String_t* L_3 = ___name0;
		__this->set_Name_0(L_3);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::Add(System.String,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_Add_m53FC954539B7E53D859791C395149D4D0FC1E008 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, String_t* ___sender0, RuntimeObject * ___message1, int32_t ___msgId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_Add_m53FC954539B7E53D859791C395149D4D0FC1E008_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Senders.Add(sender);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = __this->get_Senders_1();
		String_t* L_1 = ___sender0;
		NullCheck(L_0);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_0, L_1, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		// this.Messages.Add(message);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = __this->get_Messages_2();
		RuntimeObject * L_3 = ___message1;
		NullCheck(L_2);
		List_1_Add_m6930161974C7504C80F52EC379EF012387D43138(L_2, L_3, /*hidden argument*/List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_RuntimeMethod_var);
		// this.LastMsgId = msgId;
		int32_t L_4 = ___msgId2;
		ChatChannel_set_LastMsgId_mA8016BAF3931D9A4592C48F739EDA31385ADA5B9_inline(__this, L_4, /*hidden argument*/NULL);
		// this.TruncateMessages();
		ChatChannel_TruncateMessages_m3FA2436DD4AD365AAA2974E96609805A0CD17F79(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::Add(System.String[],System.Object[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_Add_m8DD77CEE6F254A2E5C91FEE0A30A93DC8A6D4F05 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___senders0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___messages1, int32_t ___lastMsgId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_Add_m8DD77CEE6F254A2E5C91FEE0A30A93DC8A6D4F05_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Senders.AddRange(senders);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = __this->get_Senders_1();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = ___senders0;
		NullCheck(L_0);
		List_1_AddRange_mD612A98620C52EC0C487AC2607D13BFE5883DF3C(L_0, (RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/List_1_AddRange_mD612A98620C52EC0C487AC2607D13BFE5883DF3C_RuntimeMethod_var);
		// this.Messages.AddRange(messages);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = __this->get_Messages_2();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___messages1;
		NullCheck(L_2);
		List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984(L_2, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_RuntimeMethod_var);
		// this.LastMsgId = lastMsgId;
		int32_t L_4 = ___lastMsgId2;
		ChatChannel_set_LastMsgId_mA8016BAF3931D9A4592C48F739EDA31385ADA5B9_inline(__this, L_4, /*hidden argument*/NULL);
		// this.TruncateMessages();
		ChatChannel_TruncateMessages_m3FA2436DD4AD365AAA2974E96609805A0CD17F79(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::TruncateMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_TruncateMessages_m3FA2436DD4AD365AAA2974E96609805A0CD17F79 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_TruncateMessages_m3FA2436DD4AD365AAA2974E96609805A0CD17F79_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (this.MessageLimit <= 0 || this.Messages.Count <= this.MessageLimit)
		int32_t L_0 = __this->get_MessageLimit_3();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = __this->get_Messages_2();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_inline(L_1, /*hidden argument*/List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var);
		int32_t L_3 = __this->get_MessageLimit_3();
		G_B3_0 = ((((int32_t)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 1;
	}

IL_0023:
	{
		V_1 = (bool)G_B3_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// return;
		goto IL_0059;
	}

IL_002a:
	{
		// int excessCount = this.Messages.Count - this.MessageLimit;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = __this->get_Messages_2();
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_inline(L_5, /*hidden argument*/List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var);
		int32_t L_7 = __this->get_MessageLimit_3();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7));
		// this.Senders.RemoveRange(0, excessCount);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_8 = __this->get_Senders_1();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		List_1_RemoveRange_m88DAB47C8CD8CB4C432BFB6252AFAF8423E9DCB1(L_8, 0, L_9, /*hidden argument*/List_1_RemoveRange_m88DAB47C8CD8CB4C432BFB6252AFAF8423E9DCB1_RuntimeMethod_var);
		// this.Messages.RemoveRange(0, excessCount);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_10 = __this->get_Messages_2();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		List_1_RemoveRange_m89425146ABCF46BE030B6C4B3C85A8559550F983(L_10, 0, L_11, /*hidden argument*/List_1_RemoveRange_m89425146ABCF46BE030B6C4B3C85A8559550F983_RuntimeMethod_var);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::ClearMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_ClearMessages_m9F330C894A569614B438E1F34AA74BA6B0621A33 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_ClearMessages_m9F330C894A569614B438E1F34AA74BA6B0621A33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Senders.Clear();
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = __this->get_Senders_1();
		NullCheck(L_0);
		List_1_Clear_mB886C990CD1F0558809236CF1D28C977A3558306(L_0, /*hidden argument*/List_1_Clear_mB886C990CD1F0558809236CF1D28C977A3558306_RuntimeMethod_var);
		// this.Messages.Clear();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = __this->get_Messages_2();
		NullCheck(L_1);
		List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC(L_1, /*hidden argument*/List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.String Photon.Chat.ChatChannel::ToStringMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatChannel_ToStringMessages_m4B60A66D61FC42B5B92A4DFB4C9B927C052CAD2C (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_ToStringMessages_m4B60A66D61FC42B5B92A4DFB4C9B927C052CAD2C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		// StringBuilder txt = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// for (int i = 0; i < this.Messages.Count; i++)
		V_1 = 0;
		goto IL_003a;
	}

IL_000b:
	{
		// txt.AppendLine(string.Format("{0}: {1}", this.Senders[i], this.Messages[i]));
		StringBuilder_t * L_1 = V_0;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_2 = __this->get_Senders_1();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		String_t* L_4 = List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_RuntimeMethod_var);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = __this->get_Messages_2();
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject * L_7 = List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_RuntimeMethod_var);
		String_t* L_8 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral4D3C418A83DE54D710758569DF3FF8391356AFB7, L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_AppendLine_mA2F79A5F2CAA91B9F7917C0EB2B381357A395609(L_1, L_8, /*hidden argument*/NULL);
		// for (int i = 0; i < this.Messages.Count; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_003a:
	{
		// for (int i = 0; i < this.Messages.Count; i++)
		int32_t L_10 = V_1;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_11 = __this->get_Messages_2();
		NullCheck(L_11);
		int32_t L_12 = List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_inline(L_11, /*hidden argument*/List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_10) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_000b;
		}
	}
	{
		// return txt.ToString();
		StringBuilder_t * L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		V_3 = L_15;
		goto IL_0055;
	}

IL_0055:
	{
		// }
		String_t* L_16 = V_3;
		return L_16;
	}
}
// System.Void Photon.Chat.ChatChannel::ReadProperties(System.Collections.Generic.Dictionary`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_ReadProperties_m80EB77137366A51ABAF018AACFDE3B649F84B9D5 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___newProperties0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_ReadProperties_m80EB77137366A51ABAF018AACFDE3B649F84B9D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A  V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B3_0 = 0;
	{
		// if (newProperties != null && newProperties.Count > 0)
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_0 = ___newProperties0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_1 = ___newProperties0;
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6(L_1, /*hidden argument*/Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0115;
		}
	}
	{
		// if (this.properties == null)
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_4 = __this->get_properties_6();
		V_2 = (bool)((((RuntimeObject*)(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// this.properties = new Dictionary<object, object>(newProperties.Count);
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_6 = ___newProperties0;
		NullCheck(L_6);
		int32_t L_7 = Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6(L_6, /*hidden argument*/Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_RuntimeMethod_var);
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_8 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)il2cpp_codegen_object_new(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2895EBB13AA7D9232058658A7DC404DC5F608923(L_8, L_7, /*hidden argument*/Dictionary_2__ctor_m2895EBB13AA7D9232058658A7DC404DC5F608923_RuntimeMethod_var);
		__this->set_properties_6(L_8);
	}

IL_0038:
	{
		// foreach (var k in newProperties.Keys)
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_9 = ___newProperties0;
		NullCheck(L_9);
		KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * L_10 = Dictionary_2_get_Keys_m079EE5437EE7D904E9E3F798041C1108B96B3AC3(L_9, /*hidden argument*/Dictionary_2_get_Keys_m079EE5437EE7D904E9E3F798041C1108B96B3AC3_RuntimeMethod_var);
		NullCheck(L_10);
		Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A  L_11 = KeyCollection_GetEnumerator_m21B2730A60B5301394D09D8DF9ACD9790BF8D20D(L_10, /*hidden argument*/KeyCollection_GetEnumerator_m21B2730A60B5301394D09D8DF9ACD9790BF8D20D_RuntimeMethod_var);
		V_3 = L_11;
	}

IL_0045:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a2;
		}

IL_0047:
		{
			// foreach (var k in newProperties.Keys)
			RuntimeObject * L_12 = Enumerator_get_Current_mA33B69480FC6CDC8EA0466828EEE8874DE604441_inline((Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A *)(&V_3), /*hidden argument*/Enumerator_get_Current_mA33B69480FC6CDC8EA0466828EEE8874DE604441_RuntimeMethod_var);
			V_4 = L_12;
			// if (newProperties[k] == null)
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_13 = ___newProperties0;
			RuntimeObject * L_14 = V_4;
			NullCheck(L_13);
			RuntimeObject * L_15 = Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B(L_13, L_14, /*hidden argument*/Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_RuntimeMethod_var);
			V_5 = (bool)((((RuntimeObject*)(RuntimeObject *)L_15) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_16 = V_5;
			if (!L_16)
			{
				goto IL_0089;
			}
		}

IL_0062:
		{
			// if (this.properties.ContainsKey(k))
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_17 = __this->get_properties_6();
			RuntimeObject * L_18 = V_4;
			NullCheck(L_17);
			bool L_19 = Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9(L_17, L_18, /*hidden argument*/Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_RuntimeMethod_var);
			V_6 = L_19;
			bool L_20 = V_6;
			if (!L_20)
			{
				goto IL_0086;
			}
		}

IL_0076:
		{
			// this.properties.Remove(k);
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_21 = __this->get_properties_6();
			RuntimeObject * L_22 = V_4;
			NullCheck(L_21);
			Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60(L_21, L_22, /*hidden argument*/Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_RuntimeMethod_var);
		}

IL_0086:
		{
			goto IL_00a1;
		}

IL_0089:
		{
			// this.properties[k] = newProperties[k];
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_23 = __this->get_properties_6();
			RuntimeObject * L_24 = V_4;
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_25 = ___newProperties0;
			RuntimeObject * L_26 = V_4;
			NullCheck(L_25);
			RuntimeObject * L_27 = Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B(L_25, L_26, /*hidden argument*/Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_RuntimeMethod_var);
			NullCheck(L_23);
			Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93(L_23, L_24, L_27, /*hidden argument*/Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_RuntimeMethod_var);
		}

IL_00a1:
		{
		}

IL_00a2:
		{
			// foreach (var k in newProperties.Keys)
			bool L_28 = Enumerator_MoveNext_mB668588F2E9A318DF3632BB857303D20498ECC88((Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mB668588F2E9A318DF3632BB857303D20498ECC88_RuntimeMethod_var);
			if (L_28)
			{
				goto IL_0047;
			}
		}

IL_00ab:
		{
			IL2CPP_LEAVE(0xBC, FINALLY_00ad);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ad;
	}

FINALLY_00ad:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m5D6053937D6CD09077A90EB5594628CC48582A58((Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A *)(&V_3), /*hidden argument*/Enumerator_Dispose_m5D6053937D6CD09077A90EB5594628CC48582A58_RuntimeMethod_var);
		IL2CPP_END_FINALLY(173)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(173)
	{
		IL2CPP_JUMP_TBL(0xBC, IL_00bc)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00bc:
	{
		// if (this.properties.TryGetValue(ChannelWellKnownProperties.PublishSubscribers, out temp))
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_29 = __this->get_properties_6();
		uint8_t L_30 = ((uint8_t)((int32_t)254));
		RuntimeObject * L_31 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_29);
		bool L_32 = Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3(L_29, L_31, (RuntimeObject **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_RuntimeMethod_var);
		V_7 = L_32;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00e8;
		}
	}
	{
		// this.PublishSubscribers = (bool)temp;
		RuntimeObject * L_34 = V_1;
		ChatChannel_set_PublishSubscribers_m3B96679B4F495C5A34F6508E1B782A03025FF0A8_inline(__this, ((*(bool*)((bool*)UnBox(L_34, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_00e8:
	{
		// if (this.properties.TryGetValue(ChannelWellKnownProperties.MaxSubscribers, out temp))
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_35 = __this->get_properties_6();
		uint8_t L_36 = ((uint8_t)((int32_t)255));
		RuntimeObject * L_37 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_35);
		bool L_38 = Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3(L_35, L_37, (RuntimeObject **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_RuntimeMethod_var);
		V_8 = L_38;
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0114;
		}
	}
	{
		// this.MaxSubscribers = (int)temp;
		RuntimeObject * L_40 = V_1;
		ChatChannel_set_MaxSubscribers_mBB18A6C1987D39B790FFEC3510EEDDA9A47792EF_inline(__this, ((*(int32_t*)((int32_t*)UnBox(L_40, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_0114:
	{
	}

IL_0115:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::AddSubscribers(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_AddSubscribers_m636C057698F6796380DF44B449F409E269A06219 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___users0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_AddSubscribers_m636C057698F6796380DF44B449F409E269A06219_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (users == null)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = ___users0;
		V_0 = (bool)((((RuntimeObject*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		goto IL_002f;
	}

IL_000c:
	{
		// for (int i = 0; i < users.Length; i++)
		V_1 = 0;
		goto IL_0025;
	}

IL_0010:
	{
		// this.Subscribers.Add(users[i]);
		HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * L_2 = __this->get_Subscribers_9();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = ___users0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		HashSet_1_Add_mD0E40F9E35B3EEAED652C38D1784046EAD4057E1(L_2, L_6, /*hidden argument*/HashSet_1_Add_mD0E40F9E35B3EEAED652C38D1784046EAD4057E1_RuntimeMethod_var);
		// for (int i = 0; i < users.Length; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0025:
	{
		// for (int i = 0; i < users.Length; i++)
		int32_t L_8 = V_1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = ___users0;
		NullCheck(L_9);
		V_2 = (bool)((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0010;
		}
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::ClearProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_ClearProperties_m7999623EAE9437976EB38F9D5EB3C510FD411CAD (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_ClearProperties_m7999623EAE9437976EB38F9D5EB3C510FD411CAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (this.properties != null && this.properties.Count > 0)
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_0 = __this->get_properties_6();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_1 = __this->get_properties_6();
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6(L_1, /*hidden argument*/Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// this.properties.Clear();
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_4 = __this->get_properties_6();
		NullCheck(L_4);
		Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4(L_4, /*hidden argument*/Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4_RuntimeMethod_var);
	}

IL_002c:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Photon.Chat.ChatClient::get_NameServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_NameServerAddress_m7D7B6D70DD084E9F743D533E212BCEB0D21F9AB6 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public string NameServerAddress { get; private set; }
		String_t* L_0 = __this->get_U3CNameServerAddressU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_NameServerAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_NameServerAddress_m0C540F3B95F33ECE2ACFCFC0849CBFEB52A254CE (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string NameServerAddress { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameServerAddressU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_FrontendAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_FrontendAddress_mEB713B4B1C0FFD17CAA1C534ED71311219DC5FC9 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public string FrontendAddress { get; private set; }
		String_t* L_0 = __this->get_U3CFrontendAddressU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_FrontendAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_FrontendAddress_m07693D7264F012BF7FF2331F6773996DDEB50525 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string FrontendAddress { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CFrontendAddressU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_ChatRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_ChatRegion_mB20543051AF0671DA116ACEAD9401D40DB4AA50D (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// get { return this.chatRegion; }
		String_t* L_0 = __this->get_chatRegion_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.chatRegion; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Chat.ChatClient::set_ChatRegion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_ChatRegion_m7289821CA746E71FDFFD006B04AFB4B176EC322D (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { this.chatRegion = value; }
		String_t* L_0 = ___value0;
		__this->set_chatRegion_4(L_0);
		// set { this.chatRegion = value; }
		return;
	}
}
// Photon.Chat.ChatState Photon.Chat.ChatClient::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public ChatState State { get; private set; }
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_State(Photon.Chat.ChatState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_State_mED11489E9F367AE8FB9B8E33271AF7B22DEB51B6 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ChatState State { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_5(L_0);
		return;
	}
}
// Photon.Chat.ChatDisconnectCause Photon.Chat.ChatClient::get_DisconnectedCause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChatClient_get_DisconnectedCause_m57D498FAFF15DE6D6ED299021BAD2EEE35B2EEFC (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public ChatDisconnectCause DisconnectedCause { get; private set; }
		int32_t L_0 = __this->get_U3CDisconnectedCauseU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_DisconnectedCause(Photon.Chat.ChatDisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_DisconnectedCause_m89F55BFCB40ABDFDCC31601DDF22E6B7AD75D3EE (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ChatDisconnectCause DisconnectedCause { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CDisconnectedCauseU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::get_CanChat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_get_CanChat_m3086DAF93E4DBD19201B0583671C3A6391803B0C (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// get { return this.State == ChatState.ConnectedToFrontEnd && this.HasPeer; }
		int32_t L_0 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)7))))
		{
			goto IL_0012;
		}
	}
	{
		bool L_1 = ChatClient_get_HasPeer_m335AFAE782A5B27BE49B4F9CEE5FEAD05B64D503(__this, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0016;
	}

IL_0016:
	{
		// get { return this.State == ChatState.ConnectedToFrontEnd && this.HasPeer; }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Photon.Chat.ChatClient::CanChatInChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_CanChatInChannel_m0E3D8A49CB86A21CBFFFEDAF71C31637C3D676D8 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channelName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_CanChatInChannel_m0E3D8A49CB86A21CBFFFEDAF71C31637C3D676D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// return this.CanChat && this.PublicChannels.ContainsKey(channelName) && !this.PublicChannelsUnsubscribing.Contains(channelName);
		bool L_0 = ChatClient_get_CanChat_m3086DAF93E4DBD19201B0583671C3A6391803B0C(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_1 = __this->get_PublicChannels_11();
		String_t* L_2 = ___channelName0;
		NullCheck(L_1);
		bool L_3 = Dictionary_2_ContainsKey_m19B67631E3168539C3430F820AF289EC84A92C71(L_1, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m19B67631E3168539C3430F820AF289EC84A92C71_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * L_4 = __this->get_PublicChannelsUnsubscribing_13();
		String_t* L_5 = ___channelName0;
		NullCheck(L_4);
		bool L_6 = HashSet_1_Contains_m87AD3D6A936FABDA8CFECAD1C37AF4A2426C2913(L_4, L_5, /*hidden argument*/HashSet_1_Contains_m87AD3D6A936FABDA8CFECAD1C37AF4A2426C2913_RuntimeMethod_var);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B4_0 = 0;
	}

IL_0029:
	{
		V_0 = (bool)G_B4_0;
		goto IL_002c;
	}

IL_002c:
	{
		// }
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Boolean Photon.Chat.ChatClient::get_HasPeer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_get_HasPeer_m335AFAE782A5B27BE49B4F9CEE5FEAD05B64D503 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return this.chatPeer != null; }
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_0 = __this->get_chatPeer_15();
		V_0 = (bool)((!(((RuntimeObject*)(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// get { return this.chatPeer != null; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.String Photon.Chat.ChatClient::get_AppVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppVersion_m78125B682E98DF9E51EBCA68E56339F1B0DF87F2 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public string AppVersion { get; private set; }
		String_t* L_0 = __this->get_U3CAppVersionU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_AppVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_AppVersion_m5A5E34A9C7E5988B95BE2B97B4B9E629388CDF60 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AppVersion { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAppVersionU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_AppId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppId_m4A04DF9B4147EE862D8011D4DABF01676FA9B46E (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public string AppId { get; private set; }
		String_t* L_0 = __this->get_U3CAppIdU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_AppId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_AppId_mE95E1ABE8A25C1A6E81B0AD13B664D1252EF3B7E (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AppId { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAppIdU3Ek__BackingField_8(L_0);
		return;
	}
}
// Photon.Chat.AuthenticationValues Photon.Chat.ChatClient::get_AuthValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_0 = __this->get_U3CAuthValuesU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_AuthValues(Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_AuthValues_m2BB4034D2C3AB2622E67F1E9166E8485957E8BC2 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___value0, const RuntimeMethod* method)
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_0 = ___value0;
		__this->set_U3CAuthValuesU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_UserId_m8C1B174937265B43798E16BE66A0EE4664EBE372 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// return (this.AuthValues != null) ? this.AuthValues.UserId : null;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_0 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0017;
	}

IL_000c:
	{
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_1 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = AuthenticationValues_get_UserId_mD7E073BD28C39609097CC717B5F781DAA57AC6C3_inline(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void Photon.Chat.ChatClient::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_UserId_m18307D5CD943FA01E3569174D4D4C9CCAA9BE4C1 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_set_UserId_m18307D5CD943FA01E3569174D4D4C9CCAA9BE4C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.AuthValues == null)
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_0 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// this.AuthValues = new AuthenticationValues();
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_2 = (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 *)il2cpp_codegen_object_new(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78_il2cpp_TypeInfo_var);
		AuthenticationValues__ctor_m0353B82A64DB8EB949ADBC7FB540F2CBA82766C7(L_2, /*hidden argument*/NULL);
		ChatClient_set_AuthValues_m2BB4034D2C3AB2622E67F1E9166E8485957E8BC2_inline(__this, L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// this.AuthValues.UserId = value;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_3 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		String_t* L_4 = ___value0;
		NullCheck(L_3);
		AuthenticationValues_set_UserId_m0AC47E89E8BE94FE1064DE78AE429D1E1EB91635_inline(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::get_UseBackgroundWorkerForSending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_get_UseBackgroundWorkerForSending_m508B1C05B2C32EFB26DF87B0733D53CF990E2C96 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public bool UseBackgroundWorkerForSending { get; set; }
		bool L_0 = __this->get_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_UseBackgroundWorkerForSending(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_UseBackgroundWorkerForSending_m7D2F9FCA3BE476FA62C7119BAC85F9A72949BA19 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UseBackgroundWorkerForSending { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22(L_0);
		return;
	}
}
// ExitGames.Client.Photon.ConnectionProtocol Photon.Chat.ChatClient::get_TransportProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ChatClient_get_TransportProtocol_mD8120D236C932D4B1237234466F1E54D7A5CA9CB (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0;
	{
		// get { return this.chatPeer.TransportProtocol; }
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_0 = __this->get_chatPeer_15();
		NullCheck(L_0);
		uint8_t L_1 = PhotonPeer_get_TransportProtocol_m42215E2D4E23E475F9D83429F264AF2D60CE58F5_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return this.chatPeer.TransportProtocol; }
		uint8_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Photon.Chat.ChatClient::set_TransportProtocol(ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_TransportProtocol_m8689C7316F6E1B44C6E395328A28F5421A00FBDA (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_set_TransportProtocol_m8689C7316F6E1B44C6E395328A28F5421A00FBDA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	RuntimeObject* G_B6_2 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	RuntimeObject* G_B5_2 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	int32_t G_B7_2 = 0;
	RuntimeObject* G_B7_3 = NULL;
	{
		// if (this.chatPeer == null || this.chatPeer.PeerState != PeerStateValue.Disconnected)
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_0 = __this->get_chatPeer_15();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_1 = __this->get_chatPeer_15();
		NullCheck(L_1);
		uint8_t L_2 = PhotonPeer_get_PeerState_mAD6503E3F6464FEFD6DDD8736A04B2A7F3B04A82(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0061;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Can't set TransportProtocol. Disconnect first! " + ((this.chatPeer != null) ? "PeerState: " + this.chatPeer.PeerState : "The chatPeer is null."));
		RuntimeObject* L_4 = __this->get_listener_14();
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_5 = __this->get_chatPeer_15();
		G_B5_0 = _stringLiteralC0A6FD1C5CA8DBFF0C1D66394DA952F681078562;
		G_B5_1 = 2;
		G_B5_2 = L_4;
		if (L_5)
		{
			G_B6_0 = _stringLiteralC0A6FD1C5CA8DBFF0C1D66394DA952F681078562;
			G_B6_1 = 2;
			G_B6_2 = L_4;
			goto IL_003a;
		}
	}
	{
		G_B7_0 = _stringLiteralD6CA3F0561CBE6D60E45676F583A5694EA29884B;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		goto IL_0054;
	}

IL_003a:
	{
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_6 = __this->get_chatPeer_15();
		NullCheck(L_6);
		uint8_t L_7 = PhotonPeer_get_PeerState_mAD6503E3F6464FEFD6DDD8736A04B2A7F3B04A82(L_6, /*hidden argument*/NULL);
		uint8_t L_8 = L_7;
		RuntimeObject * L_9 = Box(PeerStateValue_t6629D00E672311CA05626AD8D5A197AB5A899E86_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral0ED3124668F532717B0D69F6EAA15F42A8393B1D, L_9, /*hidden argument*/NULL);
		G_B7_0 = L_10;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
	}

IL_0054:
	{
		String_t* L_11 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(G_B7_1, G_B7_0, /*hidden argument*/NULL);
		NullCheck(G_B7_3);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, G_B7_3, G_B7_2, L_11);
		// return;
		goto IL_006e;
	}

IL_0061:
	{
		// this.chatPeer.TransportProtocol = value;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_12 = __this->get_chatPeer_15();
		uint8_t L_13 = ___value0;
		NullCheck(L_12);
		PhotonPeer_set_TransportProtocol_mE069BC52388CE1326BCE1975071CE4448A474B96_inline(L_12, L_13, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> Photon.Chat.ChatClient::get_SocketImplementationConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t881E1592C6CBEA5F40CAA7EE97897DCA8DBAFB97 * ChatClient_get_SocketImplementationConfig_mBD1A41C9E9E21C689C84D69D548808DA6F778AEE (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	Dictionary_2_t881E1592C6CBEA5F40CAA7EE97897DCA8DBAFB97 * V_0 = NULL;
	{
		// get { return this.chatPeer.SocketImplementationConfig; }
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_0 = __this->get_chatPeer_15();
		NullCheck(L_0);
		Dictionary_2_t881E1592C6CBEA5F40CAA7EE97897DCA8DBAFB97 * L_1 = ((PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9 *)L_0)->get_SocketImplementationConfig_13();
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return this.chatPeer.SocketImplementationConfig; }
		Dictionary_2_t881E1592C6CBEA5F40CAA7EE97897DCA8DBAFB97 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Photon.Chat.ChatClient::.ctor(Photon.Chat.IChatClientListener,ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient__ctor_mEBC1E5D01173778E19C54A8DFE1A0C4BA88807E2 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, RuntimeObject* ___listener0, uint8_t ___protocol1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient__ctor_mEBC1E5D01173778E19C54A8DFE1A0C4BA88807E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string chatRegion = "EU";
		__this->set_chatRegion_4(_stringLiteralC82D1B09CF32291761D4D994CF71D150CBFAB21C);
		// private readonly IChatClientListener listener = null;
		__this->set_listener_14((RuntimeObject*)NULL);
		// public ChatPeer chatPeer = null;
		__this->set_chatPeer_15((ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 *)NULL);
		// private int msDeltaForServiceCalls = 50;
		__this->set_msDeltaForServiceCalls_20(((int32_t)50));
		// public ChatClient(IChatClientListener listener, ConnectionProtocol protocol = ConnectionProtocol.Udp)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.listener = listener;
		RuntimeObject* L_0 = ___listener0;
		__this->set_listener_14(L_0);
		// this.State = ChatState.Uninitialized;
		ChatClient_set_State_mED11489E9F367AE8FB9B8E33271AF7B22DEB51B6_inline(__this, 0, /*hidden argument*/NULL);
		// this.chatPeer = new ChatPeer(this, protocol);
		uint8_t L_1 = ___protocol1;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_2 = (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 *)il2cpp_codegen_object_new(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_il2cpp_TypeInfo_var);
		ChatPeer__ctor_m2DB07AE0969784CB00C97F73685AFE3C12FAFAC4(L_2, __this, L_1, /*hidden argument*/NULL);
		__this->set_chatPeer_15(L_2);
		// this.chatPeer.SerializationProtocolType = SerializationProtocol.GpBinaryV18;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_3 = __this->get_chatPeer_15();
		NullCheck(L_3);
		PhotonPeer_set_SerializationProtocolType_m9141765EA0AA102D96F41A345D48111E0B5408B9_inline(L_3, 1, /*hidden argument*/NULL);
		// this.PublicChannels = new Dictionary<string, ChatChannel>();
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_4 = (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 *)il2cpp_codegen_object_new(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3775E46AA1C9BD07056DD5C102B6CD501A7C85D9(L_4, /*hidden argument*/Dictionary_2__ctor_m3775E46AA1C9BD07056DD5C102B6CD501A7C85D9_RuntimeMethod_var);
		__this->set_PublicChannels_11(L_4);
		// this.PrivateChannels = new Dictionary<string, ChatChannel>();
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_5 = (Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 *)il2cpp_codegen_object_new(Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3775E46AA1C9BD07056DD5C102B6CD501A7C85D9(L_5, /*hidden argument*/Dictionary_2__ctor_m3775E46AA1C9BD07056DD5C102B6CD501A7C85D9_RuntimeMethod_var);
		__this->set_PrivateChannels_12(L_5);
		// this.PublicChannelsUnsubscribing = new HashSet<string>();
		HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * L_6 = (HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A *)il2cpp_codegen_object_new(HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mD07425BBACDADAC32A4B42FDE00C5DAAEC59880D(L_6, /*hidden argument*/HashSet_1__ctor_mD07425BBACDADAC32A4B42FDE00C5DAAEC59880D_RuntimeMethod_var);
		__this->set_PublicChannelsUnsubscribing_13(L_6);
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::ConnectUsingSettings(Photon.Chat.ChatAppSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_ConnectUsingSettings_mE6BBA2FB45898C414E780D34C214056C32C981ED (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * ___appSettings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_ConnectUsingSettings_mE6BBA2FB45898C414E780D34C214056C32C981ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (appSettings == null)
		ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * L_0 = ___appSettings0;
		V_0 = (bool)((((RuntimeObject*)(ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "ConnectUsingSettings failed. The appSettings can't be null.'");
		RuntimeObject* L_2 = __this->get_listener_14();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_2, 1, _stringLiteral3337A646329BB0605D15621CA34E1626248D408C);
		// return false;
		V_1 = (bool)0;
		goto IL_0096;
	}

IL_0020:
	{
		// if (!string.IsNullOrEmpty(appSettings.FixedRegion))
		ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * L_3 = ___appSettings0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_FixedRegion_2();
		bool L_5 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_4, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		// this.ChatRegion = appSettings.FixedRegion;
		ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * L_7 = ___appSettings0;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_FixedRegion_2();
		ChatClient_set_ChatRegion_m7289821CA746E71FDFFD006B04AFB4B176EC322D(__this, L_8, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// this.DebugOut = appSettings.NetworkLogging;
		ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * L_9 = ___appSettings0;
		NullCheck(L_9);
		uint8_t L_10 = L_9->get_NetworkLogging_5();
		ChatClient_set_DebugOut_mD27F2FE4EC99FE154039ED49B9D9DE2DC4609AB6(__this, L_10, /*hidden argument*/NULL);
		// this.TransportProtocol = appSettings.Protocol;
		ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * L_11 = ___appSettings0;
		NullCheck(L_11);
		uint8_t L_12 = L_11->get_Protocol_4();
		ChatClient_set_TransportProtocol_m8689C7316F6E1B44C6E395328A28F5421A00FBDA(__this, L_12, /*hidden argument*/NULL);
		// if (!appSettings.IsDefaultNameServer)
		ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * L_13 = ___appSettings0;
		NullCheck(L_13);
		bool L_14 = ChatAppSettings_get_IsDefaultNameServer_m603ADB9A24CB7CEE5DD0901AB5D3352A3E9A847B(L_13, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		// this.chatPeer.NameServerHost = appSettings.Server;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_16 = __this->get_chatPeer_15();
		ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * L_17 = ___appSettings0;
		NullCheck(L_17);
		String_t* L_18 = L_17->get_Server_3();
		NullCheck(L_16);
		L_16->set_NameServerHost_49(L_18);
	}

IL_007b:
	{
		// return this.Connect(appSettings.AppId, appSettings.AppVersion, this.AuthValues);
		ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * L_19 = ___appSettings0;
		NullCheck(L_19);
		String_t* L_20 = L_19->get_AppId_0();
		ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * L_21 = ___appSettings0;
		NullCheck(L_21);
		String_t* L_22 = L_21->get_AppVersion_1();
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_23 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		bool L_24 = ChatClient_Connect_m3954C8A1F05DF95D8AC83F7186A1D95FDFBA70F5(__this, L_20, L_22, L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		goto IL_0096;
	}

IL_0096:
	{
		// }
		bool L_25 = V_1;
		return L_25;
	}
}
// System.Boolean Photon.Chat.ChatClient::Connect(System.String,System.String,Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Connect_m3954C8A1F05DF95D8AC83F7186A1D95FDFBA70F5 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___authValues2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_Connect_m3954C8A1F05DF95D8AC83F7186A1D95FDFBA70F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// this.chatPeer.TimePingInterval = 3000;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_0 = __this->get_chatPeer_15();
		NullCheck(L_0);
		((PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9 *)L_0)->set_TimePingInterval_28(((int32_t)3000));
		// this.DisconnectedCause = ChatDisconnectCause.None;
		ChatClient_set_DisconnectedCause_m89F55BFCB40ABDFDCC31601DDF22E6B7AD75D3EE_inline(__this, 0, /*hidden argument*/NULL);
		// this.AuthValues = authValues;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_1 = ___authValues2;
		ChatClient_set_AuthValues_m2BB4034D2C3AB2622E67F1E9166E8485957E8BC2_inline(__this, L_1, /*hidden argument*/NULL);
		// this.AppId = appId;
		String_t* L_2 = ___appId0;
		ChatClient_set_AppId_mE95E1ABE8A25C1A6E81B0AD13B664D1252EF3B7E_inline(__this, L_2, /*hidden argument*/NULL);
		// this.AppVersion = appVersion;
		String_t* L_3 = ___appVersion1;
		ChatClient_set_AppVersion_m5A5E34A9C7E5988B95BE2B97B4B9E629388CDF60_inline(__this, L_3, /*hidden argument*/NULL);
		// this.didAuthenticate = false;
		__this->set_didAuthenticate_17((bool)0);
		// this.chatPeer.QuickResendAttempts = 2;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_4 = __this->get_chatPeer_15();
		NullCheck(L_4);
		PhotonPeer_set_QuickResendAttempts_mAFA68057A93CBCA88E4B6C4006EBD29CB61B97E0(L_4, (uint8_t)2, /*hidden argument*/NULL);
		// this.chatPeer.SentCountAllowance = 7;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_5 = __this->get_chatPeer_15();
		NullCheck(L_5);
		((PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9 *)L_5)->set_SentCountAllowance_26(7);
		// this.PublicChannels.Clear();
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_6 = __this->get_PublicChannels_11();
		NullCheck(L_6);
		Dictionary_2_Clear_m7D3BEF1BAC6367D5252C79306F6C8CCA38AD7FA5(L_6, /*hidden argument*/Dictionary_2_Clear_m7D3BEF1BAC6367D5252C79306F6C8CCA38AD7FA5_RuntimeMethod_var);
		// this.PrivateChannels.Clear();
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_7 = __this->get_PrivateChannels_12();
		NullCheck(L_7);
		Dictionary_2_Clear_m7D3BEF1BAC6367D5252C79306F6C8CCA38AD7FA5(L_7, /*hidden argument*/Dictionary_2_Clear_m7D3BEF1BAC6367D5252C79306F6C8CCA38AD7FA5_RuntimeMethod_var);
		// this.PublicChannelsUnsubscribing.Clear();
		HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * L_8 = __this->get_PublicChannelsUnsubscribing_13();
		NullCheck(L_8);
		HashSet_1_Clear_m90ADC6AC2A4FBFC20B0110DDBB92A66F0FAA5032(L_8, /*hidden argument*/HashSet_1_Clear_m90ADC6AC2A4FBFC20B0110DDBB92A66F0FAA5032_RuntimeMethod_var);
		// this.NameServerAddress = this.chatPeer.NameServerAddress;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_9 = __this->get_chatPeer_15();
		NullCheck(L_9);
		String_t* L_10 = ChatPeer_get_NameServerAddress_m1534143120EC03973CCA84F8BCE3DB5BB66FFE02(L_9, /*hidden argument*/NULL);
		ChatClient_set_NameServerAddress_m0C540F3B95F33ECE2ACFCFC0849CBFEB52A254CE_inline(__this, L_10, /*hidden argument*/NULL);
		// bool isConnecting = this.chatPeer.Connect();
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_11 = __this->get_chatPeer_15();
		NullCheck(L_11);
		bool L_12 = ChatPeer_Connect_m94685331391079FBB93EA688CA18BD5513DE6C35(L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		// if (isConnecting)
		bool L_13 = V_0;
		V_1 = L_13;
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_00a2;
		}
	}
	{
		// this.State = ChatState.ConnectingToNameServer;
		ChatClient_set_State_mED11489E9F367AE8FB9B8E33271AF7B22DEB51B6_inline(__this, 1, /*hidden argument*/NULL);
	}

IL_00a2:
	{
		// if (this.UseBackgroundWorkerForSending)
		bool L_15 = ChatClient_get_UseBackgroundWorkerForSending_m508B1C05B2C32EFB26DF87B0733D53CF990E2C96_inline(__this, /*hidden argument*/NULL);
		V_2 = L_15;
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_00cb;
		}
	}
	{
		// SupportClass.StartBackgroundCalls(this.SendOutgoingInBackground, this.msDeltaForServiceCalls, "ChatClient Service Thread");
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_17 = (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *)il2cpp_codegen_object_new(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var);
		Func_1__ctor_m36F8615CDD8E019D5C4E92D96E275F7A8836B86F(L_17, __this, (intptr_t)((intptr_t)ChatClient_SendOutgoingInBackground_mFCE2C7CB1440F773487CFD739D99E07772F8EC3D_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m36F8615CDD8E019D5C4E92D96E275F7A8836B86F_RuntimeMethod_var);
		int32_t L_18 = __this->get_msDeltaForServiceCalls_20();
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tE42C4383E3E9D5BAF1BDB2C51F0053200D18421C_il2cpp_TypeInfo_var);
		SupportClass_StartBackgroundCalls_m067C1439458F31743309A83C4D2EB02CA1703D7F(L_17, L_18, _stringLiteral8CBF6943194FAE819E8AFA76DB6AA5FEDEF2323B, /*hidden argument*/NULL);
	}

IL_00cb:
	{
		// return isConnecting;
		bool L_19 = V_0;
		V_3 = L_19;
		goto IL_00cf;
	}

IL_00cf:
	{
		// }
		bool L_20 = V_3;
		return L_20;
	}
}
// System.Boolean Photon.Chat.ChatClient::ConnectAndSetStatus(System.String,System.String,Photon.Chat.AuthenticationValues,System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_ConnectAndSetStatus_m162558B2D8D1C60B39E7DB974A927D8425E72EA9 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___authValues2, int32_t ___status3, RuntimeObject * ___message4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_ConnectAndSetStatus_m162558B2D8D1C60B39E7DB974A927D8425E72EA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// statusToSetWhenConnected = status;
		int32_t L_0 = ___status3;
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		__this->set_statusToSetWhenConnected_18(L_1);
		// messageToSetWhenConnected = message;
		RuntimeObject * L_2 = ___message4;
		__this->set_messageToSetWhenConnected_19(L_2);
		// return Connect(appId, appVersion, authValues);
		String_t* L_3 = ___appId0;
		String_t* L_4 = ___appVersion1;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_5 = ___authValues2;
		bool L_6 = ChatClient_Connect_m3954C8A1F05DF95D8AC83F7186A1D95FDFBA70F5(__this, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0022;
	}

IL_0022:
	{
		// }
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Void Photon.Chat.ChatClient::Service()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_Service_mED248E3187E65DE3848FA9AC5C74CCD77084F31E (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B16_0 = 0;
	{
		goto IL_0005;
	}

IL_0003:
	{
	}

IL_0005:
	{
		// while (this.HasPeer && this.chatPeer.DispatchIncomingCommands())
		bool L_0 = ChatClient_get_HasPeer_m335AFAE782A5B27BE49B4F9CEE5FEAD05B64D503(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_1 = __this->get_chatPeer_15();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::DispatchIncomingCommands() */, L_1);
		G_B5_0 = ((int32_t)(L_2));
		goto IL_001b;
	}

IL_001a:
	{
		G_B5_0 = 0;
	}

IL_001b:
	{
		V_0 = (bool)G_B5_0;
		bool L_3 = V_0;
		if (L_3)
		{
			goto IL_0003;
		}
	}
	{
		// if (!this.UseBackgroundWorkerForSending)
		bool L_4 = ChatClient_get_UseBackgroundWorkerForSending_m508B1C05B2C32EFB26DF87B0733D53CF990E2C96_inline(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_007d;
		}
	}
	{
		// if (Environment.TickCount - this.msTimestampOfLastServiceCall > this.msDeltaForServiceCalls || this.msTimestampOfLastServiceCall == 0)
		int32_t L_6 = Environment_get_TickCount_m0A119BE4354EA90C82CC48E559588C987A79FE0C(/*hidden argument*/NULL);
		int32_t L_7 = __this->get_msTimestampOfLastServiceCall_21();
		int32_t L_8 = __this->get_msDeltaForServiceCalls_20();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7))) > ((int32_t)L_8)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_9 = __this->get_msTimestampOfLastServiceCall_21();
		G_B10_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_004d;
	}

IL_004c:
	{
		G_B10_0 = 1;
	}

IL_004d:
	{
		V_2 = (bool)G_B10_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_007c;
		}
	}
	{
		// this.msTimestampOfLastServiceCall = Environment.TickCount;
		int32_t L_11 = Environment_get_TickCount_m0A119BE4354EA90C82CC48E559588C987A79FE0C(/*hidden argument*/NULL);
		__this->set_msTimestampOfLastServiceCall_21(L_11);
		goto IL_0061;
	}

IL_005f:
	{
	}

IL_0061:
	{
		// while (this.HasPeer && this.chatPeer.SendOutgoingCommands())
		bool L_12 = ChatClient_get_HasPeer_m335AFAE782A5B27BE49B4F9CEE5FEAD05B64D503(__this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0076;
		}
	}
	{
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_13 = __this->get_chatPeer_15();
		NullCheck(L_13);
		bool L_14 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOutgoingCommands() */, L_13);
		G_B16_0 = ((int32_t)(L_14));
		goto IL_0077;
	}

IL_0076:
	{
		G_B16_0 = 0;
	}

IL_0077:
	{
		V_3 = (bool)G_B16_0;
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_005f;
		}
	}
	{
	}

IL_007c:
	{
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendOutgoingInBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendOutgoingInBackground_mFCE2C7CB1440F773487CFD739D99E07772F8EC3D (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		goto IL_0005;
	}

IL_0003:
	{
	}

IL_0005:
	{
		// while (this.HasPeer && this.chatPeer.SendOutgoingCommands())
		bool L_0 = ChatClient_get_HasPeer_m335AFAE782A5B27BE49B4F9CEE5FEAD05B64D503(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_1 = __this->get_chatPeer_15();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOutgoingCommands() */, L_1);
		G_B5_0 = ((int32_t)(L_2));
		goto IL_001b;
	}

IL_001a:
	{
		G_B5_0 = 0;
	}

IL_001b:
	{
		V_0 = (bool)G_B5_0;
		bool L_3 = V_0;
		if (L_3)
		{
			goto IL_0003;
		}
	}
	{
		// return this.State != ChatState.Disconnected;
		int32_t L_4 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002f;
	}

IL_002f:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void Photon.Chat.ChatClient::SendAcksOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_SendAcksOnly_mF4F12526351DFEF1834FDC696EA1B1833FEE844D (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (this.HasPeer) this.chatPeer.SendAcksOnly();
		bool L_0 = ChatClient_get_HasPeer_m335AFAE782A5B27BE49B4F9CEE5FEAD05B64D503(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (this.HasPeer) this.chatPeer.SendAcksOnly();
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_2 = __this->get_chatPeer_15();
		NullCheck(L_2);
		VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendAcksOnly() */, L_2);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::Disconnect(Photon.Chat.ChatDisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_Disconnect_m6464E8DFF6E8A1C48DA0AD5F10CBAF8EF0EA846D (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (this.HasPeer && this.chatPeer.PeerState != PeerStateValue.Disconnected)
		bool L_0 = ChatClient_get_HasPeer_m335AFAE782A5B27BE49B4F9CEE5FEAD05B64D503(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_1 = __this->get_chatPeer_15();
		NullCheck(L_1);
		uint8_t L_2 = PhotonPeer_get_PeerState_mAD6503E3F6464FEFD6DDD8736A04B2A7F3B04A82(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		// this.State = ChatState.Disconnecting;
		ChatClient_set_State_mED11489E9F367AE8FB9B8E33271AF7B22DEB51B6_inline(__this, ((int32_t)10), /*hidden argument*/NULL);
		// this.DisconnectedCause = cause;
		int32_t L_4 = ___cause0;
		ChatClient_set_DisconnectedCause_m89F55BFCB40ABDFDCC31601DDF22E6B7AD75D3EE_inline(__this, L_4, /*hidden argument*/NULL);
		// this.chatPeer.Disconnect();
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_5 = __this->get_chatPeer_15();
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(9 /* System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect() */, L_5);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::StopThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_StopThread_m61785BBD8497669B402197D0830856ED8979C0B9 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (this.HasPeer)
		bool L_0 = ChatClient_get_HasPeer_m335AFAE782A5B27BE49B4F9CEE5FEAD05B64D503(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// this.chatPeer.StopThread();
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_2 = __this->get_chatPeer_15();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(10 /* System.Void ExitGames.Client.Photon.PhotonPeer::StopThread() */, L_2);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m196511BB250D1E60FCD2722A0B4A9CB119E22089 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___channels0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.Subscribe(channels, 0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = ___channels0;
		bool L_1 = ChatClient_Subscribe_m6A836D6622403D1744A00C194C485B764E2A529E(__this, L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m893C4C80A0E16F7FA6400AB703B108A26D181E6B (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___channels0, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___lastMsgIds1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_Subscribe_m893C4C80A0E16F7FA6400AB703B108A26D181E6B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B21_0 = 0;
	{
		// if (!this.CanChat)
		bool L_0 = ChatClient_get_CanChat_m3086DAF93E4DBD19201B0583671C3A6391803B0C(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_2 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Subscribe called while not connected to front end server.");
		RuntimeObject* L_4 = __this->get_listener_14();
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_4, 1, _stringLiteral238CFA8C25F7535B52F025A6DC2373BE55C1578E);
	}

IL_0033:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_015b;
	}

IL_003a:
	{
		// if (channels == null || channels.Length == 0)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = ___channels0;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = ___channels0;
		NullCheck(L_6);
		G_B7_0 = ((((int32_t)(((RuntimeArray*)L_6)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B7_0 = 1;
	}

IL_0045:
	{
		V_4 = (bool)G_B7_0;
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0079;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_8 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Subscribe can't be called for empty or null channels-list.");
		RuntimeObject* L_10 = __this->get_listener_14();
		NullCheck(L_10);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_10, 2, _stringLiteral4D05D00A60529C7A57C13E385944654DD890D8DE);
	}

IL_0072:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_015b;
	}

IL_0079:
	{
		// for (int i = 0; i < channels.Length; i++)
		V_6 = 0;
		goto IL_00cf;
	}

IL_007e:
	{
		// if (string.IsNullOrEmpty(channels[i]))
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = ___channels0;
		int32_t L_12 = V_6;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		String_t* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_14, /*hidden argument*/NULL);
		V_7 = L_15;
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_00c8;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_17 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_8;
		if (!L_18)
		{
			goto IL_00c1;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Subscribe can't be called with a null or empty channel name at index {0}.", i));
		RuntimeObject* L_19 = __this->get_listener_14();
		int32_t L_20 = V_6;
		int32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralA31D385B9DEE1897A2E6840A59DF969194B69490, L_22, /*hidden argument*/NULL);
		NullCheck(L_19);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_19, 1, L_23);
	}

IL_00c1:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_015b;
	}

IL_00c8:
	{
		// for (int i = 0; i < channels.Length; i++)
		int32_t L_24 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00cf:
	{
		// for (int i = 0; i < channels.Length; i++)
		int32_t L_25 = V_6;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_26 = ___channels0;
		NullCheck(L_26);
		V_9 = (bool)((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))))? 1 : 0);
		bool L_27 = V_9;
		if (L_27)
		{
			goto IL_007e;
		}
	}
	{
		// if (lastMsgIds == null || lastMsgIds.Length != channels.Length)
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_28 = ___lastMsgIds1;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_29 = ___lastMsgIds1;
		NullCheck(L_29);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_30 = ___channels0;
		NullCheck(L_30);
		G_B21_0 = ((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ed;
	}

IL_00ec:
	{
		G_B21_0 = 1;
	}

IL_00ed:
	{
		V_10 = (bool)G_B21_0;
		bool L_31 = V_10;
		if (!L_31)
		{
			goto IL_011e;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_32 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_11 = (bool)((((int32_t)((((int32_t)L_32) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_11;
		if (!L_33)
		{
			goto IL_011a;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Subscribe can't be called when \"lastMsgIds\" array is null or does not have the same length as \"channels\" array.");
		RuntimeObject* L_34 = __this->get_listener_14();
		NullCheck(L_34);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_34, 1, _stringLiteralC82DBB40CF62E9201ED272DC15F939C724CD3E7D);
	}

IL_011a:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_015b;
	}

IL_011e:
	{
		// Dictionary<byte, object> opParameters = new Dictionary<byte, object>
		// {
		//     { ChatParameterCode.Channels, channels },
		//     { ChatParameterCode.MsgIds,  lastMsgIds},
		//     { ChatParameterCode.HistoryLength, -1 } // server will decide how many messages to send to client
		// };
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_35 = (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *)il2cpp_codegen_object_new(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA38BDB6209548343F5C21CA8CCEF000923157407(L_35, /*hidden argument*/Dictionary_2__ctor_mA38BDB6209548343F5C21CA8CCEF000923157407_RuntimeMethod_var);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_36 = L_35;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_37 = ___channels0;
		NullCheck(L_36);
		Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833(L_36, (uint8_t)0, (RuntimeObject *)(RuntimeObject *)L_37, /*hidden argument*/Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833_RuntimeMethod_var);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_38 = L_36;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_39 = ___lastMsgIds1;
		NullCheck(L_38);
		Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833(L_38, (uint8_t)((int32_t)9), (RuntimeObject *)(RuntimeObject *)L_39, /*hidden argument*/Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833_RuntimeMethod_var);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_40 = L_38;
		int32_t L_41 = (-1);
		RuntimeObject * L_42 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_40);
		Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833(L_40, (uint8_t)((int32_t)14), L_42, /*hidden argument*/Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833_RuntimeMethod_var);
		V_0 = L_40;
		// return this.chatPeer.SendOperation(ChatOperationCode.Subscribe, opParameters, SendOptions.SendReliable);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_43 = __this->get_chatPeer_15();
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_44 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_il2cpp_TypeInfo_var);
		SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  L_45 = ((SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_43);
		bool L_46 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *, SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  >::Invoke(16 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_43, (uint8_t)0, L_44, L_45);
		V_3 = L_46;
		goto IL_015b;
	}

IL_015b:
	{
		// }
		bool L_47 = V_3;
		return L_47;
	}
}
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m6A836D6622403D1744A00C194C485B764E2A529E (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___channels0, int32_t ___messagesFromHistory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_Subscribe_m6A836D6622403D1744A00C194C485B764E2A529E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B7_0 = 0;
	{
		// if (!this.CanChat)
		bool L_0 = ChatClient_get_CanChat_m3086DAF93E4DBD19201B0583671C3A6391803B0C(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_2 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Subscribe called while not connected to front end server.");
		RuntimeObject* L_4 = __this->get_listener_14();
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_4, 1, _stringLiteral238CFA8C25F7535B52F025A6DC2373BE55C1578E);
	}

IL_0033:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_007d;
	}

IL_0037:
	{
		// if (channels == null || channels.Length == 0)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = ___channels0;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = ___channels0;
		NullCheck(L_6);
		G_B7_0 = ((((int32_t)(((RuntimeArray*)L_6)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0042;
	}

IL_0041:
	{
		G_B7_0 = 1;
	}

IL_0042:
	{
		V_3 = (bool)G_B7_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_8 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_006d;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Subscribe can't be called for empty or null channels-list.");
		RuntimeObject* L_10 = __this->get_listener_14();
		NullCheck(L_10);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_10, 2, _stringLiteral4D05D00A60529C7A57C13E385944654DD890D8DE);
	}

IL_006d:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_007d;
	}

IL_0071:
	{
		// return this.SendChannelOperation(channels, (byte)ChatOperationCode.Subscribe, messagesFromHistory);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = ___channels0;
		int32_t L_12 = ___messagesFromHistory1;
		bool L_13 = ChatClient_SendChannelOperation_mCF0D03E16706453CEE72FD38129FD6BAAF48F32B(__this, L_11, (uint8_t)0, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		goto IL_007d;
	}

IL_007d:
	{
		// }
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Boolean Photon.Chat.ChatClient::Unsubscribe(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Unsubscribe_m08903334236B22619BBF51877E1D55F452B744A4 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___channels0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_Unsubscribe_m08903334236B22619BBF51877E1D55F452B744A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	int32_t G_B7_0 = 0;
	{
		// if (!this.CanChat)
		bool L_0 = ChatClient_get_CanChat_m3086DAF93E4DBD19201B0583671C3A6391803B0C(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_2 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Unsubscribe called while not connected to front end server.");
		RuntimeObject* L_4 = __this->get_listener_14();
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_4, 1, _stringLiteral5618474235217E524A45AD712574B23E84EED6AD);
	}

IL_0033:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_00ab;
	}

IL_0037:
	{
		// if (channels == null || channels.Length == 0)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = ___channels0;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = ___channels0;
		NullCheck(L_6);
		G_B7_0 = ((((int32_t)(((RuntimeArray*)L_6)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0042;
	}

IL_0041:
	{
		G_B7_0 = 1;
	}

IL_0042:
	{
		V_3 = (bool)G_B7_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_8 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_006d;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Unsubscribe can't be called for empty or null channels-list.");
		RuntimeObject* L_10 = __this->get_listener_14();
		NullCheck(L_10);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_10, 2, _stringLiteral11B6F3557420C105118FCE7DD35DEC9F19E23C3D);
	}

IL_006d:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_00ab;
	}

IL_0071:
	{
		// foreach (string ch in channels)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = ___channels0;
		V_5 = L_11;
		V_6 = 0;
		goto IL_0097;
	}

IL_007a:
	{
		// foreach (string ch in channels)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = V_5;
		int32_t L_13 = V_6;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_7 = L_15;
		// this.PublicChannelsUnsubscribing.Add(ch);
		HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * L_16 = __this->get_PublicChannelsUnsubscribing_13();
		String_t* L_17 = V_7;
		NullCheck(L_16);
		HashSet_1_Add_mD0E40F9E35B3EEAED652C38D1784046EAD4057E1(L_16, L_17, /*hidden argument*/HashSet_1_Add_mD0E40F9E35B3EEAED652C38D1784046EAD4057E1_RuntimeMethod_var);
		int32_t L_18 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0097:
	{
		// foreach (string ch in channels)
		int32_t L_19 = V_6;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_20 = V_5;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))))
		{
			goto IL_007a;
		}
	}
	{
		// return this.SendChannelOperation(channels, ChatOperationCode.Unsubscribe, 0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_21 = ___channels0;
		bool L_22 = ChatClient_SendChannelOperation_mCF0D03E16706453CEE72FD38129FD6BAAF48F32B(__this, L_21, (uint8_t)1, 0, /*hidden argument*/NULL);
		V_2 = L_22;
		goto IL_00ab;
	}

IL_00ab:
	{
		// }
		bool L_23 = V_2;
		return L_23;
	}
}
// System.Boolean Photon.Chat.ChatClient::PublishMessage(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_PublishMessage_mE7E4781C58ED7469BC64F761BA3F89CD1B1F6D22 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channelName0, RuntimeObject * ___message1, bool ___forwardAsWebhook2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.publishMessage(channelName, message, true, forwardAsWebhook);
		String_t* L_0 = ___channelName0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___forwardAsWebhook2;
		bool L_3 = ChatClient_publishMessage_mC7A0E2DEB29BE35A74DD8FB326AF7D2B92E883C1(__this, L_0, L_1, (bool)1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Photon.Chat.ChatClient::PublishMessageUnreliable(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_PublishMessageUnreliable_m94476FE1F5C9CBD843731D302F744FBF66CC6A11 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channelName0, RuntimeObject * ___message1, bool ___forwardAsWebhook2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.publishMessage(channelName, message, false, forwardAsWebhook);
		String_t* L_0 = ___channelName0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___forwardAsWebhook2;
		bool L_3 = ChatClient_publishMessage_mC7A0E2DEB29BE35A74DD8FB326AF7D2B92E883C1(__this, L_0, L_1, (bool)0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Photon.Chat.ChatClient::publishMessage(System.String,System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_publishMessage_mC7A0E2DEB29BE35A74DD8FB326AF7D2B92E883C1 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channelName0, RuntimeObject * ___message1, bool ___reliable2, bool ___forwardAsWebhook3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_publishMessage_mC7A0E2DEB29BE35A74DD8FB326AF7D2B92E883C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B7_0 = 0;
	{
		// if (!this.CanChat)
		bool L_0 = ChatClient_get_CanChat_m3086DAF93E4DBD19201B0583671C3A6391803B0C(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_2 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "PublishMessage called while not connected to front end server.");
		RuntimeObject* L_4 = __this->get_listener_14();
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_4, 1, _stringLiteral3D618361EC8C202858B123986AEA7B042531080B);
	}

IL_0033:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00ce;
	}

IL_003a:
	{
		// if (string.IsNullOrEmpty(channelName) || message == null)
		String_t* L_5 = ___channelName0;
		bool L_6 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject * L_7 = ___message1;
		G_B7_0 = ((((RuntimeObject*)(RuntimeObject *)L_7) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0049;
	}

IL_0048:
	{
		G_B7_0 = 1;
	}

IL_0049:
	{
		V_4 = (bool)G_B7_0;
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_007a;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_9 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_9) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_0076;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "PublishMessage parameters must be non-null and not empty.");
		RuntimeObject* L_11 = __this->get_listener_14();
		NullCheck(L_11);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_11, 2, _stringLiteral338B2B6C4BBAA566799E30C0FFE0EB3E1AD56F71);
	}

IL_0076:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00ce;
	}

IL_007a:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { (byte)ChatParameterCode.Channel, channelName },
		//         { (byte)ChatParameterCode.Message, message }
		//     };
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_12 = (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *)il2cpp_codegen_object_new(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA38BDB6209548343F5C21CA8CCEF000923157407(L_12, /*hidden argument*/Dictionary_2__ctor_mA38BDB6209548343F5C21CA8CCEF000923157407_RuntimeMethod_var);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_13 = L_12;
		String_t* L_14 = ___channelName0;
		NullCheck(L_13);
		Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833(L_13, (uint8_t)1, L_14, /*hidden argument*/Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833_RuntimeMethod_var);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_15 = L_13;
		RuntimeObject * L_16 = ___message1;
		NullCheck(L_15);
		Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833(L_15, (uint8_t)3, L_16, /*hidden argument*/Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833_RuntimeMethod_var);
		V_0 = L_15;
		// if (forwardAsWebhook)
		bool L_17 = ___forwardAsWebhook3;
		V_6 = L_17;
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_00ab;
		}
	}
	{
		// parameters.Add(ChatParameterCode.WebFlags, (byte)0x1);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_19 = V_0;
		uint8_t L_20 = ((uint8_t)1);
		RuntimeObject * L_21 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_19);
		Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833(L_19, (uint8_t)((int32_t)21), L_21, /*hidden argument*/Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833_RuntimeMethod_var);
	}

IL_00ab:
	{
		// return this.chatPeer.SendOperation(ChatOperationCode.Publish, parameters, new SendOptions() { Reliability = reliable });
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_22 = __this->get_chatPeer_15();
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_23 = V_0;
		il2cpp_codegen_initobj((&V_7), sizeof(SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77 ));
		bool L_24 = ___reliable2;
		SendOptions_set_Reliability_m2DE41348D40DD9703AB284E030692368894EA747((SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77 *)(&V_7), L_24, /*hidden argument*/NULL);
		SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  L_25 = V_7;
		NullCheck(L_22);
		bool L_26 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *, SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  >::Invoke(16 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_22, (uint8_t)2, L_23, L_25);
		V_3 = L_26;
		goto IL_00ce;
	}

IL_00ce:
	{
		// }
		bool L_27 = V_3;
		return L_27;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessage_mDE071B153CA6CF674595F5E18EE27933F6EC9078 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___forwardAsWebhook2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.SendPrivateMessage(target, message, false, forwardAsWebhook);
		String_t* L_0 = ___target0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___forwardAsWebhook2;
		bool L_3 = ChatClient_SendPrivateMessage_m3E44E2CEEB609A39081A7C89EEF1ACA98465B788(__this, L_0, L_1, (bool)0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessage_m3E44E2CEEB609A39081A7C89EEF1ACA98465B788 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___forwardAsWebhook3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.sendPrivateMessage(target, message, encrypt, true, forwardAsWebhook);
		String_t* L_0 = ___target0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___encrypt2;
		bool L_3 = ___forwardAsWebhook3;
		bool L_4 = ChatClient_sendPrivateMessage_mAF13FC00B8AEE6CDD87EE58E845621274943F09B(__this, L_0, L_1, L_2, (bool)1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessageUnreliable(System.String,System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessageUnreliable_m268D11AD0586400E5DA90EB0D20AE6703550871B (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___forwardAsWebhook3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.sendPrivateMessage(target, message, encrypt, false, forwardAsWebhook);
		String_t* L_0 = ___target0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___encrypt2;
		bool L_3 = ___forwardAsWebhook3;
		bool L_4 = ChatClient_sendPrivateMessage_mAF13FC00B8AEE6CDD87EE58E845621274943F09B(__this, L_0, L_1, L_2, (bool)0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean Photon.Chat.ChatClient::sendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_sendPrivateMessage_mAF13FC00B8AEE6CDD87EE58E845621274943F09B (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___reliable3, bool ___forwardAsWebhook4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_sendPrivateMessage_mAF13FC00B8AEE6CDD87EE58E845621274943F09B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B7_0 = 0;
	{
		// if (!this.CanChat)
		bool L_0 = ChatClient_get_CanChat_m3086DAF93E4DBD19201B0583671C3A6391803B0C(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_2 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "SendPrivateMessage called while not connected to front end server.");
		RuntimeObject* L_4 = __this->get_listener_14();
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_4, 1, _stringLiteralABB11E10EF4F1912CA124A43EDFCF7E4236BF4B3);
	}

IL_0033:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00db;
	}

IL_003a:
	{
		// if (string.IsNullOrEmpty(target) || message == null)
		String_t* L_5 = ___target0;
		bool L_6 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject * L_7 = ___message1;
		G_B7_0 = ((((RuntimeObject*)(RuntimeObject *)L_7) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0049;
	}

IL_0048:
	{
		G_B7_0 = 1;
	}

IL_0049:
	{
		V_4 = (bool)G_B7_0;
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_007a;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_9 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_9) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_0076;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "SendPrivateMessage parameters must be non-null and not empty.");
		RuntimeObject* L_11 = __this->get_listener_14();
		NullCheck(L_11);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_11, 2, _stringLiteral7BEA53D7765CB5C320CAF9A0C3283A4E5AF00416);
	}

IL_0076:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00db;
	}

IL_007a:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { ChatParameterCode.UserId, target },
		//         { ChatParameterCode.Message, message }
		//     };
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_12 = (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *)il2cpp_codegen_object_new(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA38BDB6209548343F5C21CA8CCEF000923157407(L_12, /*hidden argument*/Dictionary_2__ctor_mA38BDB6209548343F5C21CA8CCEF000923157407_RuntimeMethod_var);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_13 = L_12;
		String_t* L_14 = ___target0;
		NullCheck(L_13);
		Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833(L_13, (uint8_t)((int32_t)225), L_14, /*hidden argument*/Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833_RuntimeMethod_var);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_15 = L_13;
		RuntimeObject * L_16 = ___message1;
		NullCheck(L_15);
		Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833(L_15, (uint8_t)3, L_16, /*hidden argument*/Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833_RuntimeMethod_var);
		V_0 = L_15;
		// if (forwardAsWebhook)
		bool L_17 = ___forwardAsWebhook4;
		V_6 = L_17;
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_00af;
		}
	}
	{
		// parameters.Add(ChatParameterCode.WebFlags, (byte)0x1);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_19 = V_0;
		uint8_t L_20 = ((uint8_t)1);
		RuntimeObject * L_21 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_19);
		Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833(L_19, (uint8_t)((int32_t)21), L_21, /*hidden argument*/Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833_RuntimeMethod_var);
	}

IL_00af:
	{
		// return this.chatPeer.SendOperation(ChatOperationCode.SendPrivate, parameters, new SendOptions() { Reliability = reliable, Encrypt = encrypt });
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_22 = __this->get_chatPeer_15();
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_23 = V_0;
		il2cpp_codegen_initobj((&V_7), sizeof(SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77 ));
		bool L_24 = ___reliable3;
		SendOptions_set_Reliability_m2DE41348D40DD9703AB284E030692368894EA747((SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77 *)(&V_7), L_24, /*hidden argument*/NULL);
		bool L_25 = ___encrypt2;
		(&V_7)->set_Encrypt_3(L_25);
		SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  L_26 = V_7;
		NullCheck(L_22);
		bool L_27 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *, SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  >::Invoke(16 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_22, (uint8_t)3, L_23, L_26);
		V_3 = L_27;
		goto IL_00db;
	}

IL_00db:
	{
		// }
		bool L_28 = V_3;
		return L_28;
	}
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_m9A5A283B661F7A390FF7C7E044A1C5B050D08726 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___status0, RuntimeObject * ___message1, bool ___skipMessage2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_SetOnlineStatus_m9A5A283B661F7A390FF7C7E044A1C5B050D08726_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (!this.CanChat)
		bool L_0 = ChatClient_get_CanChat_m3086DAF93E4DBD19201B0583671C3A6391803B0C(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_2 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "SetOnlineStatus called while not connected to front end server.");
		RuntimeObject* L_4 = __this->get_listener_14();
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_4, 1, _stringLiteral21D80703A6C8D4036492B5E5021EDB6DA533D41D);
	}

IL_0033:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0086;
	}

IL_0037:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { ChatParameterCode.Status, status },
		//     };
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_5 = (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *)il2cpp_codegen_object_new(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA38BDB6209548343F5C21CA8CCEF000923157407(L_5, /*hidden argument*/Dictionary_2__ctor_mA38BDB6209548343F5C21CA8CCEF000923157407_RuntimeMethod_var);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_6 = L_5;
		int32_t L_7 = ___status0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833(L_6, (uint8_t)((int32_t)10), L_9, /*hidden argument*/Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833_RuntimeMethod_var);
		V_0 = L_6;
		// if (skipMessage)
		bool L_10 = ___skipMessage2;
		V_4 = L_10;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0066;
		}
	}
	{
		// parameters[ChatParameterCode.SkipMessage] = true;
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_12 = V_0;
		bool L_13 = ((bool)1);
		RuntimeObject * L_14 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_12);
		Dictionary_2_set_Item_mBD74E977A1200B92E98F968B5774094135AE2316(L_12, (uint8_t)((int32_t)12), L_14, /*hidden argument*/Dictionary_2_set_Item_mBD74E977A1200B92E98F968B5774094135AE2316_RuntimeMethod_var);
		goto IL_0071;
	}

IL_0066:
	{
		// parameters[ChatParameterCode.Message] = message;
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_15 = V_0;
		RuntimeObject * L_16 = ___message1;
		NullCheck(L_15);
		Dictionary_2_set_Item_mBD74E977A1200B92E98F968B5774094135AE2316(L_15, (uint8_t)3, L_16, /*hidden argument*/Dictionary_2_set_Item_mBD74E977A1200B92E98F968B5774094135AE2316_RuntimeMethod_var);
	}

IL_0071:
	{
		// return this.chatPeer.SendOperation(ChatOperationCode.UpdateStatus, parameters, SendOptions.SendReliable);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_17 = __this->get_chatPeer_15();
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_il2cpp_TypeInfo_var);
		SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  L_19 = ((SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_17);
		bool L_20 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *, SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  >::Invoke(16 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_17, (uint8_t)5, L_18, L_19);
		V_3 = L_20;
		goto IL_0086;
	}

IL_0086:
	{
		// }
		bool L_21 = V_3;
		return L_21;
	}
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_m4033915D5F5EBE6DDAABC71BAF8C4ED03AB4B882 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___status0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.SetOnlineStatus(status, null, true);
		int32_t L_0 = ___status0;
		bool L_1 = ChatClient_SetOnlineStatus_m9A5A283B661F7A390FF7C7E044A1C5B050D08726(__this, L_0, NULL, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_mA768DE355902F1F4CE336618560A1F8CA97C3B5A (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___status0, RuntimeObject * ___message1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.SetOnlineStatus(status, message, false);
		int32_t L_0 = ___status0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ChatClient_SetOnlineStatus_m9A5A283B661F7A390FF7C7E044A1C5B050D08726(__this, L_0, L_1, (bool)0, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Photon.Chat.ChatClient::AddFriends(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_AddFriends_mEAEC8761F53432233CE0D9F7B7DCB49AAA911BE0 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___friends0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_AddFriends_mEAEC8761F53432233CE0D9F7B7DCB49AAA911BE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B7_0 = 0;
	{
		// if (!this.CanChat)
		bool L_0 = ChatClient_get_CanChat_m3086DAF93E4DBD19201B0583671C3A6391803B0C(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_2 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "AddFriends called while not connected to front end server.");
		RuntimeObject* L_4 = __this->get_listener_14();
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_4, 1, _stringLiteral68E21592360E435244D8BD55506FC51CCA67E430);
	}

IL_0033:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0107;
	}

IL_003a:
	{
		// if (friends == null || friends.Length == 0)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = ___friends0;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = ___friends0;
		NullCheck(L_6);
		G_B7_0 = ((((int32_t)(((RuntimeArray*)L_6)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B7_0 = 1;
	}

IL_0045:
	{
		V_4 = (bool)G_B7_0;
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0079;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_8 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "AddFriends can't be called for empty or null list.");
		RuntimeObject* L_10 = __this->get_listener_14();
		NullCheck(L_10);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_10, 2, _stringLiteralCC8A9D016C6E2C07A8B03493514472F62C594C42);
	}

IL_0072:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0107;
	}

IL_0079:
	{
		// if (friends.Length > FriendRequestListMax)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = ___friends0;
		NullCheck(L_11);
		V_6 = (bool)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))) > ((int32_t)((int32_t)1024)))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_00e2;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_13 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_00de;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "AddFriends max list size exceeded: " + friends.Length + " > " + FriendRequestListMax);
		RuntimeObject* L_15 = __this->get_listener_14();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralC03619A6D8E3BC5B2795B980A17D5A6CBC187308);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralC03619A6D8E3BC5B2795B980A17D5A6CBC187308);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_17;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_19 = ___friends0;
		NullCheck(L_19);
		int32_t L_20 = (((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))));
		RuntimeObject * L_21 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_21);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_18;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteralB4992CF8FE071D46902C6E742001E921CD3995B5);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralB4992CF8FE071D46902C6E742001E921CD3995B5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = L_22;
		int32_t L_24 = ((int32_t)1024);
		RuntimeObject * L_25 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_25);
		String_t* L_26 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_23, /*hidden argument*/NULL);
		NullCheck(L_15);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_15, 2, L_26);
	}

IL_00de:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0107;
	}

IL_00e2:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { ChatParameterCode.Friends, friends },
		//     };
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_27 = (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *)il2cpp_codegen_object_new(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA38BDB6209548343F5C21CA8CCEF000923157407(L_27, /*hidden argument*/Dictionary_2__ctor_mA38BDB6209548343F5C21CA8CCEF000923157407_RuntimeMethod_var);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_28 = L_27;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_29 = ___friends0;
		NullCheck(L_28);
		Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833(L_28, (uint8_t)((int32_t)11), (RuntimeObject *)(RuntimeObject *)L_29, /*hidden argument*/Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833_RuntimeMethod_var);
		V_0 = L_28;
		// return this.chatPeer.SendOperation(ChatOperationCode.AddFriends, parameters, SendOptions.SendReliable);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_30 = __this->get_chatPeer_15();
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_il2cpp_TypeInfo_var);
		SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  L_32 = ((SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_30);
		bool L_33 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *, SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  >::Invoke(16 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_30, (uint8_t)6, L_31, L_32);
		V_3 = L_33;
		goto IL_0107;
	}

IL_0107:
	{
		// }
		bool L_34 = V_3;
		return L_34;
	}
}
// System.Boolean Photon.Chat.ChatClient::RemoveFriends(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_RemoveFriends_m47EB90FCB9DF43FDF98FFB258B56EBD7AB35578D (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___friends0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_RemoveFriends_m47EB90FCB9DF43FDF98FFB258B56EBD7AB35578D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B7_0 = 0;
	{
		// if (!this.CanChat)
		bool L_0 = ChatClient_get_CanChat_m3086DAF93E4DBD19201B0583671C3A6391803B0C(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_2 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "RemoveFriends called while not connected to front end server.");
		RuntimeObject* L_4 = __this->get_listener_14();
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_4, 1, _stringLiteralABF28A6D84BA34B35ADF7EB356198FF5875435E5);
	}

IL_0033:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0107;
	}

IL_003a:
	{
		// if (friends == null || friends.Length == 0)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = ___friends0;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = ___friends0;
		NullCheck(L_6);
		G_B7_0 = ((((int32_t)(((RuntimeArray*)L_6)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B7_0 = 1;
	}

IL_0045:
	{
		V_4 = (bool)G_B7_0;
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0079;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_8 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "RemoveFriends can't be called for empty or null list.");
		RuntimeObject* L_10 = __this->get_listener_14();
		NullCheck(L_10);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_10, 2, _stringLiteral29683C1799AE0C427BB58C8BF974A0FB8AA9BFC9);
	}

IL_0072:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0107;
	}

IL_0079:
	{
		// if (friends.Length > FriendRequestListMax)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = ___friends0;
		NullCheck(L_11);
		V_6 = (bool)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))) > ((int32_t)((int32_t)1024)))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_00e2;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_13 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_00de;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "RemoveFriends max list size exceeded: " + friends.Length + " > " + FriendRequestListMax);
		RuntimeObject* L_15 = __this->get_listener_14();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralBA31FDB9D9DF30D820D828B03F9C4D72781B8C2E);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralBA31FDB9D9DF30D820D828B03F9C4D72781B8C2E);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_17;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_19 = ___friends0;
		NullCheck(L_19);
		int32_t L_20 = (((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))));
		RuntimeObject * L_21 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_21);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_18;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteralB4992CF8FE071D46902C6E742001E921CD3995B5);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralB4992CF8FE071D46902C6E742001E921CD3995B5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = L_22;
		int32_t L_24 = ((int32_t)1024);
		RuntimeObject * L_25 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_25);
		String_t* L_26 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_23, /*hidden argument*/NULL);
		NullCheck(L_15);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_15, 2, L_26);
	}

IL_00de:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0107;
	}

IL_00e2:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { ChatParameterCode.Friends, friends },
		//     };
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_27 = (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *)il2cpp_codegen_object_new(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA38BDB6209548343F5C21CA8CCEF000923157407(L_27, /*hidden argument*/Dictionary_2__ctor_mA38BDB6209548343F5C21CA8CCEF000923157407_RuntimeMethod_var);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_28 = L_27;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_29 = ___friends0;
		NullCheck(L_28);
		Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833(L_28, (uint8_t)((int32_t)11), (RuntimeObject *)(RuntimeObject *)L_29, /*hidden argument*/Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833_RuntimeMethod_var);
		V_0 = L_28;
		// return this.chatPeer.SendOperation(ChatOperationCode.RemoveFriends, parameters, SendOptions.SendReliable);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_30 = __this->get_chatPeer_15();
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_il2cpp_TypeInfo_var);
		SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  L_32 = ((SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_30);
		bool L_33 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *, SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  >::Invoke(16 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_30, (uint8_t)7, L_31, L_32);
		V_3 = L_33;
		goto IL_0107;
	}

IL_0107:
	{
		// }
		bool L_34 = V_3;
		return L_34;
	}
}
// System.String Photon.Chat.ChatClient::GetPrivateChannelNameByUser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_GetPrivateChannelNameByUser_m8DD9568D4F1E6424BD27D7B3F66D2B71F78E1564 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___userName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_GetPrivateChannelNameByUser_m8DD9568D4F1E6424BD27D7B3F66D2B71F78E1564_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("{0}:{1}", this.UserId, userName);
		String_t* L_0 = ChatClient_get_UserId_m8C1B174937265B43798E16BE66A0EE4664EBE372(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___userName0;
		String_t* L_2 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralE7B85E7369BA50B83804EBF39E9612010E5B9FCD, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Photon.Chat.ChatClient::TryGetChannel(System.String,System.Boolean,Photon.Chat.ChatChannel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_TryGetChannel_m5E29865E092D479AF2155CCFA14AEF6B65C77BE7 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channelName0, bool ___isPrivate1, ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** ___channel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_TryGetChannel_m5E29865E092D479AF2155CCFA14AEF6B65C77BE7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!isPrivate)
		bool L_0 = ___isPrivate1;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return this.PublicChannels.TryGetValue(channelName, out channel);
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_2 = __this->get_PublicChannels_11();
		String_t* L_3 = ___channelName0;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** L_4 = ___channel2;
		NullCheck(L_2);
		bool L_5 = Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183(L_2, L_3, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)L_4, /*hidden argument*/Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183_RuntimeMethod_var);
		V_1 = L_5;
		goto IL_002b;
	}

IL_001a:
	{
		// return this.PrivateChannels.TryGetValue(channelName, out channel);
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_6 = __this->get_PrivateChannels_12();
		String_t* L_7 = ___channelName0;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** L_8 = ___channel2;
		NullCheck(L_6);
		bool L_9 = Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183(L_6, L_7, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)L_8, /*hidden argument*/Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183_RuntimeMethod_var);
		V_1 = L_9;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		bool L_10 = V_1;
		return L_10;
	}
}
// System.Boolean Photon.Chat.ChatClient::TryGetChannel(System.String,Photon.Chat.ChatChannel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_TryGetChannel_m3010392F7956037B208A9373C681A29A818B4BD6 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channelName0, ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_TryGetChannel_m3010392F7956037B208A9373C681A29A818B4BD6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// bool found = false;
		V_0 = (bool)0;
		// found = this.PublicChannels.TryGetValue(channelName, out channel);
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_0 = __this->get_PublicChannels_11();
		String_t* L_1 = ___channelName0;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** L_2 = ___channel1;
		NullCheck(L_0);
		bool L_3 = Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183(L_0, L_1, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)L_2, /*hidden argument*/Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183_RuntimeMethod_var);
		V_0 = L_3;
		// if (found) return true;
		bool L_4 = V_0;
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001a;
		}
	}
	{
		// if (found) return true;
		V_2 = (bool)1;
		goto IL_002c;
	}

IL_001a:
	{
		// found = this.PrivateChannels.TryGetValue(channelName, out channel);
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_6 = __this->get_PrivateChannels_12();
		String_t* L_7 = ___channelName0;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** L_8 = ___channel1;
		NullCheck(L_6);
		bool L_9 = Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183(L_6, L_7, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)L_8, /*hidden argument*/Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183_RuntimeMethod_var);
		V_0 = L_9;
		// return found;
		bool L_10 = V_0;
		V_2 = L_10;
		goto IL_002c;
	}

IL_002c:
	{
		// }
		bool L_11 = V_2;
		return L_11;
	}
}
// System.Boolean Photon.Chat.ChatClient::TryGetPrivateChannelByUser(System.String,Photon.Chat.ChatChannel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_TryGetPrivateChannelByUser_m05B3C8258646C847C1BE0E967C40DEC05E52816C (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___userId0, ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** ___channel1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// channel = null;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** L_0 = ___channel1;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// if (string.IsNullOrEmpty(userId))
		String_t* L_1 = ___userId0;
		bool L_2 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0013;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0027;
	}

IL_0013:
	{
		// string channelName = this.GetPrivateChannelNameByUser(userId);
		String_t* L_4 = ___userId0;
		String_t* L_5 = ChatClient_GetPrivateChannelNameByUser_m8DD9568D4F1E6424BD27D7B3F66D2B71F78E1564(__this, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// return this.TryGetChannel(channelName, true, out channel);
		String_t* L_6 = V_0;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** L_7 = ___channel1;
		bool L_8 = ChatClient_TryGetChannel_m5E29865E092D479AF2155CCFA14AEF6B65C77BE7(__this, L_6, (bool)1, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Void Photon.Chat.ChatClient::set_DebugOut(ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_DebugOut_mD27F2FE4EC99FE154039ED49B9D9DE2DC4609AB6 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// set { this.chatPeer.DebugOut = value; }
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_0 = __this->get_chatPeer_15();
		uint8_t L_1 = ___value0;
		NullCheck(L_0);
		((PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9 *)L_0)->set_DebugOut_15(L_1);
		// set { this.chatPeer.DebugOut = value; }
		return;
	}
}
// ExitGames.Client.Photon.DebugLevel Photon.Chat.ChatClient::get_DebugOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0;
	{
		// get { return this.chatPeer.DebugOut; }
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_0 = __this->get_chatPeer_15();
		NullCheck(L_0);
		uint8_t L_1 = ((PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9 *)L_0)->get_DebugOut_15();
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return this.chatPeer.DebugOut; }
		uint8_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn_m64ACC8CC1BFA1306E354AF5FDC47FC394A3B7546 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, uint8_t ___level0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn_m64ACC8CC1BFA1306E354AF5FDC47FC394A3B7546_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.listener.DebugReturn(level, message);
		RuntimeObject* L_0 = __this->get_listener_14();
		uint8_t L_1 = ___level0;
		String_t* L_2 = ___message1;
		NullCheck(L_0);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnEvent_mDEAB58E39BEF4A0F38E8A73BCC8BED871452C2C7 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * ___eventData0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		// switch (eventData.Code)
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_0 = ___eventData0;
		NullCheck(L_0);
		uint8_t L_1 = L_0->get_Code_0();
		V_0 = L_1;
		uint8_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0038;
			}
			case 1:
			{
				goto IL_007e;
			}
			case 2:
			{
				goto IL_0042;
			}
			case 3:
			{
				goto IL_007e;
			}
			case 4:
			{
				goto IL_004c;
			}
			case 5:
			{
				goto IL_0056;
			}
			case 6:
			{
				goto IL_0060;
			}
			case 7:
			{
				goto IL_007e;
			}
			case 8:
			{
				goto IL_006a;
			}
			case 9:
			{
				goto IL_0074;
			}
		}
	}
	{
		goto IL_007e;
	}

IL_0038:
	{
		// this.HandleChatMessagesEvent(eventData);
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_3 = ___eventData0;
		ChatClient_HandleChatMessagesEvent_m5985D85D12982CC2BE98DFAC410F27A83C96E539(__this, L_3, /*hidden argument*/NULL);
		// break;
		goto IL_007e;
	}

IL_0042:
	{
		// this.HandlePrivateMessageEvent(eventData);
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_4 = ___eventData0;
		ChatClient_HandlePrivateMessageEvent_mF5FF0901611A6118801804D28B4B8A18B04F864C(__this, L_4, /*hidden argument*/NULL);
		// break;
		goto IL_007e;
	}

IL_004c:
	{
		// this.HandleStatusUpdate(eventData);
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_5 = ___eventData0;
		ChatClient_HandleStatusUpdate_m7A3E87E54FFD4A90EBB43311321051397A4DED55(__this, L_5, /*hidden argument*/NULL);
		// break;
		goto IL_007e;
	}

IL_0056:
	{
		// this.HandleSubscribeEvent(eventData);
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_6 = ___eventData0;
		ChatClient_HandleSubscribeEvent_m6A4E1BA574DC698494D8F206DC8D2103758720C6(__this, L_6, /*hidden argument*/NULL);
		// break;
		goto IL_007e;
	}

IL_0060:
	{
		// this.HandleUnsubscribeEvent(eventData);
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_7 = ___eventData0;
		ChatClient_HandleUnsubscribeEvent_m733D6DBDEBA8004AFA8CA4164A658F694C3A4A36(__this, L_7, /*hidden argument*/NULL);
		// break;
		goto IL_007e;
	}

IL_006a:
	{
		// this.HandleUserSubscribedEvent(eventData);
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_8 = ___eventData0;
		ChatClient_HandleUserSubscribedEvent_m6EB9F63E36A3CCEC286A2E511CEA4FBE35056571(__this, L_8, /*hidden argument*/NULL);
		// break;
		goto IL_007e;
	}

IL_0074:
	{
		// this.HandleUserUnsubscribedEvent(eventData);
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_9 = ___eventData0;
		ChatClient_HandleUserUnsubscribedEvent_m0F7CA88FAAF1C667CD79368C9CC9274623A15E9F(__this, L_9, /*hidden argument*/NULL);
		// break;
		goto IL_007e;
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnOperationResponse(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse_mFD6099C05BBECB04743344F9072C4DB56640A757 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * ___operationResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse_mFD6099C05BBECB04743344F9072C4DB56640A757_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B8_0 = 0;
	{
		// switch (operationResponse.OperationCode)
		OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * L_0 = ___operationResponse0;
		NullCheck(L_0);
		uint8_t L_1 = L_0->get_OperationCode_0();
		V_0 = L_1;
		uint8_t L_2 = V_0;
		if ((!(((uint32_t)L_2) > ((uint32_t)3))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		uint8_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)230))))
		{
			goto IL_0018;
		}
	}
	{
		goto IL_0025;
	}

IL_0018:
	{
		// this.HandleAuthResponse(operationResponse);
		OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * L_4 = ___operationResponse0;
		ChatClient_HandleAuthResponse_m149DFF8B5817172ED398B4B77489A1314254F9B4(__this, L_4, /*hidden argument*/NULL);
		// break;
		goto IL_00ad;
	}

IL_0025:
	{
		// if ((operationResponse.ReturnCode != 0) && (this.DebugOut >= DebugLevel.ERROR))
		OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * L_5 = ___operationResponse0;
		NullCheck(L_5);
		int16_t L_6 = L_5->get_ReturnCode_1();
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		uint8_t L_7 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)((((int32_t)L_7) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B8_0 = 0;
	}

IL_003c:
	{
		V_1 = (bool)G_B8_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_00ab;
		}
	}
	{
		// if (operationResponse.ReturnCode == -2)
		OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * L_9 = ___operationResponse0;
		NullCheck(L_9);
		int16_t L_10 = L_9->get_ReturnCode_1();
		V_2 = (bool)((((int32_t)L_10) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Chat Operation {0} unknown on server. Check your AppId and make sure it's for a Chat application.", operationResponse.OperationCode));
		RuntimeObject* L_12 = __this->get_listener_14();
		OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * L_13 = ___operationResponse0;
		NullCheck(L_13);
		uint8_t L_14 = L_13->get_OperationCode_0();
		uint8_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralBCB5C68DA61EECD91A7CBF61D41B0938CEDBCD34, L_16, /*hidden argument*/NULL);
		NullCheck(L_12);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_12, 1, L_17);
		goto IL_00aa;
	}

IL_0075:
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Chat Operation {0} failed (Code: {1}). Debug Message: {2}", operationResponse.OperationCode, operationResponse.ReturnCode, operationResponse.DebugMessage));
		RuntimeObject* L_18 = __this->get_listener_14();
		OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * L_19 = ___operationResponse0;
		NullCheck(L_19);
		uint8_t L_20 = L_19->get_OperationCode_0();
		uint8_t L_21 = L_20;
		RuntimeObject * L_22 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_21);
		OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * L_23 = ___operationResponse0;
		NullCheck(L_23);
		int16_t L_24 = L_23->get_ReturnCode_1();
		int16_t L_25 = L_24;
		RuntimeObject * L_26 = Box(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var, &L_25);
		OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * L_27 = ___operationResponse0;
		NullCheck(L_27);
		String_t* L_28 = L_27->get_DebugMessage_2();
		String_t* L_29 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteralA8B9D506307E302D77308D7E4A5DB319E04C3EC0, L_22, L_26, L_28, /*hidden argument*/NULL);
		NullCheck(L_18);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_18, 1, L_29);
	}

IL_00aa:
	{
	}

IL_00ab:
	{
		// break;
		goto IL_00ad;
	}

IL_00ad:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnStatusChanged(ExitGames.Client.Photon.StatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged_m88DE819E7FC0081498439F602F0F9920D6465AFD (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___statusCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged_m88DE819E7FC0081498439F602F0F9920D6465AFD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	String_t* V_9 = NULL;
	bool V_10 = false;
	{
		// switch (statusCode)
		int32_t L_0 = ___statusCode0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)1022))))
		{
			case 0:
			{
				goto IL_0218;
			}
			case 1:
			{
				goto IL_0218;
			}
			case 2:
			{
				goto IL_0062;
			}
			case 3:
			{
				goto IL_014f;
			}
			case 4:
			{
				goto IL_0222;
			}
		}
	}
	{
		goto IL_0025;
	}

IL_0025:
	{
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)1039))))
		{
			case 0:
			{
				goto IL_0222;
			}
			case 1:
			{
				goto IL_024a;
			}
			case 2:
			{
				goto IL_022c;
			}
			case 3:
			{
				goto IL_01fc;
			}
			case 4:
			{
				goto IL_0236;
			}
			case 5:
			{
				goto IL_0240;
			}
			case 6:
			{
				goto IL_0254;
			}
			case 7:
			{
				goto IL_0254;
			}
			case 8:
			{
				goto IL_0254;
			}
			case 9:
			{
				goto IL_0143;
			}
			case 10:
			{
				goto IL_0218;
			}
		}
	}
	{
		goto IL_0254;
	}

IL_0062:
	{
		// if (!this.chatPeer.IsProtocolSecure)
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_3 = __this->get_chatPeer_15();
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean Photon.Chat.ChatPeer::get_IsProtocolSecure() */, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_00b0;
		}
	}
	{
		// if (!this.chatPeer.EstablishEncryption())
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_6 = __this->get_chatPeer_15();
		NullCheck(L_6);
		bool L_7 = PhotonPeer_EstablishEncryption_m76CE5CB0A665120AC8843B965C9D505D55444672(L_6, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_00ad;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_9 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)((((int32_t)L_9) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ac;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Error establishing encryption");
		RuntimeObject* L_11 = __this->get_listener_14();
		NullCheck(L_11);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_11, 1, _stringLiteralD964D9EDC3903803F850267B4FA83E4185A94ED7);
	}

IL_00ac:
	{
	}

IL_00ad:
	{
		goto IL_00b9;
	}

IL_00b0:
	{
		// this.TryAuthenticateOnNameServer();
		ChatClient_TryAuthenticateOnNameServer_m33BF926F8BFB9A816B4CF4D510E7C05D8FA887D1(__this, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		// if (this.State == ChatState.ConnectingToNameServer)
		int32_t L_12 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_12) == ((int32_t)1))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00e6;
		}
	}
	{
		// this.State = ChatState.ConnectedToNameServer;
		ChatClient_set_State_mED11489E9F367AE8FB9B8E33271AF7B22DEB51B6_inline(__this, 2, /*hidden argument*/NULL);
		// this.listener.OnChatStateChange(this.State);
		RuntimeObject* L_14 = __this->get_listener_14();
		int32_t L_15 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Photon.Chat.IChatClientListener::OnChatStateChange(Photon.Chat.ChatState) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_14, L_15);
		goto IL_013e;
	}

IL_00e6:
	{
		// else if (this.State == ChatState.ConnectingToFrontEnd)
		int32_t L_16 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_16) == ((int32_t)6))? 1 : 0);
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_013e;
		}
	}
	{
		// if (!this.AuthenticateOnFrontEnd())
		bool L_18 = ChatClient_AuthenticateOnFrontEnd_mC3384AD28A733908C452491D57E07BF125106DD2(__this, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_013d;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_20 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_20) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_013c;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Error authenticating on frontend! Check log output, AuthValues and if you're connected. State: {0}", this.State));
		RuntimeObject* L_22 = __this->get_listener_14();
		int32_t L_23 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = Box(ChatState_tABA9DDB2C18934215ADACBF403DF9FD0A71D8B79_il2cpp_TypeInfo_var, &L_24);
		String_t* L_26 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral551EBFB5CCD80CC20586837AC559715F59BC0147, L_25, /*hidden argument*/NULL);
		NullCheck(L_22);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_22, 1, L_26);
	}

IL_013c:
	{
	}

IL_013d:
	{
	}

IL_013e:
	{
		// break;
		goto IL_0254;
	}

IL_0143:
	{
		// this.TryAuthenticateOnNameServer();
		ChatClient_TryAuthenticateOnNameServer_m33BF926F8BFB9A816B4CF4D510E7C05D8FA887D1(__this, /*hidden argument*/NULL);
		// break;
		goto IL_0254;
	}

IL_014f:
	{
		// switch (this.State)
		int32_t L_27 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		V_8 = L_27;
		int32_t L_28 = V_8;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_015e;
	}

IL_015e:
	{
		int32_t L_29 = V_8;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)10))))
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0174;
	}

IL_0166:
	{
		// this.ConnectToFrontEnd();
		ChatClient_ConnectToFrontEnd_m722E63C3D49C19C27434B0157D91906E934C5544(__this, /*hidden argument*/NULL);
		// return;
		goto IL_0254;
	}

IL_0172:
	{
		// break;
		goto IL_01b9;
	}

IL_0174:
	{
		// string stacktrace = string.Empty;
		String_t* L_30 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_9 = L_30;
		// stacktrace = new System.Diagnostics.StackTrace(true).ToString();
		StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99 * L_31 = (StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99 *)il2cpp_codegen_object_new(StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99_il2cpp_TypeInfo_var);
		StackTrace__ctor_mCF16893B6C5EEC13841370A064CFF74E9F54E997(L_31, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_31);
		String_t* L_32 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_31);
		V_9 = L_32;
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Got a unexpected Disconnect in ChatState: {0}. Server: {1} Trace: {2}", this.State, this.chatPeer.ServerAddress, stacktrace));
		RuntimeObject* L_33 = __this->get_listener_14();
		int32_t L_34 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		int32_t L_35 = L_34;
		RuntimeObject * L_36 = Box(ChatState_tABA9DDB2C18934215ADACBF403DF9FD0A71D8B79_il2cpp_TypeInfo_var, &L_35);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_37 = __this->get_chatPeer_15();
		NullCheck(L_37);
		String_t* L_38 = PhotonPeer_get_ServerAddress_mBB7F348D12881D815323E331CCB89023E6522E01(L_37, /*hidden argument*/NULL);
		String_t* L_39 = V_9;
		String_t* L_40 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteral103C55E7DFE64F67542769202574517D87109190, L_36, L_38, L_39, /*hidden argument*/NULL);
		NullCheck(L_33);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_33, 2, L_40);
		// break;
		goto IL_01b9;
	}

IL_01b9:
	{
		// if (this.AuthValues != null)
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_41 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		V_10 = (bool)((!(((RuntimeObject*)(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 *)L_41) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_42 = V_10;
		if (!L_42)
		{
			goto IL_01d7;
		}
	}
	{
		// this.AuthValues.Token = null; // when leaving the server, invalidate the secret (but not the auth values)
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_43 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_43);
		AuthenticationValues_set_Token_m8C003146B195901AB47692F9BED186E857D7329E_inline(L_43, (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_01d7:
	{
		// this.State = ChatState.Disconnected;
		ChatClient_set_State_mED11489E9F367AE8FB9B8E33271AF7B22DEB51B6_inline(__this, ((int32_t)11), /*hidden argument*/NULL);
		// this.listener.OnChatStateChange(ChatState.Disconnected);
		RuntimeObject* L_44 = __this->get_listener_14();
		NullCheck(L_44);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Photon.Chat.IChatClientListener::OnChatStateChange(Photon.Chat.ChatState) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_44, ((int32_t)11));
		// this.listener.OnDisconnected();
		RuntimeObject* L_45 = __this->get_listener_14();
		NullCheck(L_45);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Photon.Chat.IChatClientListener::OnDisconnected() */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_45);
		// break;
		goto IL_0254;
	}

IL_01fc:
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "This connection was rejected due to the apps CCU limit.");
		RuntimeObject* L_46 = __this->get_listener_14();
		NullCheck(L_46);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_46, 1, _stringLiteral384A0C94086D36412431EB0508F6F2D1985B9A68);
		// this.Disconnect(ChatDisconnectCause.MaxCcuReached);
		ChatClient_Disconnect_m6464E8DFF6E8A1C48DA0AD5F10CBAF8EF0EA846D(__this, 8, /*hidden argument*/NULL);
		// break;
		goto IL_0254;
	}

IL_0218:
	{
		// this.Disconnect(ChatDisconnectCause.ExceptionOnConnect);
		ChatClient_Disconnect_m6464E8DFF6E8A1C48DA0AD5F10CBAF8EF0EA846D(__this, 1, /*hidden argument*/NULL);
		// break;
		goto IL_0254;
	}

IL_0222:
	{
		// this.Disconnect(ChatDisconnectCause.Exception);
		ChatClient_Disconnect_m6464E8DFF6E8A1C48DA0AD5F10CBAF8EF0EA846D(__this, 6, /*hidden argument*/NULL);
		// break;
		goto IL_0254;
	}

IL_022c:
	{
		// this.Disconnect(ChatDisconnectCause.ServerTimeout);
		ChatClient_Disconnect_m6464E8DFF6E8A1C48DA0AD5F10CBAF8EF0EA846D(__this, 4, /*hidden argument*/NULL);
		// break;
		goto IL_0254;
	}

IL_0236:
	{
		// this.Disconnect(ChatDisconnectCause.DisconnectByServerLogic);
		ChatClient_Disconnect_m6464E8DFF6E8A1C48DA0AD5F10CBAF8EF0EA846D(__this, 2, /*hidden argument*/NULL);
		// break;
		goto IL_0254;
	}

IL_0240:
	{
		// this.Disconnect(ChatDisconnectCause.DisconnectByServerReasonUnknown);
		ChatClient_Disconnect_m6464E8DFF6E8A1C48DA0AD5F10CBAF8EF0EA846D(__this, 3, /*hidden argument*/NULL);
		// break;
		goto IL_0254;
	}

IL_024a:
	{
		// this.Disconnect(ChatDisconnectCause.ClientTimeout);
		ChatClient_Disconnect_m6464E8DFF6E8A1C48DA0AD5F10CBAF8EF0EA846D(__this, 5, /*hidden argument*/NULL);
		// break;
		goto IL_0254;
	}

IL_0254:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::TryAuthenticateOnNameServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_TryAuthenticateOnNameServer_m33BF926F8BFB9A816B4CF4D510E7C05D8FA887D1 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_TryAuthenticateOnNameServer_m33BF926F8BFB9A816B4CF4D510E7C05D8FA887D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (!this.didAuthenticate)
		bool L_0 = __this->get_didAuthenticate_17();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		// this.didAuthenticate = this.chatPeer.AuthenticateOnNameServer(this.AppId, this.AppVersion, this.chatRegion, this.AuthValues);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_2 = __this->get_chatPeer_15();
		String_t* L_3 = ChatClient_get_AppId_m4A04DF9B4147EE862D8011D4DABF01676FA9B46E_inline(__this, /*hidden argument*/NULL);
		String_t* L_4 = ChatClient_get_AppVersion_m78125B682E98DF9E51EBCA68E56339F1B0DF87F2_inline(__this, /*hidden argument*/NULL);
		String_t* L_5 = __this->get_chatRegion_4();
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_6 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_7 = ChatPeer_AuthenticateOnNameServer_m649578307A749D73AE5BD9A12E77342635BBE59B(L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		__this->set_didAuthenticate_17(L_7);
		// if (!this.didAuthenticate)
		bool L_8 = __this->get_didAuthenticate_17();
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_007b;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_10 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_10) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_007a;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Error calling OpAuthenticate! Did not work on NameServer. Check log output, AuthValues and if you're connected. State: {0}", this.State));
		RuntimeObject* L_12 = __this->get_listener_14();
		int32_t L_13 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(ChatState_tABA9DDB2C18934215ADACBF403DF9FD0A71D8B79_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral6FE4B9203298E5B74393E0818142DBF57DA03BB3, L_15, /*hidden argument*/NULL);
		NullCheck(L_12);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_12, 1, L_16);
	}

IL_007a:
	{
	}

IL_007b:
	{
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendChannelOperation(System.String[],System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendChannelOperation_mCF0D03E16706453CEE72FD38129FD6BAAF48F32B (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___channels0, uint8_t ___operation1, int32_t ___historyLength2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_SendChannelOperation_mCF0D03E16706453CEE72FD38129FD6BAAF48F32B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// Dictionary<byte, object> opParameters = new Dictionary<byte, object> { { (byte)ChatParameterCode.Channels, channels } };
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_0 = (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *)il2cpp_codegen_object_new(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA38BDB6209548343F5C21CA8CCEF000923157407(L_0, /*hidden argument*/Dictionary_2__ctor_mA38BDB6209548343F5C21CA8CCEF000923157407_RuntimeMethod_var);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_1 = L_0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = ___channels0;
		NullCheck(L_1);
		Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833(L_1, (uint8_t)0, (RuntimeObject *)(RuntimeObject *)L_2, /*hidden argument*/Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833_RuntimeMethod_var);
		V_0 = L_1;
		// if (historyLength != 0)
		int32_t L_3 = ___historyLength2;
		V_1 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// opParameters.Add((byte)ChatParameterCode.HistoryLength, historyLength);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_5 = V_0;
		int32_t L_6 = ___historyLength2;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833(L_5, (uint8_t)((int32_t)14), L_8, /*hidden argument*/Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833_RuntimeMethod_var);
	}

IL_0029:
	{
		// return this.chatPeer.SendOperation(operation, opParameters, SendOptions.SendReliable);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_9 = __this->get_chatPeer_15();
		uint8_t L_10 = ___operation1;
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_il2cpp_TypeInfo_var);
		SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  L_12 = ((SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_9);
		bool L_13 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *, SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  >::Invoke(16 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_9, L_10, L_11, L_12);
		V_2 = L_13;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Void Photon.Chat.ChatClient::HandlePrivateMessageEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandlePrivateMessageEvent_mF5FF0901611A6118801804D28B4B8A18B04F864C (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandlePrivateMessageEvent_mF5FF0901611A6118801804D28B4B8A18B04F864C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * V_4 = NULL;
	bool V_5 = false;
	String_t* V_6 = NULL;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	{
		// object message = (object)eventData.Parameters[(byte)ChatParameterCode.Message];
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_0 = ___eventData0;
		NullCheck(L_0);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2 = Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3(L_1, (uint8_t)3, /*hidden argument*/Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3_RuntimeMethod_var);
		V_0 = L_2;
		// string sender = (string)eventData.Parameters[(byte)ChatParameterCode.Sender];
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_3 = ___eventData0;
		NullCheck(L_3);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3(L_4, (uint8_t)5, /*hidden argument*/Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3_RuntimeMethod_var);
		V_1 = ((String_t*)CastclassSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		// int msgId = (int)eventData.Parameters[ChatParameterCode.MsgId];
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_6 = ___eventData0;
		NullCheck(L_6);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_7 = L_6->get_Parameters_1();
		NullCheck(L_7);
		RuntimeObject * L_8 = Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3(L_7, (uint8_t)8, /*hidden argument*/Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3_RuntimeMethod_var);
		V_2 = ((*(int32_t*)((int32_t*)UnBox(L_8, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var))));
		// if (this.UserId != null && this.UserId.Equals(sender))
		String_t* L_9 = ChatClient_get_UserId_m8C1B174937265B43798E16BE66A0EE4664EBE372(__this, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_10 = ChatClient_get_UserId_m8C1B174937265B43798E16BE66A0EE4664EBE372(__this, /*hidden argument*/NULL);
		String_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_10, L_11, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_12));
		goto IL_0049;
	}

IL_0048:
	{
		G_B3_0 = 0;
	}

IL_0049:
	{
		V_5 = (bool)G_B3_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0073;
		}
	}
	{
		// string target = (string)eventData.Parameters[(byte)ChatParameterCode.UserId];
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_14 = ___eventData0;
		NullCheck(L_14);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_15 = L_14->get_Parameters_1();
		NullCheck(L_15);
		RuntimeObject * L_16 = Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3(L_15, (uint8_t)((int32_t)225), /*hidden argument*/Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3_RuntimeMethod_var);
		V_6 = ((String_t*)CastclassSealed((RuntimeObject*)L_16, String_t_il2cpp_TypeInfo_var));
		// channelName = this.GetPrivateChannelNameByUser(target);
		String_t* L_17 = V_6;
		String_t* L_18 = ChatClient_GetPrivateChannelNameByUser_m8DD9568D4F1E6424BD27D7B3F66D2B71F78E1564(__this, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		goto IL_007d;
	}

IL_0073:
	{
		// channelName = this.GetPrivateChannelNameByUser(sender);
		String_t* L_19 = V_1;
		String_t* L_20 = ChatClient_GetPrivateChannelNameByUser_m8DD9568D4F1E6424BD27D7B3F66D2B71F78E1564(__this, L_19, /*hidden argument*/NULL);
		V_3 = L_20;
	}

IL_007d:
	{
		// if (!this.PrivateChannels.TryGetValue(channelName, out channel))
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_21 = __this->get_PrivateChannels_12();
		String_t* L_22 = V_3;
		NullCheck(L_21);
		bool L_23 = Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183(L_21, L_22, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)(&V_4), /*hidden argument*/Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00c9;
		}
	}
	{
		// channel = new ChatChannel(channelName);
		String_t* L_25 = V_3;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_26 = (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 *)il2cpp_codegen_object_new(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579_il2cpp_TypeInfo_var);
		ChatChannel__ctor_m34ED969B48E31AD8CC5B757EE1BF8AA760D7C342(L_26, L_25, /*hidden argument*/NULL);
		V_4 = L_26;
		// channel.IsPrivate = true;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_27 = V_4;
		NullCheck(L_27);
		ChatChannel_set_IsPrivate_mF639F430B4D39B8E99CD0592F5378BBAF4389261_inline(L_27, (bool)1, /*hidden argument*/NULL);
		// channel.MessageLimit = this.MessageLimit;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_28 = V_4;
		int32_t L_29 = __this->get_MessageLimit_10();
		NullCheck(L_28);
		L_28->set_MessageLimit_3(L_29);
		// this.PrivateChannels.Add(channel.Name, channel);
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_30 = __this->get_PrivateChannels_12();
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_31 = V_4;
		NullCheck(L_31);
		String_t* L_32 = L_31->get_Name_0();
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_33 = V_4;
		NullCheck(L_30);
		Dictionary_2_Add_m4AFFFA90D1EB7D3A1CD220E1EAD75C00973C64D5(L_30, L_32, L_33, /*hidden argument*/Dictionary_2_Add_m4AFFFA90D1EB7D3A1CD220E1EAD75C00973C64D5_RuntimeMethod_var);
	}

IL_00c9:
	{
		// channel.Add(sender, message, msgId);
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_34 = V_4;
		String_t* L_35 = V_1;
		RuntimeObject * L_36 = V_0;
		int32_t L_37 = V_2;
		NullCheck(L_34);
		ChatChannel_Add_m53FC954539B7E53D859791C395149D4D0FC1E008(L_34, L_35, L_36, L_37, /*hidden argument*/NULL);
		// this.listener.OnPrivateMessage(sender, message, channelName);
		RuntimeObject* L_38 = __this->get_listener_14();
		String_t* L_39 = V_1;
		RuntimeObject * L_40 = V_0;
		String_t* L_41 = V_3;
		NullCheck(L_38);
		InterfaceActionInvoker3< String_t*, RuntimeObject *, String_t* >::Invoke(5 /* System.Void Photon.Chat.IChatClientListener::OnPrivateMessage(System.String,System.Object,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_38, L_39, L_40, L_41);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleChatMessagesEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleChatMessagesEvent_m5985D85D12982CC2BE98DFAC410F27A83C96E539 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleChatMessagesEvent_m5985D85D12982CC2BE98DFAC410F27A83C96E539_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	{
		// object[] messages = (object[])eventData.Parameters[(byte)ChatParameterCode.Messages];
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_0 = ___eventData0;
		NullCheck(L_0);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2 = Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3(L_1, (uint8_t)2, /*hidden argument*/Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3_RuntimeMethod_var);
		V_0 = ((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_2, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var));
		// string[] senders = (string[])eventData.Parameters[(byte)ChatParameterCode.Senders];
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_3 = ___eventData0;
		NullCheck(L_3);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3(L_4, (uint8_t)4, /*hidden argument*/Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3_RuntimeMethod_var);
		V_1 = ((StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)Castclass((RuntimeObject*)L_5, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var));
		// string channelName = (string)eventData.Parameters[(byte)ChatParameterCode.Channel];
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_6 = ___eventData0;
		NullCheck(L_6);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_7 = L_6->get_Parameters_1();
		NullCheck(L_7);
		RuntimeObject * L_8 = Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3(L_7, (uint8_t)1, /*hidden argument*/Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3_RuntimeMethod_var);
		V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
		// int lastMsgId = (int)eventData.Parameters[ChatParameterCode.MsgId];
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_9 = ___eventData0;
		NullCheck(L_9);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_10 = L_9->get_Parameters_1();
		NullCheck(L_10);
		RuntimeObject * L_11 = Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3(L_10, (uint8_t)8, /*hidden argument*/Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3_RuntimeMethod_var);
		V_3 = ((*(int32_t*)((int32_t*)UnBox(L_11, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var))));
		// if (!this.PublicChannels.TryGetValue(channelName, out channel))
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_12 = __this->get_PublicChannels_11();
		String_t* L_13 = V_2;
		NullCheck(L_12);
		bool L_14 = Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183(L_12, L_13, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)(&V_4), /*hidden argument*/Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0094;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_16 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)((((int32_t)L_16) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0092;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Channel " + channelName + " for incoming message event not found.");
		RuntimeObject* L_18 = __this->get_listener_14();
		String_t* L_19 = V_2;
		String_t* L_20 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral8F1AC3BB2037F1143E5E5853C9E7E3990ABDFDEE, L_19, _stringLiteral187DB917BF8928E28C35D9C1A3ACCC7FFE7357D3, /*hidden argument*/NULL);
		NullCheck(L_18);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_18, 2, L_20);
	}

IL_0092:
	{
		// return;
		goto IL_00ae;
	}

IL_0094:
	{
		// channel.Add(senders, messages, lastMsgId);
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_21 = V_4;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_22 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = V_0;
		int32_t L_24 = V_3;
		NullCheck(L_21);
		ChatChannel_Add_m8DD77CEE6F254A2E5C91FEE0A30A93DC8A6D4F05(L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		// this.listener.OnGetMessages(channelName, senders, messages);
		RuntimeObject* L_25 = __this->get_listener_14();
		String_t* L_26 = V_2;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_27 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = V_0;
		NullCheck(L_25);
		InterfaceActionInvoker3< String_t*, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void Photon.Chat.IChatClientListener::OnGetMessages(System.String,System.String[],System.Object[]) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_25, L_26, L_27, L_28);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleSubscribeEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleSubscribeEvent_m6A4E1BA574DC698494D8F206DC8D2103758720C6 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleSubscribeEvent_m6A4E1BA574DC698494D8F206DC8D2103758720C6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	String_t* V_7 = NULL;
	ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_12 = NULL;
	int32_t V_13 = 0;
	bool V_14 = false;
	String_t* V_15 = NULL;
	ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * V_16 = NULL;
	bool V_17 = false;
	bool V_18 = false;
	{
		// string[] channelsInResponse = (string[])eventData.Parameters[ChatParameterCode.Channels];
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_0 = ___eventData0;
		NullCheck(L_0);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2 = Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3(L_1, (uint8_t)0, /*hidden argument*/Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3_RuntimeMethod_var);
		V_0 = ((StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)Castclass((RuntimeObject*)L_2, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var));
		// bool[] results = (bool[])eventData.Parameters[ChatParameterCode.SubscribeResults];
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_3 = ___eventData0;
		NullCheck(L_3);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3(L_4, (uint8_t)((int32_t)15), /*hidden argument*/Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3_RuntimeMethod_var);
		V_1 = ((BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040*)Castclass((RuntimeObject*)L_5, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040_il2cpp_TypeInfo_var));
		// if (eventData.Parameters.TryGetValue(ChatParameterCode.Properties, out temp))
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_6 = ___eventData0;
		NullCheck(L_6);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_7 = L_6->get_Parameters_1();
		NullCheck(L_7);
		bool L_8 = Dictionary_2_TryGetValue_m8B39ED539B994181791D0F9DBD399F7A90AF5841(L_7, (uint8_t)((int32_t)22), (RuntimeObject **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m8B39ED539B994181791D0F9DBD399F7A90AF5841_RuntimeMethod_var);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_013e;
		}
	}
	{
		// Dictionary<object, object> channelProperties = temp as Dictionary<object, object>;
		RuntimeObject * L_10 = V_2;
		V_4 = ((Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)IsInstClass((RuntimeObject*)L_10, Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA_il2cpp_TypeInfo_var));
		// if (channelsInResponse.Length == 1)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = V_0;
		NullCheck(L_11);
		V_5 = (bool)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))) == ((int32_t)1))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_012b;
		}
	}
	{
		// if (results[0])
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14 = 0;
		uint8_t L_15 = (uint8_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_6 = (bool)L_15;
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_0118;
		}
	}
	{
		// string channelName = channelsInResponse[0];
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = 0;
		String_t* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		// if (this.PublicChannels.TryGetValue(channelName, out channel))
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_20 = __this->get_PublicChannels_11();
		String_t* L_21 = V_7;
		NullCheck(L_20);
		bool L_22 = Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183(L_20, L_21, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)(&V_8), /*hidden argument*/Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183_RuntimeMethod_var);
		V_9 = L_22;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_0095;
		}
	}
	{
		// channel.Subscribers.Clear();
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_24 = V_8;
		NullCheck(L_24);
		HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * L_25 = L_24->get_Subscribers_9();
		NullCheck(L_25);
		HashSet_1_Clear_m90ADC6AC2A4FBFC20B0110DDBB92A66F0FAA5032(L_25, /*hidden argument*/HashSet_1_Clear_m90ADC6AC2A4FBFC20B0110DDBB92A66F0FAA5032_RuntimeMethod_var);
		// channel.ClearProperties();
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_26 = V_8;
		NullCheck(L_26);
		ChatChannel_ClearProperties_m7999623EAE9437976EB38F9D5EB3C510FD411CAD(L_26, /*hidden argument*/NULL);
		goto IL_00c2;
	}

IL_0095:
	{
		// channel = new ChatChannel(channelName);
		String_t* L_27 = V_7;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_28 = (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 *)il2cpp_codegen_object_new(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579_il2cpp_TypeInfo_var);
		ChatChannel__ctor_m34ED969B48E31AD8CC5B757EE1BF8AA760D7C342(L_28, L_27, /*hidden argument*/NULL);
		V_8 = L_28;
		// channel.MessageLimit = this.MessageLimit;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_29 = V_8;
		int32_t L_30 = __this->get_MessageLimit_10();
		NullCheck(L_29);
		L_29->set_MessageLimit_3(L_30);
		// this.PublicChannels.Add(channel.Name, channel);
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_31 = __this->get_PublicChannels_11();
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_32 = V_8;
		NullCheck(L_32);
		String_t* L_33 = L_32->get_Name_0();
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_34 = V_8;
		NullCheck(L_31);
		Dictionary_2_Add_m4AFFFA90D1EB7D3A1CD220E1EAD75C00973C64D5(L_31, L_33, L_34, /*hidden argument*/Dictionary_2_Add_m4AFFFA90D1EB7D3A1CD220E1EAD75C00973C64D5_RuntimeMethod_var);
	}

IL_00c2:
	{
		// channel.ReadProperties(channelProperties);
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_35 = V_8;
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_36 = V_4;
		NullCheck(L_35);
		ChatChannel_ReadProperties_m80EB77137366A51ABAF018AACFDE3B649F84B9D5(L_35, L_36, /*hidden argument*/NULL);
		// if (channel.PublishSubscribers)
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_37 = V_8;
		NullCheck(L_37);
		bool L_38 = ChatChannel_get_PublishSubscribers_m1BEE7A689ABCEB4BAB38D314F563CD672699F5CA_inline(L_37, /*hidden argument*/NULL);
		V_10 = L_38;
		bool L_39 = V_10;
		if (!L_39)
		{
			goto IL_0117;
		}
	}
	{
		// channel.Subscribers.Add(this.UserId);
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_40 = V_8;
		NullCheck(L_40);
		HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * L_41 = L_40->get_Subscribers_9();
		String_t* L_42 = ChatClient_get_UserId_m8C1B174937265B43798E16BE66A0EE4664EBE372(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		HashSet_1_Add_mD0E40F9E35B3EEAED652C38D1784046EAD4057E1(L_41, L_42, /*hidden argument*/HashSet_1_Add_mD0E40F9E35B3EEAED652C38D1784046EAD4057E1_RuntimeMethod_var);
		// if (eventData.Parameters.TryGetValue(ChatParameterCode.ChannelSubscribers, out temp))
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_43 = ___eventData0;
		NullCheck(L_43);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_44 = L_43->get_Parameters_1();
		NullCheck(L_44);
		bool L_45 = Dictionary_2_TryGetValue_m8B39ED539B994181791D0F9DBD399F7A90AF5841(L_44, (uint8_t)((int32_t)23), (RuntimeObject **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m8B39ED539B994181791D0F9DBD399F7A90AF5841_RuntimeMethod_var);
		V_11 = L_45;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0116;
		}
	}
	{
		// string[] subscribers = temp as string[];
		RuntimeObject * L_47 = V_2;
		V_12 = ((StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)IsInst((RuntimeObject*)L_47, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var));
		// channel.AddSubscribers(subscribers);
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_48 = V_8;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_49 = V_12;
		NullCheck(L_48);
		ChatChannel_AddSubscribers_m636C057698F6796380DF44B449F409E269A06219(L_48, L_49, /*hidden argument*/NULL);
	}

IL_0116:
	{
	}

IL_0117:
	{
	}

IL_0118:
	{
		// this.listener.OnSubscribed(channelsInResponse, results);
		RuntimeObject* L_50 = __this->get_listener_14();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_51 = V_0;
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_52 = V_1;
		NullCheck(L_50);
		InterfaceActionInvoker2< StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* >::Invoke(6 /* System.Void Photon.Chat.IChatClientListener::OnSubscribed(System.String[],System.Boolean[]) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_50, L_51, L_52);
		// return;
		goto IL_01bd;
	}

IL_012b:
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Unexpected: Subscribe event for multiple channels with channels properties returned. Ignoring properties.");
		RuntimeObject* L_53 = __this->get_listener_14();
		NullCheck(L_53);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_53, 1, _stringLiteral31A8C2A4274E13FF28BD8BEBFAAD8D2908604F0B);
	}

IL_013e:
	{
		// for (int i = 0; i < channelsInResponse.Length; i++)
		V_13 = 0;
		goto IL_01a2;
	}

IL_0143:
	{
		// if (results[i])
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_54 = V_1;
		int32_t L_55 = V_13;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		uint8_t L_57 = (uint8_t)(L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_14 = (bool)L_57;
		bool L_58 = V_14;
		if (!L_58)
		{
			goto IL_019b;
		}
	}
	{
		// string channelName = channelsInResponse[i];
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_59 = V_0;
		int32_t L_60 = V_13;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		String_t* L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_15 = L_62;
		// if (!this.PublicChannels.TryGetValue(channelName, out channel))
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_63 = __this->get_PublicChannels_11();
		String_t* L_64 = V_15;
		NullCheck(L_63);
		bool L_65 = Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183(L_63, L_64, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)(&V_16), /*hidden argument*/Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183_RuntimeMethod_var);
		V_17 = (bool)((((int32_t)L_65) == ((int32_t)0))? 1 : 0);
		bool L_66 = V_17;
		if (!L_66)
		{
			goto IL_019a;
		}
	}
	{
		// channel = new ChatChannel(channelName);
		String_t* L_67 = V_15;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_68 = (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 *)il2cpp_codegen_object_new(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579_il2cpp_TypeInfo_var);
		ChatChannel__ctor_m34ED969B48E31AD8CC5B757EE1BF8AA760D7C342(L_68, L_67, /*hidden argument*/NULL);
		V_16 = L_68;
		// channel.MessageLimit = this.MessageLimit;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_69 = V_16;
		int32_t L_70 = __this->get_MessageLimit_10();
		NullCheck(L_69);
		L_69->set_MessageLimit_3(L_70);
		// this.PublicChannels.Add(channel.Name, channel);
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_71 = __this->get_PublicChannels_11();
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_72 = V_16;
		NullCheck(L_72);
		String_t* L_73 = L_72->get_Name_0();
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_74 = V_16;
		NullCheck(L_71);
		Dictionary_2_Add_m4AFFFA90D1EB7D3A1CD220E1EAD75C00973C64D5(L_71, L_73, L_74, /*hidden argument*/Dictionary_2_Add_m4AFFFA90D1EB7D3A1CD220E1EAD75C00973C64D5_RuntimeMethod_var);
	}

IL_019a:
	{
	}

IL_019b:
	{
		// for (int i = 0; i < channelsInResponse.Length; i++)
		int32_t L_75 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
	}

IL_01a2:
	{
		// for (int i = 0; i < channelsInResponse.Length; i++)
		int32_t L_76 = V_13;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_77 = V_0;
		NullCheck(L_77);
		V_18 = (bool)((((int32_t)L_76) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_77)->max_length))))))? 1 : 0);
		bool L_78 = V_18;
		if (L_78)
		{
			goto IL_0143;
		}
	}
	{
		// this.listener.OnSubscribed(channelsInResponse, results);
		RuntimeObject* L_79 = __this->get_listener_14();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_80 = V_0;
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_81 = V_1;
		NullCheck(L_79);
		InterfaceActionInvoker2< StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* >::Invoke(6 /* System.Void Photon.Chat.IChatClientListener::OnSubscribed(System.String[],System.Boolean[]) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_79, L_80, L_81);
	}

IL_01bd:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleUnsubscribeEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleUnsubscribeEvent_m733D6DBDEBA8004AFA8CA4164A658F694C3A4A36 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleUnsubscribeEvent_m733D6DBDEBA8004AFA8CA4164A658F694C3A4A36_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	bool V_3 = false;
	{
		// string[] channelsInRequest = (string[])eventData[ChatParameterCode.Channels];
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_0 = ___eventData0;
		NullCheck(L_0);
		RuntimeObject * L_1 = EventData_get_Item_mF48FFDF3F59813E5E59A3A04A795651783D30978(L_0, (uint8_t)0, /*hidden argument*/NULL);
		V_0 = ((StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)Castclass((RuntimeObject*)L_1, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var));
		// for (int i = 0; i < channelsInRequest.Length; i++)
		V_1 = 0;
		goto IL_0036;
	}

IL_0012:
	{
		// string channelName = channelsInRequest[i];
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// this.PublicChannels.Remove(channelName);
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_6 = __this->get_PublicChannels_11();
		String_t* L_7 = V_2;
		NullCheck(L_6);
		Dictionary_2_Remove_m7696A01224568B5D3C5E220A8BF743D2240A14FD(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m7696A01224568B5D3C5E220A8BF743D2240A14FD_RuntimeMethod_var);
		// this.PublicChannelsUnsubscribing.Remove(channelName);
		HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * L_8 = __this->get_PublicChannelsUnsubscribing_13();
		String_t* L_9 = V_2;
		NullCheck(L_8);
		HashSet_1_Remove_mD6EE52239731ACBFBC21335EF4D16CEE6F597F31(L_8, L_9, /*hidden argument*/HashSet_1_Remove_mD6EE52239731ACBFBC21335EF4D16CEE6F597F31_RuntimeMethod_var);
		// for (int i = 0; i < channelsInRequest.Length; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0036:
	{
		// for (int i = 0; i < channelsInRequest.Length; i++)
		int32_t L_11 = V_1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = V_0;
		NullCheck(L_12);
		V_3 = (bool)((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_0012;
		}
	}
	{
		// this.listener.OnUnsubscribed(channelsInRequest);
		RuntimeObject* L_14 = __this->get_listener_14();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = V_0;
		NullCheck(L_14);
		InterfaceActionInvoker1< StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* >::Invoke(7 /* System.Void Photon.Chat.IChatClientListener::OnUnsubscribed(System.String[]) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_14, L_15);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleAuthResponse(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleAuthResponse_m149DFF8B5817172ED398B4B77489A1314254F9B4 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * ___operationResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleAuthResponse_m149DFF8B5817172ED398B4B77489A1314254F9B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	String_t* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int16_t V_11 = 0;
	bool V_12 = false;
	{
		// if (this.DebugOut >= DebugLevel.INFO)
		uint8_t L_0 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.INFO, operationResponse.ToStringFull() + " on: " + this.chatPeer.NameServerAddress);
		RuntimeObject* L_2 = __this->get_listener_14();
		OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * L_3 = ___operationResponse0;
		NullCheck(L_3);
		String_t* L_4 = OperationResponse_ToStringFull_m16B15A498C495871A46643587A5AB33E261CD2F9(L_3, /*hidden argument*/NULL);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_5 = __this->get_chatPeer_15();
		NullCheck(L_5);
		String_t* L_6 = ChatPeer_get_NameServerAddress_m1534143120EC03973CCA84F8BCE3DB5BB66FFE02(L_5, /*hidden argument*/NULL);
		String_t* L_7 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_4, _stringLiteral71EBF5DA4A7DF5D098F0A1BC60250ECE10DBEC80, L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_2, 3, L_7);
	}

IL_003b:
	{
		// if (operationResponse.ReturnCode == 0)
		OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * L_8 = ___operationResponse0;
		NullCheck(L_8);
		int16_t L_9 = L_8->get_ReturnCode_1();
		V_1 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_01f1;
		}
	}
	{
		// if (this.State == ChatState.ConnectedToNameServer)
		int32_t L_11 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_11) == ((int32_t)2))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_017d;
		}
	}
	{
		// this.State = ChatState.Authenticated;
		ChatClient_set_State_mED11489E9F367AE8FB9B8E33271AF7B22DEB51B6_inline(__this, 4, /*hidden argument*/NULL);
		// this.listener.OnChatStateChange(this.State);
		RuntimeObject* L_13 = __this->get_listener_14();
		int32_t L_14 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Photon.Chat.IChatClientListener::OnChatStateChange(Photon.Chat.ChatState) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_13, L_14);
		// if (operationResponse.Parameters.ContainsKey(ParameterCode.Secret))
		OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * L_15 = ___operationResponse0;
		NullCheck(L_15);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_16 = L_15->get_Parameters_3();
		NullCheck(L_16);
		bool L_17 = Dictionary_2_ContainsKey_m6A2F931BE7FC2BF939795D60C2CA914922E21BA2(L_16, (uint8_t)((int32_t)221), /*hidden argument*/Dictionary_2_ContainsKey_m6A2F931BE7FC2BF939795D60C2CA914922E21BA2_RuntimeMethod_var);
		V_3 = L_17;
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_00eb;
		}
	}
	{
		// if (this.AuthValues == null)
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_19 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 *)L_19) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00a9;
		}
	}
	{
		// this.AuthValues = new AuthenticationValues();
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_21 = (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 *)il2cpp_codegen_object_new(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78_il2cpp_TypeInfo_var);
		AuthenticationValues__ctor_m0353B82A64DB8EB949ADBC7FB540F2CBA82766C7(L_21, /*hidden argument*/NULL);
		ChatClient_set_AuthValues_m2BB4034D2C3AB2622E67F1E9166E8485957E8BC2_inline(__this, L_21, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		// this.AuthValues.Token = operationResponse[ParameterCode.Secret] as string;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_22 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * L_23 = ___operationResponse0;
		NullCheck(L_23);
		RuntimeObject * L_24 = OperationResponse_get_Item_m5DE0E22A3D043CEBB7096DE04D02AD0F263CE469(L_23, (uint8_t)((int32_t)221), /*hidden argument*/NULL);
		NullCheck(L_22);
		AuthenticationValues_set_Token_m8C003146B195901AB47692F9BED186E857D7329E_inline(L_22, ((String_t*)IsInstSealed((RuntimeObject*)L_24, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// this.FrontendAddress = (string)operationResponse[ParameterCode.Address];
		OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * L_25 = ___operationResponse0;
		NullCheck(L_25);
		RuntimeObject * L_26 = OperationResponse_get_Item_m5DE0E22A3D043CEBB7096DE04D02AD0F263CE469(L_25, (uint8_t)((int32_t)230), /*hidden argument*/NULL);
		ChatClient_set_FrontendAddress_m07693D7264F012BF7FF2331F6773996DDEB50525_inline(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_26, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// this.chatPeer.Disconnect();
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_27 = __this->get_chatPeer_15();
		NullCheck(L_27);
		VirtActionInvoker0::Invoke(9 /* System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect() */, L_27);
		goto IL_0113;
	}

IL_00eb:
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_28 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_0112;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "No secret in authentication response.");
		RuntimeObject* L_30 = __this->get_listener_14();
		NullCheck(L_30);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_30, 1, _stringLiteral9ECB827BD6D80841068E0AE354CABBDE1FED45C0);
	}

IL_0112:
	{
	}

IL_0113:
	{
		// if (operationResponse.Parameters.ContainsKey(ParameterCode.UserId))
		OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * L_31 = ___operationResponse0;
		NullCheck(L_31);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_32 = L_31->get_Parameters_3();
		NullCheck(L_32);
		bool L_33 = Dictionary_2_ContainsKey_m6A2F931BE7FC2BF939795D60C2CA914922E21BA2(L_32, (uint8_t)((int32_t)225), /*hidden argument*/Dictionary_2_ContainsKey_m6A2F931BE7FC2BF939795D60C2CA914922E21BA2_RuntimeMethod_var);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_017a;
		}
	}
	{
		// string incomingId = operationResponse.Parameters[ParameterCode.UserId] as string;
		OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * L_35 = ___operationResponse0;
		NullCheck(L_35);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_36 = L_35->get_Parameters_3();
		NullCheck(L_36);
		RuntimeObject * L_37 = Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3(L_36, (uint8_t)((int32_t)225), /*hidden argument*/Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3_RuntimeMethod_var);
		V_7 = ((String_t*)IsInstSealed((RuntimeObject*)L_37, String_t_il2cpp_TypeInfo_var));
		// if (!string.IsNullOrEmpty(incomingId))
		String_t* L_38 = V_7;
		bool L_39 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_38, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0179;
		}
	}
	{
		// this.UserId = incomingId;
		String_t* L_41 = V_7;
		ChatClient_set_UserId_m18307D5CD943FA01E3569174D4D4C9CCAA9BE4C1(__this, L_41, /*hidden argument*/NULL);
		// this.listener.DebugReturn(DebugLevel.INFO, string.Format("Received your UserID from server. Updating local value to: {0}", this.UserId));
		RuntimeObject* L_42 = __this->get_listener_14();
		String_t* L_43 = ChatClient_get_UserId_m8C1B174937265B43798E16BE66A0EE4664EBE372(__this, /*hidden argument*/NULL);
		String_t* L_44 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral94B1E34A1FC3B7B63B014BAD58E50115CFB5FC7D, L_43, /*hidden argument*/NULL);
		NullCheck(L_42);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_42, 3, L_44);
	}

IL_0179:
	{
	}

IL_017a:
	{
		goto IL_01eb;
	}

IL_017d:
	{
		// else if (this.State == ChatState.ConnectingToFrontEnd)
		int32_t L_45 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)L_45) == ((int32_t)6))? 1 : 0);
		bool L_46 = V_9;
		if (!L_46)
		{
			goto IL_01eb;
		}
	}
	{
		// this.State = ChatState.ConnectedToFrontEnd;
		ChatClient_set_State_mED11489E9F367AE8FB9B8E33271AF7B22DEB51B6_inline(__this, 7, /*hidden argument*/NULL);
		// this.listener.OnChatStateChange(this.State);
		RuntimeObject* L_47 = __this->get_listener_14();
		int32_t L_48 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_47);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Photon.Chat.IChatClientListener::OnChatStateChange(Photon.Chat.ChatState) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_47, L_48);
		// this.listener.OnConnected();
		RuntimeObject* L_49 = __this->get_listener_14();
		NullCheck(L_49);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Photon.Chat.IChatClientListener::OnConnected() */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_49);
		// if (statusToSetWhenConnected.HasValue)
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * L_50 = __this->get_address_of_statusToSetWhenConnected_18();
		bool L_51 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)L_50, /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		V_10 = L_51;
		bool L_52 = V_10;
		if (!L_52)
		{
			goto IL_01ea;
		}
	}
	{
		// SetOnlineStatus(statusToSetWhenConnected.Value, messageToSetWhenConnected);
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * L_53 = __this->get_address_of_statusToSetWhenConnected_18();
		int32_t L_54 = Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)L_53, /*hidden argument*/Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_RuntimeMethod_var);
		RuntimeObject * L_55 = __this->get_messageToSetWhenConnected_19();
		ChatClient_SetOnlineStatus_mA768DE355902F1F4CE336618560A1F8CA97C3B5A(__this, L_54, L_55, /*hidden argument*/NULL);
		// statusToSetWhenConnected = null;
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * L_56 = __this->get_address_of_statusToSetWhenConnected_18();
		il2cpp_codegen_initobj(L_56, sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
	}

IL_01ea:
	{
	}

IL_01eb:
	{
		goto IL_02c5;
	}

IL_01f1:
	{
		// switch (operationResponse.ReturnCode)
		OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * L_57 = ___operationResponse0;
		NullCheck(L_57);
		int16_t L_58 = L_57->get_ReturnCode_1();
		V_11 = L_58;
		int16_t L_59 = V_11;
		if ((((int32_t)L_59) == ((int32_t)((int32_t)-3))))
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0202;
	}

IL_0202:
	{
		int16_t L_60 = V_11;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_60, (int32_t)((int32_t)32753))))
		{
			case 0:
			{
				goto IL_0265;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_023a;
			}
			case 3:
			{
				goto IL_0245;
			}
			case 4:
			{
				goto IL_0250;
			}
		}
	}
	{
		goto IL_0225;
	}

IL_0225:
	{
		int16_t L_61 = V_11;
		if ((((int32_t)L_61) == ((int32_t)((int32_t)32767))))
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0270;
	}

IL_0230:
	{
		// this.DisconnectedCause = ChatDisconnectCause.InvalidAuthentication;
		ChatClient_set_DisconnectedCause_m89F55BFCB40ABDFDCC31601DDF22E6B7AD75D3EE_inline(__this, 7, /*hidden argument*/NULL);
		// break;
		goto IL_0270;
	}

IL_023a:
	{
		// this.DisconnectedCause = ChatDisconnectCause.CustomAuthenticationFailed;
		ChatClient_set_DisconnectedCause_m89F55BFCB40ABDFDCC31601DDF22E6B7AD75D3EE_inline(__this, ((int32_t)11), /*hidden argument*/NULL);
		// break;
		goto IL_0270;
	}

IL_0245:
	{
		// this.DisconnectedCause = ChatDisconnectCause.InvalidRegion;
		ChatClient_set_DisconnectedCause_m89F55BFCB40ABDFDCC31601DDF22E6B7AD75D3EE_inline(__this, ((int32_t)9), /*hidden argument*/NULL);
		// break;
		goto IL_0270;
	}

IL_0250:
	{
		// this.DisconnectedCause = ChatDisconnectCause.MaxCcuReached;
		ChatClient_set_DisconnectedCause_m89F55BFCB40ABDFDCC31601DDF22E6B7AD75D3EE_inline(__this, 8, /*hidden argument*/NULL);
		// break;
		goto IL_0270;
	}

IL_025a:
	{
		// this.DisconnectedCause = ChatDisconnectCause.OperationNotAllowedInCurrentState;
		ChatClient_set_DisconnectedCause_m89F55BFCB40ABDFDCC31601DDF22E6B7AD75D3EE_inline(__this, ((int32_t)10), /*hidden argument*/NULL);
		// break;
		goto IL_0270;
	}

IL_0265:
	{
		// this.DisconnectedCause = ChatDisconnectCause.AuthenticationTicketExpired;
		ChatClient_set_DisconnectedCause_m89F55BFCB40ABDFDCC31601DDF22E6B7AD75D3EE_inline(__this, ((int32_t)12), /*hidden argument*/NULL);
		// break;
		goto IL_0270;
	}

IL_0270:
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_62 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_12 = (bool)((((int32_t)((((int32_t)L_62) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_02b7;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("{0} ClientState: {1} ServerAddress: {2}", operationResponse.ToStringFull(), this.State, this.chatPeer.ServerAddress));
		RuntimeObject* L_64 = __this->get_listener_14();
		OperationResponse_tB8C079032D5118CA917D66025D53E39EA3BA4C15 * L_65 = ___operationResponse0;
		NullCheck(L_65);
		String_t* L_66 = OperationResponse_ToStringFull_m16B15A498C495871A46643587A5AB33E261CD2F9(L_65, /*hidden argument*/NULL);
		int32_t L_67 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		int32_t L_68 = L_67;
		RuntimeObject * L_69 = Box(ChatState_tABA9DDB2C18934215ADACBF403DF9FD0A71D8B79_il2cpp_TypeInfo_var, &L_68);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_70 = __this->get_chatPeer_15();
		NullCheck(L_70);
		String_t* L_71 = PhotonPeer_get_ServerAddress_mBB7F348D12881D815323E331CCB89023E6522E01(L_70, /*hidden argument*/NULL);
		String_t* L_72 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteralE253B0891DF30C474657E7D3318961A841E3E960, L_66, L_69, L_71, /*hidden argument*/NULL);
		NullCheck(L_64);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_64, 1, L_72);
	}

IL_02b7:
	{
		// this.Disconnect(this.DisconnectedCause);
		int32_t L_73 = ChatClient_get_DisconnectedCause_m57D498FAFF15DE6D6ED299021BAD2EEE35B2EEFC_inline(__this, /*hidden argument*/NULL);
		ChatClient_Disconnect_m6464E8DFF6E8A1C48DA0AD5F10CBAF8EF0EA846D(__this, L_73, /*hidden argument*/NULL);
	}

IL_02c5:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleStatusUpdate(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleStatusUpdate_m7A3E87E54FFD4A90EBB43311321051397A4DED55 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleStatusUpdate_m7A3E87E54FFD4A90EBB43311321051397A4DED55_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		// string user = (string)eventData.Parameters[ChatParameterCode.Sender];
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_0 = ___eventData0;
		NullCheck(L_0);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2 = Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3(L_1, (uint8_t)5, /*hidden argument*/Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3_RuntimeMethod_var);
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		// int status = (int)eventData.Parameters[ChatParameterCode.Status];
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_3 = ___eventData0;
		NullCheck(L_3);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3(L_4, (uint8_t)((int32_t)10), /*hidden argument*/Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3_RuntimeMethod_var);
		V_1 = ((*(int32_t*)((int32_t*)UnBox(L_5, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var))));
		// object message = null;
		V_2 = NULL;
		// bool gotMessage = eventData.Parameters.ContainsKey(ChatParameterCode.Message);
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_6 = ___eventData0;
		NullCheck(L_6);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_7 = L_6->get_Parameters_1();
		NullCheck(L_7);
		bool L_8 = Dictionary_2_ContainsKey_m6A2F931BE7FC2BF939795D60C2CA914922E21BA2(L_7, (uint8_t)3, /*hidden argument*/Dictionary_2_ContainsKey_m6A2F931BE7FC2BF939795D60C2CA914922E21BA2_RuntimeMethod_var);
		V_3 = L_8;
		// if (gotMessage)
		bool L_9 = V_3;
		V_4 = L_9;
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		// message = eventData.Parameters[ChatParameterCode.Message];
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_11 = ___eventData0;
		NullCheck(L_11);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_12 = L_11->get_Parameters_1();
		NullCheck(L_12);
		RuntimeObject * L_13 = Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3(L_12, (uint8_t)3, /*hidden argument*/Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3_RuntimeMethod_var);
		V_2 = L_13;
	}

IL_004b:
	{
		// this.listener.OnStatusUpdate(user, status, gotMessage, message);
		RuntimeObject* L_14 = __this->get_listener_14();
		String_t* L_15 = V_0;
		int32_t L_16 = V_1;
		bool L_17 = V_3;
		RuntimeObject * L_18 = V_2;
		NullCheck(L_14);
		InterfaceActionInvoker4< String_t*, int32_t, bool, RuntimeObject * >::Invoke(8 /* System.Void Photon.Chat.IChatClientListener::OnStatusUpdate(System.String,System.Int32,System.Boolean,System.Object) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_14, L_15, L_16, L_17, L_18);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::ConnectToFrontEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_ConnectToFrontEnd_m722E63C3D49C19C27434B0157D91906E934C5544 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_ConnectToFrontEnd_m722E63C3D49C19C27434B0157D91906E934C5544_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// this.State = ChatState.ConnectingToFrontEnd;
		ChatClient_set_State_mED11489E9F367AE8FB9B8E33271AF7B22DEB51B6_inline(__this, 6, /*hidden argument*/NULL);
		// if (this.DebugOut >= DebugLevel.INFO)
		uint8_t L_0 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.INFO, "Connecting to frontend " + this.FrontendAddress);
		RuntimeObject* L_2 = __this->get_listener_14();
		String_t* L_3 = ChatClient_get_FrontendAddress_mEB713B4B1C0FFD17CAA1C534ED71311219DC5FC9_inline(__this, /*hidden argument*/NULL);
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral70E46A40252ADA773201ED2001C3B5E19AE0D5E2, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_2, 3, L_4);
	}

IL_0038:
	{
		// if (!this.chatPeer.Connect(this.FrontendAddress, ChatAppName))
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_5 = __this->get_chatPeer_15();
		String_t* L_6 = ChatClient_get_FrontendAddress_mEB713B4B1C0FFD17CAA1C534ED71311219DC5FC9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_7 = VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(6 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String) */, L_5, L_6, _stringLiteral7ECDE348FF9CDA2C3BA69A0C4543365039D0D65B);
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0086;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_9 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_9) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0085;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Connecting to frontend {0} failed.", this.FrontendAddress));
		RuntimeObject* L_11 = __this->get_listener_14();
		String_t* L_12 = ChatClient_get_FrontendAddress_mEB713B4B1C0FFD17CAA1C534ED71311219DC5FC9_inline(__this, /*hidden argument*/NULL);
		String_t* L_13 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral427FC0E48C1D9A9A8FF6FF858C6B30F622D1F800, L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_11, 1, L_13);
	}

IL_0085:
	{
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::AuthenticateOnFrontEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_AuthenticateOnFrontEnd_mC3384AD28A733908C452491D57E07BF125106DD2 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_AuthenticateOnFrontEnd_mC3384AD28A733908C452491D57E07BF125106DD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * V_4 = NULL;
	bool V_5 = false;
	{
		// if (this.AuthValues != null)
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_0 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((!(((RuntimeObject*)(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0085;
		}
	}
	{
		// if (string.IsNullOrEmpty(this.AuthValues.Token))
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_2 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = AuthenticationValues_get_Token_m89FD3AA2832F91FBB17EBDA5454420CD11FFF72A_inline(L_2, /*hidden argument*/NULL);
		bool L_4 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_6 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_6) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Can't authenticate on front end server. Secret is not set");
		RuntimeObject* L_8 = __this->get_listener_14();
		NullCheck(L_8);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_8, 1, _stringLiteralE8A3C398B4EA2BE3444B33FEC2ABF9939FFE6A33);
	}

IL_0048:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00b0;
	}

IL_004c:
	{
		// Dictionary<byte, object> opParameters = new Dictionary<byte, object> { { (byte)ChatParameterCode.Secret, this.AuthValues.Token } };
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_9 = (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *)il2cpp_codegen_object_new(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA38BDB6209548343F5C21CA8CCEF000923157407(L_9, /*hidden argument*/Dictionary_2__ctor_mA38BDB6209548343F5C21CA8CCEF000923157407_RuntimeMethod_var);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_10 = L_9;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_11 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = AuthenticationValues_get_Token_m89FD3AA2832F91FBB17EBDA5454420CD11FFF72A_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833(L_10, (uint8_t)((int32_t)221), L_12, /*hidden argument*/Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833_RuntimeMethod_var);
		V_4 = L_10;
		// return this.chatPeer.SendOperation(ChatOperationCode.Authenticate, opParameters, SendOptions.SendReliable);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_13 = __this->get_chatPeer_15();
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_14 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_il2cpp_TypeInfo_var);
		SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  L_15 = ((SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_13);
		bool L_16 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *, SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  >::Invoke(16 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_13, (uint8_t)((int32_t)230), L_14, L_15);
		V_3 = L_16;
		goto IL_00b0;
	}

IL_0085:
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_17 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_00ac;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Can't authenticate on front end server. Authentication Values are not set");
		RuntimeObject* L_19 = __this->get_listener_14();
		NullCheck(L_19);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_19, 1, _stringLiteral638067AF521CCE283B94B0DF8899C179DCF25FB3);
	}

IL_00ac:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00b0;
	}

IL_00b0:
	{
		// }
		bool L_20 = V_3;
		return L_20;
	}
}
// System.Void Photon.Chat.ChatClient::HandleUserUnsubscribedEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleUserUnsubscribedEvent_m0F7CA88FAAF1C667CD79368C9CC9274623A15E9F (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleUserUnsubscribedEvent_m0F7CA88FAAF1C667CD79368C9CC9274623A15E9F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		// string channelName = eventData.Parameters[ChatParameterCode.Channel] as string;
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_0 = ___eventData0;
		NullCheck(L_0);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2 = Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3(L_1, (uint8_t)1, /*hidden argument*/Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3_RuntimeMethod_var);
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		// string userId = eventData.Parameters[ChatParameterCode.UserId] as string;
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_3 = ___eventData0;
		NullCheck(L_3);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3(L_4, (uint8_t)((int32_t)225), /*hidden argument*/Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3_RuntimeMethod_var);
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		// if (this.PublicChannels.TryGetValue(channelName, out channel))
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_6 = __this->get_PublicChannels_11();
		String_t* L_7 = V_0;
		NullCheck(L_6);
		bool L_8 = Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183(L_6, L_7, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183_RuntimeMethod_var);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_00c4;
		}
	}
	{
		// if (!channel.PublishSubscribers)
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_10 = V_2;
		NullCheck(L_10);
		bool L_11 = ChatChannel_get_PublishSubscribers_m1BEE7A689ABCEB4BAB38D314F563CD672699F5CA_inline(L_10, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_007d;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_13 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_007c;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" for incoming UserUnsubscribed (\"{1}\") event does not have PublishSubscribers enabled.", channelName, userId));
		RuntimeObject* L_15 = __this->get_listener_14();
		String_t* L_16 = V_0;
		String_t* L_17 = V_1;
		String_t* L_18 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralD1E3D9C1B922EB4D0834D565C074EDC474E4C8B1, L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_15, 2, L_18);
	}

IL_007c:
	{
	}

IL_007d:
	{
		// if (!channel.Subscribers.Remove(userId)) // user not found!
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_19 = V_2;
		NullCheck(L_19);
		HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * L_20 = L_19->get_Subscribers_9();
		String_t* L_21 = V_1;
		NullCheck(L_20);
		bool L_22 = HashSet_1_Remove_mD6EE52239731ACBFBC21335EF4D16CEE6F597F31(L_20, L_21, /*hidden argument*/HashSet_1_Remove_mD6EE52239731ACBFBC21335EF4D16CEE6F597F31_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00c1;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_24 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_24) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00c0;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" does not contain unsubscribed user \"{1}\".", channelName, userId));
		RuntimeObject* L_26 = __this->get_listener_14();
		String_t* L_27 = V_0;
		String_t* L_28 = V_1;
		String_t* L_29 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralEF54001782F2548B67B67C09D2133F76EE73079C, L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_26, 2, L_29);
	}

IL_00c0:
	{
	}

IL_00c1:
	{
		goto IL_00f3;
	}

IL_00c4:
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_30 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)((((int32_t)L_30) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_8;
		if (!L_31)
		{
			goto IL_00f2;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" not found for incoming UserUnsubscribed (\"{1}\") event.", channelName, userId));
		RuntimeObject* L_32 = __this->get_listener_14();
		String_t* L_33 = V_0;
		String_t* L_34 = V_1;
		String_t* L_35 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6AFEA6BD492174EAD3729E74B21354F505CDDCF4, L_33, L_34, /*hidden argument*/NULL);
		NullCheck(L_32);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_32, 2, L_35);
	}

IL_00f2:
	{
	}

IL_00f3:
	{
		// this.listener.OnUserUnsubscribed(channelName, userId);
		RuntimeObject* L_36 = __this->get_listener_14();
		String_t* L_37 = V_0;
		String_t* L_38 = V_1;
		NullCheck(L_36);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Photon.Chat.IChatClientListener::OnUserUnsubscribed(System.String,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_36, L_37, L_38);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleUserSubscribedEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleUserSubscribedEvent_m6EB9F63E36A3CCEC286A2E511CEA4FBE35056571 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleUserSubscribedEvent_m6EB9F63E36A3CCEC286A2E511CEA4FBE35056571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B12_0 = 0;
	{
		// string channelName = eventData.Parameters[ChatParameterCode.Channel] as string;
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_0 = ___eventData0;
		NullCheck(L_0);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2 = Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3(L_1, (uint8_t)1, /*hidden argument*/Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3_RuntimeMethod_var);
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		// string userId = eventData.Parameters[ChatParameterCode.UserId] as string;
		EventData_t54DAF8C02A7469835C5973950E6E2759BB986571 * L_3 = ___eventData0;
		NullCheck(L_3);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3(L_4, (uint8_t)((int32_t)225), /*hidden argument*/Dictionary_2_get_Item_m80F5E81639EAF030176B6213D555F2037CF81FB3_RuntimeMethod_var);
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		// if (this.PublicChannels.TryGetValue(channelName, out channel))
		Dictionary_2_tE202E3088A43B362AC7DEB6502BB6093FCFD3E08 * L_6 = __this->get_PublicChannels_11();
		String_t* L_7 = V_0;
		NullCheck(L_6);
		bool L_8 = Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183(L_6, L_7, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m28FC282DB4F9DC47840C71161B8450A5927D9183_RuntimeMethod_var);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0134;
		}
	}
	{
		// if (!channel.PublishSubscribers)
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_10 = V_2;
		NullCheck(L_10);
		bool L_11 = ChatChannel_get_PublishSubscribers_m1BEE7A689ABCEB4BAB38D314F563CD672699F5CA_inline(L_10, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_007d;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_13 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_007c;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" for incoming UserSubscribed (\"{1}\") event does not have PublishSubscribers enabled.", channelName, userId));
		RuntimeObject* L_15 = __this->get_listener_14();
		String_t* L_16 = V_0;
		String_t* L_17 = V_1;
		String_t* L_18 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralE23C1A7928CC6F82A21EE1A76448A0F81B07C4E9, L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_15, 2, L_18);
	}

IL_007c:
	{
	}

IL_007d:
	{
		// if (!channel.Subscribers.Add(userId)) // user came back from the dead ?
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_19 = V_2;
		NullCheck(L_19);
		HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * L_20 = L_19->get_Subscribers_9();
		String_t* L_21 = V_1;
		NullCheck(L_20);
		bool L_22 = HashSet_1_Add_mD0E40F9E35B3EEAED652C38D1784046EAD4057E1(L_20, L_21, /*hidden argument*/HashSet_1_Add_mD0E40F9E35B3EEAED652C38D1784046EAD4057E1_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00c3;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_24 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_24) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00c0;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" already contains newly subscribed user \"{1}\".", channelName, userId));
		RuntimeObject* L_26 = __this->get_listener_14();
		String_t* L_27 = V_0;
		String_t* L_28 = V_1;
		String_t* L_29 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral06D8FB7D57518A9D9AD12F37B1762D47BCFEBC34, L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_26, 2, L_29);
	}

IL_00c0:
	{
		goto IL_0131;
	}

IL_00c3:
	{
		// else if (channel.MaxSubscribers > 0 && channel.Subscribers.Count > channel.MaxSubscribers)
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_30 = V_2;
		NullCheck(L_30);
		int32_t L_31 = ChatChannel_get_MaxSubscribers_m201435FB8253E73DCBC6AC3F3BF4E07098B4E78B_inline(L_30, /*hidden argument*/NULL);
		if ((((int32_t)L_31) <= ((int32_t)0)))
		{
			goto IL_00e1;
		}
	}
	{
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_32 = V_2;
		NullCheck(L_32);
		HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * L_33 = L_32->get_Subscribers_9();
		NullCheck(L_33);
		int32_t L_34 = HashSet_1_get_Count_mF3ABE8CB53339BA8AD485E3BF3C9D48898B5370A_inline(L_33, /*hidden argument*/HashSet_1_get_Count_mF3ABE8CB53339BA8AD485E3BF3C9D48898B5370A_RuntimeMethod_var);
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_35 = V_2;
		NullCheck(L_35);
		int32_t L_36 = ChatChannel_get_MaxSubscribers_m201435FB8253E73DCBC6AC3F3BF4E07098B4E78B_inline(L_35, /*hidden argument*/NULL);
		G_B12_0 = ((((int32_t)L_34) > ((int32_t)L_36))? 1 : 0);
		goto IL_00e2;
	}

IL_00e1:
	{
		G_B12_0 = 0;
	}

IL_00e2:
	{
		V_8 = (bool)G_B12_0;
		bool L_37 = V_8;
		if (!L_37)
		{
			goto IL_0131;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_38 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)((((int32_t)L_38) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_39 = V_9;
		if (!L_39)
		{
			goto IL_0130;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\"'s MaxSubscribers exceeded. count={1} > MaxSubscribers={2}.", channelName, channel.Subscribers.Count, channel.MaxSubscribers));
		RuntimeObject* L_40 = __this->get_listener_14();
		String_t* L_41 = V_0;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_42 = V_2;
		NullCheck(L_42);
		HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * L_43 = L_42->get_Subscribers_9();
		NullCheck(L_43);
		int32_t L_44 = HashSet_1_get_Count_mF3ABE8CB53339BA8AD485E3BF3C9D48898B5370A_inline(L_43, /*hidden argument*/HashSet_1_get_Count_mF3ABE8CB53339BA8AD485E3BF3C9D48898B5370A_RuntimeMethod_var);
		int32_t L_45 = L_44;
		RuntimeObject * L_46 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_45);
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_47 = V_2;
		NullCheck(L_47);
		int32_t L_48 = ChatChannel_get_MaxSubscribers_m201435FB8253E73DCBC6AC3F3BF4E07098B4E78B_inline(L_47, /*hidden argument*/NULL);
		int32_t L_49 = L_48;
		RuntimeObject * L_50 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_49);
		String_t* L_51 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteral2C2487EA5D13B73C78A16D4C01B849CC868B9F66, L_41, L_46, L_50, /*hidden argument*/NULL);
		NullCheck(L_40);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_40, 2, L_51);
	}

IL_0130:
	{
	}

IL_0131:
	{
		goto IL_0163;
	}

IL_0134:
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_52 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_10 = (bool)((((int32_t)((((int32_t)L_52) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_53 = V_10;
		if (!L_53)
		{
			goto IL_0162;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" not found for incoming UserSubscribed (\"{1}\") event.", channelName, userId));
		RuntimeObject* L_54 = __this->get_listener_14();
		String_t* L_55 = V_0;
		String_t* L_56 = V_1;
		String_t* L_57 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralE92B7B36B6E384E44F7E0E2A7CDECA40F4F457DB, L_55, L_56, /*hidden argument*/NULL);
		NullCheck(L_54);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_54, 2, L_57);
	}

IL_0162:
	{
	}

IL_0163:
	{
		// this.listener.OnUserSubscribed(channelName, userId);
		RuntimeObject* L_58 = __this->get_listener_14();
		String_t* L_59 = V_0;
		String_t* L_60 = V_1;
		NullCheck(L_58);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Photon.Chat.IChatClientListener::OnUserSubscribed(System.String,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_58, L_59, L_60);
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String,System.Int32,System.Int32,Photon.Chat.ChannelCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m8880A667FC6E5A20137A128CA9E14DC1FD7412F6 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channel0, int32_t ___lastMsgId1, int32_t ___messagesFromHistory2, ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * ___creationOptions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_Subscribe_m8880A667FC6E5A20137A128CA9E14DC1FD7412F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * V_2 = NULL;
	Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * V_19 = NULL;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	int32_t G_B17_0 = 0;
	int32_t G_B38_0 = 0;
	{
		// if (creationOptions == null)
		ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * L_0 = ___creationOptions3;
		V_4 = (bool)((((RuntimeObject*)(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// creationOptions = ChannelCreationOptions.Default;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_il2cpp_TypeInfo_var);
		ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * L_2 = ((ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_StaticFields*)il2cpp_codegen_static_fields_for(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_il2cpp_TypeInfo_var))->get_Default_0();
		___creationOptions3 = L_2;
	}

IL_0015:
	{
		// int maxSubscribers = creationOptions.MaxSubscribers;
		ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * L_3 = ___creationOptions3;
		NullCheck(L_3);
		int32_t L_4 = ChannelCreationOptions_get_MaxSubscribers_m5ADB67E62EA5959B1B40B3AA29817694D732BD6A_inline(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// bool publishSubscribers = creationOptions.PublishSubscribers;
		ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * L_5 = ___creationOptions3;
		NullCheck(L_5);
		bool L_6 = ChannelCreationOptions_get_PublishSubscribers_m21ADD2DE29B58D86F4442B98515AEC8560F6435B_inline(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// if (maxSubscribers < 0)
		int32_t L_7 = V_0;
		V_5 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_9 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)((((int32_t)L_9) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_6;
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Cannot set MaxSubscribers < 0.");
		RuntimeObject* L_11 = __this->get_listener_14();
		NullCheck(L_11);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_11, 1, _stringLiteralB7A757A62D6F4547652BA320456CD72FF6D7093E);
	}

IL_0056:
	{
		// return false;
		V_7 = (bool)0;
		goto IL_0239;
	}

IL_005e:
	{
		// if (lastMsgId < 0)
		int32_t L_12 = ___lastMsgId1;
		V_8 = (bool)((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		bool L_13 = V_8;
		if (!L_13)
		{
			goto IL_0097;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_14 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)((((int32_t)L_14) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_9;
		if (!L_15)
		{
			goto IL_008f;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "lastMsgId cannot be < 0.");
		RuntimeObject* L_16 = __this->get_listener_14();
		NullCheck(L_16);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_16, 1, _stringLiteral260B333133E8DC5F239195333A036B63C1EC62B9);
	}

IL_008f:
	{
		// return false;
		V_7 = (bool)0;
		goto IL_0239;
	}

IL_0097:
	{
		// if (messagesFromHistory < -1)
		int32_t L_17 = ___messagesFromHistory2;
		V_10 = (bool)((((int32_t)L_17) < ((int32_t)(-1)))? 1 : 0);
		bool L_18 = V_10;
		if (!L_18)
		{
			goto IL_00cc;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_19 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_11 = (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_11;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "messagesFromHistory < -1, setting it to -1");
		RuntimeObject* L_21 = __this->get_listener_14();
		NullCheck(L_21);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_21, 2, _stringLiteralAAC3759B75EBB121D5A5F793C49C6496CB466067);
	}

IL_00c8:
	{
		// messagesFromHistory = -1;
		___messagesFromHistory2 = (-1);
	}

IL_00cc:
	{
		// if (lastMsgId > 0 && messagesFromHistory == 0)
		int32_t L_22 = ___lastMsgId1;
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_23 = ___messagesFromHistory2;
		G_B17_0 = ((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B17_0 = 0;
	}

IL_00d7:
	{
		V_12 = (bool)G_B17_0;
		bool L_24 = V_12;
		if (!L_24)
		{
			goto IL_0108;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_25 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_13 = (bool)((((int32_t)((((int32_t)L_25) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_13;
		if (!L_26)
		{
			goto IL_0104;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "lastMsgId will be ignored because messagesFromHistory == 0");
		RuntimeObject* L_27 = __this->get_listener_14();
		NullCheck(L_27);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_27, 2, _stringLiteral6A99D68EAA56E7B9EA40ED090FD2E0DDA1EB1E0F);
	}

IL_0104:
	{
		// lastMsgId = 0;
		___lastMsgId1 = 0;
	}

IL_0108:
	{
		// Dictionary<object, object> properties = null;
		V_2 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)NULL;
		// if (publishSubscribers)
		bool L_28 = V_1;
		V_14 = L_28;
		bool L_29 = V_14;
		if (!L_29)
		{
			goto IL_0176;
		}
	}
	{
		// if (maxSubscribers > DefaultMaxSubscribers)
		int32_t L_30 = V_0;
		V_15 = (bool)((((int32_t)L_30) > ((int32_t)((int32_t)100)))? 1 : 0);
		bool L_31 = V_15;
		if (!L_31)
		{
			goto IL_0158;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_32 = ChatClient_get_DebugOut_m176E0EAF741FDDC1A96CC377D0735C897489683C(__this, /*hidden argument*/NULL);
		V_16 = (bool)((((int32_t)((((int32_t)L_32) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_16;
		if (!L_33)
		{
			goto IL_0150;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR,
		//     string.Format("Cannot set MaxSubscribers > {0} when PublishSubscribers == true.", DefaultMaxSubscribers));
		RuntimeObject* L_34 = __this->get_listener_14();
		int32_t L_35 = ((int32_t)100);
		RuntimeObject * L_36 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralD42D8F5361FEC807EFBD78D0B0154513FA3FDEA5, L_36, /*hidden argument*/NULL);
		NullCheck(L_34);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_34, 1, L_37);
	}

IL_0150:
	{
		// return false;
		V_7 = (bool)0;
		goto IL_0239;
	}

IL_0158:
	{
		// properties = new Dictionary<object, object>();
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_38 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)il2cpp_codegen_object_new(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498(L_38, /*hidden argument*/Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_RuntimeMethod_var);
		V_2 = L_38;
		// properties[ChannelWellKnownProperties.PublishSubscribers] = true;
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_39 = V_2;
		uint8_t L_40 = ((uint8_t)((int32_t)254));
		RuntimeObject * L_41 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_40);
		bool L_42 = ((bool)1);
		RuntimeObject * L_43 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_39);
		Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93(L_39, L_41, L_43, /*hidden argument*/Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_RuntimeMethod_var);
	}

IL_0176:
	{
		// if (maxSubscribers > 0)
		int32_t L_44 = V_0;
		V_17 = (bool)((((int32_t)L_44) > ((int32_t)0))? 1 : 0);
		bool L_45 = V_17;
		if (!L_45)
		{
			goto IL_01ab;
		}
	}
	{
		// if (properties == null)
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_46 = V_2;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)L_46) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_47 = V_18;
		if (!L_47)
		{
			goto IL_0193;
		}
	}
	{
		// properties = new Dictionary<object, object>();
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_48 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)il2cpp_codegen_object_new(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498(L_48, /*hidden argument*/Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_RuntimeMethod_var);
		V_2 = L_48;
	}

IL_0193:
	{
		// properties[ChannelWellKnownProperties.MaxSubscribers] = maxSubscribers;
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_49 = V_2;
		uint8_t L_50 = ((uint8_t)((int32_t)255));
		RuntimeObject * L_51 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_50);
		int32_t L_52 = V_0;
		int32_t L_53 = L_52;
		RuntimeObject * L_54 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_53);
		NullCheck(L_49);
		Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93(L_49, L_51, L_54, /*hidden argument*/Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_RuntimeMethod_var);
	}

IL_01ab:
	{
		// Dictionary<byte, object> opParameters = new Dictionary<byte, object> { { ChatParameterCode.Channels, new[] { channel } } };
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_55 = (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *)il2cpp_codegen_object_new(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA38BDB6209548343F5C21CA8CCEF000923157407(L_55, /*hidden argument*/Dictionary_2__ctor_mA38BDB6209548343F5C21CA8CCEF000923157407_RuntimeMethod_var);
		V_19 = L_55;
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_56 = V_19;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_57 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_58 = L_57;
		String_t* L_59 = ___channel0;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_59);
		NullCheck(L_56);
		Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833(L_56, (uint8_t)0, (RuntimeObject *)(RuntimeObject *)L_58, /*hidden argument*/Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833_RuntimeMethod_var);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_60 = V_19;
		V_3 = L_60;
		// if (messagesFromHistory != 0)
		int32_t L_61 = ___messagesFromHistory2;
		V_20 = (bool)((!(((uint32_t)L_61) <= ((uint32_t)0)))? 1 : 0);
		bool L_62 = V_20;
		if (!L_62)
		{
			goto IL_01e3;
		}
	}
	{
		// opParameters.Add(ChatParameterCode.HistoryLength, messagesFromHistory);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_63 = V_3;
		int32_t L_64 = ___messagesFromHistory2;
		int32_t L_65 = L_64;
		RuntimeObject * L_66 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_65);
		NullCheck(L_63);
		Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833(L_63, (uint8_t)((int32_t)14), L_66, /*hidden argument*/Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833_RuntimeMethod_var);
	}

IL_01e3:
	{
		// if (lastMsgId > 0)
		int32_t L_67 = ___lastMsgId1;
		V_21 = (bool)((((int32_t)L_67) > ((int32_t)0))? 1 : 0);
		bool L_68 = V_21;
		if (!L_68)
		{
			goto IL_0202;
		}
	}
	{
		// opParameters.Add(ChatParameterCode.MsgIds, new[] { lastMsgId });
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_69 = V_3;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_70 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_71 = L_70;
		int32_t L_72 = ___lastMsgId1;
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_72);
		NullCheck(L_69);
		Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833(L_69, (uint8_t)((int32_t)9), (RuntimeObject *)(RuntimeObject *)L_71, /*hidden argument*/Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833_RuntimeMethod_var);
	}

IL_0202:
	{
		// if (properties != null && properties.Count > 0)
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_73 = V_2;
		if (!L_73)
		{
			goto IL_0210;
		}
	}
	{
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_74 = V_2;
		NullCheck(L_74);
		int32_t L_75 = Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6(L_74, /*hidden argument*/Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_RuntimeMethod_var);
		G_B38_0 = ((((int32_t)L_75) > ((int32_t)0))? 1 : 0);
		goto IL_0211;
	}

IL_0210:
	{
		G_B38_0 = 0;
	}

IL_0211:
	{
		V_22 = (bool)G_B38_0;
		bool L_76 = V_22;
		if (!L_76)
		{
			goto IL_0223;
		}
	}
	{
		// opParameters.Add(ChatParameterCode.Properties, properties);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_77 = V_3;
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_78 = V_2;
		NullCheck(L_77);
		Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833(L_77, (uint8_t)((int32_t)22), L_78, /*hidden argument*/Dictionary_2_Add_m167D68C78B2820B929131E05BB2A242838DCC833_RuntimeMethod_var);
	}

IL_0223:
	{
		// return this.chatPeer.SendOperation(ChatOperationCode.Subscribe, opParameters, SendOptions.SendReliable);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_79 = __this->get_chatPeer_15();
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_80 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_il2cpp_TypeInfo_var);
		SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  L_81 = ((SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_79);
		bool L_82 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *, SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  >::Invoke(16 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_79, (uint8_t)0, L_80, L_81);
		V_7 = L_82;
		goto IL_0239;
	}

IL_0239:
	{
		// }
		bool L_83 = V_7;
		return L_83;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.ChatEventCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatEventCode__ctor_mCB99ABAA810DBE0BD8CED606CE1D7DB9FF8AFAFA (ChatEventCode_t69355728022C08E7435EBAAB0B0CC12A186AACAE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.ChatOperationCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatOperationCode__ctor_mE2D67AA29F857091BE74BF29EEF81D1175B1B56A (ChatOperationCode_t2241AAA0BE1EE7E35D7FB4020009BC538267AF45 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.ChatParameterCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatParameterCode__ctor_m3E1C362181F0EEADDE0BC655308F17788CCE85F6 (ChatParameterCode_t04DD519C260927DA892F3046EFC437B00339AF56 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Photon.Chat.ChatPeer::get_NameServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatPeer_get_NameServerAddress_m1534143120EC03973CCA84F8BCE3DB5BB66FFE02 (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// public string NameServerAddress { get { return this.GetNameServerAddress(); } }
		String_t* L_0 = ChatPeer_GetNameServerAddress_mB1699C2550D3A1D1D4764BAD2233F74FCD281E7C(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public string NameServerAddress { get { return this.GetNameServerAddress(); } }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Photon.Chat.ChatPeer::get_IsProtocolSecure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatPeer_get_IsProtocolSecure_m4F1D4B8A586A7ECF25236CBA4F719DCA72C6C63F (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// virtual internal bool IsProtocolSecure { get { return this.UsedProtocol == ConnectionProtocol.WebSocketSecure; } }
		uint8_t L_0 = PhotonPeer_get_UsedProtocol_mEC9186551B89986D3F4E69B0879D4B438EF939EB(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)5))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// virtual internal bool IsProtocolSecure { get { return this.UsedProtocol == ConnectionProtocol.WebSocketSecure; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Chat.ChatPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPeer__ctor_m2DB07AE0969784CB00C97F73685AFE3C12FAFAC4 (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, RuntimeObject* ___listener0, uint8_t ___protocol1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatPeer__ctor_m2DB07AE0969784CB00C97F73685AFE3C12FAFAC4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string NameServerHost = "ns.exitgames.com";
		__this->set_NameServerHost_49(_stringLiteralA595791DAF8A7212368D5CC9A8886085257B5A0C);
		// public string NameServerHttp = "http://ns.exitgamescloud.com:80/photon/n";
		__this->set_NameServerHttp_50(_stringLiteralB243016B5650803D4A94A422FA062ABA05F40C6D);
		// public ChatPeer(IPhotonPeerListener listener, ConnectionProtocol protocol) : base(listener, protocol)
		RuntimeObject* L_0 = ___listener0;
		uint8_t L_1 = ___protocol1;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9_il2cpp_TypeInfo_var);
		PhotonPeer__ctor_mB20C8325EAE88C51D67CA6DA281F2CA4EE14A2D7(__this, L_0, L_1, /*hidden argument*/NULL);
		// this.ConfigUnitySockets();
		ChatPeer_ConfigUnitySockets_mCA8E0D9097418FE87EC31C6F26DD765A1A744F5C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatPeer::ConfigUnitySockets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPeer_ConfigUnitySockets_mCA8E0D9097418FE87EC31C6F26DD765A1A744F5C (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatPeer_ConfigUnitySockets_mCA8E0D9097418FE87EC31C6F26DD765A1A744F5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// Type websocketType = null;
		V_0 = (Type_t *)NULL;
		// websocketType = Type.GetType("ExitGames.Client.Photon.SocketWebTcp, PhotonWebSocket", false);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m8A8A6481B24551476F2AF999A970AD705BA68C7A, _stringLiteral83FEBC0012B2BE602C85FC053159E9EF67600984, (bool)0, "PhotonChat, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		V_0 = L_0;
		// if (websocketType == null)
		Type_t * L_1 = V_0;
		bool L_2 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_1, (Type_t *)NULL, /*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// websocketType = Type.GetType("ExitGames.Client.Photon.SocketWebTcp, Assembly-CSharp-firstpass", false);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m8A8A6481B24551476F2AF999A970AD705BA68C7A, _stringLiteralBF11A57FF863BE16C3B8157656862961ACDA3725, (bool)0, "PhotonChat, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		V_0 = L_4;
	}

IL_0028:
	{
		// if (websocketType == null)
		Type_t * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_6 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_5, (Type_t *)NULL, /*hidden argument*/NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		// websocketType = Type.GetType("ExitGames.Client.Photon.SocketWebTcp, Assembly-CSharp", false);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m8A8A6481B24551476F2AF999A970AD705BA68C7A, _stringLiteral5729A153EC7FAE56800274A78531B43CC0A3112C, (bool)0, "PhotonChat, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		V_0 = L_8;
	}

IL_0041:
	{
		// if (websocketType != null)
		Type_t * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_10 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_9, (Type_t *)NULL, /*hidden argument*/NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		// this.SocketImplementationConfig[ConnectionProtocol.WebSocket] = websocketType;
		Dictionary_2_t881E1592C6CBEA5F40CAA7EE97897DCA8DBAFB97 * L_12 = ((PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9 *)__this)->get_SocketImplementationConfig_13();
		Type_t * L_13 = V_0;
		NullCheck(L_12);
		Dictionary_2_set_Item_mE92C6104FB820DF374DCF1E198DDE0F31C585500(L_12, 4, L_13, /*hidden argument*/Dictionary_2_set_Item_mE92C6104FB820DF374DCF1E198DDE0F31C585500_RuntimeMethod_var);
		// this.SocketImplementationConfig[ConnectionProtocol.WebSocketSecure] = websocketType;
		Dictionary_2_t881E1592C6CBEA5F40CAA7EE97897DCA8DBAFB97 * L_14 = ((PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9 *)__this)->get_SocketImplementationConfig_13();
		Type_t * L_15 = V_0;
		NullCheck(L_14);
		Dictionary_2_set_Item_mE92C6104FB820DF374DCF1E198DDE0F31C585500(L_14, 5, L_15, /*hidden argument*/Dictionary_2_set_Item_mE92C6104FB820DF374DCF1E198DDE0F31C585500_RuntimeMethod_var);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.String Photon.Chat.ChatPeer::GetNameServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatPeer_GetNameServerAddress_mB1699C2550D3A1D1D4764BAD2233F74FCD281E7C (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatPeer_GetNameServerAddress_mB1699C2550D3A1D1D4764BAD2233F74FCD281E7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// var protocolPort = 0;
		V_0 = 0;
		// ProtocolToNameServerPort.TryGetValue(this.TransportProtocol, out protocolPort);
		IL2CPP_RUNTIME_CLASS_INIT(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_il2cpp_TypeInfo_var);
		Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2 * L_0 = ((ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_StaticFields*)il2cpp_codegen_static_fields_for(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_il2cpp_TypeInfo_var))->get_ProtocolToNameServerPort_51();
		uint8_t L_1 = PhotonPeer_get_TransportProtocol_m42215E2D4E23E475F9D83429F264AF2D60CE58F5_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_TryGetValue_m453714E9ABC80ADA48D3A630DC3F1DBAE9913DEE(L_0, L_1, (int32_t*)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m453714E9ABC80ADA48D3A630DC3F1DBAE9913DEE_RuntimeMethod_var);
		// switch (this.TransportProtocol)
		uint8_t L_2 = PhotonPeer_get_TransportProtocol_m42215E2D4E23E475F9D83429F264AF2D60CE58F5_inline(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		uint8_t L_3 = V_1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_003d;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_0088;
			}
			case 3:
			{
				goto IL_0088;
			}
			case 4:
			{
				goto IL_0056;
			}
			case 5:
			{
				goto IL_006f;
			}
		}
	}
	{
		goto IL_0088;
	}

IL_003d:
	{
		// return string.Format("{0}:{1}", NameServerHost, protocolPort);
		String_t* L_4 = __this->get_NameServerHost_49();
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralE7B85E7369BA50B83804EBF39E9612010E5B9FCD, L_4, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		goto IL_008e;
	}

IL_0056:
	{
		// return string.Format("ws://{0}:{1}", NameServerHost, protocolPort);
		String_t* L_9 = __this->get_NameServerHost_49();
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral107307FBAF61C580C469AD7BCE2AE293E1C4A281, L_9, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		goto IL_008e;
	}

IL_006f:
	{
		// return string.Format("wss://{0}:{1}", NameServerHost, protocolPort);
		String_t* L_14 = __this->get_NameServerHost_49();
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral74E0537A883E3EB77F6D19BD02E970E3B8CAA800, L_14, L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		goto IL_008e;
	}

IL_0088:
	{
		// throw new ArgumentOutOfRangeException();
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_19 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m215F35137EDD190A037E2E9BDA3BF5DC056FD7C3(L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ChatPeer_GetNameServerAddress_mB1699C2550D3A1D1D4764BAD2233F74FCD281E7C_RuntimeMethod_var);
	}

IL_008e:
	{
		// }
		String_t* L_20 = V_2;
		return L_20;
	}
}
// System.Boolean Photon.Chat.ChatPeer::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatPeer_Connect_m94685331391079FBB93EA688CA18BD5513DE6C35 (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatPeer_Connect_m94685331391079FBB93EA688CA18BD5513DE6C35_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (this.DebugOut >= DebugLevel.INFO)
		uint8_t L_0 = ((PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9 *)__this)->get_DebugOut_15();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.INFO, "Connecting to nameserver " + this.NameServerAddress);
		RuntimeObject* L_2 = PhotonPeer_get_Listener_m92E5CDF7E18EA95E6FA89FA130DCE92ADD2413C9_inline(__this, /*hidden argument*/NULL);
		String_t* L_3 = ChatPeer_get_NameServerAddress_m1534143120EC03973CCA84F8BCE3DB5BB66FFE02(__this, /*hidden argument*/NULL);
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral2EAC14B3D351C8B6836D36173E0E34127AA6A058, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tB43B9A93795FA1A57AFFA90CFFEEB0F792D0194E_il2cpp_TypeInfo_var, L_2, 3, L_4);
	}

IL_0030:
	{
		// return this.Connect(this.NameServerAddress, "NameServer");
		String_t* L_5 = ChatPeer_get_NameServerAddress_m1534143120EC03973CCA84F8BCE3DB5BB66FFE02(__this, /*hidden argument*/NULL);
		bool L_6 = VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(6 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String) */, __this, L_5, _stringLiteral5742FE1BDA7AB1FC9AFE28EA777EE363C684E01E);
		V_1 = L_6;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Boolean Photon.Chat.ChatPeer::AuthenticateOnNameServer(System.String,System.String,System.String,Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatPeer_AuthenticateOnNameServer_m649578307A749D73AE5BD9A12E77342635BBE59B (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, String_t* ___appId0, String_t* ___appVersion1, String_t* ___region2, AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___authValues3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatPeer_AuthenticateOnNameServer_m649578307A749D73AE5BD9A12E77342635BBE59B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	{
		// if (this.DebugOut >= DebugLevel.INFO)
		uint8_t L_0 = ((PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9 *)__this)->get_DebugOut_15();
		V_1 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.INFO, "OpAuthenticate()");
		RuntimeObject* L_2 = PhotonPeer_get_Listener_m92E5CDF7E18EA95E6FA89FA130DCE92ADD2413C9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tB43B9A93795FA1A57AFFA90CFFEEB0F792D0194E_il2cpp_TypeInfo_var, L_2, 3, _stringLiteral0C9BC8A9EA08F5764E66418E04C783D7C5EA550E);
	}

IL_0025:
	{
		// var opParameters = new Dictionary<byte, object>();
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_3 = (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *)il2cpp_codegen_object_new(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA38BDB6209548343F5C21CA8CCEF000923157407(L_3, /*hidden argument*/Dictionary_2__ctor_mA38BDB6209548343F5C21CA8CCEF000923157407_RuntimeMethod_var);
		V_0 = L_3;
		// opParameters[ParameterCode.AppVersion] = appVersion;
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_4 = V_0;
		String_t* L_5 = ___appVersion1;
		NullCheck(L_4);
		Dictionary_2_set_Item_mBD74E977A1200B92E98F968B5774094135AE2316(L_4, (uint8_t)((int32_t)220), L_5, /*hidden argument*/Dictionary_2_set_Item_mBD74E977A1200B92E98F968B5774094135AE2316_RuntimeMethod_var);
		// opParameters[ParameterCode.ApplicationId] = appId;
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_6 = V_0;
		String_t* L_7 = ___appId0;
		NullCheck(L_6);
		Dictionary_2_set_Item_mBD74E977A1200B92E98F968B5774094135AE2316(L_6, (uint8_t)((int32_t)224), L_7, /*hidden argument*/Dictionary_2_set_Item_mBD74E977A1200B92E98F968B5774094135AE2316_RuntimeMethod_var);
		// opParameters[ParameterCode.Region] = region;
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_8 = V_0;
		String_t* L_9 = ___region2;
		NullCheck(L_8);
		Dictionary_2_set_Item_mBD74E977A1200B92E98F968B5774094135AE2316(L_8, (uint8_t)((int32_t)210), L_9, /*hidden argument*/Dictionary_2_set_Item_mBD74E977A1200B92E98F968B5774094135AE2316_RuntimeMethod_var);
		// if (authValues != null)
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_10 = ___authValues3;
		V_2 = (bool)((!(((RuntimeObject*)(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 *)L_10) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0139;
		}
	}
	{
		// if (!string.IsNullOrEmpty(authValues.UserId))
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_12 = ___authValues3;
		NullCheck(L_12);
		String_t* L_13 = AuthenticationValues_get_UserId_mD7E073BD28C39609097CC717B5F781DAA57AC6C3_inline(L_12, /*hidden argument*/NULL);
		bool L_14 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_13, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0087;
		}
	}
	{
		// opParameters[ParameterCode.UserId] = authValues.UserId;
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_16 = V_0;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_17 = ___authValues3;
		NullCheck(L_17);
		String_t* L_18 = AuthenticationValues_get_UserId_mD7E073BD28C39609097CC717B5F781DAA57AC6C3_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Dictionary_2_set_Item_mBD74E977A1200B92E98F968B5774094135AE2316(L_16, (uint8_t)((int32_t)225), L_18, /*hidden argument*/Dictionary_2_set_Item_mBD74E977A1200B92E98F968B5774094135AE2316_RuntimeMethod_var);
	}

IL_0087:
	{
		// if (authValues.AuthType != CustomAuthenticationType.None)
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_19 = ___authValues3;
		NullCheck(L_19);
		uint8_t L_20 = AuthenticationValues_get_AuthType_mCBBF19A8A2D5B91B99EB4E1A529888E883EEB137(L_19, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_20) == ((int32_t)((int32_t)255)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0138;
		}
	}
	{
		// opParameters[ParameterCode.ClientAuthenticationType] = (byte) authValues.AuthType;
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_22 = V_0;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_23 = ___authValues3;
		NullCheck(L_23);
		uint8_t L_24 = AuthenticationValues_get_AuthType_mCBBF19A8A2D5B91B99EB4E1A529888E883EEB137(L_23, /*hidden argument*/NULL);
		uint8_t L_25 = ((uint8_t)L_24);
		RuntimeObject * L_26 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_22);
		Dictionary_2_set_Item_mBD74E977A1200B92E98F968B5774094135AE2316(L_22, (uint8_t)((int32_t)217), L_26, /*hidden argument*/Dictionary_2_set_Item_mBD74E977A1200B92E98F968B5774094135AE2316_RuntimeMethod_var);
		// if (!string.IsNullOrEmpty(authValues.Token))
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_27 = ___authValues3;
		NullCheck(L_27);
		String_t* L_28 = AuthenticationValues_get_Token_m89FD3AA2832F91FBB17EBDA5454420CD11FFF72A_inline(L_27, /*hidden argument*/NULL);
		bool L_29 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_28, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_00e6;
		}
	}
	{
		// opParameters[ParameterCode.Secret] = authValues.Token;
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_31 = V_0;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_32 = ___authValues3;
		NullCheck(L_32);
		String_t* L_33 = AuthenticationValues_get_Token_m89FD3AA2832F91FBB17EBDA5454420CD11FFF72A_inline(L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		Dictionary_2_set_Item_mBD74E977A1200B92E98F968B5774094135AE2316(L_31, (uint8_t)((int32_t)221), L_33, /*hidden argument*/Dictionary_2_set_Item_mBD74E977A1200B92E98F968B5774094135AE2316_RuntimeMethod_var);
		goto IL_0137;
	}

IL_00e6:
	{
		// if (!string.IsNullOrEmpty(authValues.AuthGetParameters))
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_34 = ___authValues3;
		NullCheck(L_34);
		String_t* L_35 = AuthenticationValues_get_AuthGetParameters_m6B5BC331948DA520006B0C726E47F6C3B1B41B84_inline(L_34, /*hidden argument*/NULL);
		bool L_36 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_35, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_6;
		if (!L_37)
		{
			goto IL_0111;
		}
	}
	{
		// opParameters[ParameterCode.ClientAuthenticationParams] = authValues.AuthGetParameters;
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_38 = V_0;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_39 = ___authValues3;
		NullCheck(L_39);
		String_t* L_40 = AuthenticationValues_get_AuthGetParameters_m6B5BC331948DA520006B0C726E47F6C3B1B41B84_inline(L_39, /*hidden argument*/NULL);
		NullCheck(L_38);
		Dictionary_2_set_Item_mBD74E977A1200B92E98F968B5774094135AE2316(L_38, (uint8_t)((int32_t)216), L_40, /*hidden argument*/Dictionary_2_set_Item_mBD74E977A1200B92E98F968B5774094135AE2316_RuntimeMethod_var);
	}

IL_0111:
	{
		// if (authValues.AuthPostData != null)
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_41 = ___authValues3;
		NullCheck(L_41);
		RuntimeObject * L_42 = AuthenticationValues_get_AuthPostData_m8728004EFCDB0D3F41D729AE30C57AAA724A300E_inline(L_41, /*hidden argument*/NULL);
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject *)L_42) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_43 = V_7;
		if (!L_43)
		{
			goto IL_0136;
		}
	}
	{
		// opParameters[ParameterCode.ClientAuthenticationData] = authValues.AuthPostData;
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_44 = V_0;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_45 = ___authValues3;
		NullCheck(L_45);
		RuntimeObject * L_46 = AuthenticationValues_get_AuthPostData_m8728004EFCDB0D3F41D729AE30C57AAA724A300E_inline(L_45, /*hidden argument*/NULL);
		NullCheck(L_44);
		Dictionary_2_set_Item_mBD74E977A1200B92E98F968B5774094135AE2316(L_44, (uint8_t)((int32_t)214), L_46, /*hidden argument*/Dictionary_2_set_Item_mBD74E977A1200B92E98F968B5774094135AE2316_RuntimeMethod_var);
	}

IL_0136:
	{
	}

IL_0137:
	{
	}

IL_0138:
	{
	}

IL_0139:
	{
		// return this.SendOperation(ChatOperationCode.Authenticate, opParameters, new SendOptions() { Reliability = true, Encrypt = this.IsEncryptionAvailable });
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_47 = V_0;
		il2cpp_codegen_initobj((&V_8), sizeof(SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77 ));
		SendOptions_set_Reliability_m2DE41348D40DD9703AB284E030692368894EA747((SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77 *)(&V_8), (bool)1, /*hidden argument*/NULL);
		bool L_48 = PhotonPeer_get_IsEncryptionAvailable_mAF1CA0B63AC560C23B6DBC28610459493F19E38E(__this, /*hidden argument*/NULL);
		(&V_8)->set_Encrypt_3(L_48);
		SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  L_49 = V_8;
		bool L_50 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *, SendOptions_t592DF597F66C49A24EC9075AEF08C67FAE87EE77  >::Invoke(16 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, __this, (uint8_t)((int32_t)230), L_47, L_49);
		V_9 = L_50;
		goto IL_0169;
	}

IL_0169:
	{
		// }
		bool L_51 = V_9;
		return L_51;
	}
}
// System.Void Photon.Chat.ChatPeer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPeer__cctor_mE74E176F6B3D98A4BDDE9DBC3175FB9C7C187DBF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatPeer__cctor_mE74E176F6B3D98A4BDDE9DBC3175FB9C7C187DBF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Dictionary<ConnectionProtocol, int> ProtocolToNameServerPort = new Dictionary<ConnectionProtocol, int>() { { ConnectionProtocol.Udp, 5058 }, { ConnectionProtocol.Tcp, 4533 }, { ConnectionProtocol.WebSocket, 9093 }, { ConnectionProtocol.WebSocketSecure, 19093 } }; //, { ConnectionProtocol.RHttp, 6063 } };
		Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2 * L_0 = (Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2 *)il2cpp_codegen_object_new(Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6EAF9A7C999732BD7C6B8668415E595968A33DF0(L_0, /*hidden argument*/Dictionary_2__ctor_m6EAF9A7C999732BD7C6B8668415E595968A33DF0_RuntimeMethod_var);
		Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2 * L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_m39ABF8526DE51AF36AC5830AF7E84AA902FB7A85(L_1, 0, ((int32_t)5058), /*hidden argument*/Dictionary_2_Add_m39ABF8526DE51AF36AC5830AF7E84AA902FB7A85_RuntimeMethod_var);
		Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2 * L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_m39ABF8526DE51AF36AC5830AF7E84AA902FB7A85(L_2, 1, ((int32_t)4533), /*hidden argument*/Dictionary_2_Add_m39ABF8526DE51AF36AC5830AF7E84AA902FB7A85_RuntimeMethod_var);
		Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2 * L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_m39ABF8526DE51AF36AC5830AF7E84AA902FB7A85(L_3, 4, ((int32_t)9093), /*hidden argument*/Dictionary_2_Add_m39ABF8526DE51AF36AC5830AF7E84AA902FB7A85_RuntimeMethod_var);
		Dictionary_2_tC386790FD0D06CF2C209A00FA21418DA43FC2AD2 * L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_m39ABF8526DE51AF36AC5830AF7E84AA902FB7A85(L_4, 5, ((int32_t)19093), /*hidden argument*/Dictionary_2_Add_m39ABF8526DE51AF36AC5830AF7E84AA902FB7A85_RuntimeMethod_var);
		((ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_StaticFields*)il2cpp_codegen_static_fields_for(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_il2cpp_TypeInfo_var))->set_ProtocolToNameServerPort_51(L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.ErrorCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCode__ctor_mFFD6C6BF1ABBDDF249BC5D67EBBC235EBFF5DAD4 (ErrorCode_t49B1D3A0A84EAE4C66AA6E40237D6FB10E6A35E5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.ParameterCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterCode__ctor_m3B8407750190EE8AD994D1A4B3ADB6016BC8BC92 (ParameterCode_t7CAB0CED18EF18251341209C8FF74EBCB049AA91 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AuthenticationValues_set_UserId_m0AC47E89E8BE94FE1064DE78AE429D1E1EB91635_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string UserId { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CUserIdU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthPostData_m381FEAC96254605D8E112DD0EB1224EC475EB060_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public object AuthPostData { get; private set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CAuthPostDataU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_AuthGetParameters_m6B5BC331948DA520006B0C726E47F6C3B1B41B84_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	{
		// public string AuthGetParameters { get; set; }
		String_t* L_0 = __this->get_U3CAuthGetParametersU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthGetParameters_m65F83CD3189C8D6268E6102D8ED41AF39FEAC13B_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AuthGetParameters { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAuthGetParametersU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_mD7E073BD28C39609097CC717B5F781DAA57AC6C3_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	{
		// public string UserId { get; set; }
		String_t* L_0 = __this->get_U3CUserIdU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_Token_m89FD3AA2832F91FBB17EBDA5454420CD11FFF72A_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	{
		// public string Token { get; set; }
		String_t* L_0 = __this->get_U3CTokenU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatChannel_set_LastMsgId_mA8016BAF3931D9A4592C48F739EDA31385ADA5B9_inline (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int LastMsgId { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CLastMsgIdU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatChannel_set_PublishSubscribers_m3B96679B4F495C5A34F6508E1B782A03025FF0A8_inline (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CPublishSubscribersU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatChannel_set_MaxSubscribers_mBB18A6C1987D39B790FFEC3510EEDDA9A47792EF_inline (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CMaxSubscribersU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public ChatState State { get; private set; }
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_0 = __this->get_U3CAuthValuesU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_AuthValues_m2BB4034D2C3AB2622E67F1E9166E8485957E8BC2_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___value0, const RuntimeMethod* method)
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_0 = ___value0;
		__this->set_U3CAuthValuesU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t PhotonPeer_get_TransportProtocol_m42215E2D4E23E475F9D83429F264AF2D60CE58F5_inline (PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CTransportProtocolU3Ek__BackingField_30();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PhotonPeer_set_TransportProtocol_mE069BC52388CE1326BCE1975071CE4448A474B96_inline (PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CTransportProtocolU3Ek__BackingField_30(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_State_mED11489E9F367AE8FB9B8E33271AF7B22DEB51B6_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ChatState State { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PhotonPeer_set_SerializationProtocolType_m9141765EA0AA102D96F41A345D48111E0B5408B9_inline (PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSerializationProtocolTypeU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_DisconnectedCause_m89F55BFCB40ABDFDCC31601DDF22E6B7AD75D3EE_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ChatDisconnectCause DisconnectedCause { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CDisconnectedCauseU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_AppId_mE95E1ABE8A25C1A6E81B0AD13B664D1252EF3B7E_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AppId { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAppIdU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_AppVersion_m5A5E34A9C7E5988B95BE2B97B4B9E629388CDF60_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AppVersion { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAppVersionU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_NameServerAddress_m0C540F3B95F33ECE2ACFCFC0849CBFEB52A254CE_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string NameServerAddress { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameServerAddressU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ChatClient_get_UseBackgroundWorkerForSending_m508B1C05B2C32EFB26DF87B0733D53CF990E2C96_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public bool UseBackgroundWorkerForSending { get; set; }
		bool L_0 = __this->get_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AuthenticationValues_set_Token_m8C003146B195901AB47692F9BED186E857D7329E_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Token { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTokenU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppId_m4A04DF9B4147EE862D8011D4DABF01676FA9B46E_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public string AppId { get; private set; }
		String_t* L_0 = __this->get_U3CAppIdU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppVersion_m78125B682E98DF9E51EBCA68E56339F1B0DF87F2_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public string AppVersion { get; private set; }
		String_t* L_0 = __this->get_U3CAppVersionU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatChannel_set_IsPrivate_mF639F430B4D39B8E99CD0592F5378BBAF4389261_inline (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsPrivate { get; protected internal set; }
		bool L_0 = ___value0;
		__this->set_U3CIsPrivateU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ChatChannel_get_PublishSubscribers_m1BEE7A689ABCEB4BAB38D314F563CD672699F5CA_inline (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; protected set; }
		bool L_0 = __this->get_U3CPublishSubscribersU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_FrontendAddress_m07693D7264F012BF7FF2331F6773996DDEB50525_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string FrontendAddress { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CFrontendAddressU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ChatClient_get_DisconnectedCause_m57D498FAFF15DE6D6ED299021BAD2EEE35B2EEFC_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public ChatDisconnectCause DisconnectedCause { get; private set; }
		int32_t L_0 = __this->get_U3CDisconnectedCauseU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ChatClient_get_FrontendAddress_mEB713B4B1C0FFD17CAA1C534ED71311219DC5FC9_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public string FrontendAddress { get; private set; }
		String_t* L_0 = __this->get_U3CFrontendAddressU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ChatChannel_get_MaxSubscribers_m201435FB8253E73DCBC6AC3F3BF4E07098B4E78B_inline (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; protected set; }
		int32_t L_0 = __this->get_U3CMaxSubscribersU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ChannelCreationOptions_get_MaxSubscribers_m5ADB67E62EA5959B1B40B3AA29817694D732BD6A_inline (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; set; }
		int32_t L_0 = __this->get_U3CMaxSubscribersU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ChannelCreationOptions_get_PublishSubscribers_m21ADD2DE29B58D86F4442B98515AEC8560F6435B_inline (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; set; }
		bool L_0 = __this->get_U3CPublishSubscribersU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* PhotonPeer_get_Listener_m92E5CDF7E18EA95E6FA89FA130DCE92ADD2413C9_inline (PhotonPeer_tC1B6B04A784DEF8DF9B67C2998A76C2C965ADCE9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CListenerU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_AuthPostData_m8728004EFCDB0D3F41D729AE30C57AAA724A300E_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	{
		// public object AuthPostData { get; private set; }
		RuntimeObject * L_0 = __this->get_U3CAuthPostDataU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mA33B69480FC6CDC8EA0466828EEE8874DE604441_gshared_inline (Enumerator_t3B3D3DA156E79C4F8E1E6F2A633A48BE1D55C00A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentKey_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m3199849B2D9664DC8C8F48BC9962FAE119ED2BCA_gshared_inline (HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__count_9();
		return L_0;
	}
}
