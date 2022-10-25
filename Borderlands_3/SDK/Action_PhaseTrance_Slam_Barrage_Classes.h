#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * BlueprintGeneratedClass Action_PhaseTrance_Slam_Barrage.Action_PhaseTrance_Slam_Barrage_C
	 * Size -> 0x0070 (FullSize[0x0340] - InheritedSize[0x02D0])
	 */
	class UAction_PhaseTrance_Slam_Barrage_C : public UAction_Phasetrance_Slam_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) Transient, DuplicateTransient
		class UParticleSystemComponent*                            SlamBlastFX;                                             // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableValueHandle                               SlamBlastRadius;                                         // 0x02E0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableValueHandle                               SlamReducedRadius;                                       // 0x02F8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		EGbxActionEndState                                         EndReason;                                               // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2TSC[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASplat*                                              Splat;                                                   // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BarrageBeamName;                                         // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableValueHandle                               BeamDamage;                                              // 0x0328(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void StopSlamLoopFeedback();
		void InnerStopBeam();
		void InnerStartBeam();
		void AN_StopBlastBeam();
		void AN_FireBlastProjectileDown();
		void Cleanup();
		void AN_DoSlam();
		void DoDamageAsync();
		void OnServerBegin(class AActor* Actor);
		void OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void AN_StartBlastBeam();
		void AN_RemoveBeamEmitter();
		void OnBeginBringUpWeapon(class AActor* Actor);
		void AN_BeamRumble();
		void AN_SlamLoopRumble();
		void ExecuteUbergraph_Action_PhaseTrance_Slam_Barrage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
