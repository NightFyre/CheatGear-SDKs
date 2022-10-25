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
	 * WidgetBlueprintGeneratedClass BP_RankIcon.BP_RankIcon_C
	 * Size -> 0x003C (FullSize[0x026C] - InheritedSize[0x0230])
	 */
	class UBP_RankIcon_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              RankIcon;                                                // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RankStarInner;                                           // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RankStarOuter;                                           // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URetainerBox*                                        RetainerBox_1;                                           // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    PrestigeTierValue;                                       // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RankTierValue;                                           // 0x025C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ExperienceValue;                                         // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RankLevelValue;                                          // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RankValue;                                               // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		ESlateVisibility Get_RankIcon_Visibility_1();
		struct FSlateBrush Get_RankStarOuter_Brush();
		void UpdateIconTier6();
		void UpdateIconTier5();
		void UpdateIconTier4();
		void UpdateIconTier3();
		void UpdateIconTier2();
		void UpdateIconTier1();
		void UpdateIconTier0();
		void SetFromExperience(int32_t PlayerExperience);
		struct FSlateBrush Get_RankStarInner_Brush_1();
		struct FLinearColor Get_RankStarOuter_ColorAndOpacity_1();
		struct FLinearColor Get_RankStarInner_ColorAndOpacity_1();
		void UpdateIcon();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ExecuteUbergraph_BP_RankIcon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
