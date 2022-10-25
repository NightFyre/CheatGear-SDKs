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
	 * WidgetBlueprintGeneratedClass BP_Widget_RadialCountdownTimer.BP_Widget_RadialCountdownTimer_C
	 * Size -> 0x0030 (FullSize[0x0260] - InheritedSize[0x0230])
	 */
	class UBP_Widget_RadialCountdownTimer_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          CountdownText;                                           // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RadialImage;                                             // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      InitialCountdown;                                        // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      TargetTime;                                              // 0x024C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaximumTime;                                             // 0x0250(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_10TR[0x4];                                   // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            FractionDynamicMaterial;                                 // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetMaximumTime(float NewMaximumTime, bool bUpdate);
		void SetTargetWorldTime(float NewTargetTime);
		void UpdateTimer();
		void SetCountdownTimer(float NewCountdown);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_BP_Widget_RadialCountdownTimer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
