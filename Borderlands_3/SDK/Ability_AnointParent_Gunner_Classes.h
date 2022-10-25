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
	 * BlueprintGeneratedClass Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C
	 * Size -> 0x004A (FullSize[0x020B] - InheritedSize[0x01C1])
	 */
	class UAbility_AnointParent_Gunner_C : public UAbility_AnointParent_C
	{
	public:
		unsigned char                                              UnknownData_IUF6[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01C8(0x0008) Transient, DuplicateTransient
		class UBPEventHub_Gunner_C*                                GunnerEventHub;                                          // 0x01D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnterIronBearEvents;                                     // 0x01D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JUT8[0x7];                                   // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_AnointParent_Gunner; // 0x01E0(0x0028)
		bool                                                       ExitIronBearEvents;                                      // 0x0208(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AutoBearStarted;                                         // 0x0209(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AutoBearEnded;                                           // 0x020A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnointAutoBearEnded(bool HasValidTarget, class AActor* ChargeTarget);
		void AnointAutoBearStarted();
		void AnointIronBearEnded();
		void AnointIronIronBearStarted(class AOakCharacter_IronBear* IronBear);
		void OnActivated();
		void BindGunnerEvents();
		void ExecuteUbergraph_Ability_AnointParent_Gunner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
