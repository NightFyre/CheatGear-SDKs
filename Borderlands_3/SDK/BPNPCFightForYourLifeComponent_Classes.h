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
	 * BlueprintGeneratedClass BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C
	 * Size -> 0x0090 (FullSize[0x13F0] - InheritedSize[0x1360])
	 */
	class UBPNPCFightForYourLifeComponent_C : public UFightForYourLifeComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1360(0x0008) Transient, DuplicateTransient
		struct FGbxAttributeModifierHandle                         RechargeDisabledHandle;                                  // 0x1368(0x0010) Edit, BlueprintVisible, Transient, DisableEditOnInstance
		class UClass*                                              InjuredAction;                                           // 0x1378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOakCharacter*                                       OwnerOakChar;                                            // 0x1380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAttributeModifierHandle                         ReviveTimeDisabledHandle;                                // 0x1388(0x0010) Edit, BlueprintVisible, Transient, DisableEditOnInstance
		class UClass*                                              ReviveAction;                                            // 0x1398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HealthPercentageToRestore;                               // 0x13A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShieldPercentageToRestore;                               // 0x13A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BleedOutTime;                                            // 0x13A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DieOnBleedOut;                                           // 0x13AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QWAW[0x3];                                   // 0x13AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DeathAction;                                             // 0x13B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReviveTime;                                              // 0x13B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NZ1I[0x4];                                   // 0x13BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxAction*                                          RevivingActionInst;                                      // 0x13C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              RevivingAction;                                          // 0x13C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGbxAttributeData*                                   HealthCurrentValue;                                      // 0x13D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGbxAttributeData*                                   ShieldCurrentValue;                                      // 0x13D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGbxAttributeData*                                   HealthMaxValue;                                          // 0x13E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGbxAttributeData*                                   ShieldMaxValue;                                          // 0x13E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Reviving_Stopped_Host(bool IsHealed);
		void Reviving_Started_Host(class AActor* ActorBeingRevived);
		void ReplenishHealthAndShields(float HealthPercent, float ShieldPercent);
		void InjuredStop();
		void InjuredLive();
		void BeingRevived_Stopped_Host();
		void BeingRevived_Started_Host();
		void DownState_Finished_Host();
		void DownState_Stopped_Host();
		void DownState_Started_Host();
		void ReceiveBeginPlay();
		void OnRevivingState_StartHost_Event_1(class AActor* ActorBeingRevived);
		void ExecuteUbergraph_BPNPCFightForYourLifeComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
