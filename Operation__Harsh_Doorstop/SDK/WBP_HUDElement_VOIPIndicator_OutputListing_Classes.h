#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * WidgetBlueprintGeneratedClass WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C
	 * Size -> 0x00AA (FullSize[0x02E2] - InheritedSize[0x0238])
	 */
	class UWBP_HUDElement_VOIPIndicator_OutputListing_C : public UHDVoipIndicatorListingWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    VOIPInputUIAnim;                                         // 0x0240(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              PlayerClassIcon;                                         // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PlayerName;                                              // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bTintClassSymbolOnly;                                    // 0x0258(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_Z2VK[0x7];                                   // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         LocalChannelColor;                                       // 0x0260(0x0028) Edit, BlueprintVisible, BlueprintReadOnly
		struct FSlateColor                                         SquadChannelColor;                                       // 0x0288(0x0028) Edit, BlueprintVisible, BlueprintReadOnly
		struct FSlateColor                                         CommandChannelColor;                                     // 0x02B0(0x0028) Edit, BlueprintVisible, BlueprintReadOnly
		class UHDKit*                                              PlayerLoadout;                                           // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bVoiceMsgInfoSet;                                        // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bActive;                                                 // 0x02E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CheckForClassSymbolUpdates();
		void UpdateClassSymbol(class UHDKit* Loadout);
		void GetClassSymbolForLoadout(class UHDKit* Loadout, struct FSlateBrush* ClassSymbolToUse);
		void GetMostValidLoadoutFromPS(class APlayerState* PlayerState, class UHDKit** Loadout);
		void OnVoiceMsgInfoSet(bool bIsDesignTime);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void PlayerLoadoutChanged(class UHDKit* NewLoadout);
		void PreConstruct(bool IsDesignTime);
		void OnInitialized();
		void Activate();
		void Deactivate();
		void InputAnimFinished();
		void ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
