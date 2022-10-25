#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * DynamicClass BP_Prop_Sprinkler_Big_01.BP_Prop_Sprinkler_Big_01_C
	 * Size -> 0x0068 (FullSize[0x04A0] - InheritedSize[0x0438])
	 */
	class ABP_Prop_Sprinkler_Big_01_C : public APropBreakable
	{
	public:
		class UParticleSystemComponent*                            SprinklerImpact;                                         // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBoxComponent*                                       ExtinguishBox;                                           // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SprinklerOn;                                             // 0x0448(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SprinklerBoxImpact;                                      // 0x0449(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3NJH[0x6];                                   // 0x044A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        TimerHandle_CheckExtinguish;                             // 0x0450(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimerHandle                                        TimerHandle_StopSprinkler;                               // 0x0458(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x0460(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class AActor*                                              K2Node_Event_OtherActor;                                 // 0x0470(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AProjectileThermiteGrenade*                          K2Node_DynamicCast_AsProjectile_Thermite_Grenade;        // 0x0478(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess;                             // 0x0480(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7G8D[0x3];                                   // 0x0481(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_2;                  // 0x0484(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6SJP[0xC];                                   // 0x0494(0x000C) MISSED OFFSET (PADDING)

	public:
		void UserConstructionScript();
		void SprinklerOff();
		void ReceiveActorBeginOverlap(class AActor* bpp__OtherActor__pf);
		void CheckExtinguish();
		void BlueprintOnBreak();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
