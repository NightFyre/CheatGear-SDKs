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
	 * WidgetBlueprintGeneratedClass BP_ScrollingComponent.BP_ScrollingComponent_C
	 * Size -> 0x0054 (FullSize[0x0284] - InheritedSize[0x0230])
	 */
	class UBP_ScrollingComponent_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      Direction;                                               // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PauseTimeRemaining;                                      // 0x023C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScrollAccumilator;                                       // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bShouldScroll;                                           // 0x0244(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_015G[0x3];                                   // 0x0245(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        ScrollTimerReset;                                        // 0x0248(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bFadingIn;                                               // 0x0250(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bFadingOut;                                              // 0x0251(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LMUG[0x2];                                   // 0x0252(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FadeStartTime;                                           // 0x0254(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeProgress;                                            // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V6UJ[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScrollBox*                                          ScrollBoxRef;                                            // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStruct_ScrollingComponentData                      ScrollingControllerData;                                 // 0x0268(0x001C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash

	public:
		void BeginFadeIn();
		void FadeTransition(bool In);
		bool IsFadingInOrOut();
		void UpdateFading();
		void BeginFadeOut();
		void ShouldUpdateScrolling(float DeltaTime, bool* Update);
		void ResetScrolling();
		void UpdateScrolling(float DeltaTime);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void InitScrollingComponent(class UScrollBox* ScrollBox, const struct FStruct_ScrollingComponentData& ScrollData);
		void ExecuteUbergraph_BP_ScrollingComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
