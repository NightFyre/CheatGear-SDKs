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
	 * BlueprintGeneratedClass GA_Rest.GA_Rest_C
	 * Size -> 0x0050 (FullSize[0x05A8] - InheritedSize[0x0558])
	 */
	class UGA_Rest_C : public UDCGameplayAbilityBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0558(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bIsRestEnded;                                            // 0x0560(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_02XZ[0x7];                                   // 0x0561(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               InputConfigTags;                                         // 0x0568(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		struct FPrimaryAssetId                                     SpellRechargeDefaultAmount;                              // 0x0588(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FPrimaryAssetId                                     SkillRechargeDefaultAmount;                              // 0x0598(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void EventReceived_1354684B4ED7CD1780504781985CC179(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled_1354684B4ED7CD1780504781985CC179(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnInterrupted_1354684B4ED7CD1780504781985CC179(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut_1354684B4ED7CD1780504781985CC179(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCompleted_1354684B4ED7CD1780504781985CC179(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnVelocityChange_B977E483464C8462F9CCFEAAC9BC697B();
		void Removed_D6EA05E04C84E42B757C98B704B33CD4();
		void OnSync_F91698B446A3FF36AB7603AD2D824105();
		void OnFinished_08B6AFA441544B64E6F9A8854A58A87C(int32_t ActionNumber);
		void OnPerformAction_08B6AFA441544B64E6F9A8854A58A87C(int32_t ActionNumber);
		void InputActionCompleted_3E8A5B98486BF3C623D730942B6F7EB0(const struct FInputActionValue& InputActionValue);
		void InputActionStarted_3E8A5B98486BF3C623D730942B6F7EB0(const struct FInputActionValue& InputActionValue);
		void InputActionTriggered_3E8A5B98486BF3C623D730942B6F7EB0(const struct FInputActionValue& InputActionValue);
		void OnSync_BAECC0EE47841CCD9C7F0E84FCA28F0B();
		void K2_OnEndAbility(bool bWasCancelled);
		void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
		void OnRestEnd();
		void ExecuteUbergraph_GA_Rest(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
