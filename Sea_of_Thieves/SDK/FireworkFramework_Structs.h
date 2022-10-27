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
	 * Enum FireworkFramework.EFireworkAmbientLightFadeState
	 */
	enum class EFireworkAmbientLightFadeState : uint8_t
	{
		None     = 0,
		FadeIn   = 1,
		Lifetime = 2,
		FadeOut  = 3,
		MAX      = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct FireworkFramework.FireworkAmbientLightData
	 * Size -> 0x0014
	 */
	struct FFireworkAmbientLightData
	{
	public:
		float                                                      FadeInTimer;                                             // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeOutTimer;                                            // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LifetimeTimer;                                           // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Radius;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AmbientIntensity;                                        // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct FireworkFramework.WeightedFireworkVFXData
	 * Size -> 0x0030
	 */
	struct FWeightedFireworkVFXData
	{
	public:
		class UObject*                                             VFX;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         Sfx;                                                     // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         SecondarySFX;                                            // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Weight;                                                  // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        AmbientLightColour;                                      // 0x001C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z123[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FireworkFramework.FireworkExplosionData
	 * Size -> 0x0040
	 */
	struct FFireworkExplosionData
	{
	public:
		unsigned char                                              UnknownData_VEZO[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             VFX;                                                     // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         Sfx;                                                     // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         SecondarySFX;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E7S4[0x20];                                  // 0x0020(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FireworkFramework.GeneratedFireworkData
	 * Size -> 0x0058
	 */
	struct FGeneratedFireworkData
	{
	public:
		unsigned char                                              UnknownData_OTGK[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFireworkAmbientLightData                           FireworkAmbientLightData;                                // 0x000C(0x0014)
		unsigned char                                              UnknownData_VZ6D[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFireworkExplosionData>                      ExplosionData;                                           // 0x0028(0x0010) ZeroConstructor
		class UWwiseObjectPoolWrapper*                             SfxPool;                                                 // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         LaunchSfx;                                               // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5CQP[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFireworkFeedbackDataAsset*                          FireworkFeedbackData;                                    // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct FireworkFramework.WeightedProjectileMeshAnimationData
	 * Size -> 0x0178
	 */
	struct FWeightedProjectileMeshAnimationData
	{
	public:
		struct FRuntimeVectorCurve                                 AnimationCurve;                                          // 0x0000(0x0170) Edit, DisableEditOnInstance
		float                                                      Weight;                                                  // 0x0170(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CLKG[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
