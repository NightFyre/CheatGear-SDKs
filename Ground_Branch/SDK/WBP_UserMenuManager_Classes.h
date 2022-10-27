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
	 * WidgetBlueprintGeneratedClass WBP_UserMenuManager.WBP_UserMenuManager_C
	 * Size -> 0x0098 (FullSize[0x02F8] - InheritedSize[0x0260])
	 */
	class UWBP_UserMenuManager_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FFUserMenuData>                              UserMenus;                                               // 0x0270(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      UserMenuCommands;                                        // 0x0280(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FAnchors                                            LinearMenuAnchors;                                       // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FVector2D                                           LinearMenuPosition;                                      // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAnchors                                            RadialMenuAnchors;                                       // 0x02A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FVector2D                                           RadialMenuPosition;                                      // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMargin                                             RadialMenuOffsets;                                       // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UWBP_RadialMenu_C*                                   RadialMenu;                                              // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                MenuType;                                                // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              LastOpenMenu;                                            // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FVector2D                                           RadialMenuAlignment;                                     // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Open(const class FString& MenuName, const class FName& MenuType);
		void BuildMenu(const struct FFUserMenuData& UserMenu);
		void BuildLinearMenu(const struct FFUserMenuData& UserMenu);
		void OnSelected_Event_1(int32_t Index);
		void BuildRadialMenu(const struct FFUserMenuData& UserMenu);
		void OnSelected_Event(int32_t Index);
		void ForceClosed();
		void ExecuteUbergraph_WBP_UserMenuManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
