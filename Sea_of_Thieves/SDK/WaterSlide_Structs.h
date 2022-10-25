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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct WaterSlide.WaterSlideParams
	 * Size -> 0x0028
	 */
	struct FWaterSlideParams
	{
	public:
		float                                                      ForwardSpeed;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IncreaseForwardSpeedMultiplier;                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DecreaseForwardSpeedMultiplier;                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VeeringSpeed;                                            // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeftVeeringDistance;                                     // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RightVeeringDistance;                                    // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FPlayerStat                                         StatToFireForRouteChange;                                // 0x0018(0x0004) Edit
		unsigned char                                              UnknownData_TIO9[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     PlayerSplashingVFXOverride;                              // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct WaterSlide.WaterSlideActionStateConstructionInfo
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FWaterSlideActionStateConstructionInfo : public FActorActionStateConstructionInfo
	{
	public:
		class USceneComponent*                                     SceneComponent;                                          // 0x0030(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct WaterSlide.WaterSlideActionStateParams
	 * Size -> 0x0024
	 */
	struct FWaterSlideActionStateParams
	{
	public:
		float                                                      ForcedFieldOfView;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceStash;                                              // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_364C[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLookAtOffsetParams                                 LookAtOffsetParams;                                      // 0x0008(0x001C) Edit
	};

	/**
	 * ScriptStruct WaterSlide.OnPlayerSpeedOnWaterSlideChangedActionStateEvent
	 * Size -> 0x000C
	 */
	struct FOnPlayerSpeedOnWaterSlideChangedActionStateEvent
	{
	public:
		unsigned char                                              UnknownData_ARA8[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WaterSlide.OnPlayerChangedWaterSlideRouteActionStateEvent
	 * Size -> 0x0010
	 */
	struct FOnPlayerChangedWaterSlideRouteActionStateEvent
	{
	public:
		unsigned char                                              UnknownData_66JO[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         WaterSlideChangeForkOneShot;                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct WaterSlide.OnEndWaterSlideActionStateEvent
	 * Size -> 0x0018
	 */
	struct FOnEndWaterSlideActionStateEvent
	{
	public:
		unsigned char                                              UnknownData_TXDA[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         WaterSlideEnd;                                           // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         WaterSlideIsEndOneShot;                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct WaterSlide.OnStartWaterSlideActionStateEvent
	 * Size -> 0x0010
	 */
	struct FOnStartWaterSlideActionStateEvent
	{
	public:
		class UWwiseEvent*                                         WaterSlideStart;                                         // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     WaterSlideVfxOverride;                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct WaterSlide.OnExitedWaterSlideEvent
	 * Size -> 0x0001
	 */
	struct FOnExitedWaterSlideEvent
	{
	public:
		unsigned char                                              UnknownData_398L[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
