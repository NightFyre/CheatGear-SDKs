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
	 * WidgetBlueprintGeneratedClass BP_RepresentativeAmmoCount.BP_RepresentativeAmmoCount_C
	 * Size -> 0x0098 (FullSize[0x02C8] - InheritedSize[0x0230])
	 */
	class UBP_RepresentativeAmmoCount_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          RepresentativeAmmoCountText;                             // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    Count;                                                   // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    Index;                                                   // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FSlateColor                                         AmmoCounterColorDefault;                                 // 0x0248(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         AmmoCounterColorOut;                                     // 0x0270(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bCurrent;                                                // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_T0I1[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         AmmoCounterColorNotCurrent;                              // 0x02A0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetColorText(const struct FSlateColor& NewColor);
		void UpdateText();
		void UpdateCount(int32_t Count, bool bNewCurrent);
		void SetColor(bool bSinglyLoaded, TArray<int32_t>* Counters);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_BP_RepresentativeAmmoCount(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
