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
	 * WidgetBlueprintGeneratedClass BP_TaglineBox.BP_TaglineBox_C
	 * Size -> 0x00AC (FullSize[0x02DC] - InheritedSize[0x0230])
	 */
	class UBP_TaglineBox_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Anim_Reveal;                                             // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_Reset;                                              // 0x0240(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             BorderAccent;                                            // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PlayerClassIcon;                                         // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PlayerNameText;                                          // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RankIcon_C*                                      PlayerRankIcon;                                          // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            RankIconBox;                                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextTaglineDesc;                                         // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextTaglineName;                                         // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLinearColor                                        AccentColor;                                             // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                TaglineName;                                             // 0x0290(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                TaglineDescription;                                      // 0x02A8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PlayerName;                                              // 0x02C0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      RevealDelay;                                             // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void SetUpdateRankIcon(class AINSPlayerState* Player, int32_t Experience);
		void SetTagline(struct FOtherPlayerAwardedTagline* EarnedTagline);
		void Construct();
		void ExecuteUbergraph_BP_TaglineBox(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
