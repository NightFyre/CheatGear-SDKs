﻿#pragma once

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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C
	 * Size -> 0x0088 (FullSize[0x0450] - InheritedSize[0x03C8])
	 */
	class ABP_PirateGenerator_LineUpUI_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		TArray<class ABP_PirateGenerator_LineUp_C*>                Pirates;                                                 // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		TArray<struct FCarouselPirateDesc>                         CarouselPirateDescs;                                     // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               LockedPirates;                                           // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FRadialCoordinate                                   MinBodyShape;                                            // 0x0408(0x0008) Edit, BlueprintVisible
		struct FRadialCoordinate                                   MaxBodyShape;                                            // 0x0410(0x0008) Edit, BlueprintVisible
		bool                                                       UseIPG;                                                  // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E21P[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimationDataStoreAsset*                            AnimationAsset;                                          // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              DefaultAnimationSet;                                     // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UCarouselPirateGeneratorParamsAsset*                 PirateGeneratorParams;                                   // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NumberOfPiratesCurrentlyGenerating;                      // 0x0438(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R5I7[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             PirateLineUpInitializedDispatcher;                       // 0x0440(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetLockStatus(int32_t IndexToToggle, bool* Locked);
		void ToggleLockStatus(int32_t IndexToToggle);
		void ClearLockedPirates();
		void GetTransitionState(bool* Transitioning);
		void GetAnimationDataFromClass(class UClass* Class, class UAD_FrontendPirate_Default_C** AnimationData);
		void SanitizeAnimationPoses();
		void RandomizePirates();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void LineUpPirateInitalized();
		void ExecuteUbergraph_BP_PirateGenerator_LineUpUI(int32_t EntryPoint);
		void PirateLineUpInitializedDispatcher__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
