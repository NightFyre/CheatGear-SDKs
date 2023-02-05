#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * BlueprintGeneratedClass GA_Looting.GA_Looting_C
	 * Size -> 0x0028 (FullSize[0x0580] - InheritedSize[0x0558])
	 */
	class UGA_Looting_C : public UDCGameplayAbilityBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0558(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AActor*                                              LootTargetActor;                                         // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MaximumDistance;                                         // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FPrimaryAssetId                                     InteractionAdditionalSphereRadiusConstant;               // 0x0570(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void GetMaximumDistance(double HitResultDistance, double* MaximumDistance);
		void OnDirectionChanged_8612F3F6419CAA8FDE79C7BC68BCA52B();
		void OnDistanceChange_EB1E959F469D1BDF00923DAC43E68B6D();
		void OnDistanceChange_FD7D3E9F4BED7CD5EDE79ABC64F9FA5B();
		void OnMessageReceived_C9EDF2A24F16AB6F39F2F4B20E71AE8C(class UMsgBaseNode* ProxyObject);
		void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
		void K2_OnEndAbility(bool bWasCancelled);
		void OnFMsgRemoveLootTarget(const struct FMsgRemoveLootTarget& Msg);
		void ExecuteUbergraph_GA_Looting(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
