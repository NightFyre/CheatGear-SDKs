#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum DonkehFrameworkComms.EDFCommsFormatAccessRule
	 */
	enum class EDFCommsFormatAccessRule : uint8_t
	{
		None      = 0,
		ReadWrite = 1,
		ReadOnly  = 2,
		WriteOnly = 3,
		MAX       = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DonkehFrameworkComms.DFGenericChannelMsg
	 * Size -> 0x0038
	 */
	struct FDFGenericChannelMsg
	{
	public:
		class FString                                              ChatMsgContent;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSenderIsTalking : 1;                                    // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QIBM[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      OptionalMsgData;                                         // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, RepSkip, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APlayerState*                                        SenderPS;                                                // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MsgID;                                                   // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5VSP[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DonkehFrameworkComms.DFCommChannelMapItemEntry
	 * Size -> 0x001C (FullSize[0x0028] - InheritedSize[0x000C])
	 */
	struct FDFCommChannelMapItemEntry : public FFastArraySerializerItem
	{
	public:
		class FName                                                Key;                                                     // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7M22[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDFCommChannel*                                      Value;                                                   // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U0S6[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DonkehFrameworkComms.DFCommChannelMap
	 * Size -> 0x0068 (FullSize[0x0170] - InheritedSize[0x0108])
	 */
	struct FDFCommChannelMap : public FFastArraySerializer
	{
	public:
		TArray<struct FDFCommChannelMapItemEntry>                  ChannelEntries;                                          // 0x0108(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, class UDFCommChannel*>                   ChannelMap;                                              // 0x0118(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M4L3[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DonkehFrameworkComms.DFChannelMsgRecord
	 * Size -> 0x0048
	 */
	struct FDFChannelMsgRecord
	{
	public:
		struct FDFGenericChannelMsg                                Msg;                                                     // 0x0000(0x0038) NativeAccessSpecifierPublic
		class UDFCommsFormatBase*                                  MsgFormat;                                               // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDFCommChannel*                                      MsgChannel;                                              // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFrameworkComms.DFCommStateSetupParams
	 * Size -> 0x0018
	 */
	struct FDFCommStateSetupParams
	{
	public:
		class UDFCommChannel*                                      OwningChannel;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDFCommChannelDefinition*                            OwningChannelDefinition;                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDFPlayerCommsComponent*                             OwningChannelCommsCompOwner;                             // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFrameworkComms.DFCommsFormatEntry
	 * Size -> 0x0020
	 */
	struct FDFCommsFormatEntry
	{
	public:
		class FName                                                FormatName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      FormatClass;                                             // 0x0008(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFrameworkComms.DFCommChannelEntry
	 * Size -> 0x0018
	 */
	struct FDFCommChannelEntry
	{
	public:
		struct FSoftObjectPath                                     ChannelDefinition;                                       // 0x0000(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DonkehFrameworkComms.DFPlayerVOIPTalkingState
	 * Size -> 0x0010
	 */
	struct FDFPlayerVOIPTalkingState
	{
	public:
		unsigned char                                              bWasTalking : 1;                                         // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsTalking : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPendingTalkerReset : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8K0X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDFCommChannel*                                      TalkerChannel;                                           // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
