#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Enum RareAudio.EEmitterRelationship
	 */
	enum class EEmitterRelationship : uint8_t
	{
		Audio_Remote  = 0,
		Audio_Local   = 1,
		Audio_Default = 2,
		Audio_MAX     = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct RareAudio.WwiseEmitter
	 * Size -> 0x0020
	 */
	struct FWwiseEmitter
	{
	public:
		unsigned char                                              UnknownData_MONY[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RareAudio.EventToComponentMapping
	 * Size -> 0x0020
	 */
	struct FEventToComponentMapping
	{
	public:
		class UWwiseEvent*                                         PlayEvent;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         StopEvent;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UWwiseEmitterComponent*>                      WwiseEmitterComponents;                                  // 0x0010(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference
	};

	/**
	 * ScriptStruct RareAudio.WWiseEmitterCreationRTPCSetting
	 * Size -> 0x000C
	 */
	struct FWWiseEmitterCreationRTPCSetting
	{
	public:
		class FName                                                RTPCName;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RTPCValue;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct RareAudio.WWiseEmitterCreationSwitchSetting
	 * Size -> 0x0010
	 */
	struct FWWiseEmitterCreationSwitchSetting
	{
	public:
		class FName                                                SwitchGroup;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SwitchValue;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct RareAudio.WwiseEmitterCreationParams
	 * Size -> 0x0028
	 */
	struct FWwiseEmitterCreationParams
	{
	public:
		class UWwiseEvent*                                         Event;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FWWiseEmitterCreationRTPCSetting>            RTPCs;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FWWiseEmitterCreationSwitchSetting>          Switches;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct RareAudio.StaticMeshWwiseEmitterData
	 * Size -> 0x0038
	 */
	struct FStaticMeshWwiseEmitterData
	{
	public:
		class UWwiseObjectPoolWrapper*                             Pool;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LocalOriginOffset;                                       // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BNCZ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWwiseEvent*>                                 StartEvents;                                             // 0x0018(0x0010) Edit, ZeroConstructor
		TArray<class UWwiseEvent*>                                 StopEvents;                                              // 0x0028(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct RareAudio.StaticMeshAudioAssociation
	 * Size -> 0x0020
	 */
	struct FStaticMeshAudioAssociation
	{
	public:
		TArray<struct FStaticMeshWwiseEmitterData>                 PlaybackDataArray;                                       // 0x0000(0x0010) Edit, ZeroConstructor
		TArray<class UStaticMesh*>                                 Meshes;                                                  // 0x0010(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct RareAudio.StaticMeshComponentAudioAssociation
	 * Size -> 0x0068
	 */
	struct FStaticMeshComponentAudioAssociation
	{
	public:
		struct FStaticMeshWwiseEmitterData                         PlaybackData;                                            // 0x0000(0x0038) Edit
		struct FVector                                             EmitterPositionRelativeToComponentOrigin;                // 0x0038(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8W3P[0x24];                                  // 0x0044(0x0024) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
