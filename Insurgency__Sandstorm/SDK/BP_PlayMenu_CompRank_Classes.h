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
	 * WidgetBlueprintGeneratedClass BP_PlayMenu_CompRank.BP_PlayMenu_CompRank_C
	 * Size -> 0x0060 (FullSize[0x0290] - InheritedSize[0x0230])
	 */
	class UBP_PlayMenu_CompRank_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             Border_2;                                                // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             RankBand;                                                // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RankImage;                                               // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            RankImageContainer;                                      // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          RatingDescription;                                       // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnUpdated;                                               // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       HideBG;                                                  // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_HXAF[0x3];                                   // 0x0271(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCompetitiveRating                                  LastRating;                                              // 0x0274(0x001C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void UpdateTierIcon(class UTexture2D** Icon, class UTexture2D** Band);
		void OnCompRatingUpdate(const struct FCompetitiveRating& Rating);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void PlayerRatingUpdated(const struct FCompetitiveRating& Rating);
		void ExecuteUbergraph_BP_PlayMenu_CompRank(int32_t EntryPoint);
		void OnUpdated__DelegateSignature(bool HasRating, bool bInPlacements);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
