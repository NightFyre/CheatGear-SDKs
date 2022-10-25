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
	 * ScriptStruct BreakableActorFramework.EventBreakableActorWasDestroyed
	 * Size -> 0x0010
	 */
	struct FEventBreakableActorWasDestroyed
	{
	public:
		class AActor*                                              Instigator;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              DirectInstigator;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct BreakableActorFramework.EventBreakableActorWasDamaged
	 * Size -> 0x0058
	 */
	struct FEventBreakableActorWasDamaged
	{
	public:
		struct FImpactDamageEvent                                  ImpactDamageEvent;                                       // 0x0000(0x0058)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
