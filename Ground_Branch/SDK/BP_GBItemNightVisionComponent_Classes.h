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
	 * BlueprintGeneratedClass BP_GBItemNightVisionComponent.BP_GBItemNightVisionComponent_C
	 * Size -> 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
	 */
	class UBP_GBItemNightVisionComponent_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                NightVisionEnabledTag;                                   // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bLocalNightVision;                                       // 0x00C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLocalEndViewTargetBound;                                // 0x00C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7B3T[0x6];                                   // 0x00C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              NightVisionPPI[0x28];                                    // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UMaterialInstanceDynamic*                            NightVisionPPIRef;                                       // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEnablePointLights;                                      // 0x00F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U5MG[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLocalNightVisionChanged;                               // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnLoaded_73A73D3347051DFE529A2385E351B7A7(class UObject* Loaded);
		void UpdateLocalNightVision(bool bEnabled);
		void OnEndViewTarget_Event_1(class APlayerController* PlayerController, class AGBCharacter* Character);
		void UnbindOnEndViewTarget();
		void BindOnEndViewTarget();
		void LocalEnsureNightVisionMIDExists();
		void LocalNightVisionDisabled();
		void LocaNightVisionEnabled();
		void UpdatePointLights();
		void SetEnablePointLights(bool bEnablePointLights);
		void ExecuteUbergraph_BP_GBItemNightVisionComponent(int32_t EntryPoint);
		void OnLocalNightVisionChanged__DelegateSignature(bool bLocalNightVision);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
