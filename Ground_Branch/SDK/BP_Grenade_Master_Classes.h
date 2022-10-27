#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * BlueprintGeneratedClass BP_Grenade_Master.BP_Grenade_Master_C
	 * Size -> 0x0048 (FullSize[0x04E8] - InheritedSize[0x04A0])
	 */
	class ABP_Grenade_Master_C : public AGBGrenade
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                PinSMC;                                                  // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UStaticMeshComponent*                                SpoonSMC;                                                // 0x04B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UStaticMeshComponent*                                GrenadeSMC;                                              // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      TimeToDetonation;                                        // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M4QK[0x4];                                   // 0x04C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ExplosionClass;                                          // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_GrenadeArc_C*                                    GrenadeArcRef;                                           // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        TimerHandle_AutoRemoveGrenadeArc;                        // 0x04D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        TimerHandle_ShowReinsertPinHint;                         // 0x04E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void UseMainHandPressed();
		void UseMainHandReleased();
		void ReloadPressed();
		void RemoveGrenadeArc();
		void CreateGrenadeArc();
		void ShowReinsertPinHint();
		void OnSpeedChangedEvent();
		void OnBeingUnequipped();
		void OnBeingEquipped();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Grenade_Master(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
