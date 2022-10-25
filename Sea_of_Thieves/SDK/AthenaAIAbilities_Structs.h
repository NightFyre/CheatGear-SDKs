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
	 * Enum AthenaAIAbilities.EMeleeAwarenessCollisionHitResult
	 */
	enum class EMeleeAwarenessCollisionHitResult : uint8_t
	{
		None               = 0,
		Static             = 1,
		Character          = 2,
		ToggleableCollider = 3,
		MAX                = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AthenaAIAbilities.MeleeAttackIdWeights
	 * Size -> 0x0010
	 */
	struct FMeleeAttackIdWeights
	{
	public:
		class UClass*                                              MeleeAttackType;                                         // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Weight;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SKYY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAIAbilities.AshenLordFireShroudParams
	 * Size -> 0x0018
	 */
	struct FAshenLordFireShroudParams
	{
	public:
		class UClass*                                              FireShroudZoneClass;                                     // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FVector                                             FireShroudCollisionVolume;                               // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X10S[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAIAbilities.AshenLordFireShroud
	 * Size -> 0x0020
	 */
	struct FAshenLordFireShroud
	{
	public:
		class AStatusEffectOverlapZone*                            FireShroudOverlapZone;                                   // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAshenLordFireShroudParams                          Params;                                                  // 0x0008(0x0018)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
